/*
 * XREFs of RegisterKernelPepPerf @ 0x1C001FDF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     ResetEnumerationContext @ 0x1C0003930 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C000394C (EnumerateNextDevice.c)
 *     PepNotifyPerfConstraints @ 0x1C000993C (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     GetPerfDomain @ 0x1C0021CB0 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  char *v4; // r13
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
  _QWORD *v21; // rdi
  int v22; // eax
  int v23; // ecx
  int i; // eax
  __int64 v25; // r10
  __int64 v26; // r11
  int v27; // ecx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  void *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // ecx
  void *v38; // rax
  __int64 v39; // r10
  int v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h] BYREF
  size_t Size; // [rsp+40h] [rbp-38h]
  __int64 v44[6]; // [rsp+48h] [rbp-30h] BYREF
  int v45; // [rsp+C0h] [rbp+48h]
  int v46; // [rsp+C8h] [rbp+50h]
  unsigned int v47; // [rsp+D0h] [rbp+58h]
  int v48; // [rsp+D8h] [rbp+60h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011418,
    0LL);
  v2 = *(_QWORD *)(a1 + 1160);
  v3 = 0LL;
  v4 = 0LL;
  v41 = *(_DWORD *)(v2 + 16);
  if ( !v41 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x2Du,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
    v5 = -1073741823;
    goto LABEL_65;
  }
  v46 = *(_DWORD *)(v2 + 52);
  v6 = (v46 != -1) + 1;
  PerfDomain = GetPerfDomain(a1, v44, &v48);
  v8 = *(_BYTE **)(a1 + 528);
  v45 = PerfDomain;
  if ( !v8 || !v8[48] )
    v8 = 0LL;
  v9 = (unsigned int)(40 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, v9);
  ResetEnumerationContext(v44);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v44, &v42) )
  {
    v11 = v4 + 8;
    while ( 1 )
    {
      v12 = v42;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v42 + 1088);
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
        goto LABEL_65;
      }
      *((_DWORD *)v11 + 6) = 100 * v14 / v15;
      v11 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64)v44, &v42) )
      {
        v6 = (v46 != -1) + 1;
        goto LABEL_15;
      }
    }
    v19 = 46;
    goto LABEL_24;
  }
LABEL_15:
  v16 = (32 * v45 + 439) & 0xFFFFFFF8;
  v47 = (v16 + 7 + 24 * v6) & 0xFFFFFFF8;
  Size = v47 + 8 * v45 * v6;
  v17 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v3 = v17;
  if ( !v17 )
  {
LABEL_7:
    v5 = -1073741670;
    goto LABEL_65;
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
  v18 = v48;
  v3[52] = v3 + 54;
  *(_DWORD *)v3 = 56;
  v3[51] = (char *)v3 + v16;
  *((_DWORD *)v3 + 4) = v45;
  v3[53] = (char *)v3 + v47;
  *((_DWORD *)v3 + 9) = v6;
  *((_WORD *)v3 + 2) = v18;
  if ( *(_BYTE *)(v2 + 32) )
  {
    v3[42] = PepPerfStateControlHandler;
    v3[41] = PepPerfStateSelectionHandler;
    if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v18 == 254 || v45 == 1) && v8 && v8[58] )
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
  v21 = (_QWORD *)v3[53];
  *((_DWORD *)v3 + 5) = v41;
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
  ResetEnumerationContext(v44);
  for ( i = EnumerateNextDevice((__int64)v44, &v42); !i; i = EnumerateNextDevice((__int64)v44, &v42) )
  {
    switch ( *(_DWORD *)(v25 + 24) )
    {
      case 1:
        v27 = 4;
        break;
      case 2:
        v27 = 8;
        break;
      case 4:
        v27 = 16;
        break;
      default:
        v27 = 2;
        break;
    }
    v28 = v42;
    v29 = *(_DWORD *)(v25 + 32);
    *(_QWORD *)v25 = v42;
    *(_QWORD *)(v26 + 8) = v25;
    if ( *(_BYTE *)(v28 + 78) )
    {
      v30 = *(_DWORD *)(v28 + 80);
      *(_BYTE *)(v26 + 28) = 1;
    }
    else
    {
      v30 = *(_DWORD *)(v28 + 56);
    }
    *(_DWORD *)v26 = v30;
    *(_DWORD *)(v26 + 20) = *(_DWORD *)(v28 + 704);
    *(_DWORD *)(v26 + 16) = v29;
    *(_DWORD *)(v26 + 24) = v27;
    *v21++ = v25;
    if ( v46 != -1 )
      *v21++ = v25;
  }
  v31 = *(unsigned int *)(v2 + 48);
  v32 = v3[51];
  *(_QWORD *)(v32 + 8) = 100LL;
  *(_BYTE *)(v32 + 16) = *(_BYTE *)(v2 + 8 * v31 + 56) & 1;
  v33 = *(_DWORD *)(v2 + 8 * v31 + 56) & 6;
  *(_BYTE *)(v32 + 17) = v33 == 2;
  *(_BYTE *)(v32 + 18) = (*(_DWORD *)(v2 + 8 * v31 + 56) & 0x80) != 0;
  v34 = PepInstantaneousFrequencyRead;
  if ( v33 == 2 )
    v34 = PepDifferentialFrequencyRead;
  *(_QWORD *)v32 = v34;
  *((_DWORD *)v3 + 9) = 1;
  if ( v46 != -1 )
  {
    v35 = *(unsigned int *)(v2 + 52);
    v36 = v3[51];
    *(_DWORD *)(v36 + 32) = 100;
    *(_DWORD *)(v36 + 36) = 1;
    *(_BYTE *)(v36 + 40) = *(_BYTE *)(v2 + 8 * v35 + 56) & 1;
    v37 = *(_DWORD *)(v2 + 8 * v35 + 56) & 6;
    *(_BYTE *)(v36 + 41) = v37 == 2;
    *(_BYTE *)(v36 + 42) = (*(_DWORD *)(v2 + 8 * v35 + 56) & 0x80) != 0;
    v38 = PepInstantaneousPerfRead;
    if ( v37 == 2 )
      v38 = PepDifferentialPerfRead;
    *(_QWORD *)(v36 + 24) = v38;
    ++*((_DWORD *)v3 + 9);
  }
  v13 = ((__int64 (__fastcall *)(_QWORD *))qword_1C0011618)(v3);
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
    goto LABEL_65;
  }
  ResetEnumerationContext(v44);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v44, &v42) )
  {
    v4 = 0LL;
    do
      *(_QWORD *)(v42 + 1168) = v39;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v44, &v42) );
  }
LABEL_65:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0011418);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return v5;
}
