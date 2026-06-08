/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0031C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0003978 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00039B8 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     PepNotifyPerfConstraints @ 0x1C000E13C (PepNotifyPerfConstraints.c)
 *     InitCommonPerfStateContext @ 0x1C001E008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C002420C (GetPerfDomain.c)
 *     PepTranslateLimitReason @ 0x1C0034A78 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  char *v4; // r15
  unsigned int v5; // edi
  int v6; // edi
  int PerfDomain; // eax
  _BYTE *v8; // r14
  SIZE_T v9; // r12
  char *PoolWithTag; // rax
  char *v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r12d
  _QWORD *v17; // rax
  int v18; // edx
  unsigned __int16 v19; // r9
  bool v20; // al
  __int64 v21; // rdi
  int v22; // eax
  int v23; // ecx
  int i; // eax
  __int64 v25; // rdx
  __int64 v26; // r10
  unsigned int v27; // eax
  _QWORD *v28; // r10
  __int64 v29; // r10
  _QWORD *v30; // r11
  _QWORD *v31; // r11
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ecx
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // ecx
  void *v39; // rax
  __int64 v40; // r10
  int v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int64 v45[6]; // [rsp+48h] [rbp-30h] BYREF
  int v46; // [rsp+C0h] [rbp+48h]
  int v47; // [rsp+C8h] [rbp+50h]
  unsigned int v48; // [rsp+D0h] [rbp+58h]
  int v49; // [rsp+D8h] [rbp+60h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A5D8,
    0LL);
  v2 = *(_QWORD *)(a1 + 1160);
  v3 = 0LL;
  v4 = 0LL;
  v42 = *(_DWORD *)(v2 + 16);
  if ( !v42 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x2Du,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
    v5 = -1073741823;
    goto LABEL_55;
  }
  v47 = *(_DWORD *)(v2 + 52);
  v6 = (v47 != -1) + 1;
  PerfDomain = GetPerfDomain(a1, (__int64)v45, &v49);
  v8 = *(_BYTE **)(a1 + 528);
  v46 = PerfDomain;
  if ( !v8 || !v8[48] )
    v8 = 0LL;
  v9 = (unsigned int)(40 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, v9);
  ResetEnumerationContext(v45);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v45, &v43) )
  {
    v11 = v4 + 8;
    while ( 1 )
    {
      v12 = v43;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v43 + 1088);
      *(_QWORD *)v11 = *(_QWORD *)(v12 + 1160);
      v13 = PepNotifyPerfConstraints(a1, (_DWORD *)v11 + 5, (_DWORD *)v11 + 4);
      v5 = v13;
      if ( v13 < 0 )
        break;
      v14 = *((_DWORD *)v11 + 5);
      v15 = *(_DWORD *)(v2 + 4);
      if ( v14 > v15 || v14 < *(_DWORD *)(v2 + 12) )
      {
        v5 = -1073741811;
        goto LABEL_55;
      }
      *((_DWORD *)v11 + 6) = 100 * v14 / v15;
      v11 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64)v45, &v43) )
      {
        v6 = (v47 != -1) + 1;
        goto LABEL_15;
      }
    }
    v19 = 46;
    goto LABEL_24;
  }
