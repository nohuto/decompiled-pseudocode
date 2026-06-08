/*
 * XREFs of RegisterKernelPepPerf @ 0x1C002D130
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C0001CAC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0002918 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     PepNotifyPerfConstraints @ 0x1C000D88C (PepNotifyPerfConstraints.c)
 *     InitCommonPerfStateContext @ 0x1C001A008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C001AC04 (GetPerfDomain.c)
 *     PepTranslateLimitReason @ 0x1C0030154 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  _DWORD *v2; // rsi
  _QWORD *v3; // rbx
  unsigned int *v4; // r14
  unsigned int v5; // edi
  int v6; // r12d
  int v7; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r15
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  _QWORD *v15; // rax
  __int64 v16; // r15
  int v17; // eax
  int v18; // ecx
  int i; // eax
  __int64 v20; // rdx
  __int64 v21; // r10
  unsigned int v22; // eax
  _QWORD *v23; // r10
  __int64 v24; // r10
  _QWORD *v25; // r11
  _QWORD *v26; // r11
  unsigned __int16 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  void *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  void *v33; // rax
  __int64 v34; // r10
  __int64 v36; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  __int64 v38[5]; // [rsp+40h] [rbp-28h] BYREF
  int v39; // [rsp+B0h] [rbp+48h]
  int PerfDomain; // [rsp+B8h] [rbp+50h]
  unsigned int v41; // [rsp+B8h] [rbp+50h]
  int v42; // [rsp+C0h] [rbp+58h] BYREF
  int v43; // [rsp+C8h] [rbp+60h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0015D98,
    0LL);
  v2 = *(_DWORD **)(a1 + 1160);
  v3 = 0LL;
  v4 = 0LL;
  v43 = v2[4];
  if ( !v43 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x29u,
      (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
    v5 = -1073741823;
    goto LABEL_40;
  }
  v39 = v2[9];
  v6 = (v39 != -1) + 1;
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v38, &v42);
  v7 = PerfDomain;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(40 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  memset(PoolWithTag, 0, (unsigned int)(40 * PerfDomain));
  ResetEnumerationContext(v38);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v38, &v36) )
  {
    v9 = v4 + 7;
    while ( 1 )
    {
      v10 = v36;
      *(_QWORD *)(v9 - 3) = *(_QWORD *)(v36 + 1088);
      *(_QWORD *)(v9 - 5) = *(_QWORD *)(v10 + 1160);
      v11 = PepNotifyPerfConstraints(a1, v9, v9 - 1);
      v5 = v11;
      if ( v11 < 0 )
        break;
      v12 = *v9;
      v13 = v2[1];
      if ( *v9 > v13 || v12 < v2[3] )
      {
        v5 = -1073741811;
        goto LABEL_40;
      }
      v9[1] = 100 * v12 / v13;
      v9 += 10;
      if ( (unsigned int)EnumerateNextDevice((__int64)v38, &v36) )
      {
        v7 = PerfDomain;
        goto LABEL_12;
      }
    }
    v27 = 42;
    goto LABEL_28;
  }
LABEL_12:
  v14 = (32 * v7 + 439) & 0xFFFFFFF8;
  v41 = (v14 + 24 * v6 + 7) & 0xFFFFFFF8;
  Size = v41 + 8 * v7 * v6;
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v3 = v15;
  if ( !v15 )
  {
LABEL_4:
    v5 = -1073741670;
    goto LABEL_40;
  }
  memset(v15, 0, Size);
  if ( *(_BYTE *)(a1 + 1105) )
    v3[48] = PepParkPreference;
  if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
  {
    v3[49] = PepParkMask;
    v3[50] = PepPerfCheckComplete;
    v3[8] = *(_QWORD *)(a1 + 1088);
  }
  *((_WORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 3) = v7;
  *((_DWORD *)v3 + 8) = v6;
  v16 = (__int64)(v3 + 54);
  *(_DWORD *)v3 = 49;
  v3[52] = v3 + 54;
  v3[53] = (char *)v3 + v41;
  *((_BYTE *)v3 + 40) = 0;
  v3[51] = (char *)v3 + v14;
  *((_WORD *)v3 + 2) = v42;
  v3[42] = PepPerfControlHandler;
  v3[41] = PepPerfSelectionHandler;
  v3[32] = PepSetTimeWindow;
  *((_DWORD *)v3 + 4) = v43;
  *((_DWORD *)v3 + 5) = v2[5];
  v17 = v2[6];
  *((_DWORD *)v3 + 6) = v17;
  v18 = v2[7];
  if ( !v17 )
    v17 = 1;
  *((_DWORD *)v3 + 6) = v17;
  if ( !v18 )
    v18 = 1;
  *((_DWORD *)v3 + 7) = v18;
  v3[6] = (unsigned int)v2[3];
  v3[7] = (unsigned int)v2[1];
  ResetEnumerationContext(v38);
  for ( i = EnumerateNextDevice((__int64)v38, &v36); !i; i = EnumerateNextDevice((__int64)v38, &v36) )
  {
    v22 = PepTranslateLimitReason(*(unsigned int *)(v21 + 24), v20);
    InitCommonPerfStateContext(v36, v23, v16, *((_DWORD *)v23 + 8), v22);
    *v25 = v24;
    v26 = v25 + 1;
    if ( v39 != -1 )
      *v26 = v24;
    v16 += 32LL;
  }
  v28 = (unsigned int)v2[8];
  v29 = v3[51];
  *(_QWORD *)(v29 + 8) = 100LL;
  *(_BYTE *)(v29 + 16) = v2[2 * v28 + 10] & 1;
  v30 = PepDifferentialFrequencyRead;
  LOBYTE(v28) = (v2[2 * v28 + 10] & 6) == 2;
  *(_BYTE *)(v29 + 17) = v28;
  if ( !(_BYTE)v28 )
    v30 = PepInstantaneousFrequencyRead;
  *(_QWORD *)v29 = v30;
  *((_DWORD *)v3 + 8) = 1;
  if ( v39 != -1 )
  {
    v31 = (unsigned int)v2[9];
    v32 = v3[51];
    *(_DWORD *)(v32 + 32) = 100;
    *(_DWORD *)(v32 + 36) = 1;
    *(_BYTE *)(v32 + 40) = v2[2 * v31 + 10] & 1;
    v33 = PepDifferentialPerfRead;
    LOBYTE(v31) = (v2[2 * v31 + 10] & 6) == 2;
    *(_BYTE *)(v32 + 41) = v31;
    if ( !(_BYTE)v31 )
      v33 = PepInstantaneousPerfRead;
    *(_QWORD *)(v32 + 24) = v33;
    ++*((_DWORD *)v3 + 8);
  }
  v11 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0015F98)(v3);
  v5 = v11;
  if ( v11 < 0 )
  {
    v27 = 43;
LABEL_28:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v27,
      (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids,
      v11);
    goto LABEL_40;
  }
  ResetEnumerationContext(v38);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v38, &v36) )
  {
    v4 = 0LL;
    do
      *(_QWORD *)(v36 + 1168) = v34;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v38, &v36) );
  }
LABEL_40:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015D98);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return v5;
}
