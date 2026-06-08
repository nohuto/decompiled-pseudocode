/*
 * XREFs of RegisterKernelPepPerf @ 0x1C00309E0
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     PepNotifyPerfConstraints @ 0x1C000DDAC (PepNotifyPerfConstraints.c)
 *     InitCommonPerfStateContext @ 0x1C001D008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C001D43C (GetPerfDomain.c)
 *     PepTranslateLimitReason @ 0x1C003373C (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  char *v4; // r14
  unsigned int v5; // edi
  int v6; // r13d
  char *PoolWithTag; // rax
  char *v8; // r12
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // r12d
  _QWORD *v15; // rax
  __int64 v16; // r15
  unsigned __int16 v17; // r9
  int v18; // eax
  int v19; // ecx
  int i; // eax
  __int64 v21; // rdx
  __int64 v22; // r11
  unsigned int v23; // eax
  _QWORD *v24; // r11
  __int64 v25; // r11
  _QWORD *v26; // r10
  _QWORD *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // r8
  bool v30; // cl
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  bool v34; // cl
  void *v35; // rax
  __int64 v36; // r10
  __int64 v38; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  __int64 v40[5]; // [rsp+40h] [rbp-28h] BYREF
  int PerfDomain; // [rsp+B0h] [rbp+48h]
  int v42; // [rsp+B8h] [rbp+50h]
  int v43; // [rsp+C0h] [rbp+58h] BYREF
  int v44; // [rsp+C8h] [rbp+60h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195D8,
    0LL);
  v2 = *(_QWORD *)(a1 + 1160);
  v3 = 0LL;
  v4 = 0LL;
  v44 = *(_DWORD *)(v2 + 16);
  if ( !v44 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x29u,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
    v5 = -1073741823;
    goto LABEL_42;
  }
  v42 = *(_DWORD *)(v2 + 52);
  v6 = (v42 != -1) + 1;
  PerfDomain = GetPerfDomain(a1, (__int64)v40, &v43);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(40 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  memset(PoolWithTag, 0, (unsigned int)(40 * PerfDomain));
  ResetEnumerationContext(v40);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v40, &v38) )
  {
    v8 = v4 + 8;
    while ( 1 )
    {
      v9 = v38;
      *((_QWORD *)v8 + 1) = *(_QWORD *)(v38 + 1088);
      *(_QWORD *)v8 = *(_QWORD *)(v9 + 1160);
      v10 = PepNotifyPerfConstraints(a1, (_DWORD *)v8 + 5, (_DWORD *)v8 + 4);
      v5 = v10;
      if ( v10 < 0 )
        break;
      v11 = *((_DWORD *)v8 + 5);
      v12 = *(_DWORD *)(v2 + 4);
      if ( v11 > v12 || v11 < *(_DWORD *)(v2 + 12) )
      {
        v5 = -1073741811;
        goto LABEL_42;
      }
      *((_DWORD *)v8 + 6) = 100 * v11 / v12;
      v8 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64)v40, &v38) )
        goto LABEL_11;
    }
    v17 = 42;
    goto LABEL_20;
  }
LABEL_11:
  v13 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
  v14 = (v13 + 7 + 24 * v6) & 0xFFFFFFF8;
  Size = v14 + 8 * PerfDomain * v6;
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v3 = v15;
  if ( !v15 )
  {
LABEL_4:
    v5 = -1073741670;
    goto LABEL_42;
  }
  memset(v15, 0, Size);
  if ( *(_BYTE *)(a1 + 1106) )
    v3[48] = PepParkPreference;
  if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
  {
    v3[49] = PepParkMask;
    v3[50] = PepPerfCheckComplete;
    v3[8] = *(_QWORD *)(a1 + 1088);
  }
  v16 = (__int64)(v3 + 54);
  *((_DWORD *)v3 + 3) = PerfDomain;
  v3[51] = (char *)v3 + v13;
  *((_WORD *)v3 + 2) = v43;
  *(_DWORD *)v3 = 52;
  *((_DWORD *)v3 + 8) = v6;
  v3[52] = v3 + 54;
  v3[53] = (char *)v3 + v14;
  if ( *(_BYTE *)(v2 + 32) )
  {
    v3[42] = PepPerfStateControlHandler;
    v3[41] = PepPerfStateSelectionHandler;
  }
  else
  {
    v3[42] = PepPerfControlHandler;
    v3[41] = PepPerfSelectionHandler;
    v3[32] = PepSetTimeWindow;
  }
  *((_WORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 4) = v44;
  *((_BYTE *)v3 + 40) = 0;
  *((_DWORD *)v3 + 5) = *(_DWORD *)(v2 + 20);
  v18 = *(_DWORD *)(v2 + 24);
  *((_DWORD *)v3 + 6) = v18;
  v19 = *(_DWORD *)(v2 + 28);
  if ( !v18 )
    v18 = 1;
  *((_DWORD *)v3 + 6) = v18;
  if ( !v19 )
    v19 = 1;
  *((_DWORD *)v3 + 7) = v19;
  v3[6] = *(unsigned int *)(v2 + 12);
  v3[7] = *(unsigned int *)(v2 + 4);
  ResetEnumerationContext(v40);
  for ( i = EnumerateNextDevice((__int64)v40, &v38); !i; i = EnumerateNextDevice((__int64)v40, &v38) )
  {
    v23 = PepTranslateLimitReason(*(unsigned int *)(v22 + 24), v21);
    InitCommonPerfStateContext(v38, v24, v16, *((_DWORD *)v24 + 8), v23);
    *v26 = v25;
    v27 = v26 + 1;
    if ( v42 != -1 )
      *v27 = v25;
    v16 += 32LL;
  }
  v28 = *(unsigned int *)(v2 + 48);
  v29 = v3[51];
  *(_QWORD *)(v29 + 8) = 100LL;
  *(_BYTE *)(v29 + 16) = *(_BYTE *)(v2 + 8 * v28 + 56) & 1;
  v30 = (*(_DWORD *)(v2 + 8 * v28 + 56) & 6) == 2;
  *(_BYTE *)(v29 + 17) = v30;
  *(_BYTE *)(v29 + 18) = (*(_DWORD *)(v2 + 8 * v28 + 56) & 0x80) != 0;
  v31 = PepDifferentialFrequencyRead;
  if ( !v30 )
    v31 = PepInstantaneousFrequencyRead;
  *(_QWORD *)v29 = v31;
  *((_DWORD *)v3 + 8) = 1;
  if ( v42 != -1 )
  {
    v32 = *(unsigned int *)(v2 + 52);
    v33 = v3[51];
    *(_DWORD *)(v33 + 32) = 100;
    *(_DWORD *)(v33 + 36) = 1;
    *(_BYTE *)(v33 + 40) = *(_BYTE *)(v2 + 8 * v32 + 56) & 1;
    v34 = (*(_DWORD *)(v2 + 8 * v32 + 56) & 6) == 2;
    *(_BYTE *)(v33 + 41) = v34;
    *(_BYTE *)(v33 + 42) = (*(_DWORD *)(v2 + 8 * v32 + 56) & 0x80) != 0;
    v35 = PepDifferentialPerfRead;
    if ( !v34 )
      v35 = PepInstantaneousPerfRead;
    *(_QWORD *)(v33 + 24) = v35;
    ++*((_DWORD *)v3 + 8);
  }
  v10 = ((__int64 (__fastcall *)(_QWORD *))qword_1C00197D8)(v3);
  v5 = v10;
  if ( v10 < 0 )
  {
    v17 = 43;
LABEL_20:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v17,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
      v10);
    goto LABEL_42;
  }
  ResetEnumerationContext(v40);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v40, &v38) )
  {
    v4 = 0LL;
    do
      *(_QWORD *)(v38 + 1168) = v36;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v40, &v38) );
  }
LABEL_42:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return v5;
}
