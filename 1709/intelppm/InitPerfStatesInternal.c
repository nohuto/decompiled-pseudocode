/*
 * XREFs of InitPerfStatesInternal @ 0x1C001DF58
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C001D420 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C002BEB0 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     DisplayKernelPerfStates @ 0x1C0001768 (DisplayKernelPerfStates.c)
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C001D008 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C001D43C (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 *     CalculatePercentageCap @ 0x1C001EB14 (CalculatePercentageCap.c)
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
  unsigned int v15; // r12d
  char *v16; // rax
  char *v17; // rax
  int v18; // eax
  bool v19; // zf
  void *v20; // rax
  int *v21; // r12
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r10
  _DWORD *v25; // r15
  __int64 v26; // r8
  _BYTE *v27; // rdx
  __int64 v28; // r8
  int v29; // r10d
  int RegistryDwordValueNoDefault; // eax
  unsigned int v31; // r15d
  unsigned int v32; // r11d
  int v33; // r14d
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // eax
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  void *v43; // rax
  __int64 v44; // r13
  _QWORD *v45; // r15
  int v46; // eax
  char *v47; // r14
  unsigned int v48; // eax
  __int64 v49; // r11
  __int64 v50; // r10
  int v52; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-44h]
  unsigned int v54; // [rsp+38h] [rbp-40h]
  char *v55; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h]
  __int64 v57[5]; // [rsp+50h] [rbp-28h] BYREF
  int PerfDomain; // [rsp+C0h] [rbp+48h]
  __int64 v60; // [rsp+D0h] [rbp+58h] BYREF
  size_t Size; // [rsp+D8h] [rbp+60h]

  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  LODWORD(v60) = 0;
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
    LODWORD(v60) = v3;
  }
  v9 = v3 + v8;
  v54 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195D8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v57, &v52);
  Size = (unsigned int)(96 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v55 = PoolWithTag;
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    Size = 32 * v9;
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
    P = v13;
    if ( v13 )
    {
      memset(v13, 0, Size);
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x72637250u);
      v6 = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x48uLL);
        v15 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
        LODWORD(Size) = (v15 + 31) & 0xFFFFFFF8;
        v53 = Size + 8 * PerfDomain;
        v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v53, 0x72637250u);
        v4 = v16;
        if ( !v16 )
        {
          v10 = -1073741670;
LABEL_16:
          v12 = v55;
          goto LABEL_77;
        }
        memset(v16, 0, v53);
        if ( *(_BYTE *)(a1 + 1106) )
          *((_QWORD *)v4 + 48) = PepParkPreference;
        if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
        {
          *((_QWORD *)v4 + 49) = PepParkMask;
          *((_QWORD *)v4 + 50) = PepPerfCheckComplete;
          *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1088);
        }
        *((_DWORD *)v4 + 3) = PerfDomain;
        *(_DWORD *)v4 = 52;
        *((_QWORD *)v4 + 52) = v4 + 432;
        *((_DWORD *)v4 + 8) = 1;
        *((_QWORD *)v4 + 51) = &v4[v15];
        v17 = &v4[(unsigned int)Size];
        *((_WORD *)v4 + 3) = 257;
        *((_QWORD *)v4 + 53) = v17;
        v18 = v52;
        *((_WORD *)v4 + 2) = v52;
        v4[40] = 0;
        *((_DWORD *)v4 + 5) = 100;
        *((_QWORD *)v4 + 42) = PerfControlPTStates;
        if ( v18 == 252 || (v19 = v18 == 1, v20 = PerfControlPTStatesHidden, v19) )
          v20 = PerfControlPTStatesHiddenSwAll;
        *((_QWORD *)v4 + 43) = v20;
        *((_QWORD *)v4 + 41) = PerfSelectionPTStates;
        v6[6] = P;
        *((_QWORD *)v4 + 6) = 0LL;
        *((_QWORD *)v4 + 7) = 100LL;
        if ( v8 && v5 )
        {
          v21 = (int *)(v4 + 16);
          *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 328);
          *((_QWORD *)v4 + 34) = *(_QWORD *)(a1 + 336);
          *((_DWORD *)v4 + 4) = v5[2];
          v22 = v5[12 * v8 - 9];
          *v6 = *(_QWORD *)(a1 + 280);
          v6[3] = *(_QWORD *)(a1 + 296);
          v6[4] = a1 + 392;
          *((_QWORD *)v4 + 7) = v5[2];
          *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
          LODWORD(Size) = v22;
          v23 = 0LL;
          v24 = v8;
          v25 = v5 + 3;
          do
          {
            v26 = v6[6];
            *(_DWORD *)(v23 + v26 + 16) = *(v25 - 1);
            LODWORD(v27) = 100 * *(v25 - 1) % (unsigned int)*v21;
            *(_BYTE *)(v23 + v26 + 24) = 100 * *(v25 - 1) / (unsigned int)*v21;
            *(_QWORD *)(v23 + v26) = *(_QWORD *)(v25 + 3);
            *(_DWORD *)(v23 + v26 + 20) = *v25;
            *(_QWORD *)(v23 + v26 + 8) = *(_QWORD *)(v25 + 5);
            *(_BYTE *)(v23 + v26 + 25) = 1;
            *(_WORD *)(v23 + v26 + 26) = *((_WORD *)v25 + 2);
            if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
            {
              *(_QWORD *)(v23 + v26 + 8) = 0LL;
              *(_QWORD *)(v23 + v26) = v25 - 1;
            }
            v25 += 12;
            v23 += 32LL;
            --v24;
          }
          while ( v24 );
          v28 = 0LL;
          v29 = *(_DWORD *)(32LL * (v8 - 1) + v6[6] + 16);
        }
        else
        {
          v21 = (int *)(v4 + 16);
          *((_DWORD *)v4 + 4) = 0;
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                          (__int64)L"~MHz",
                                          (__int64)(v4 + 16));
          v28 = 0LL;
          if ( RegistryDwordValueNoDefault < 0 )
            *v21 = 0;
          v29 = *v21;
          if ( !*v21 )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              3u,
              0x1Eu,
              (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids);
            *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
            v10 = -1073741823;
            goto LABEL_16;
          }
          LODWORD(Size) = 1000 * v29;
        }
        v31 = v60;
        if ( (_DWORD)v60 )
        {
          v32 = 0;
          v33 = Size;
          v6[1] = *(_QWORD *)(a1 + 288);
          v6[2] = *(_QWORD *)(a1 + 304);
          v6[5] = a1 + 448;
          do
          {
            v60 = *(_QWORD *)(a1 + 472);
            v34 = v6[6] + 32LL * (v32 + v8);
            v35 = v60;
            v36 = v29 * *(_DWORD *)(v28 + v60 + 4) / 0x64u;
            *(_DWORD *)(v34 + 16) = v36;
            v37 = 100 * v36;
            LODWORD(v27) = 100 * v36 % *v21;
            *(_BYTE *)(v34 + 24) = v37 / *v21;
            *(_QWORD *)v34 = *(unsigned int *)(v28 + v35 + 16);
            *(_QWORD *)(v34 + 8) = *(unsigned int *)(v28 + v35 + 20);
            *(_BYTE *)(v34 + 25) = 2;
            *(_WORD *)(v34 + 26) = *(_WORD *)(v28 + v35 + 12);
            v38 = *(_DWORD *)(v28 + v35 + 8);
            if ( v38 )
            {
              *(_DWORD *)(v34 + 20) = v38;
            }
            else
            {
              LODWORD(v27) = v33 * *(_DWORD *)(v28 + v35 + 4) / 0x64u;
              *(_DWORD *)(v34 + 20) = (_DWORD)v27;
            }
            ++v32;
            v28 += 20LL;
          }
          while ( v32 < v31 );
          v9 = v54;
          LODWORD(v28) = 0;
        }
        v39 = 1;
        if ( v9 > 1 )
        {
          v27 = (_BYTE *)v6[6];
          while ( v27[32 * v39 + 24] )
          {
            if ( ++v39 >= v9 )
              goto LABEL_51;
          }
          v9 = v39;
        }
LABEL_51:
        *((_DWORD *)v6 + 14) = v9;
        if ( v9 <= v8 )
        {
          *((_DWORD *)v6 + 15) = v9;
          v40 = v9 - 1;
          *((_DWORD *)v6 + 16) = 0;
        }
        else
        {
          *((_DWORD *)v6 + 15) = v8;
          v40 = v8;
          *((_DWORD *)v6 + 16) = v9 - v8;
        }
        *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v40 + v6[6] + 24);
        *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[6] + 24);
        v41 = *(_QWORD *)(a1 + 320);
        if ( v41 )
          *((_QWORD *)v4 + 31) = v41;
        v42 = *((_QWORD *)v4 + 51);
        *(_QWORD *)(v42 + 8) = 100LL;
        if ( *(_QWORD *)(a1 + 312) )
        {
          v43 = PerfReadActualMasterCount;
          v19 = (*(_QWORD *)(a1 + 264) & 0x8000000000LL) == 0;
          v27 = PerfReadWrappingCounter;
          *(_WORD *)(v42 + 16) = 257;
          if ( !v19 )
            v43 = PerfReadWrappingCounter;
        }
        else
        {
          *(_WORD *)(v42 + 16) = 0;
          v43 = PerfStatesInstantaneousFrequency;
        }
        *(_QWORD *)v42 = v43;
        DisplayKernelPerfStates((__int64)v4, (char)v27, v28);
        v44 = *((_QWORD *)v4 + 52);
        v45 = (_QWORD *)*((_QWORD *)v4 + 53);
        ResetEnumerationContext(v57);
        v46 = EnumerateNextDevice((__int64)v57, &v60);
        v12 = v55;
        if ( !v46 )
        {
          v47 = v55 + 12;
          do
          {
            v48 = CalculatePercentageCap(v6, *(unsigned int *)(v60 + 432), *(unsigned int *)(v60 + 480));
            InitCommonPerfStateContext(v49, v47 - 12, v44, v48, v48 < 0x64 ? 2 : 0);
            *(_QWORD *)(v47 + 12) = v6;
            *(_DWORD *)v47 = 100;
            if ( *(_QWORD *)(a1 + 312) )
            {
              *v45 = v47 + 20;
              *(_QWORD *)(v47 + 68) = *(_QWORD *)(a1 + 312);
            }
            else
            {
              *v45 = v50;
            }
            ++v45;
            v47 += 96;
            v44 += 32LL;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v57, &v60) );
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v52 == 254 || PerfDomain == 1) )
          v4[11] = 1;
        if ( a2(v4, v53) >= 0 )
        {
          ResetEnumerationContext(v57);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v57, &v60) )
          {
            *(_QWORD *)(v60 + 216) = v12;
            v12 += 96;
          }
          v6 = 0LL;
          P = 0LL;
          v12 = 0LL;
        }
        v10 = 0;
        goto LABEL_77;
      }
    }
  }
  v10 = -1073741670;
LABEL_77:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
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
