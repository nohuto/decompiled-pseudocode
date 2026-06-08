/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C0028640
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 * Callees:
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0009E4C (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0009F54 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dds @ 0x1C000A080 (WPP_RECORDER_SF_dds.c)
 *     WPP_RECORDER_SF_ddxx @ 0x1C000A568 (WPP_RECORDER_SF_ddxx.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     GetPerfDomain @ 0x1C0021708 (GetPerfDomain.c)
 *     ValidatePssSymmetry @ 0x1C0028C00 (ValidatePssSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C0028CE4 (ValidatePctPtcSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  __int64 v1; // r14
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int *v10; // r10
  _DWORD *v11; // rdx
  unsigned int v12; // ecx
  _DWORD *v13; // r9
  int v14; // eax
  const char **v15; // r12
  __int64 v16; // rcx
  int v17; // r13d
  __int64 v18; // rsi
  __int64 v19; // r15
  int v20; // edi
  char v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  const char **v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 v30; // r13
  int v31; // r15d
  int v32; // eax
  char v33; // r14
  char v34; // di
  __int64 v35; // rsi
  const char *v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  __int64 v44[4]; // [rsp+88h] [rbp-80h] BYREF
  int v45; // [rsp+A8h] [rbp-60h]
  const char *v46; // [rsp+B0h] [rbp-58h] BYREF
  int v47; // [rsp+B8h] [rbp-50h]
  const char *v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C8h] [rbp-40h]
  const char *v50; // [rsp+D0h] [rbp-38h]
  int v51; // [rsp+D8h] [rbp-30h]
  const char *v52; // [rsp+E0h] [rbp-28h]
  int v53; // [rsp+E8h] [rbp-20h]
  const char *v54; // [rsp+F0h] [rbp-18h]
  int v55; // [rsp+F8h] [rbp-10h]
  const char *v56; // [rsp+100h] [rbp-8h]
  int v57; // [rsp+108h] [rbp+0h]
  const char *v58; // [rsp+110h] [rbp+8h]

  v1 = a1;
  v43 = a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  v2 = 0;
  if ( (unsigned int)GetPerfDomain((_QWORD *)v1, (__int64)v44, &v38) != 1 )
  {
    v39 = 0LL;
    v3 = 0LL;
    ResetEnumerationContext(v44);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v44, &v41) )
    {
      while ( 1 )
      {
        v6 = v41;
        if ( v41 != v1 )
          break;
LABEL_45:
        if ( (unsigned int)EnumerateNextDevice((__int64)v44, &v41) )
          goto LABEL_46;
      }
      v7 = *(_QWORD *)(v1 + 264);
      v8 = *(_QWORD *)(v41 + 264) & 0x10FF300000LL;
      if ( (v7 & 0x10FF300000LL) != v8 )
      {
        WPP_RECORDER_SF_ddxx((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v4, v5, (int)v37);
        v7 = *(_QWORD *)(v1 + 264);
        v3 |= (*(_QWORD *)(v6 + 264) ^ v7) & 0x10FF300000LL;
        v39 = v3;
      }
      if ( (v7 & 0x70000000) != 0 )
      {
        v37 = "_PCT";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 392, *(unsigned int *)(v6 + 52), v1 + 392) < 0 )
        {
          v3 |= 0x70000000uLL;
          v39 = v3;
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
          v39 = v3;
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
          v39 = v3;
        }
      }
      if ( (*(_DWORD *)(v1 + 264) & 0x3300000) != 0 )
      {
        v37 = "_PTC";
        if ( (int)ValidatePctPtcSymmetry(*(unsigned int *)(v1 + 52), v1 + 448, *(unsigned int *)(v6 + 52), v1 + 448) < 0 )
        {
          v3 |= 0x3300000uLL;
          v39 = v3;
        }
        v10 = *(unsigned int **)(v1 + 472);
        v11 = *(_DWORD **)(v6 + 472);
        if ( !v10 || !v11 )
          goto LABEL_28;
        v12 = *v10;
        if ( *v10 != *v11 )
        {
          WPP_RECORDER_SF_dddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v11, v4, v9, (int)"_PTC");
LABEL_28:
          v3 |= 0x3300000uLL;
          v39 = v3;
          goto LABEL_29;
        }
        v4 = 0LL;
        if ( v12 )
        {
          v13 = v11 + 1;
          while ( *(_DWORD *)((char *)v13 + (char *)v10 - (char *)v11) == *v13 )
          {
            v4 = (unsigned int)(v4 + 1);
            v13 += 5;
            if ( (unsigned int)v4 >= v12 )
              goto LABEL_29;
          }
          WPP_RECORDER_SF_ddddd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            (__int64)v11,
            v4,
            (__int64)v13,
            (int)"_PTC");
          goto LABEL_28;
        }
      }
