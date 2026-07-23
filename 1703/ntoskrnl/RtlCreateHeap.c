/*
 * XREFs of RtlCreateHeap @ 0x1405735D0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     RtlpPopulateListIndex @ 0x1401353EC (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x1401354FC (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x1401356B4 (RtlpCreateHeapEncoding.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x14017E3A0 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x14023E0B8 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14023E1CC (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHeapHandleError @ 0x1402441A4 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1402441D4 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x140244798 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x1402448E8 (RtlpLogHeapCreateEvent.c)
 *     RtlpHpFixedHeapCreate @ 0x140244D50 (RtlpHpFixedHeapCreate.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  ULONG v9; // edi
  struct _ERESOURCE *v10; // rax
  struct _ERESOURCE *v11; // r12
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  SIZE_T SegmentReserve; // rcx
  SIZE_T SegmentCommit; // rcx
  SIZE_T DeCommitFreeBlockThreshold; // rcx
  SIZE_T DeCommitTotalFreeThreshold; // rcx
  __int64 v19; // rax
  SIZE_T VirtualMemoryThreshold; // rcx
  SIZE_T v21; // rdx
  SIZE_T v22; // rcx
  PRTL_HEAP_COMMIT_ROUTINE v23; // r13
  char *v24; // r15
  char *v25; // r8
  char *v26; // rdx
  __int64 v27; // rdi
  ULONG v28; // eax
  __int64 v29; // r9
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  unsigned __int64 v34; // r8
  _DWORD *v35; // rcx
  void *v36; // rdi
  ULONG v38; // ecx
  unsigned int v39; // edx
  int v40; // r8d
  int v41; // r9d
  int v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  NTSTATUS (__fastcall *CommitRoutine)(__int64, PVOID *, ULONG_PTR *); // rdx
  ULONG_PTR v47; // rcx
  unsigned __int64 v48; // rdi
  PVOID v49; // [rsp+40h] [rbp-1C8h] BYREF
  struct _ERESOURCE *v50; // [rsp+48h] [rbp-1C0h]
  ULONG v51; // [rsp+50h] [rbp-1B8h]
  ULONG_PTR InitialReserve; // [rsp+58h] [rbp-1B0h] BYREF
  int v53; // [rsp+60h] [rbp-1A8h]
  PVOID v54; // [rsp+68h] [rbp-1A0h] BYREF
  ULONG_PTR v55; // [rsp+70h] [rbp-198h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-190h] BYREF
  ULONG_PTR v57; // [rsp+80h] [rbp-188h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-180h] BYREF
  __int64 v59; // [rsp+90h] [rbp-178h]
  SIZE_T MaximumAllocationSize; // [rsp+98h] [rbp-170h]
  SIZE_T v61; // [rsp+A0h] [rbp-168h]
  SIZE_T v62; // [rsp+A8h] [rbp-160h]
  SIZE_T v63; // [rsp+B0h] [rbp-158h]
  SIZE_T v64; // [rsp+B8h] [rbp-150h]
  SIZE_T v65; // [rsp+C0h] [rbp-148h]
  struct _RTL_HEAP_PARAMETERS v66; // [rsp+D0h] [rbp-138h] BYREF
  PVOID MemoryInformation[3]; // [rsp+130h] [rbp-D8h] BYREF
  ULONG_PTR v68; // [rsp+148h] [rbp-C0h]
  int v69; // [rsp+150h] [rbp-B8h]
  char v70; // [rsp+154h] [rbp-B4h]
  char v71[16]; // [rsp+160h] [rbp-A8h] BYREF
  ULONG_PTR v72; // [rsp+170h] [rbp-98h]
  char SystemInformation[40]; // [rsp+180h] [rbp-88h] BYREF
  __int64 v74; // [rsp+1A8h] [rbp-60h]

  v9 = Flags;
  v59 = (__int64)HeapBase;
  v10 = (struct _ERESOURCE *)Lock;
  v50 = (struct _ERESOURCE *)Lock;
  RegionSize = (ULONG_PTR)Lock;
  v51 = NtGlobalFlag;
  v53 = 0;
  v49 = 0LL;
  v11 = 0LL;
  if ( (Flags & 0x100) != 0 )
  {
    if ( HeapBase && !Lock && (Flags & 2) == 0 )
    {
      v38 = Flags & 1;
      v39 = v38 | 0x80000000;
      if ( (v9 & 4) == 0 )
        v39 = v38;
      v40 = v39 | 2;
      if ( (v9 & 8) == 0 )
        v40 = v39;
      v41 = v40 | 0x20000000;
      if ( (NtGlobalFlag & 0x1000) == 0 && (v9 & 0x8000000) == 0 )
        v41 = v40;
      v42 = v41 | 0x10000000;
      if ( (NtGlobalFlag & 0x10) == 0 && (v9 & 0x20) == 0 )
        v42 = v41;
      v43 = v42 | 0x40000000;
      if ( (v9 & 0x40000) == 0 )
        v43 = v42;
      v44 = v43 | 0x2000000;
      if ( (v9 & 0x10) == 0 )
        v44 = v43;
      v45 = v44 | 0x8000000;
      if ( (v9 & 0x200) == 0 )
        v45 = v44;
      CommitRoutine = (NTSTATUS (__fastcall *)(__int64, PVOID *, ULONG_PTR *))Parameters->CommitRoutine;
      if ( !CommitRoutine
        || (CommitSize = Parameters->InitialCommit) != 0
        && (ReserveSize = Parameters->InitialReserve) != 0
        && CommitSize <= ReserveSize )
      {
        v36 = RtlpHpFixedHeapCreate(HeapBase, CommitRoutine, ReserveSize, CommitSize, v45);
        goto LABEL_61;
      }
      goto LABEL_68;
    }
    goto LABEL_67;
  }
  if ( (Flags & 0x200) != 0 )
    goto LABEL_67;
  if ( (Flags & 0x10000000) == 0 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( (Flags & 0xFFF80C00) != 0 )
      {
        DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
        RtlpHeapHandleError();
      }
    }
    else if ( (Flags & 0xFFF80C00) != 0 )
    {
      v9 = Flags & 0x7F3FF;
    }
  }
  memset(&v66, 0, sizeof(v66));
  if ( Parameters && Parameters->Length == 96 )
    v66 = *Parameters;
  v12 = v9 | 0x20;
  if ( (v51 & 0x10) == 0 )
    v12 = v9;
  v13 = v12 | 0x40;
  if ( (v51 & 0x20) == 0 )
    v13 = v12;
  v14 = v13 | 0x80;
  if ( (v51 & 0x200000) == 0 )
    v14 = v13;
  SegmentReserve = v66.SegmentReserve;
  if ( !v66.SegmentReserve )
    SegmentReserve = qword_1403E3150;
  v61 = SegmentReserve;
  SegmentCommit = v66.SegmentCommit;
  if ( !v66.SegmentCommit )
    SegmentCommit = qword_1403E3148;
  v62 = SegmentCommit;
  DeCommitFreeBlockThreshold = v66.DeCommitFreeBlockThreshold;
  if ( !v66.DeCommitFreeBlockThreshold )
    DeCommitFreeBlockThreshold = qword_1403E3138;
  v63 = DeCommitFreeBlockThreshold;
  DeCommitTotalFreeThreshold = v66.DeCommitTotalFreeThreshold;
  if ( !v66.DeCommitTotalFreeThreshold )
    DeCommitTotalFreeThreshold = qword_1403E3140;
  v64 = DeCommitTotalFreeThreshold;
  v19 = qword_14036E118;
  if ( !qword_14036E118 )
  {
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
      goto LABEL_68;
    v19 = v74;
    qword_14036E118 = v74;
  }
  MaximumAllocationSize = v66.MaximumAllocationSize;
  if ( !v66.MaximumAllocationSize )
    MaximumAllocationSize = v19 - 69632;
  VirtualMemoryThreshold = v66.VirtualMemoryThreshold;
  if ( v66.VirtualMemoryThreshold - 1 > 0xFEFFF )
    VirtualMemoryThreshold = 1044480LL;
  v65 = VirtualMemoryThreshold;
  if ( CommitSize )
    v21 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v21 = 0x2000LL;
  if ( ReserveSize )
    v22 = (ReserveSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v22 = (v21 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  InitialReserve = v22;
  if ( v21 > v22 )
    v21 = v22;
  v55 = v21;
  if ( (v14 & 2) == 0 || HeapBase )
  {
    v59 = 0LL;
  }
  else
  {
    v59 = 4096LL;
    v53 = 2;
    if ( v22 - 4096 < v21 )
    {
      v22 = (v22 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      InitialReserve = v22;
    }
  }
  if ( !v21 || !v22 )
    goto LABEL_68;
  v51 = 672;
  v10 = v50;
  if ( (v14 & 1) != 0 )
  {
    if ( v50 )
      goto LABEL_67;
  }
  else if ( v50 )
  {
    v14 |= 0x80000000;
    v11 = v50;
  }
  else
  {
    v51 = 776;
  }
  v23 = v66.CommitRoutine;
  if ( HeapBase )
  {
    if ( v66.CommitRoutine )
    {
      if ( !v66.InitialCommit || !v66.InitialReserve || v66.InitialCommit > v66.InitialReserve || (v14 & 2) != 0 )
        goto LABEL_68;
      v54 = HeapBase;
      v24 = (char *)HeapBase + v66.InitialCommit;
      InitialReserve = v66.InitialReserve;
      memset(HeapBase, 0, 0x1000uLL);
      v25 = (char *)HeapBase;
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
        goto LABEL_68;
      v24 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v69 == 0x10000 )
        goto LABEL_68;
      v25 = (char *)MemoryInformation[0];
      v54 = MemoryInformation[0];
      if ( v69 == 4096 )
      {
        if ( (v14 & 0x40000) != 0 && (v70 & 0x40) == 0 )
          goto LABEL_68;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v71, 0x20uLL, 0LL) < 0 )
          goto LABEL_68;
        InitialReserve = v72;
        v55 = v68;
        v25 = (char *)v54;
        v24 = (char *)v54 + v68;
      }
      else
      {
        InitialReserve = v68;
        v47 = v55;
        if ( v55 > v68 )
          v47 = v68;
        v55 = v47;
        if ( v47 < 0x2000 )
          goto LABEL_68;
      }
    }
    v53 |= 1u;
    v26 = (char *)HeapBase;
    v49 = HeapBase;
    goto LABEL_49;
  }
  BaseAddress = 0LL;
  v57 = 0LL;
  if ( v66.CommitRoutine )
  {
LABEL_67:
    v36 = 0LL;
    goto LABEL_62;
  }
  v57 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  RegionSize = InitialReserve + v57;
  if ( InitialReserve + v57 < InitialReserve )
  {
    RegionSize = InitialReserve;
    v57 = 0LL;
  }
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
    goto LABEL_68;
  v26 = (char *)BaseAddress;
  v49 = BaseAddress;
  InitialReserve = RegionSize;
  if ( v57 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v57, 0x8000u);
    v26 = (char *)BaseAddress + v57;
    v49 = (char *)BaseAddress + v57;
    InitialReserve = RegionSize - v57;
  }
  v25 = v26;
  v54 = v26;
  v24 = v26;
LABEL_49:
  if ( v25 == v24 )
  {
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v54, 0LL, &v55, 0x1000u, 4u) < 0 )
      goto LABEL_68;
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapCommit((__int64)v49, (__int64)v54, v55, 1u);
    v24 += v55;
    v26 = (char *)v49;
  }
  v27 = (__int64)(v26 + 672);
  v28 = v51;
  if ( (NtGlobalFlag & 0x800) != 0 )
  {
    v48 = (unsigned __int64)(v26 + 679) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)v26 + 41) = v48;
    v28 += 2064;
    v27 = v48 + 2064;
    v14 |= 0x4000000u;
    v26 = (char *)v49;
  }
  v51 = (v28 + 15) & 0xFFFFFFF0;
  *((_WORD *)v26 + 4) = v51 >> 4;
  *((_BYTE *)v49 + 10) = 1;
  *((_BYTE *)v49 + 15) = 1;
  *((_DWORD *)v49 + 38) = -285217025;
  *((_DWORD *)v49 + 28) = v14 & 0xEFFFFFFF;
  *((_DWORD *)v49 + 36) = 0;
  memset((char *)v49 + 536, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)v49);
  *((_DWORD *)v49 + 29) = v14 & 0x6001007D;
  *((_WORD *)v49 + 105) = v27 - (_WORD)v49;
  *((_QWORD *)v49 + 27) = 0LL;
  v30 = (char *)v49 + 336;
  *((_QWORD *)v49 + 43) = (char *)v49 + 336;
  *v30 = v30;
  v31 = (char *)v49 + 272;
  *((_QWORD *)v49 + 35) = (char *)v49 + 272;
  *v31 = v31;
  v32 = (char *)v49 + 288;
  *((_QWORD *)v49 + 37) = (char *)v49 + 288;
  *v32 = v32;
  v33 = (char *)v49 + 240;
  *((_QWORD *)v49 + 31) = (char *)v49 + 240;
  *v33 = v33;
  if ( v11 || (v14 & 1) != 0 )
  {
LABEL_54:
    *((_QWORD *)v49 + 44) = v11;
    *((_DWORD *)v49 + 30) |= 0x80000000;
    if ( RtlpInitializeHeapSegment(
           (unsigned __int64)v49,
           (__int64)v49,
           v51 + 1104,
           v29,
           v53,
           (__int64)v54,
           v24,
           (ULONG_PTR)v54 + InitialReserve - v59) )
    {
      if ( HeapBase )
        memset((void *)v27, 0, 0x80uLL);
      *(_DWORD *)(v27 + 8) = 128;
      *(_QWORD *)(v27 + 40) = v27 + 56;
      *(_QWORD *)(v27 + 32) = (char *)v49 + 336;
      *(_QWORD *)(v27 + 48) = v27 + 72;
      RtlpPopulateListIndex((__int64)v49, v27, v34);
      *((_WORD *)v49 + 104) = 0;
      *((_QWORD *)v49 + 20) = v61;
      *((_QWORD *)v49 + 21) = v62;
      *((_QWORD *)v49 + 22) = v63 >> 4;
      *((_QWORD *)v49 + 23) = v64 >> 4;
      *((_QWORD *)v49 + 25) = MaximumAllocationSize;
      *((_DWORD *)v49 + 37) = (v65 + 15) >> 4;
      *((_QWORD *)v49 + 45) = RtlpHeapKey ^ (unsigned __int64)v23;
      *((_DWORD *)v49 + 164) = 4;
      *((_QWORD *)v49 + 83) = 2088960LL;
      *((_QWORD *)v49 + 32) = 31LL;
      *((_QWORD *)v49 + 33) = -16LL;
      v35 = v49;
      if ( (*((_DWORD *)v49 + 28) & 0x20) != 0 )
      {
        *((_QWORD *)v49 + 32) += 16LL;
        v35 = v49;
      }
      if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      {
        RtlpLogHeapCreateEvent((__int64)v35, v14, InitialReserve, v55);
        v35 = v49;
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        {
          RtlpHeapLogRangeCreate((__int64)v49, InitialReserve, v14);
          v35 = v49;
        }
      }
      v35[30] &= ~0x80000000;
      v36 = v49;
      v49 = 0LL;
      v11 = 0LL;
      goto LABEL_61;
    }
    goto LABEL_68;
  }
  v11 = (struct _ERESOURCE *)v27;
  if ( ExInitializeResourceLite((PERESOURCE)v27) >= 0 )
  {
    v27 += 104LL;
    goto LABEL_54;
  }
  v11 = 0LL;
LABEL_68:
  v36 = 0LL;
LABEL_61:
  v10 = v50;
LABEL_62:
  if ( v11 && v11 != v10 )
    ExDeleteResourceLite(v11);
  if ( v49 && !HeapBase )
  {
    InitialReserve = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v49, &InitialReserve, 0x8000u);
  }
  return v36;
}
