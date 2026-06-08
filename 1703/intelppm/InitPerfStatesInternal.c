/*
 * XREFs of InitPerfStatesInternal @ 0x1C001B128
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C001ABF0 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C0028680 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     DisplayKernelPerfStates @ 0x1C0001C68 (DisplayKernelPerfStates.c)
 *     ResetEnumerationContext @ 0x1C0001CAC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0002918 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C001A008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C001AC04 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001AD70 (GetRegistryDwordValueNoDefault.c)
 *     CalculatePercentageCap @ 0x1C001B8A0 (CalculatePercentageCap.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  int v3; // ecx
  char *v4; // rbx
  unsigned int *v5; // r15
  _QWORD *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  unsigned int v10; // edi
  char *PoolWithTag; // rax
  char *v12; // r12
  PVOID v13; // rax
  _QWORD *v14; // rax
  char *v15; // rax
  int v16; // eax
  bool v17; // zf
  void *v18; // rax
  int v19; // edx
  _DWORD *v20; // r9
  __int64 v21; // r11
  int *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r8
  _BYTE *v25; // rdx
  __int64 v26; // r8
  int v27; // r9d
  int RegistryDwordValueNoDefault; // eax
  unsigned int v29; // r11d
  int v30; // r14d
  unsigned int v31; // r12d
  __int64 v32; // r10
  __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // r15
  char *v44; // r14
  unsigned int v45; // eax
  __int64 v46; // r11
  __int64 v47; // r10
  unsigned int v49; // [rsp+30h] [rbp-48h]
  unsigned int v50; // [rsp+34h] [rbp-44h]
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
    qword_1C0015D98,
    0LL);
  PerfDomain = GetPerfDomain((_QWORD *)a1, (__int64)v55, &v51);
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
  v49 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
  v50 = (v49 + 31) & 0xFFFFFFF8;
  LODWORD(Size) = v50 + 8 * PerfDomain;
  v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
  v4 = v15;
  if ( v15 )
  {
    memset(v15, 0, (unsigned int)Size);
    if ( *(_BYTE *)(a1 + 1105) )
      *((_QWORD *)v4 + 48) = PepParkPreference;
    if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
    {
      *((_QWORD *)v4 + 49) = PepParkMask;
      *((_QWORD *)v4 + 50) = PepPerfCheckComplete;
      *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1088);
    }
    *((_DWORD *)v4 + 3) = PerfDomain;
    *(_DWORD *)v4 = 49;
    *((_QWORD *)v4 + 52) = v4 + 432;
    *((_DWORD *)v4 + 8) = 1;
    *((_QWORD *)v4 + 51) = &v4[v49];
    *((_WORD *)v4 + 3) = 257;
    *((_QWORD *)v4 + 53) = &v4[v50];
    v16 = v51;
    *((_WORD *)v4 + 2) = v51;
    v4[40] = 0;
    *((_DWORD *)v4 + 5) = 100;
    *((_QWORD *)v4 + 42) = PerfControlPTStates;
    if ( v16 == 252 || (v17 = v16 == 1, v18 = PerfControlPTStatesHidden, v17) )
      v18 = PerfControlPTStatesHiddenSwAll;
    *((_QWORD *)v4 + 43) = v18;
    *((_QWORD *)v4 + 41) = PerfSelectionPTStates;
    v6[6] = P;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 100LL;
    if ( v8 && v5 )
    {
      *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 328);
      *((_QWORD *)v4 + 34) = *(_QWORD *)(a1 + 336);
      *((_DWORD *)v4 + 4) = v5[2];
      v19 = v5[12 * v8 - 9];
      *v6 = *(_QWORD *)(a1 + 280);
      v6[3] = *(_QWORD *)(a1 + 296);
      v6[4] = a1 + 392;
      *((_QWORD *)v4 + 7) = v5[2];
      *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
      PerfDomain = v19;
      v20 = v5 + 3;
      v21 = v8;
      v22 = (int *)(v4 + 16);
      v23 = 0LL;
      do
      {
        v24 = v6[6];
        *(_DWORD *)(v23 + v24 + 16) = *(v20 - 1);
        LODWORD(v25) = 100 * *(v20 - 1) % (unsigned int)*v22;
        *(_BYTE *)(v23 + v24 + 24) = 100 * *(v20 - 1) / (unsigned int)*v22;
        *(_QWORD *)(v23 + v24) = *(_QWORD *)(v20 + 3);
        *(_DWORD *)(v23 + v24 + 20) = *v20;
        *(_QWORD *)(v23 + v24 + 8) = *(_QWORD *)(v20 + 5);
        *(_BYTE *)(v23 + v24 + 25) = 1;
        *(_WORD *)(v23 + v24 + 26) = *((_WORD *)v20 + 2);
        if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
        {
          *(_QWORD *)(v23 + v24 + 8) = 0LL;
          *(_QWORD *)(v23 + v24) = v20 - 1;
        }
        v20 += 12;
        v23 += 32LL;
        --v21;
      }
      while ( v21 );
      v26 = 0LL;
      v27 = *(_DWORD *)(32LL * (v8 - 1) + v6[6] + 16);
      goto LABEL_34;
    }
    v22 = (int *)(v4 + 16);
    *((_DWORD *)v4 + 4) = 0;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                    (__int64)L"~MHz",
                                    (__int64)(v4 + 16));
    v26 = 0LL;
    if ( RegistryDwordValueNoDefault < 0 )
      *v22 = 0;
    v27 = *v22;
    if ( *v22 )
    {
      PerfDomain = 1000 * v27;
LABEL_34:
      if ( (_DWORD)v56 )
      {
        v29 = 0;
        v30 = PerfDomain;
        v31 = v56;
        v6[1] = *(_QWORD *)(a1 + 288);
        v6[2] = *(_QWORD *)(a1 + 304);
        v6[5] = a1 + 448;
        do
        {
          v56 = *(_QWORD *)(a1 + 472);
          v32 = v6[6] + 32LL * (v29 + v8);
          v33 = v56;
          v34 = v27 * *(_DWORD *)(v26 + v56 + 4) / 0x64u;
          *(_DWORD *)(v32 + 16) = v34;
          v35 = 100 * v34;
          LODWORD(v25) = 100 * v34 % *v22;
          *(_BYTE *)(v32 + 24) = v35 / *v22;
          *(_QWORD *)v32 = *(unsigned int *)(v26 + v33 + 16);
          *(_QWORD *)(v32 + 8) = *(unsigned int *)(v26 + v33 + 20);
          *(_BYTE *)(v32 + 25) = 2;
          *(_WORD *)(v32 + 26) = *(_WORD *)(v26 + v33 + 12);
          v36 = *(_DWORD *)(v26 + v33 + 8);
          if ( v36 )
          {
            *(_DWORD *)(v32 + 20) = v36;
          }
          else
          {
            LODWORD(v25) = v30 * *(_DWORD *)(v26 + v33 + 4) / 0x64u;
            *(_DWORD *)(v32 + 20) = (_DWORD)v25;
          }
          ++v29;
          v26 += 20LL;
        }
        while ( v29 < v31 );
        v9 = v52;
        LODWORD(v26) = 0;
        v12 = v54;
      }
      v37 = 1;
      if ( v9 > 1 )
      {
        v25 = (_BYTE *)v6[6];
        while ( v25[32 * v37 + 24] )
        {
          if ( ++v37 >= v9 )
            goto LABEL_47;
        }
        v9 = v37;
      }
LABEL_47:
      *((_DWORD *)v6 + 14) = v9;
      if ( v9 <= v8 )
      {
        *((_DWORD *)v6 + 15) = v9;
        v38 = v9 - 1;
        *((_DWORD *)v6 + 16) = 0;
      }
      else
      {
        *((_DWORD *)v6 + 15) = v8;
        v38 = v8;
        *((_DWORD *)v6 + 16) = v9 - v8;
      }
      *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v38 + v6[6] + 24);
      *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[6] + 24);
      v39 = *(_QWORD *)(a1 + 320);
      if ( v39 )
        *((_QWORD *)v4 + 31) = v39;
      v40 = *((_QWORD *)v4 + 51);
      *(_QWORD *)(v40 + 8) = 100LL;
      if ( *(_QWORD *)(a1 + 312) )
      {
        v41 = PerfReadActualMasterCount;
        v17 = (*(_QWORD *)(a1 + 264) & 0x8000000000LL) == 0;
        v25 = PerfReadWrappingCounter;
        *(_WORD *)(v40 + 16) = 257;
        if ( !v17 )
          v41 = PerfReadWrappingCounter;
      }
      else
      {
        *(_WORD *)(v40 + 16) = 0;
        v41 = PerfStatesInstantaneousFrequency;
      }
      *(_QWORD *)v40 = v41;
      DisplayKernelPerfStates((__int64)v4, (char)v25, v26);
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
      if ( v57(v4, (unsigned int)Size) >= 0 )
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
      goto LABEL_69;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Eu,
      (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
    v10 = -1073741823;
  }
  else
  {
LABEL_11:
    v10 = -1073741670;
  }
LABEL_69:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015D98);
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
