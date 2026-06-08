/*
 * XREFs of InitLegacyPccInternal @ 0x1C00082B4
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C00082A0 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C002B640 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     DisplayKernelPerfStates @ 0x1C0005724 (DisplayKernelPerfStates.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     GetPerfDomain @ 0x1C0021708 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C0023DB8 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitLegacyPccInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  unsigned int *v2; // r13
  _QWORD *v3; // rbx
  int v5; // edi
  int PerfDomain; // r15d
  SIZE_T v7; // r14
  __int64 **PoolWithTag; // rax
  __int64 **v9; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  PVOID v12; // rax
  char *v13; // r9
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  unsigned int *v21; // rdx
  __int64 v22; // r10
  int v23; // r9d
  int v24; // r10d
  int v25; // r11d
  __int64 **v26; // r10
  __int64 *v27; // r11
  __int64 *v28; // rax
  __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h]
  __int64 v32; // [rsp+40h] [rbp-10h]
  char v33; // [rsp+48h] [rbp-8h]
  __int64 v35; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (unsigned int *)qword_1C00118B0;
  v3 = 0LL;
  if ( qword_1C0011908 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00113E8,
      0LL);
    PerfDomain = GetPerfDomain(a1, &v30, &v35);
    v7 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = (__int64 **)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
    v9 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v7),
          v10 = (32 * PerfDomain + 439) & 0xFFFFFFF8,
          v11 = (v10 + 31) & 0xFFFFFFF8,
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11 + 8 * PerfDomain, 0x72637250u),
          (v3 = v12) != 0LL) )
    {
      memset(v12, 0, v11 + 8 * PerfDomain);
      if ( *(_BYTE *)(a1 + 1105) )
        v3[48] = PepParkPreference;
      if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
      {
        v3[49] = PepParkMask;
        v3[50] = PepPerfCheckComplete;
        v3[8] = *(_QWORD *)(a1 + 1088);
      }
      *(_DWORD *)v3 = 49;
      v3[52] = v3 + 54;
      *((_DWORD *)v3 + 3) = PerfDomain;
      *((_DWORD *)v3 + 8) = 1;
      *((_DWORD *)v3 + 1) = 65537;
      *((_BYTE *)v3 + 40) = 0;
      v13 = (char *)v3 + v10;
      v3[51] = v13;
      v3[53] = (char *)v3 + v11;
      v3[42] = PerfControlLegacyPcc;
      v3[43] = PerfControlLegacyPcc;
      v3[41] = PerfSelectionLegacyPcc;
      v3[45] = PerfInitiateLegacyPcc;
      v3[47] = PerfCommitLegacyPcc;
      v14 = v2[7];
      *((_DWORD *)v3 + 4) = v14;
      *((_DWORD *)v3 + 5) = 100;
      HIDWORD(v17) = 0;
      v15 = 100 * v2[9] / (unsigned int)v14;
      *((_DWORD *)v3 + 6) = v15;
      LODWORD(v17) = 100 * v2[8] % (unsigned int)v14;
      v16 = 100 * v2[8] / (unsigned int)v14;
      if ( !v15 )
        v15 = 1;
      *((_DWORD *)v3 + 6) = v15;
      if ( !v16 )
        v16 = 1;
      *((_DWORD *)v3 + 7) = v16;
      v3[6] = v2[9];
      v3[7] = v2[7];
      v18 = *(_QWORD *)(a1 + 320);
      if ( v18 )
        v3[31] = v18;
      v3[33] = *(_QWORD *)(a1 + 328);
      v3[34] = *(_QWORD *)(a1 + 336);
      if ( dword_1C00118AC )
      {
        v17 = 0x989680 % ((unsigned int)dword_1C00118AC >> 1);
        *((_DWORD *)v3 + 9) = 0x989680 / ((unsigned int)dword_1C00118AC >> 1);
      }
      *((_QWORD *)v13 + 1) = 100LL;
      *(_QWORD *)v13 = LegacyPccInstantaneousFrequency;
      *((_WORD *)v13 + 8) = 0;
      *((_DWORD *)v3 + 8) = 1;
      DisplayKernelPerfStates((__int64)v3, v17, v14);
      v19 = (_QWORD *)v3[53];
      if ( v32 )
        v33 = 0;
      else
        v31 = v30;
      while ( !(unsigned int)EnumerateNextDevice(&v30, &v35) )
      {
        InitCommonPerfStateContext(v35, v24, v25, 100, 0);
        v21 = *(unsigned int **)(v20 + 552);
        *(_QWORD *)v22 = v20;
        *(_DWORD *)(v22 + 48) = v23;
        *(_QWORD *)(v22 + 32) = (char *)v2 + *v21;
        *(_QWORD *)(v22 + 40) = (char *)v2 + v21[1];
        *v19++ = v22;
      }
      v5 = a2(v3, v11 + 8 * PerfDomain);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C0011900);
        if ( v32 )
          v33 = 0;
        else
          v31 = v30;
        if ( !(unsigned int)EnumerateNextDevice(&v30, &v35) )
        {
          v26 = v9 + 1;
          v27 = &qword_1C0011438;
          do
          {
            *(_QWORD *)(v35 + 232) = v26 - 1;
            v28 = (__int64 *)qword_1C0011440;
            if ( *(__int64 **)qword_1C0011440 != v27 )
              __fastfail(3u);
            *v26 = v27;
            v26[1] = v28;
            *v28 = (__int64)v26;
            qword_1C0011440 = (__int64)v26;
          }
          while ( !(unsigned int)EnumerateNextDevice(&v30, &v35) );
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C0011900);
        v9 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00113E8);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
