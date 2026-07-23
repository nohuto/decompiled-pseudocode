/*
 * XREFs of RtlCreateHeap @ 0x18005AA80
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180048460 (RtlDetectHeapLeaks.c)
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 *     sub_1800FFB1C @ 0x1800FFB1C (sub_1800FFB1C.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_18005C6E0 @ 0x18005C6E0 (sub_18005C6E0.c)
 *     sub_18005C774 @ 0x18005C774 (sub_18005C774.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FC34C @ 0x1800FC34C (sub_1800FC34C.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 *     sub_1800FC3FC @ 0x1800FC3FC (sub_1800FC3FC.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE1FC @ 0x1800FE1FC (sub_1800FE1FC.c)
 *     sub_1800FFB1C @ 0x1800FFB1C (sub_1800FFB1C.c)
 *     sub_18010220C @ 0x18010220C (sub_18010220C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  _DWORD *v8; // rsi
  ULONG v9; // r15d
  _DWORD *v10; // rdi
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // esi
  struct _PEB *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  ULONG_PTR v20; // r9
  ULONG_PTR v21; // r8
  unsigned __int64 v22; // rcx
  unsigned int v23; // edi
  _RTL_CRITICAL_SECTION *v24; // rdx
  int v25; // esi
  __int64 v26; // rcx
  char *v27; // rdx
  char *v28; // r8
  char *v29; // r15
  __int64 v30; // rsi
  __int64 UserModeGlobalLogger; // rcx
  char *v32; // r13
  ULONG v33; // eax
  int v34; // r9d
  _DWORD *v35; // r10
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rcx
  _RTL_CRITICAL_SECTION *v46; // rcx
  unsigned int v48; // eax
  int v49; // ecx
  SIZE_T v50; // r10
  unsigned int v51; // edx
  int v52; // r8d
  int v53; // r9d
  int v54; // edx
  unsigned int v55; // r9d
  SIZE_T v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rax
  ULONG_PTR v59; // rcx
  int v60; // eax
  unsigned __int64 v61; // rcx
  unsigned __int16 v62; // ax
  __int64 v63; // r10
  PVOID HeapHandle; // [rsp+40h] [rbp-238h] BYREF
  unsigned __int64 v65; // [rsp+48h] [rbp-230h]
  ULONG NtGlobalFlag; // [rsp+50h] [rbp-228h]
  __int64 v67; // [rsp+58h] [rbp-220h]
  ULONG_PTR v68; // [rsp+60h] [rbp-218h] BYREF
  SIZE_T v69; // [rsp+68h] [rbp-210h]
  int v70; // [rsp+70h] [rbp-208h]
  ULONG_PTR v71; // [rsp+78h] [rbp-200h] BYREF
  PVOID v72; // [rsp+80h] [rbp-1F8h] BYREF
  SIZE_T v73; // [rsp+88h] [rbp-1F0h]
  __int64 v74; // [rsp+90h] [rbp-1E8h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp-1E0h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v77; // [rsp+B0h] [rbp-1C8h]
  PVOID v78; // [rsp+C8h] [rbp-1B0h]
  PVOID v79; // [rsp+D0h] [rbp-1A8h]
  PVOID MemoryInformation[3]; // [rsp+D8h] [rbp-1A0h] BYREF
  ULONG_PTR v81; // [rsp+F0h] [rbp-188h]
  int v82; // [rsp+F8h] [rbp-180h]
  char v83; // [rsp+FCh] [rbp-17Ch]
  __int128 v84; // [rsp+110h] [rbp-168h] BYREF
  char v85[16]; // [rsp+120h] [rbp-158h] BYREF
  ULONG_PTR v86; // [rsp+130h] [rbp-148h]
  _OWORD v87[6]; // [rsp+140h] [rbp-138h] BYREF
  _BYTE v88[80]; // [rsp+1A0h] [rbp-D8h] BYREF
  char SystemInformation[40]; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v90; // [rsp+218h] [rbp-60h]

  v73 = CommitSize;
  v69 = ReserveSize;
  v65 = (unsigned __int64)Lock;
  v78 = HeapBase;
  v79 = Lock;
  v8 = Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v70 = 0;
  HeapHandle = 0LL;
  v67 = 0LL;
  if ( dword_1801563E8 && !HeapBase && !Lock )
  {
    v10 = (_DWORD *)_guard_dispatch_icall_fptr();
    if ( v10 )
      goto LABEL_152;
    if ( Parameters != (PVOID)-1LL )
      goto LABEL_165;
    v8 = 0LL;
    CommitSize = v73;
    ReserveSize = v69;
  }
  v9 = Flags & 0xF1FFFFFF;
  v10 = 0LL;
  if ( (v9 & 0x100) != 0 )
  {
    if ( (v9 & 2) != 0 && !HeapBase && !ReserveSize && !CommitSize && !Lock )
    {
      if ( !v8 )
      {
        v10 = v88;
        goto LABEL_4;
      }
      v10 = v8;
      if ( (unsigned int)sub_18010220C(v8) )
        goto LABEL_4;
LABEL_165:
      v24 = 0LL;
      goto LABEL_166;
    }
LABEL_152:
    v24 = (_RTL_CRITICAL_SECTION *)Lock;
LABEL_96:
    v46 = 0LL;
    goto LABEL_97;
  }
  if ( (byte_18015D028 & 1) != 0 && (v9 & 2) != 0 && !HeapBase )
  {
    if ( !v8 )
      goto LABEL_119;
    if ( *((_QWORD *)v8 + 1) || *((_QWORD *)v8 + 2) || *((_QWORD *)v8 + 6) || (v60 = 1, *((_QWORD *)v8 + 9)) )
      v60 = 0;
    if ( v60 )
    {
LABEL_119:
      v10 = v88;
      if ( Lock )
        v10 = 0LL;
    }
  }
LABEL_4:
  if ( v10 )
  {
    if ( v10 == (_DWORD *)v88 )
    {
      memset(v10, 0, 0x50uLL);
      *v10 = 5242881;
      v10[3] = 1;
      v10[4] = -1;
      v48 = 1;
      v49 = -1;
    }
    else
    {
      v48 = v10[3];
      v49 = v10[4];
    }
    v77 = xmmword_18015A790;
    _BitScanReverse(&v48, v48);
    BYTE1(v77) = v48;
    if ( v49 != -1 )
      BYTE2(v77) = v10[4] + 1;
    *((_QWORD *)&v77 + 1) = *((_QWORD *)v10 + 3);
    v50 = v73;
    if ( v69 )
      v50 = v69;
    v51 = v9 & 1 | 0x80000000;
    if ( (v9 & 4) == 0 )
      v51 = v9 & 1;
    v52 = v51 | 2;
    if ( (v9 & 8) == 0 )
      v52 = v51;
    v53 = v52 | 0x20000000;
    if ( (NtGlobalFlag & 0x1000) == 0 && (v9 & 0x8000000) == 0 )
      v53 = v52;
    v54 = v53 | 0x10000000;
    if ( (NtGlobalFlag & 0x10) == 0 && (v9 & 0x20) == 0 )
      v54 = v53;
    v55 = v54 | 0x40000000;
    if ( (v9 & 0x40000) == 0 )
      v55 = v54;
    v84 = v77;
    v56 = v50;
    if ( v73 <= v50 )
      v56 = v73;
    v57 = v55;
    LODWORD(v57) = v55 | 0x2000000;
    if ( (v9 & 0x10) == 0 )
      v57 = v55;
    v58 = sub_18005D87C(v57, v50, v56, &v84);
    v10 = (_DWORD *)v58;
    if ( v58 )
    {
      sub_18002A46C(v58, 0, 1, 0);
      if ( !*((_WORD *)v10 + 30) )
      {
        sub_18005F8D0(v10);
        v10 = 0LL;
      }
    }
    goto LABEL_152;
  }
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( dword_18015D450 >= 2 )
    {
      if ( (v9 & 0xFFF80C00) == 0 )
        goto LABEL_9;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      sub_1800FC3E4(2LL);
    }
    if ( (v9 & 0xFFF80C00) != 0 )
      v9 &= 0x7F3FFu;
  }
LABEL_9:
  memset(v87, 0, sizeof(v87));
  if ( v8 && *v8 == 96 )
  {
    v87[0] = *(_OWORD *)v8;
    v87[1] = *((_OWORD *)v8 + 1);
    v87[2] = *((_OWORD *)v8 + 2);
    v87[3] = *((_OWORD *)v8 + 3);
    v87[4] = *((_OWORD *)v8 + 4);
    v87[5] = *((_OWORD *)v8 + 5);
  }
  v11 = v9 | 0x20;
  if ( (NtGlobalFlag & 0x10) == 0 )
    v11 = v9;
  v12 = v11 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v12 = v11;
  v13 = v12 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v13 = v12;
  v14 = v13 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v14 = v13;
  v15 = v14 | 0x20000000;
  if ( (NtGlobalFlag & 0x80) == 0 )
    v15 = v14;
  v16 = v15 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v16 = v15;
  v17 = NtCurrentPeb();
  if ( !*((_QWORD *)&v87[0] + 1) )
    *((_QWORD *)&v87[0] + 1) = v17->HeapSegmentReserve;
  if ( !*(_QWORD *)&v87[1] )
    *(_QWORD *)&v87[1] = v17->HeapSegmentCommit;
  if ( !*((_QWORD *)&v87[1] + 1) )
    *((_QWORD *)&v87[1] + 1) = v17->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v87[2] )
    *(_QWORD *)&v87[2] = v17->HeapDeCommitTotalFreeThreshold;
  v18 = qword_18015D018;
  if ( !qword_18015D018 )
  {
    qword_18015D020 = 0x10000LL;
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
    {
LABEL_159:
      v24 = (_RTL_CRITICAL_SECTION *)v65;
LABEL_166:
      v10 = 0LL;
      goto LABEL_96;
    }
    v18 = v90;
    qword_18015D018 = v90;
  }
  if ( !*((_QWORD *)&v87[2] + 1) )
    *((_QWORD *)&v87[2] + 1) = v18 - qword_18015D020 - 4096;
  v19 = *(_QWORD *)&v87[3];
  if ( (unsigned __int64)(*(_QWORD *)&v87[3] - 1LL) > 0xFEFFF )
    v19 = 1044480LL;
  *(_QWORD *)&v87[3] = v19;
  if ( v73 )
    v20 = (v73 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v20 = 0x2000LL;
  v71 = v20;
  if ( v69 )
    v21 = (v69 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v21 = (v20 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v68 = v21;
  v22 = v20;
  if ( v20 > v21 )
  {
    v20 = v21;
    v71 = v21;
    v22 = v21;
  }
  if ( (v16 & 2) == 0 || HeapBase )
  {
    v73 = 0LL;
  }
  else
  {
    v73 = 4096LL;
    v70 = 2;
    if ( v21 - 4096 < v22 )
    {
      v21 = (v21 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v68 = v21;
    }
  }
  if ( !v22 || !v21 )
    goto LABEL_159;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return (PVOID)sub_1800FFB1C(v16, HeapBase, v21, v20, Lock, v87);
  NtGlobalFlag = 672;
  v23 = v16;
  v24 = (_RTL_CRITICAL_SECTION *)v65;
  if ( (v16 & 1) != 0 )
  {
    if ( Lock )
      goto LABEL_166;
  }
  else
  {
    v67 = v65 & -(__int64)(Lock != 0LL);
    v23 = v16 | 0x80000000;
    if ( !v65 )
      v23 = v16;
    NtGlobalFlag = v65 != 0 ? 672 : 712;
  }
  if ( HeapBase )
  {
    if ( *((_QWORD *)&v87[4] + 1) )
    {
      if ( !*((_QWORD *)&v87[3] + 1)
        || !*(_QWORD *)&v87[4]
        || *((_QWORD *)&v87[3] + 1) > *(_QWORD *)&v87[4]
        || (v23 & 2) != 0 )
      {
        goto LABEL_192;
      }
      v72 = HeapBase;
      v29 = (char *)HeapBase + *((_QWORD *)&v87[3] + 1);
      v68 = *(_QWORD *)&v87[4];
      memset(HeapBase, 0, 0x1000uLL);
      v28 = (char *)HeapBase;
    }
    else
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             HeapBase,
             MemoryBasicInformation,
             MemoryInformation,
             0x30uLL,
             0LL) < 0 )
        goto LABEL_193;
      v29 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v82 == 0x10000 )
        goto LABEL_193;
      v28 = (char *)MemoryInformation[0];
      v72 = MemoryInformation[0];
      if ( v82 == 4096 )
      {
        if ( (v23 & 0x40000) != 0 && (v83 & 0x40) == 0 )
          goto LABEL_193;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v85, 0x20uLL, 0LL) < 0 )
          goto LABEL_193;
        v68 = v86;
        v71 = v81;
        v28 = (char *)v72;
        v29 = (char *)v72 + v81;
      }
      else
      {
        v68 = v81;
        v59 = v71;
        if ( v71 > v81 )
          v59 = v81;
        v71 = v59;
        if ( v59 < 0x2000 )
          goto LABEL_193;
      }
    }
    v70 |= 1u;
    v27 = (char *)HeapBase;
    HeapHandle = HeapBase;
    v25 = v23 & 0x40000;
    goto LABEL_60;
  }
  BaseAddress = 0LL;
  v74 = 0LL;
  if ( *((_QWORD *)&v87[4] + 1) )
  {
LABEL_192:
    v10 = 0LL;
    v46 = (_RTL_CRITICAL_SECTION *)v67;
    goto LABEL_97;
  }
  v74 = (sub_18005C774(v22, v65, v21, v20) & 0x1F) << 16;
  RegionSize[0] = v68 + v74;
  if ( v68 + v74 < v68 )
  {
    RegionSize[0] = v68;
    v74 = 0LL;
  }
  v25 = v23 & 0x40000;
  if ( ZwAllocateVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         RegionSize,
         0x2000u,
         (v23 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_193;
  v27 = (char *)BaseAddress;
  HeapHandle = BaseAddress;
  v68 = RegionSize[0];
  if ( v74 )
  {
    sub_18005CD8C(v26, &BaseAddress, &v74, 0x8000LL);
    v27 = (char *)BaseAddress + v74;
    HeapHandle = (char *)BaseAddress + v74;
    v68 = RegionSize[0] - v74;
  }
  v28 = v27;
  v72 = v27;
  v29 = v27;
LABEL_60:
  if ( v28 == v29 )
  {
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v72, 0LL, &v71, 0x1000u, v25 != 0 ? 64 : 4) < 0 )
      goto LABEL_193;
    v30 = 2147353472LL;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE0A4(HeapHandle, v72, v71, 1LL);
    v29 += v71;
    v27 = (char *)HeapHandle;
  }
  else
  {
    v30 = 2147353472LL;
  }
  v69 = (SIZE_T)(v27 + 672);
  v32 = v27 + 672;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v61 = (unsigned __int64)(v27 + 679) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)HeapHandle + 41) = v61;
    v33 = NtGlobalFlag + 2064;
    v32 = (char *)(v61 + 2064);
    v23 |= 0x4000000u;
    LOWORD(v69) = v61 + 2064;
  }
  else
  {
    v33 = NtGlobalFlag;
  }
  NtGlobalFlag = (v33 + 15) & 0xFFFFFFF0;
  *((_WORD *)HeapHandle + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)HeapHandle + 10) = 1;
  *((_BYTE *)HeapHandle + 15) = 1;
  *((_DWORD *)HeapHandle + 38) = -285217025;
  *((_DWORD *)HeapHandle + 28) = v23 & 0xEFFFFFFF;
  *((_DWORD *)HeapHandle + 36) = 0;
  memset((char *)HeapHandle + 536, 0, 0x78uLL);
  sub_18005C6E0(HeapHandle);
  *((_DWORD *)HeapHandle + 154) = 1;
  v35 = HeapHandle;
  if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
  {
    v62 = sub_1800FC34C(sub_1800FF100);
    *(_DWORD *)(v63 + 144) = v62;
    *((_DWORD *)HeapHandle + 28) &= ~0x40u;
    v35 = HeapHandle;
  }
  v35[29] = v23 & 0x6001007D;
  *((_WORD *)HeapHandle + 105) = v69 - (_WORD)HeapHandle;
  *((_QWORD *)HeapHandle + 27) = 0LL;
  v36 = (char *)HeapHandle + 336;
  *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
  *v36 = v36;
  v37 = (char *)HeapHandle + 272;
  *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
  *v37 = v37;
  v38 = (char *)HeapHandle + 288;
  *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
  *v38 = v38;
  v39 = (char *)HeapHandle + 240;
  *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
  *v39 = v39;
  if ( !v67 && (v23 & 1) == 0 )
  {
    if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v32, 0, 0x10000000u) >= 0 )
    {
      v67 = (__int64)v32;
      v32 += 40;
      goto LABEL_74;
    }
    goto LABEL_159;
  }
LABEL_74:
  *((_QWORD *)HeapHandle + 44) = v67;
  *((_DWORD *)HeapHandle + 30) |= 0x80000000;
  if ( (unsigned __int8)sub_18005C4D8(
                          (int)HeapHandle,
                          (int)HeapHandle,
                          NtGlobalFlag + 1104,
                          v34,
                          v70,
                          (__int64)v72,
                          v29,
                          (__int64)v72 + v68 - v73) )
  {
    if ( HeapBase )
      memset(v32, 0, 0x80uLL);
    *((_DWORD *)v32 + 2) = 128;
    *((_QWORD *)v32 + 5) = v32 + 56;
    *((_QWORD *)v32 + 4) = (char *)HeapHandle + 336;
    *((_QWORD *)v32 + 6) = v32 + 72;
    sub_18005B7B4(HeapHandle, v32);
    *((_WORD *)HeapHandle + 104) = 0;
    *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v87[0] + 1);
    *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v87[1];
    *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v87[1] + 1) >> 4;
    *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v87[2] >> 4;
    *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v87[2] + 1);
    *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v87[3] + 15LL) >> 4;
    *((_QWORD *)HeapHandle + 45) = qword_18015D758 ^ *((_QWORD *)&v87[4] + 1);
    *((_DWORD *)HeapHandle + 164) = 4;
    *((_QWORD *)HeapHandle + 83) = 2088960LL;
    if ( (dword_18015D42C & 1) != 0 )
      *((_DWORD *)HeapHandle + 30) = 1;
    *((_QWORD *)HeapHandle + 32) = 31LL;
    *((_QWORD *)HeapHandle + 33) = -16LL;
    v40 = HeapHandle;
    if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
    {
      *((_QWORD *)HeapHandle + 32) += 16LL;
      v40 = HeapHandle;
    }
    v40[47] = 0LL;
    *((_WORD *)HeapHandle + 192) = 0;
    *((_BYTE *)HeapHandle + 386) = 0;
    *((_BYTE *)HeapHandle + 387) = 0;
    *((_QWORD *)HeapHandle + 40) = 0LL;
    if ( (v23 & 3) != 2 || (dword_18015D42C & 1) != 0 )
    {
LABEL_84:
      sub_18002A46C((__int64)HeapHandle, 0, 1, 0);
      if ( *((_WORD *)HeapHandle + 104) )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v42 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v42 = 2147353472LL;
        if ( *(_BYTE *)v42 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v30 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          sub_1800FE1FC((_DWORD)HeapHandle, v23, v68, v71, *(unsigned __int8 *)v30);
        }
        v43 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v44 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        else
          v44 = 2147353482LL;
        if ( *(_BYTE *)v44 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v43 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
          sub_1800FE1FC((_DWORD)HeapHandle, v23, v68, v71, *(unsigned __int8 *)v43);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v45 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
        else
          v45 = 2147353480LL;
        if ( *(_BYTE *)v45 )
          sub_1800FC3FC(HeapHandle, v68, v23);
        *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
        *((_QWORD *)HeapHandle + 46) = 0LL;
        v10 = HeapHandle;
        HeapHandle = 0LL;
        v24 = (_RTL_CRITICAL_SECTION *)v65;
        goto LABEL_96;
      }
      goto LABEL_193;
    }
    *((_QWORD *)HeapHandle + 49) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
    v41 = *((_QWORD *)HeapHandle + 49);
    if ( v41 )
    {
      *(_BYTE *)(v41 - 1) = 1;
      *((_WORD *)HeapHandle + 200) = 128;
      goto LABEL_84;
    }
  }
LABEL_193:
  v10 = 0LL;
  v46 = (_RTL_CRITICAL_SECTION *)v67;
  v24 = (_RTL_CRITICAL_SECTION *)v65;
LABEL_97:
  if ( v46 && v46 != v24 )
    RtlDeleteCriticalSection(v46);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v68 = 0LL;
      sub_18005CD8C(v46, &HeapHandle, &v68, 0x8000LL);
    }
  }
  return v10;
}
