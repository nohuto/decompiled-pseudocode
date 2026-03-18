/*
 * XREFs of PopHiberCheckResume @ 0x1404335B0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140188D80 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlRestoreEnlightenment @ 0x1401E9C28 (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401EC850 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1401EE5E8 (HvlNotifyAcpiReenabled.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 */

char __fastcall PopHiberCheckResume(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbp
  char v5; // bl
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int64 v18; // [rsp+20h] [rbp-158h] BYREF
  int v19; // [rsp+28h] [rbp-150h]
  __int64 v20; // [rsp+40h] [rbp-138h]
  __int64 v21; // [rsp+48h] [rbp-130h]
  __int128 v22; // [rsp+50h] [rbp-128h]
  __int128 v23; // [rsp+60h] [rbp-118h]

  v4 = BugCheckParameter4;
  v5 = 0;
  v6 = *(_QWORD *)(BugCheckParameter4 + 200);
  if ( *(_DWORD *)v6 )
  {
    PopCheckpointSystemSleep(25LL, a2, a3, a4);
    ((void (__fastcall *)(_QWORD))off_140353578[0])(0LL);
    PoResumeFromHibernate = 1;
    v7 = __rdtsc();
    ((void (__fastcall *)(__int64))off_140353400[0])(5LL);
    ((void (__fastcall *)(__int64))off_140353578[0])(1LL);
    ((void (__fastcall *)(__int64))off_140353500[0])(5LL);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment();
      off_1403534E8[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v6 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume(*(_QWORD *)(v4 + 232), *(_QWORD *)(v4 + 240));
    if ( *(_QWORD *)(v6 + 928) )
    {
      v9 = *(_QWORD *)(v4 + 272);
      v10 = *(_OWORD *)(v6 + 928);
      v18 = 0LL;
      v11 = *(_OWORD *)(v6 + 944);
      v12 = *(_QWORD *)(v9 + 8);
      v19 = 80;
      v20 = 0LL;
      v21 = 0x4000LL;
      v22 = v10;
      v23 = v11;
      MmMapMemoryDumpMdlEx(v12, v8, (__int64)&v18, 1);
      memset(*(void **)(*(_QWORD *)(v4 + 272) + 8LL), 0, 0x4000uLL);
    }
    v13 = &qword_140365C58;
    v14 = 3LL;
    qword_14035E698 = *(_QWORD *)(v6 + 904);
    v15 = (_OWORD *)(v6 + 136);
    do
    {
      *(_OWORD *)v13 = *v15;
      *((_OWORD *)v13 + 1) = v15[1];
      *((_OWORD *)v13 + 2) = v15[2];
      *((_OWORD *)v13 + 3) = v15[3];
      *((_OWORD *)v13 + 4) = v15[4];
      *((_OWORD *)v13 + 5) = v15[5];
      *((_OWORD *)v13 + 6) = v15[6];
      v13 += 16;
      v16 = v15[7];
      v15 += 8;
      *((_OWORD *)v13 - 1) = v16;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)v13 = *v15;
    *((_OWORD *)v13 + 1) = v15[1];
    *((_OWORD *)v13 + 2) = v15[2];
    *((_OWORD *)v13 + 3) = v15[3];
    *((_OWORD *)v13 + 4) = v15[4];
    *((_OWORD *)v13 + 5) = v15[5];
    *((_OWORD *)v13 + 6) = v15[6];
    v13[14] = *((_QWORD *)v15 + 14);
    *(_DWORD *)(v4 + 224) = *(_DWORD *)(v6 + 656);
    *(_BYTE *)(v4 + 4) = 0;
    qword_140365D28 = v7;
    qword_140365CB8 = v7 - qword_140365CC0;
    if ( (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v4 + 20) = 0;
    return 1;
  }
  return v5;
}
