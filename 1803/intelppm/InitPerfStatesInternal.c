/*
 * XREFs of InitPerfStatesInternal @ 0x1C0023130
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C0024250 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C002D080 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0003978 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00039B8 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003AA8 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C001E008 (InitCommonPerfStateContext.c)
 *     CalculatePercentageCap @ 0x1C0023D00 (CalculatePercentageCap.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0023E80 (GetRegistryDwordValueNoDefault.c)
 *     GetPerfDomain @ 0x1C002420C (GetPerfDomain.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  int v3; // ecx
  char *v4; // rbx
  unsigned int *v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *PoolWithTag; // rax
  char *v12; // r13
  PVOID v13; // rax
  _QWORD *v14; // rax
  char *v15; // rax
  char *v16; // rax
  int v17; // eax
  bool v18; // zf
  void *v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  _DWORD *v22; // r15
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // rdx
  _DWORD *v26; // r15
  int v27; // r9d
  unsigned int v28; // r10d
  unsigned int v29; // r13d
  int v30; // r14d
  __int64 v31; // r11
  __int64 v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  _BYTE *v36; // rdx
  unsigned __int8 v37; // cl
  __int64 v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  char v41; // al
  __int64 v42; // r12
  _QWORD *v43; // r15
  char *v44; // r14
  unsigned int v45; // eax
  __int64 v46; // r11
  __int64 v47; // r10
  unsigned int v49; // [rsp+30h] [rbp-48h]
  int v50; // [rsp+34h] [rbp-44h]
  int v51; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v52; // [rsp+3Ch] [rbp-3Ch]
  PVOID P; // [rsp+40h] [rbp-38h]
  char *v54; // [rsp+48h] [rbp-30h]
  __int64 v55[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v56; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v57)(char *, _QWORD); // [rsp+C8h] [rbp+50h]
  int PerfDomain; // [rsp+D0h] [rbp+58h]
  size_t Size; // [rsp+D8h] [rbp+60h]

  v57 = a2;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  LODWORD(v56) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 264);
  v8 = 0;
  if ( (v7 & 0x70000000) != 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      v5 = *(unsigned int **)(a1 + 424);
    else
      v5 = *(unsigned int **)(a1 + 416);
    v8 = *v5;
  }
  if ( (v7 & 0x3300000) != 0 )
  {
    v3 = **(_DWORD **)(a1 + 472);
    LODWORD(v56) = v3;
  }
  v9 = v3 + v8;
  v52 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001A5D8,
    0LL);
  PerfDomain = GetPerfDomain(a1, v55, &v51);
  Size = (unsigned int)(96 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v54 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  memset(PoolWithTag, 0, Size);
  Size = 32 * v9;
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  P = v13;
  if ( !v13 )
    goto LABEL_11;
  memset(v13, 0, Size);
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x72637250u);
  v6 = v14;
  if ( !v14 )
    goto LABEL_11;
  memset(v14, 0, 0x48uLL);
  LODWORD(Size) = (32 * PerfDomain + 439) & 0xFFFFFFF8;
  v50 = (Size + 31) & 0xFFFFFFF8;
  v49 = v50 + 8 * PerfDomain;
  v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v49, 0x72637250u);
  v4 = v15;
  if ( v15 )
  {
    memset(v15, 0, v49);
    if ( *(_BYTE *)(a1 + 1106) )
      *((_QWORD *)v4 + 48) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v4 + 49) = PepParkMask;
      *((_QWORD *)v4 + 50) = PepPerfCheckComplete;
      *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1088);
    }
    *((_DWORD *)v4 + 4) = PerfDomain;
    *(_DWORD *)v4 = 56;
    *((_QWORD *)v4 + 52) = v4 + 432;
    v16 = &v4[(unsigned int)Size];
    *((_DWORD *)v4 + 9) = 1;
    *((_QWORD *)v4 + 51) = v16;
    *((_WORD *)v4 + 3) = 257;
    *((_QWORD *)v4 + 53) = &v4[v50];
    v17 = v51;
    *((_WORD *)v4 + 2) = v51;
    v4[44] = 0;
    *((_DWORD *)v4 + 6) = 100;
    *((_QWORD *)v4 + 42) = PerfControlPTStates;
    if ( v17 == 252 || (v18 = v17 == 1, v19 = PerfControlPTStatesHidden, v18) )
      v19 = PerfControlPTStatesHiddenSwAll;
    *((_QWORD *)v4 + 43) = v19;
    *((_QWORD *)v4 + 41) = PerfSelectionPTStates;
    v6[6] = P;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 100LL;
    if ( v8 && v5 )
    {
      *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 328);
      *((_QWORD *)v4 + 34) = *(_QWORD *)(a1 + 336);
      *((_DWORD *)v4 + 5) = v5[2];
      v20 = v5[12 * v8 - 9];
      *v6 = *(_QWORD *)(a1 + 280);
      v6[3] = *(_QWORD *)(a1 + 296);
      v6[4] = a1 + 392;
      *((_QWORD *)v4 + 7) = v5[2];
      *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
      LODWORD(Size) = v20;
      v21 = 0LL;
      v22 = v5 + 3;
      v23 = v8;
      do
      {
        v24 = v6[6];
        *(_DWORD *)(v21 + v24 + 16) = *(v22 - 1);
        *(_BYTE *)(v21 + v24 + 24) = (unsigned int)(100 * *(v22 - 1)) / *((_DWORD *)v4 + 5);
        *(_QWORD *)(v21 + v24) = *(_QWORD *)(v22 + 3);
        *(_DWORD *)(v21 + v24 + 20) = *v22;
        *(_QWORD *)(v21 + v24 + 8) = *(_QWORD *)(v22 + 5);
        *(_BYTE *)(v21 + v24 + 25) = 1;
        *(_WORD *)(v21 + v24 + 26) = *((_WORD *)v22 + 2);
        if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v21 + v24 + 8) = 0LL;
          *(_QWORD *)(v21 + v24) = v22 - 1;
        }
        v22 += 12;
        v21 += 32LL;
        --v23;
      }
      while ( v23 );
      v25 = v6[6];
      v26 = v4 + 20;
      v27 = *(_DWORD *)(32LL * (v8 - 1) + v25 + 16);
      goto LABEL_35;
    }
    v26 = v4 + 20;
    *((_DWORD *)v4 + 5) = 0;
    if ( (int)GetRegistryDwordValueNoDefault(
                L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                L"~MHz",
                v4 + 20) >= 0 )
    {
      v27 = *((_DWORD *)v4 + 5);
      if ( v27 )
      {
        v25 = v6[6];
        LODWORD(Size) = 1000 * v27;
LABEL_35:
        if ( (_DWORD)v56 )
        {
          v28 = 0;
          v29 = v56;
          v24 = 0LL;
          v30 = Size;
          v6[1] = *(_QWORD *)(a1 + 288);
          v6[2] = *(_QWORD *)(a1 + 304);
          v6[5] = a1 + 448;
          do
          {
            v56 = *(_QWORD *)(a1 + 472);
            v31 = v6[6] + 32LL * (v28 + v8);
            v32 = v56;
            v33 = v27 * *(_DWORD *)(v24 + v56 + 4) / 0x64u;
            *(_DWORD *)(v31 + 16) = v33;
            *(_BYTE *)(v31 + 24) = 100 * v33 / *v26;
            *(_QWORD *)v31 = *(unsigned int *)(v24 + v32 + 16);
            *(_QWORD *)(v31 + 8) = *(unsigned int *)(v24 + v32 + 20);
            *(_BYTE *)(v31 + 25) = 2;
            *(_WORD *)(v31 + 26) = *(_WORD *)(v24 + v32 + 12);
            v34 = *(_DWORD *)(v24 + v32 + 8);
            if ( !v34 )
              v34 = v30 * *(_DWORD *)(v24 + v32 + 4) / 0x64u;
            ++v28;
            *(_DWORD *)(v31 + 20) = v34;
            v24 += 20LL;
          }
          while ( v28 < v29 );
          v25 = v6[6];
          v9 = v52;
          v12 = v54;
        }
        v35 = 1;
        if ( v9 > 1 )
        {
          while ( *(_BYTE *)(32LL * v35 + v25 + 24) )
          {
            if ( ++v35 >= v9 )
              goto LABEL_46;
          }
          v9 = v35;
        }
LABEL_46:
        v36 = (_BYTE *)v6[6];
        *((_DWORD *)v6 + 14) = v9;
        if ( v9 <= v8 )
        {
          *((_DWORD *)v6 + 15) = v9;
          *((_DWORD *)v6 + 16) = 0;
          v37 = v36[32 * v9 - 8];
        }
        else
        {
          *((_DWORD *)v6 + 15) = v8;
          *((_DWORD *)v6 + 16) = v9 - v8;
          v37 = v36[32 * v8 + 24];
        }
        *((_DWORD *)v4 + 7) = v37;
        *((_DWORD *)v4 + 8) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[6] + 24);
        v38 = *(_QWORD *)(a1 + 320);
        if ( v38 )
          *((_QWORD *)v4 + 31) = v38;
        v39 = *((_QWORD *)v4 + 51);
        *(_QWORD *)(v39 + 8) = 100LL;
        if ( *(_QWORD *)(a1 + 312) )
        {
          v40 = PerfReadWrappingCounter;
          v36 = PerfReadActualMasterCount;
          if ( (*(_QWORD *)(a1 + 264) & 0x8000000000LL) == 0 )
            v40 = PerfReadActualMasterCount;
          *(_QWORD *)v39 = v40;
          v41 = 1;
        }
        else
        {
          *(_QWORD *)v39 = PerfStatesInstantaneousFrequency;
          v41 = 0;
        }
        *(_BYTE *)(v39 + 16) = v41;
        *(_BYTE *)(v39 + 17) = v41;
        DisplayKernelPerfStates((__int64)v4, (char)v36, v24);
        v42 = *((_QWORD *)v4 + 52);
        v43 = (_QWORD *)*((_QWORD *)v4 + 53);
        ResetEnumerationContext(v55);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v55, &v56) )
        {
          v44 = v12 + 12;
          do
          {
            v45 = CalculatePercentageCap(v6, *(unsigned int *)(v56 + 432), *(unsigned int *)(v56 + 480));
            InitCommonPerfStateContext(v46, v44 - 12, v42, v45, v45 < 0x64 ? 2 : 0);
            *(_QWORD *)(v44 + 12) = v6;
            *(_DWORD *)v44 = 100;
            if ( *(_QWORD *)(a1 + 312) )
            {
              *v43 = v44 + 20;
              *(_QWORD *)(v44 + 68) = *(_QWORD *)(a1 + 312);
            }
            else
            {
              *v43 = v47;
            }
            ++v43;
            v44 += 96;
            v42 += 32LL;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v55, &v56) );
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v51 == 254 || PerfDomain == 1) )
          *(_WORD *)(v4 + 11) = 257;
        if ( v57(v4, v49) >= 0 )
        {
          ResetEnumerationContext(v55);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v55, &v56) )
          {
            *(_QWORD *)(v56 + 216) = v12;
            v12 += 96;
          }
          v6 = 0LL;
          P = 0LL;
          v12 = 0LL;
        }
        v10 = 0;
        goto LABEL_72;
      }
    }
    else
    {
      *v26 = 0;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Eu,
      (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
LABEL_11:
    v10 = -1073741670;
  }
LABEL_72:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A5D8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72637250u);
  if ( P )
    ExFreePoolWithTag(P, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return v10;
}
