/*
 * XREFs of InitPerfStatesInternal @ 0x1C0026F88
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C00277D0 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C002EA90 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     DisplayKernelPerfStates @ 0x1C000587C (DisplayKernelPerfStates.c)
 *     ResetEnumerationContext @ 0x1C0009224 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0009240 (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     GetPerfDomain @ 0x1C00248A4 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0029830 (GetRegistryDwordValueNoDefault.c)
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
  unsigned int v15; // r13d
  char *v16; // rax
  __int64 v17; // r9
  char *v18; // rax
  int v19; // eax
  bool v20; // zf
  void *v21; // rax
  int *v22; // r13
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r10
  _DWORD *v26; // r15
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // r10d
  unsigned int v30; // r15d
  unsigned int v31; // r11d
  int v32; // r14d
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // eax
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  void *v42; // rax
  _QWORD *v43; // r14
  int v44; // eax
  __int64 v45; // r10
  char *v46; // r11
  int v47; // ecx
  unsigned int v48; // r8d
  __int64 v49; // rdx
  unsigned int v50; // r8d
  int v51; // eax
  int v53; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v54; // [rsp+34h] [rbp-44h]
  unsigned int v55; // [rsp+38h] [rbp-40h]
  char *v56; // [rsp+40h] [rbp-38h]
  PVOID P; // [rsp+48h] [rbp-30h]
  __int64 v58[5]; // [rsp+50h] [rbp-28h] BYREF
  int PerfDomain; // [rsp+C0h] [rbp+48h]
  __int64 v61; // [rsp+D0h] [rbp+58h] BYREF
  size_t Size; // [rsp+D8h] [rbp+60h]

  v3 = 0;
  P = 0LL;
  v4 = 0LL;
  LODWORD(v61) = 0;
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
    LODWORD(v61) = v3;
  }
  v9 = v3 + v8;
  v55 = v3 + v8;
  if ( !(v3 + v8) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v58, &v53);
  Size = (unsigned int)(96 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v56 = PoolWithTag;
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
        v54 = Size + 8 * PerfDomain;
        v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v54, 0x72637250u);
        v4 = v16;
        if ( !v16 )
        {
          v10 = -1073741670;
LABEL_16:
          v12 = v56;
          goto LABEL_83;
        }
        memset(v16, 0, v54);
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
        v18 = &v4[(unsigned int)Size];
        *((_WORD *)v4 + 3) = 257;
        *((_QWORD *)v4 + 53) = v18;
        v19 = v53;
        *((_WORD *)v4 + 2) = v53;
        v4[40] = 0;
        *((_DWORD *)v4 + 5) = 100;
        *((_QWORD *)v4 + 42) = PerfControlPTStates;
        if ( v19 == 252 || (v20 = v19 == 1, v21 = PerfControlPTStatesHidden, v20) )
          v21 = PerfControlPTStatesHiddenSwAll;
        *((_QWORD *)v4 + 43) = v21;
        *((_QWORD *)v4 + 41) = PerfSelectionPTStates;
        v6[6] = P;
        *((_QWORD *)v4 + 6) = 0LL;
        *((_QWORD *)v4 + 7) = 100LL;
        if ( v8 && v5 )
        {
          v22 = (int *)(v4 + 16);
          *((_QWORD *)v4 + 33) = *(_QWORD *)(a1 + 328);
          *((_QWORD *)v4 + 34) = *(_QWORD *)(a1 + 336);
          *((_DWORD *)v4 + 4) = v5[2];
          v23 = v5[12 * v8 - 9];
          *v6 = *(_QWORD *)(a1 + 280);
          v6[3] = *(_QWORD *)(a1 + 296);
          v6[4] = a1 + 392;
          *((_QWORD *)v4 + 7) = v5[2];
          *((_QWORD *)v4 + 6) = v5[12 * v8 - 10];
          LODWORD(Size) = v23;
          v24 = 0LL;
          v25 = v8;
          v26 = v5 + 3;
          do
          {
            v27 = v6[6];
            HIDWORD(v28) = 0;
            *(_DWORD *)(v24 + v27 + 16) = *(v26 - 1);
            LODWORD(v28) = 100 * *(v26 - 1) % (unsigned int)*v22;
            *(_BYTE *)(v24 + v27 + 24) = 100 * *(v26 - 1) / (unsigned int)*v22;
            *(_QWORD *)(v24 + v27) = *(_QWORD *)(v26 + 3);
            *(_DWORD *)(v24 + v27 + 20) = *v26;
            *(_QWORD *)(v24 + v27 + 8) = *(_QWORD *)(v26 + 5);
            *(_BYTE *)(v24 + v27 + 25) = 1;
            *(_WORD *)(v24 + v27 + 26) = *((_WORD *)v26 + 2);
            if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
            {
              *(_QWORD *)(v24 + v27 + 8) = 0LL;
              *(_QWORD *)(v24 + v27) = v26 - 1;
            }
            v26 += 12;
            v24 += 32LL;
            --v25;
          }
          while ( v25 );
          v29 = *(_DWORD *)(32LL * (v8 - 1) + v6[6] + 16);
        }
        else
        {
          v22 = (int *)(v4 + 16);
          *((_DWORD *)v4 + 4) = 0;
          if ( (int)GetRegistryDwordValueNoDefault(
                      L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                      L"~MHz",
                      v4 + 16,
                      v17) < 0 )
            *v22 = 0;
          v29 = *v22;
          if ( !*v22 )
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
        v30 = v61;
        if ( (_DWORD)v61 )
        {
          v31 = 0;
          v6[1] = *(_QWORD *)(a1 + 288);
          v6[2] = *(_QWORD *)(a1 + 304);
          v6[5] = a1 + 448;
          v32 = Size;
          v27 = 0LL;
          do
          {
            v61 = *(_QWORD *)(a1 + 472);
            v33 = v6[6] + 32LL * (v31 + v8);
            v34 = v61;
            v35 = v29 * *(_DWORD *)(v27 + v61 + 4) / 0x64u;
            *(_DWORD *)(v33 + 16) = v35;
            v36 = 100 * v35;
            v28 = v35;
            LODWORD(v28) = 100 * v35 % *v22;
            *(_BYTE *)(v33 + 24) = v36 / *v22;
            *(_QWORD *)v33 = *(unsigned int *)(v27 + v34 + 16);
            *(_QWORD *)(v33 + 8) = *(unsigned int *)(v27 + v34 + 20);
            *(_BYTE *)(v33 + 25) = 2;
            *(_WORD *)(v33 + 26) = *(_WORD *)(v27 + v34 + 12);
            v37 = *(_DWORD *)(v27 + v34 + 8);
            if ( v37 )
            {
              *(_DWORD *)(v33 + 20) = v37;
            }
            else
            {
              v28 = v32 * *(_DWORD *)(v27 + v34 + 4) / 0x64u;
              *(_DWORD *)(v33 + 20) = v28;
            }
            ++v31;
            v27 += 20LL;
          }
          while ( v31 < v30 );
          v9 = v55;
        }
        v38 = 1;
        if ( v9 > 1 )
        {
          v28 = v6[6];
          while ( *(_BYTE *)(32LL * v38 + v28 + 24) )
          {
            if ( ++v38 >= v9 )
              goto LABEL_50;
          }
          v9 = v38;
        }
LABEL_50:
        *((_DWORD *)v6 + 14) = v9;
        if ( v9 <= v8 )
        {
          *((_DWORD *)v6 + 16) = 0;
          v39 = v9 - 1;
          *((_DWORD *)v6 + 15) = v9;
        }
        else
        {
          *((_DWORD *)v6 + 15) = v8;
          v39 = v8;
          *((_DWORD *)v6 + 16) = v9 - v8;
        }
        *((_DWORD *)v4 + 6) = *(unsigned __int8 *)(32 * v39 + v6[6] + 24);
        *((_DWORD *)v4 + 7) = *(unsigned __int8 *)(32LL * (v9 - 1) + v6[6] + 24);
        v40 = *(_QWORD *)(a1 + 320);
        if ( v40 )
          *((_QWORD *)v4 + 31) = v40;
        v41 = *((_QWORD *)v4 + 51);
        *(_DWORD *)(v41 + 12) = 0;
        *(_DWORD *)(v41 + 8) = 100;
        if ( *(_QWORD *)(a1 + 312) )
        {
          v42 = PerfReadActualMasterCount;
          v20 = (*(_QWORD *)(a1 + 264) & 0x8000000000LL) == 0;
          v28 = (__int64)PerfReadWrappingCounter;
          *(_WORD *)(v41 + 16) = 257;
          if ( !v20 )
            v42 = PerfReadWrappingCounter;
        }
        else
        {
          *(_WORD *)(v41 + 16) = 0;
          v42 = PerfStatesInstantaneousFrequency;
        }
        *(_QWORD *)v41 = v42;
        DisplayKernelPerfStates((__int64)v4, v28, v27);
        v43 = (_QWORD *)*((_QWORD *)v4 + 53);
        ResetEnumerationContext(v58);
        v44 = EnumerateNextDevice((__int64)v58, &v61);
        v12 = v56;
        if ( !v44 )
        {
          v46 = v56 + 12;
          do
          {
            v47 = *((_DWORD *)v6 + 15);
            v48 = 0;
            v49 = v61;
            if ( !v47 || (v48 = *(_DWORD *)(v61 + 432), v48 == v47 - 1) )
            {
              if ( *((_DWORD *)v6 + 16) )
                v48 = v47 + *(_DWORD *)(v61 + 480);
            }
            v50 = *(unsigned __int8 *)(32LL * v48 + v6[6] + 24);
            *(_QWORD *)(v46 - 12) = v61;
            *(_QWORD *)(v45 + 8) = v46 - 12;
            if ( *(_BYTE *)(v49 + 78) )
            {
              v51 = *(_DWORD *)(v49 + 80);
              *(_BYTE *)(v45 + 28) = 1;
            }
            else
            {
              v51 = *(_DWORD *)(v49 + 56);
            }
            *(_DWORD *)v45 = v51;
            *(_DWORD *)(v45 + 20) = *(_DWORD *)(v49 + 704);
            *(_DWORD *)(v45 + 16) = v50;
            *(_DWORD *)(v45 + 24) = v50 < 0x64 ? 2 : 0;
            *(_QWORD *)(v46 + 12) = v6;
            *(_DWORD *)v46 = 100;
            if ( *(_QWORD *)(a1 + 312) )
            {
              *v43 = v46 + 20;
              *(_QWORD *)(v46 + 68) = *(_QWORD *)(a1 + 312);
            }
            else
            {
              *v43 = v46 - 12;
            }
            ++v43;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v58, &v61) );
        }
        if ( (*(_DWORD *)(a1 + 264) & 0x400000) != 0 && (v53 == 254 || PerfDomain == 1) )
          v4[11] = 1;
        if ( a2(v4, v54) >= 0 )
        {
          ResetEnumerationContext(v58);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v58, &v61) )
          {
            *(_QWORD *)(v61 + 216) = v12;
            v12 += 96;
          }
          v6 = 0LL;
          P = 0LL;
          v12 = 0LL;
        }
        v10 = 0;
        goto LABEL_83;
      }
    }
  }
  v10 = -1073741670;
LABEL_83:
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
