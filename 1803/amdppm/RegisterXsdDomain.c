/*
 * XREFs of RegisterXsdDomain @ 0x1C0021A08
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     ProcLibTracePepPerfDomain @ 0x1C0009150 (ProcLibTracePepPerfDomain.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 */

char __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v1; // rsi
  _DWORD *v3; // r12
  char v4; // r15
  char v5; // di
  __int64 v6; // rbx
  unsigned int v7; // ebp
  PVOID PoolWithTag; // rax
  __int64 *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  char v13; // r8
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]

  v1 = (_DWORD *)a1[65];
  v3 = (_DWORD *)a1[147];
  v4 = v1 == v3;
  v5 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011418,
    0LL);
  v6 = qword_1C0011438;
  if ( (__int64 *)qword_1C0011438 == &qword_1C0011438 )
  {
LABEL_4:
    v7 = 56;
    if ( v1 == v3 )
      v7 = 72;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
    v6 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_26;
    memset(PoolWithTag, 0, v7);
    *(_QWORD *)(v6 + 24) = v6 + 16;
    *(_QWORD *)(v6 + 16) = v6 + 16;
    v9 = (__int64 *)qword_1C0011440;
    if ( *(__int64 **)qword_1C0011440 != &qword_1C0011438 )
      __fastfail(3u);
    *(_QWORD *)v6 = &qword_1C0011438;
    *(_QWORD *)(v6 + 8) = v9;
    *v9 = v6;
    qword_1C0011440 = v6;
    *(_DWORD *)(v6 + 36) = v1[3];
    *(_DWORD *)(v6 + 40) = v1[4];
    *(_DWORD *)(v6 + 44) = v1[5];
    *(_BYTE *)(v6 + 48) = v4;
  }
  else
  {
    while ( *(_DWORD *)(v6 + 36) != v1[3] )
    {
      v6 = *(_QWORD *)v6;
      if ( (__int64 *)v6 == &qword_1C0011438 )
        goto LABEL_4;
    }
    if ( v4 != *(_BYTE *)(v6 + 48) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x13u,
        (__int64)&WPP_30065b99cb4a32253e6076e5eda4c6d3_Traceguids);
      goto LABEL_26;
    }
  }
  a1[66] = v6;
  v10 = *(_QWORD **)(v6 + 24);
  v11 = a1 + 67;
  if ( *v10 != v6 + 16 )
    __fastfail(3u);
  *v11 = v6 + 16;
  a1[68] = v10;
  *v10 = v11;
  *(_QWORD *)(v6 + 24) = v11;
  if ( ++*(_DWORD *)(v6 + 32) == *(_DWORD *)(v6 + 44) )
  {
    if ( *(_BYTE *)(v6 + 48) )
    {
      v12 = a1[136];
      v15 = 0LL;
      v16 = 0LL;
      LODWORD(v15) = *(_DWORD *)(v6 + 36);
      if ( (int)PoFxProcessorNotification(v12, 42LL, &v15) >= 0 )
      {
        v13 = BYTE4(v15);
        if ( BYTE4(v15) )
        {
          if ( BYTE4(v15) == 1 )
          {
            *(_DWORD *)(v6 + 40) = 253;
          }
          else
          {
            if ( BYTE4(v15) != 2 )
            {
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                2u,
                0x21u,
                (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
                BYTE4(v15));
              goto LABEL_26;
            }
            *(_DWORD *)(v6 + 40) = 254;
          }
        }
        else
        {
          *(_DWORD *)(v6 + 40) = 252;
        }
        *(_BYTE *)(v6 + 57) = BYTE5(v15);
        *(_WORD *)(v6 + 58) = HIWORD(v15);
        *(_QWORD *)(v6 + 60) = v16;
        *(_BYTE *)(v6 + 56) = v13;
        ProcLibTracePepPerfDomain((unsigned __int8 *)v6, 0);
      }
    }
    v5 = 1;
  }
LABEL_26:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011418);
  return v5;
}
