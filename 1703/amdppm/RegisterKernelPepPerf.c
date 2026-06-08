/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0025E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     PepNotifyPerfConstraints @ 0x1C000A7D8 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     GetPerfDomain @ 0x1C0021708 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  _DWORD *v2; // rsi
  _QWORD *v3; // rbx
  unsigned int *v4; // r15
  unsigned int v5; // edi
  int v6; // r12d
  int v7; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  int v17; // eax
  int v18; // ecx
  int i; // eax
  __int64 v20; // r10
  __int64 v21; // r11
  int v22; // edx
  unsigned __int16 v23; // r9
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  void *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  void *v34; // rcx
  __int64 v35; // r10
  __int64 v37; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  __int64 v39[5]; // [rsp+40h] [rbp-28h] BYREF
  int v40; // [rsp+B0h] [rbp+48h]
  int PerfDomain; // [rsp+B8h] [rbp+50h]
  unsigned int v42; // [rsp+B8h] [rbp+50h]
  int v43; // [rsp+C0h] [rbp+58h] BYREF
  int v44; // [rsp+C8h] [rbp+60h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  v2 = *(_DWORD **)(a1 + 1160);
  v3 = 0LL;
  v4 = 0LL;
  v44 = v2[4];
  if ( !v44 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x29u,
      (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
    v5 = -1073741823;
    goto LABEL_50;
  }
  v40 = v2[9];
  v6 = (v40 != -1) + 1;
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v39, &v43);
  v7 = PerfDomain;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(40 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  memset(PoolWithTag, 0, (unsigned int)(40 * PerfDomain));
  ResetEnumerationContext(v39);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v39, &v37) )
  {
    v9 = v4 + 7;
    while ( 1 )
    {
      v10 = v37;
      *(_QWORD *)(v9 - 3) = *(_QWORD *)(v37 + 1088);
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
        goto LABEL_50;
      }
      v9[1] = 100 * v12 / v13;
      v9 += 10;
      if ( (unsigned int)EnumerateNextDevice((__int64)v39, &v37) )
      {
        v7 = PerfDomain;
        goto LABEL_12;
      }
    }
    v23 = 42;
    goto LABEL_29;
  }
LABEL_12:
  v14 = (32 * v7 + 439) & 0xFFFFFFF8;
  v42 = (v14 + 24 * v6 + 7) & 0xFFFFFFF8;
  Size = v42 + 8 * v7 * v6;
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v3 = v15;
  if ( !v15 )
  {
LABEL_4:
    v5 = -1073741670;
    goto LABEL_50;
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
  *((_DWORD *)v3 + 8) = v6;
  *(_DWORD *)v3 = 49;
  *((_DWORD *)v3 + 3) = v7;
  v3[52] = v3 + 54;
  *((_BYTE *)v3 + 40) = 0;
  v3[51] = (char *)v3 + v14;
  v16 = (_QWORD *)((char *)v3 + v42);
  *((_WORD *)v3 + 2) = v43;
  v3[42] = PepPerfControlHandler;
  v3[41] = PepPerfSelectionHandler;
  v3[32] = PepSetTimeWindow;
  *((_DWORD *)v3 + 4) = v44;
  v3[53] = v16;
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
  ResetEnumerationContext(v39);
  for ( i = EnumerateNextDevice((__int64)v39, &v37); !i; i = EnumerateNextDevice((__int64)v39, &v37) )
  {
    switch ( *(_DWORD *)(v20 + 24) )
    {
      case 1:
        v22 = 4;
        break;
      case 2:
        v22 = 8;
        break;
      case 4:
        v22 = 16;
        break;
      default:
        v22 = 2;
        break;
    }
    v24 = v37;
    v25 = *(_DWORD *)(v20 + 32);
    *(_QWORD *)v20 = v37;
    *(_QWORD *)(v21 + 8) = v20;
    if ( *(_BYTE *)(v24 + 78) )
    {
      v26 = *(_DWORD *)(v24 + 80);
      *(_BYTE *)(v21 + 28) = 1;
    }
    else
    {
      v26 = *(_DWORD *)(v24 + 56);
    }
    *(_DWORD *)v21 = v26;
    *(_DWORD *)(v21 + 20) = *(_DWORD *)(v24 + 704);
    *(_DWORD *)(v21 + 16) = v25;
    *(_DWORD *)(v21 + 24) = v22;
    *v16++ = v20;
    if ( v40 != -1 )
      *v16++ = v20;
  }
  v27 = (unsigned int)v2[8];
  v28 = v3[51];
  *(_QWORD *)(v28 + 8) = 100LL;
  *(_BYTE *)(v28 + 16) = v2[2 * v27 + 10] & 1;
  v29 = v2[2 * v27 + 10];
  v30 = PepDifferentialFrequencyRead;
  LOBYTE(v29) = (v29 & 6) == 2;
  *(_BYTE *)(v28 + 17) = v29;
  if ( !(_BYTE)v29 )
    v30 = PepInstantaneousFrequencyRead;
  *(_QWORD *)v28 = v30;
  *((_DWORD *)v3 + 8) = 1;
  if ( v40 != -1 )
  {
    v31 = (unsigned int)v2[9];
    v32 = v3[51];
    *(_DWORD *)(v32 + 32) = 100;
    *(_DWORD *)(v32 + 36) = 1;
    *(_BYTE *)(v32 + 40) = v2[2 * v31 + 10] & 1;
    v33 = v2[2 * v31 + 10];
    v34 = PepDifferentialPerfRead;
    LOBYTE(v33) = (v33 & 6) == 2;
    *(_BYTE *)(v32 + 41) = v33;
    if ( !(_BYTE)v33 )
      v34 = PepInstantaneousPerfRead;
    *(_QWORD *)(v32 + 24) = v34;
    ++*((_DWORD *)v3 + 8);
  }
  v11 = ((__int64 (__fastcall *)(_QWORD *))qword_1C00115E8)(v3);
  v5 = v11;
  if ( v11 < 0 )
  {
    v23 = 43;
LABEL_29:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v23,
      (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids,
      v11);
    goto LABEL_50;
  }
  ResetEnumerationContext(v39);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v39, &v37) )
  {
    v4 = 0LL;
    do
      *(_QWORD *)(v37 + 1168) = v35;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v39, &v37) );
  }
LABEL_50:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return v5;
}
