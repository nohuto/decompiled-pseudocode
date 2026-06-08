/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C002F054
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C0003930 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000394C (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000B6FC (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C000B804 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dds @ 0x1C000B930 (WPP_RECORDER_SF_dds.c)
 *     WPP_RECORDER_SF_ddxx @ 0x1C000BE28 (WPP_RECORDER_SF_ddxx.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     GetPerfDomain @ 0x1C0021CB0 (GetPerfDomain.c)
 *     ValidatePssSymmetry @ 0x1C002F4E0 (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002F5C4 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002F690 (ValidatePepPerformanceSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // r10
  _DWORD *v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // r8
  _DWORD *v14; // r9
  __int64 v15; // rax
  int v16; // eax
  __int64 *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rsi
  int v21; // r15d
  int v22; // edi
  char v23; // r14
  __int64 v24; // rax
  __int64 v25; // rbx
  _BYTE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  bool v29; // sf
  __int64 v30; // rsi
  const char *v32; // [rsp+20h] [rbp-49h]
  __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  __int64 v34; // [rsp+58h] [rbp-11h]
  __int64 v35[12]; // [rsp+60h] [rbp-9h] BYREF
  int v37; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v38; // [rsp+E8h] [rbp+7Fh]

  v1 = a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011418,
    0LL);
  v2 = 0;
  if ( (unsigned int)GetPerfDomain(v1, (__int64)v35, &v37) != 1 )
  {
    v38 = 0LL;
    v3 = 0LL;
    ResetEnumerationContext(v35);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v35, &v33) )
    {
      while ( 1 )
      {
        v6 = v33;
        if ( v33 != v1 )
          break;
LABEL_41:
        if ( (unsigned int)EnumerateNextDevice((__int64)v35, &v33) )
          goto LABEL_42;
      }
      v7 = *(_QWORD *)(v1 + 264);
      if ( (v7 & 0x10FF300000LL) != (*(_QWORD *)(v33 + 264) & 0x10FF300000LL) )
      {
        WPP_RECORDER_SF_ddxx((__int64)WPP_GLOBAL_Control->DeviceExtension, v7 & 0x10FF300000LL, v4, v5, (int)v32);
        v7 = *(_QWORD *)(v1 + 264);
        v3 |= (v7 ^ *(_QWORD *)(v6 + 264)) & 0x10FF300000LL;
        v38 = v3;
      }
      if ( (v7 & 0x70000000) != 0 )
      {
        v32 = "_PCT";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 392, *(unsigned int *)(v6 + 52), v1 + 392) < 0 )
        {
          v3 |= 0x70000000uLL;
          v38 = v3;
        }
        if ( (*(_DWORD *)(v1 + 264) & 0x40000000) != 0
          && (int)ValidatePssSymmetry(
                    *(_DWORD *)(v1 + 52),
                    *(_QWORD *)(v1 + 424),
                    *(_DWORD *)(v6 + 52),
                    *(_QWORD *)(v6 + 424),
                    (__int64)"XPSS") < 0 )
        {
          v3 |= 0x40000000uLL;
          v38 = v3;
        }
        if ( (*(_DWORD *)(v1 + 264) & 0x30000000) != 0
          && (int)ValidatePssSymmetry(
                    *(_DWORD *)(v1 + 52),
                    *(_QWORD *)(v1 + 416),
                    *(_DWORD *)(v6 + 52),
                    *(_QWORD *)(v6 + 416),
                    (__int64)"_PSS") < 0 )
        {
          v3 |= 0x30000000uLL;
          v38 = v3;
        }
      }
      if ( (*(_DWORD *)(v1 + 264) & 0x3300000) != 0 )
      {
        v32 = "_PTC";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 448, *(unsigned int *)(v6 + 52), v1 + 448) < 0 )
        {
          v3 |= 0x3300000uLL;
          v38 = v3;
        }
        v10 = *(unsigned int **)(v1 + 472);
        v11 = *(_DWORD **)(v6 + 472);
        if ( !v10 || !v11 )
          goto LABEL_28;
        v12 = *v10;
        if ( *v10 != *v11 )
        {
          WPP_RECORDER_SF_dddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v11, v8, v9, (int)"_PTC");
LABEL_28:
          v3 |= 0x3300000uLL;
          v38 = v3;
          goto LABEL_29;
        }
        v13 = 0LL;
        if ( v12 )
        {
          v14 = v11 + 1;
          while ( *(_DWORD *)((char *)v14 + (char *)v10 - (char *)v11) == *v14 )
          {
            v13 = (unsigned int)(v13 + 1);
            v14 += 5;
            if ( (unsigned int)v13 >= v12 )
              goto LABEL_29;
          }
          WPP_RECORDER_SF_ddddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (__int64)v11,
            v13,
            (__int64)v14,
            (int)"_PTC");
          goto LABEL_28;
        }
      }
LABEL_29:
      v15 = *(_QWORD *)(v1 + 264);
      if ( (v15 & 0x8000000) != 0 )
      {
        v16 = *(_DWORD *)(v6 + 52);
        v17 = (__int64 *)&off_1C000D1D8;
        v18 = *(_QWORD *)(v1 + 560);
        v19 = 15LL;
        v20 = *(_QWORD *)(v6 + 560);
        v21 = 0;
        v22 = *(_DWORD *)(v1 + 52);
        v23 = v16;
        v34 = v18;
        v37 = v16;
        do
        {
          v24 = *((unsigned int *)v17 - 2);
          v25 = 4LL;
          v26 = (_BYTE *)(v24 + v18);
          if ( *v26 != 10 )
            v25 = 12LL;
          if ( RtlCompareMemory(v26, (const void *)(v24 + v20), (unsigned int)v25) != v25 )
          {
            WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v27, v28, 0x42u, (int)v32, v22, v23, *v17);
            v21 = -1073741823;
          }
          v18 = v34;
          v17 += 3;
          --v19;
        }
        while ( v19 );
        v1 = a1;
        v3 = v38;
        v29 = v21 < 0;
        v6 = v33;
        v15 = *(_QWORD *)(a1 + 264);
        if ( v29 )
        {
          v3 = v38 | 0x8000000;
          v38 |= 0x8000000uLL;
        }
      }
      if ( (v15 & 0x1000000000LL) != 0
        && (int)ValidatePepPerformanceSymmetry(
                  *(unsigned int *)(v1 + 52),
                  *(_QWORD *)(v1 + 1160),
                  *(unsigned int *)(v6 + 52),
                  *(_QWORD *)(v6 + 1160)) < 0 )
      {
        v3 |= 0x1000000000uLL;
        v38 = v3;
      }
      goto LABEL_41;
    }
LABEL_42:
    ResetEnumerationContext(v35);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v35, &v33) )
    {
      v30 = ~v3;
      do
        *(_QWORD *)(v33 + 264) &= v30;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v35, &v33) );
    }
    v2 = (*(_QWORD *)(v1 + 264) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011418);
  return v2;
}
