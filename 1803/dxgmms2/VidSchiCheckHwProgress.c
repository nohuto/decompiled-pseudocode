/*
 * XREFs of VidSchiCheckHwProgress @ 0x1C0077190
 * Callers:
 *     VidSchWaitForEvents @ 0x1C0005B40 (VidSchWaitForEvents.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0076E40 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000B270 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiCheckTimeoutForced @ 0x1C000B440 (VidSchiCheckTimeoutForced.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C000E50C (VidSchiNeedToForcePreemptNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     VidSchiReportHwHang @ 0x1C0034304 (VidSchiReportHwHang.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0055818 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0077330 (VidSchiCheckNodeTimeout.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00BB8C0 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C00BB908 (VidSchResetGPUTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00BC094 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00BC1C0 (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  LARGE_INTEGER v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 v13; // rbx
  int v14; // esi
  int v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 6396) == 0;
  *a2 = 0;
  if ( !v2 )
    return 1LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( is_mul_ok(v5.QuadPart, 0x989680uLL) )
    v6 = (unsigned __int64)v5.QuadPart
       * (unsigned __int128)0x989680uLL
       / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v6 = 10000000 * (v5.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
       + 10000000 * (v5.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  if ( *(_BYTE *)(a1 + 2984) && v6 >= *(_QWORD *)(a1 + 2968) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 2928))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
  v7 = 0LL;
  for ( *a2 = 0; (unsigned int)v7 < *(_DWORD *)(a1 + 64); v7 = (unsigned int)(v7 + 1) )
  {
    v8 = *(_QWORD *)(a1 + 8 * v7 + 440);
    v9 = *(_QWORD *)(v8 + 128);
    if ( v9 && v9 <= v6 )
    {
      if ( VidSchiNeedToForcePreemptNode(*(_QWORD *)(a1 + 8 * v7 + 440)) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 972));
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 2832));
        VidSchiSubmitPreemptionCommand(v8);
      }
      else
      {
        *a2 = 1;
      }
      *(_QWORD *)(v8 + 128) = 0LL;
    }
  }
  v10 = 1;
  if ( VidSchiCheckTimeoutForced(a1) )
  {
    VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
  }
  else if ( !VidSchIsTDRPending(a1) )
  {
    v11 = 0LL;
    if ( *(_DWORD *)(a1 + 64) )
    {
      while ( !(unsigned int)VidSchiCheckNodeTimeout(*(_QWORD *)(a1 + 8 * v11 + 440), &v16) )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 64) )
          goto LABEL_13;
      }
      v13 = *(_QWORD *)(a1 + 8 * v11 + 440);
      v14 = 0;
      if ( *(_DWORD *)(v13 + 2000) )
      {
        LOBYTE(v14) = *(_BYTE *)(v13 + 1993) != 0;
        v14 += 10;
      }
      else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v13, &v18)
             || !(unsigned __int8)VidSchiResetEngines(v13, v18) )
      {
        v14 = 9;
      }
      *(_BYTE *)(v13 + 1993) = 0;
      *(_DWORD *)(v13 + 1996) = 0;
      *(_BYTE *)(v13 + 1994) = 0;
      *(_DWORD *)(v13 + 2000) = 0;
      if ( v14 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v16, v14, v13) )
        VidSchResetGPUTimeout(a1);
    }
LABEL_13:
    if ( (unsigned int)VidSchiCheckFlipQueueTimeout(a1, &v16, &v15)
      && !(unsigned int)VidSchiReportHwHang(a1, v16, 3, (__int64)&v15) )
    {
      VidSchResetFlipQueueTimeout(a1);
    }
  }
  if ( VidSchIsTDRPending(a1) )
    return 0;
  return v10;
}