LABEL_15:
  v16 = (32 * v46 + 439) & 0xFFFFFFF8;
  v48 = (v16 + 7 + 24 * v6) & 0xFFFFFFF8;
  Size = v48 + 8 * v46 * v6;
  v17 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v3 = v17;
  if ( !v17 )
  {
LABEL_7:
    v5 = -1073741670;
    goto LABEL_55;
  }
  memset(v17, 0, Size);
  if ( *(_BYTE *)(a1 + 1106) )
    v3[48] = PepParkPreference;
  if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
  {
    v3[49] = PepParkMask;
    v3[50] = PepPerfCheckComplete;
    v3[8] = *(_QWORD *)(a1 + 1088);
  }
  v18 = v49;
  v3[52] = v3 + 54;
  *(_DWORD *)v3 = 56;
  v3[51] = (char *)v3 + v16;
  *((_DWORD *)v3 + 4) = v46;
  v3[53] = (char *)v3 + v48;
  *((_DWORD *)v3 + 9) = v6;
  *((_WORD *)v3 + 2) = v18;
  if ( *(_BYTE *)(v2 + 32) )
  {
    v3[42] = PepPerfStateControlHandler;
    v3[41] = PepPerfStateSelectionHandler;
    if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v18 == 254 || v46 == 1) && v8 && v8[58] )
    {
      *((_BYTE *)v3 + 11) = 1;
      *((_BYTE *)v3 + 12) = v8[57] == 0;
    }
  }
  else
  {
    v3[42] = PepPerfControlHandler;
    v3[41] = PepPerfSelectionHandler;
    v3[32] = PepSetTimeWindow;
  }
  *((_BYTE *)v3 + 6) = 0;
  v20 = v8 && v8[59];
  *((_BYTE *)v3 + 7) = v20;
  v21 = v3[52];
  *((_DWORD *)v3 + 5) = v42;
  *((_BYTE *)v3 + 44) = 0;
  *((_DWORD *)v3 + 6) = *(_DWORD *)(v2 + 20);
  v22 = *(_DWORD *)(v2 + 24);
  *((_DWORD *)v3 + 7) = v22;
  v23 = *(_DWORD *)(v2 + 28);
  if ( !v22 )
    v22 = 1;
  *((_DWORD *)v3 + 7) = v22;
  if ( !v23 )
    v23 = 1;
  *((_DWORD *)v3 + 8) = v23;
  v3[6] = *(unsigned int *)(v2 + 12);
  v3[7] = *(unsigned int *)(v2 + 4);
  ResetEnumerationContext(v45);
  for ( i = EnumerateNextDevice((__int64)v45, &v43); !i; i = EnumerateNextDevice((__int64)v45, &v43) )
  {
    v27 = PepTranslateLimitReason(*(unsigned int *)(v26 + 24), v25);
    InitCommonPerfStateContext(v43, v28, v21, *((_DWORD *)v28 + 8), v27);
    *v30 = v29;
    v31 = v30 + 1;
    if ( v47 != -1 )
      *v31 = v29;
    v21 += 32LL;
  }
  v32 = *(unsigned int *)(v2 + 48);
  v33 = v3[51];
  *(_QWORD *)(v33 + 8) = 100LL;
  *(_BYTE *)(v33 + 16) = *(_BYTE *)(v2 + 8 * v32 + 56) & 1;
  v34 = *(_DWORD *)(v2 + 8 * v32 + 56) & 6;
  *(_BYTE *)(v33 + 17) = v34 == 2;
  *(_BYTE *)(v33 + 18) = (*(_DWORD *)(v2 + 8 * v32 + 56) & 0x80) != 0;
  v35 = PepInstantaneousFrequencyRead;
  if ( v34 == 2 )
    v35 = PepDifferentialFrequencyRead;
  *(_QWORD *)v33 = v35;
  *((_DWORD *)v3 + 9) = 1;
  if ( v47 != -1 )
  {
    v36 = *(unsigned int *)(v2 + 52);
    v37 = v3[51];
    *(_DWORD *)(v37 + 32) = 100;
    *(_DWORD *)(v37 + 36) = 1;
    *(_BYTE *)(v37 + 40) = *(_BYTE *)(v2 + 8 * v36 + 56) & 1;
    v38 = *(_DWORD *)(v2 + 8 * v36 + 56) & 6;
    *(_BYTE *)(v37 + 41) = v38 == 2;
    *(_BYTE *)(v37 + 42) = (*(_DWORD *)(v2 + 8 * v36 + 56) & 0x80) != 0;
    v39 = PepInstantaneousPerfRead;
    if ( v38 == 2 )
      v39 = PepDifferentialPerfRead;
    *(_QWORD *)(v37 + 24) = v39;
    ++*((_DWORD *)v3 + 9);
  }
  v13 = ((__int64 (__fastcall *)(_QWORD *))qword_1C001A7D8)(v3);
  v5 = v13;
  if ( v13 < 0 )
  {
    v19 = 47;
LABEL_24:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v19,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
      v13);
    goto LABEL_55;
  }
  ResetEnumerationContext(v45);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v45, &v43) )
  {
    v4 = 0LL;
    do
      *(_QWORD *)(v43 + 1168) = v40;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v45, &v43) );
  }
LABEL_55:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A5D8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return v5;
}