LABEL_29:
      if ( (*(_DWORD *)(v1 + 264) & 0x8000000) != 0 )
      {
        v14 = *(_DWORD *)(v6 + 52);
        v15 = (const char **)&off_1C000D1D8;
        v16 = *(_QWORD *)(v1 + 560);
        v17 = 0;
        v18 = *(_QWORD *)(v6 + 560);
        v19 = 15LL;
        LODWORD(v40) = v14;
        v20 = *(_DWORD *)(v1 + 52);
        v21 = v14;
        v42 = v16;
        do
        {
          v22 = *((unsigned int *)v15 - 2);
          v23 = 4LL;
          v24 = (_BYTE *)(v22 + v16);
          if ( *v24 != 10 )
            v23 = 12LL;
          if ( RtlCompareMemory(v24, (const void *)(v22 + v18), (unsigned int)v23) != v23 )
          {
            WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v25, v4, 0x42u, (int)v37, v20, v21, *v15);
            v17 = -1073741823;
          }
          v16 = v42;
          v15 += 3;
          --v19;
        }
        while ( v19 );
        v3 = v39;
        v1 = v43;
        v6 = v41;
        if ( v17 < 0 )
        {
          v3 = v39 | 0x8000000;
          v39 |= 0x8000000uLL;
        }
      }
      if ( (*(_QWORD *)(v1 + 264) & 0x1000000000LL) != 0 )
      {
        v26 = *(_DWORD *)(v6 + 52);
        v27 = &v46;
        v28 = *(_QWORD *)(v1 + 1160);
        v29 = 7LL;
        v30 = *(_QWORD *)(v6 + 1160);
        v31 = 0;
        LODWORD(v38) = v26;
        v32 = *(_DWORD *)(v1 + 52);
        v33 = v38;
        LODWORD(v40) = v32;
        v46 = "HighestPerformance";
        v48 = "NominalPerformance";
        v50 = "LowestNonlinearPerformance";
        v51 = 12;
        v52 = "LowestPerformance";
        v54 = "NominalFrequency";
        v56 = "FrequencyCounterIndex";
        v45 = 0;
        v34 = v32;
        v58 = "PerformanceCounterIndex";
        v42 = v28;
        v47 = 4;
        v49 = 8;
        v53 = 16;
        v55 = 32;
        v57 = 36;
        do
        {
          if ( *(_DWORD *)(*((unsigned int *)v27 - 2) + v28) != *(_DWORD *)(*((unsigned int *)v27 - 2) + v30) )
          {
            v31 = -1073741823;
            WPP_RECORDER_SF_dds((__int64)WPP_GLOBAL_Control->DeviceExtension, v28, v4, 0x43u, (int)v37, v34, v33, *v27);
            v28 = v42;
          }
          v27 += 2;
          --v29;
        }
        while ( v29 );
        v1 = v43;
        if ( v31 < 0 )
        {
          v3 |= 0x1000000000uLL;
          v39 = v3;
        }
      }
      goto LABEL_45;
    }
LABEL_46:
    ResetEnumerationContext(v44);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v44, &v41) )
    {
      v35 = ~v3;
      do
        *(_QWORD *)(v41 + 264) &= v35;
      while ( !(unsigned int)EnumerateNextDevice((__int64)v44, &v41) );
    }
    v2 = (*(_QWORD *)(v1 + 264) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  return v2;
}
