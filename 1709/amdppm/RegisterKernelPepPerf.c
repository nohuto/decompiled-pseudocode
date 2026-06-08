/*
 * XREFs of RegisterKernelPepPerf @ 0x1C0029030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     ResetEnumerationContext @ 0x1C0009224 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0009240 (EnumerateNextDevice.c)
 *     PepNotifyPerfConstraints @ 0x1C000AC8C (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     GetPerfDomain @ 0x1C00248A4 (GetPerfDomain.c)
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
  _QWORD *v16; // rdi
  unsigned __int16 v17; // r9
  int v18; // eax
  int v19; // ecx
  int i; // eax
  __int64 v21; // r10
  __int64 v22; // r11
  int v23; // edx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  bool v29; // cl
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  bool v33; // cl
  void *v34; // rax
  __int64 v35; // r10
  __int64 v37; // [rsp+30h] [rbp-38h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  __int64 v39[5]; // [rsp+40h] [rbp-28h] BYREF
  int PerfDomain; // [rsp+B0h] [rbp+48h]
  int v41; // [rsp+B8h] [rbp+50h]
  int v42; // [rsp+C0h] [rbp+58h] BYREF
  int v43; // [rsp+C8h] [rbp+60h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  v2 = *(_QWORD *)(a1 + 1160);
  v3 = 0LL;
  v4 = 0LL;
  v43 = *(_DWORD *)(v2 + 16);
  if ( !v43 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x29u,
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
    v5 = -1073741823;
    goto LABEL_52;
  }
  v41 = *(_DWORD *)(v2 + 52);
  v6 = (v41 != -1) + 1;
  PerfDomain = GetPerfDomain(a1, (__int64)v39, &v42);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(40 * PerfDomain), 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  memset(PoolWithTag, 0, (unsigned int)(40 * PerfDomain));
  ResetEnumerationContext(v39);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v39, &v37) )
  {
    v8 = v4 + 8;
    while ( 1 )
    {
      v9 = v37;
      *((_QWORD *)v8 + 1) = *(_QWORD *)(v37 + 1088);
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
        goto LABEL_52;
      }
      *((_DWORD *)v8 + 6) = 100 * v11 / v12;
      v8 += 40;
      if ( (unsigned int)EnumerateNextDevice((__int64)v39, &v37) )
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
    goto LABEL_52;
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
  *((_DWORD *)v3 + 3) = PerfDomain;
  v3[51] = (char *)v3 + v13;
  v16 = (_QWORD *)((char *)v3 + v14);
  *((_WORD *)v3 + 2) = v42;
  *(_DWORD *)v3 = 52;
  *((_DWORD *)v3 + 8) = v6;
  v3[52] = v3 + 54;
  v3[53] = v16;
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
  *((_DWORD *)v3 + 4) = v43;
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
  ResetEnumerationContext(v39);
  for ( i = EnumerateNextDevice((__int64)v39, &v37); !i; i = EnumerateNextDevice((__int64)v39, &v37) )
  {
    switch ( *(_DWORD *)(v22 + 24) )
    {
      case 1:
        v23 = 4;
        break;
      case 2:
        v23 = 8;
        break;
      case 4:
        v23 = 16;
        break;
      default:
        v23 = 2;
        break;
    }
    v24 = v37;
    v25 = *(_DWORD *)(v22 + 32);
    *(_QWORD *)v22 = v37;
    *(_QWORD *)(v21 + 8) = v22;
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
    *(_DWORD *)(v21 + 24) = v23;
    *v16++ = v22;
    if ( v41 != -1 )
      *v16++ = v22;
  }
  v27 = *(unsigned int *)(v2 + 48);
  v28 = v3[51];
  *(_QWORD *)(v28 + 8) = 100LL;
  *(_BYTE *)(v28 + 16) = *(_BYTE *)(v2 + 8 * v27 + 56) & 1;
  v29 = (*(_DWORD *)(v2 + 8 * v27 + 56) & 6) == 2;
  *(_BYTE *)(v28 + 17) = v29;
  *(_BYTE *)(v28 + 18) = (*(_DWORD *)(v2 + 8 * v27 + 56) & 0x80) != 0;
  v30 = PepDifferentialFrequencyRead;
  if ( !v29 )
    v30 = PepInstantaneousFrequencyRead;
  *(_QWORD *)v28 = v30;
  *((_DWORD *)v3 + 8) = 1;
  if ( v41 != -1 )
  {
    v31 = *(unsigned int *)(v2 + 52);
    v32 = v3[51];
    *(_DWORD *)(v32 + 32) = 100;
    *(_DWORD *)(v32 + 36) = 1;
    *(_BYTE *)(v32 + 40) = *(_BYTE *)(v2 + 8 * v31 + 56) & 1;
    v33 = (*(_DWORD *)(v2 + 8 * v31 + 56) & 6) == 2;
    *(_BYTE *)(v32 + 41) = v33;
    *(_BYTE *)(v32 + 42) = (*(_DWORD *)(v2 + 8 * v31 + 56) & 0x80) != 0;
    v34 = PepDifferentialPerfRead;
    if ( !v33 )
      v34 = PepInstantaneousPerfRead;
    *(_QWORD *)(v32 + 24) = v34;
    ++*((_DWORD *)v3 + 8);
  }
  v10 = ((__int64 (__fastcall *)(_QWORD *))qword_1C00115E8)(v3);
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
    goto LABEL_52;
  }
  ResetEnumerationContext(v39);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v39, &v37) )
  {
    v4 = 0LL;
    do
      *(_QWORD *)(v37 + 1168) = v35;
    while ( !(unsigned int)EnumerateNextDevice((__int64)v39, &v37) );
  }
LABEL_52:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  return v5;
}
