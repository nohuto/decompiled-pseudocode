/*
 * XREFs of InitPerfStatesInternal @ 0x1C0023DF4
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C0024620 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C002B600 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     DisplayKernelPerfStates @ 0x1C0005724 (DisplayKernelPerfStates.c)
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     GetPerfDomain @ 0x1C0021708 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0026600 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  unsigned int v3; // ecx
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
  int v15; // r12d
  char *v16; // rax
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  void *v20; // rax
  int *v21; // r12
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r10
  _DWORD *v25; // r15
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r10d
  unsigned int v29; // r15d
  unsigned int v30; // r11d
  int v31; // r14d
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // rax
  _QWORD *v42; // r14
  int v43; // eax
  __int64 v44; // r10
  char *v45; // r11
  int v46; // ecx
  unsigned int v47; // r8d
  __int64 v48; // rdx
  unsigned int v49; // r8d
  int v50; // eax
  unsigned int v52; // [rsp+30h] [rbp-48h]
  int v53; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-40h]
  char *v55; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h]
  __int64 v57[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v58; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall *v59)(char *, _QWORD); // [rsp+C8h] [rbp+50h]
  unsigned int v60; // [rsp+D0h] [rbp+58h]
  size_t Size; // [rsp+D8h] [rbp+60h]

  v59 = a2;
  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  v60 = 0;
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
    v60 = v3;
  }
  v9 = v3 + v8;
  v54 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  LODWORD(v58) = GetPerfDomain((_QWORD *)a1, (__int64)v57, &v53);
  Size = (unsigned int)(96 * v58);
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
        v15 = (32 * v58 + 439) & 0xFFFFFFF8;
        v52 = (v15 + 31) & 0xFFFFFFF8;
        LODWORD(Size) = v52 + 8 * v58;
        v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Size, 0x72637250u);
        v4 = v16;
        if ( !v16 )
        {
          v10 = -1073741670;
LABEL_16:
          v12 = v55;
          goto LABEL_79;
        }
        memset(v16, 0, (unsigned int)Size);
        if ( *(_BYTE *)(a1 + 1105) )
          *((_QWORD *)v4 + 48) = PepParkPreference;
        if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
        {
          *((_QWORD *)v4 + 49) = PepParkMask;
          *((_QWORD *)v4 + 50) = PepPerfCheckComplete;
          *((_QWORD *)v4 + 8) = *(_QWORD *)(a1 + 1088);
        }
        *((_DWORD *)v4 + 3) = v58;
        *(_DWORD *)v4 = 49;
        *((_QWORD *)v4 + 52) = v4 + 432;
        *((_DWORD *)v4 + 8) = 1;
        *((_QWORD *)v4 + 51) = &v4[v15];
        *((_WORD *)v4 + 3) = 257;
        *((_QWORD *)v4 + 53) = &v4[v52];
        v18 = v53;
        *((_WORD *)v4 + 2) = v53;
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
          LODWORD(v58) = v22;
          v23 = 0LL;
          v24 = v8;
          v25 = v5 + 3;
          do
          {
            v26 = v6[6];
            HIDWORD(v27) = 0;
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
          v28 = *(_DWORD *)(32LL * (v8 - 1) + v6[6] + 16);
        }
        else
        {
          v21 = (int *)(v4 + 16);
          *((_DWORD *)v4 + 4) = 0;
          if ( (int)GetRegistryDwordValueNoDefault(
                      L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                      L"~MHz",
                      v4 + 16,
                      v17) < 0 )
            *v21 = 0;
          v28 = *v21;
          if ( !*v21 )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              3u,
              0x1Eu,
              (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids);
            *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
            v10 = -1073741823;
            goto LABEL_16;
          }
          LODWORD(v58) = 1000 * v28;
        }
        v29 = v60;
        if ( v60 )
        {
          v30 = 0;
          v6[1] = *(_QWORD *)(a1 + 288);
          v6[2] = *(_QWORD *)(a1 + 304);
          v6[5] = a1 + 448;
          v31 = v58;
          v26 = 0LL;
          do
          {
            v58 = *(_QWORD *)(a1 + 472);
            v32 = v6[6] + 32LL * (v30 + v8);
            v33 = v58;
            v34 = v28 * *(_DWORD *)(v26 + v58 + 4) / 0x64u;
            *(_DWORD *)(v32 + 16) = v34;
            v35 = 100 * v34;
            v27 = v34;
            LODWORD(v27) = 100 * v34 % *v21;
            *(_BYTE *)(v32 + 24) = v35 / *v21;
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
              v27 = v31 * *(_DWORD *)(v26 + v33 + 4) / 0x64u;
              *(_DWORD *)(v32 + 20) = v27;
            }
            ++v30;
            v26 += 20LL;
          }
          while ( v30 < v29 );
          v9 = v54;
        }
        v37 = 1;
        if ( v9 > 1 )
        {
          v27 = v6[6];
          while ( *(_BYTE *)(32LL * v37 + v27 + 24) )
          {
            if ( ++v37 >= v9 )
              goto LABEL_50;
          }
          v9 = v37;
        }
LABEL_50:
        *((_DWORD *)v6 + 14) = v9;
        if ( v9 <= v8 )
        {
          *((_DWORD *)v6 + 16) = 0;
          v38 = v9 - 1;
          *((_DWORD *)v6 + 15) = v9;
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
        *(_DWORD *)(v40 + 12) = 0;
        *(_DWORD *)(v40 + 8) = 100;
        if ( *(_QWORD *)(a1 + 312) )
        {
          v41 = PerfReadActualMasterCount;
          v19 = (*(_QWORD *)(a1 + 264) & 0x8000000000LL) == 0;
          v27 = (__int64)PerfReadWrappingCounter;
          *(_WORD *)(v40 + 16) = 257;
          if ( !v19 )
            v41 = PerfReadWrappingCounter;
        }
        else
        {
          *(_WORD *)(v40 + 16) = 0;
          v41 = PerfStatesInstantaneousFrequency;
        }
        *(_QWORD *)v40 = v41;
        DisplayKernelPerfStates((__int64)v4, v27, v26);
        v42 = (_QWORD *)*((_QWORD *)v4 + 53);
        ResetEnumerationContext(v57);
        v43 = EnumerateNextDevice((__int64)v57, &v58);
        v12 = v55;
        if ( !v43 )
        {
          v45 = v55 + 12;
          do
          {
            v46 = *((_DWORD *)v6 + 15);
            v47 = 0;
            v48 = v58;
            if ( !v46 || (v47 = *(_DWORD *)(v58 + 432), v47 == v46 - 1) )
            {
              if ( *((_DWORD *)v6 + 16) )
                v47 = v46 + *(_DWORD *)(v58 + 480);
            }
            v49 = *(unsigned __int8 *)(32LL * v47 + v6[6] + 24);
            *(_QWORD *)(v45 - 12) = v58;
            *(_QWORD *)(v44 + 8) = v45 - 12;
            if ( *(_BYTE *)(v48 + 78) )
            {
              v50 = *(_DWORD *)(v48 + 80);
              *(_BYTE *)(v44 + 28) = 1;
            }
            else
            {
              v50 = *(_DWORD *)(v48 + 56);
            }
            *(_DWORD *)v44 = v50;
            *(_DWORD *)(v44 + 20) = *(_DWORD *)(v48 + 704);
            *(_DWORD *)(v44 + 16) = v49;
            *(_DWORD *)(v44 + 24) = v49 < 0x64 ? 2 : 0;
            *(_QWORD *)(v45 + 12) = v6;
            *(_DWORD *)v45 = 100;
            if ( *(_QWORD *)(a1 + 312) )
            {
              *v42 = v45 + 20;
              *(_QWORD *)(v45 + 68) = *(_QWORD *)(a1 + 312);
            }
            else
            {
              *v42 = v45 - 12;
            }
            ++v42;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v57, &v58) );
        }
        if ( v59(v4, (unsigned int)Size) >= 0 )
        {
          ResetEnumerationContext(v57);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v57, &v58) )
          {
            *(_QWORD *)(v58 + 216) = v12;
            v12 += 96;
          }
          v6 = 0LL;
          P = 0LL;
          v12 = 0LL;
        }
        v10 = 0;
        goto LABEL_79;
      }
    }
  }
  v10 = -1073741670;
LABEL_79:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
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
