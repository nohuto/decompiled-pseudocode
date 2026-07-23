/*
 * XREFs of RtlCreateHeap @ 0x1405D3930
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     RtlpPopulateListIndex @ 0x14014EF48 (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x14014F05C (RtlpInitializeHeapSegment.c)
 *     RtlpCreateHeapEncoding @ 0x14014F214 (RtlpCreateHeapEncoding.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14017DBC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017DC80 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x14017DD20 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140253ED0 (RtlpHeapExceptionFilter.c)
 *     RtlpHpConvertCreationFlags @ 0x140253FE4 (RtlpHpConvertCreationFlags.c)
 *     RtlpHeapHandleError @ 0x14025B59C (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x14025B5CC (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x14025BB90 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x14025BCE0 (RtlpLogHeapCreateEvent.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14025BF98 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpFixedHeapCreate @ 0x14025C100 (RtlpHpFixedHeapCreate.c)
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
  _DWORD *v34; // rcx
  void *v35; // rdi
  int v37; // eax
  NTSTATUS (__fastcall *CommitRoutine)(__int64, PVOID *, ULONG_PTR *); // rdx
  ULONG_PTR v39; // rcx
  unsigned __int64 v40; // rdi
  PVOID v41; // [rsp+40h] [rbp-1C8h] BYREF
  struct _ERESOURCE *v42; // [rsp+48h] [rbp-1C0h]
  ULONG v43; // [rsp+50h] [rbp-1B8h]
  ULONG_PTR InitialReserve; // [rsp+58h] [rbp-1B0h] BYREF
  int v45; // [rsp+60h] [rbp-1A8h]
  PVOID v46; // [rsp+68h] [rbp-1A0h] BYREF
  ULONG_PTR v47; // [rsp+70h] [rbp-198h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-190h] BYREF
  ULONG_PTR v49; // [rsp+80h] [rbp-188h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-180h] BYREF
  __int64 v51; // [rsp+90h] [rbp-178h]
  SIZE_T MaximumAllocationSize; // [rsp+98h] [rbp-170h]
  SIZE_T v53; // [rsp+A0h] [rbp-168h]
  SIZE_T v54; // [rsp+A8h] [rbp-160h]
  SIZE_T v55; // [rsp+B0h] [rbp-158h]
  SIZE_T v56; // [rsp+B8h] [rbp-150h]
  SIZE_T v57; // [rsp+C0h] [rbp-148h]
  struct _RTL_HEAP_PARAMETERS v58; // [rsp+D0h] [rbp-138h] BYREF
  PVOID MemoryInformation[3]; // [rsp+130h] [rbp-D8h] BYREF
  ULONG_PTR v60; // [rsp+148h] [rbp-C0h]
  int v61; // [rsp+150h] [rbp-B8h]
  char v62; // [rsp+154h] [rbp-B4h]
  char v63[16]; // [rsp+160h] [rbp-A8h] BYREF
  ULONG_PTR v64; // [rsp+170h] [rbp-98h]
  char SystemInformation[40]; // [rsp+180h] [rbp-88h] BYREF
  __int64 v66; // [rsp+1A8h] [rbp-60h]

  v9 = Flags;
  v51 = (__int64)HeapBase;
  v10 = (struct _ERESOURCE *)Lock;
  v42 = (struct _ERESOURCE *)Lock;
  RegionSize = (ULONG_PTR)Lock;
  v43 = NtGlobalFlag;
  v45 = 0;
  v41 = 0LL;
  v11 = 0LL;
  if ( (Flags & 0x100) != 0 )
  {
    if ( HeapBase && !Lock && (Flags & 2) == 0 )
    {
      v37 = RtlpHpConvertCreationFlags(Flags, NtGlobalFlag);
      CommitRoutine = (NTSTATUS (__fastcall *)(__int64, PVOID *, ULONG_PTR *))Parameters->CommitRoutine;
      if ( !CommitRoutine
        || (CommitSize = Parameters->InitialCommit) != 0
        && (ReserveSize = Parameters->InitialReserve) != 0
        && CommitSize <= ReserveSize )
      {
        v35 = RtlpHpFixedHeapCreate(HeapBase, CommitRoutine, ReserveSize, CommitSize, v37);
        goto LABEL_64;
      }
      goto LABEL_71;
    }
    goto LABEL_70;
  }
  if ( (Flags & 0x200) != 0 )
    goto LABEL_70;
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
  memset(&v58, 0, sizeof(v58));
  if ( Parameters && Parameters->Length == 96 )
    v58 = *Parameters;
  v12 = v9 | 0x20;
  if ( (v43 & 0x10) == 0 )
    v12 = v9;
  v13 = v12 | 0x40;
  if ( (v43 & 0x20) == 0 )
    v13 = v12;
  v14 = v13 | 0x80;
  if ( (v43 & 0x200000) == 0 )
    v14 = v13;
  SegmentReserve = v58.SegmentReserve;
  if ( !v58.SegmentReserve )
    SegmentReserve = qword_140400150;
  v53 = SegmentReserve;
  SegmentCommit = v58.SegmentCommit;
  if ( !v58.SegmentCommit )
    SegmentCommit = qword_140400148;
  v54 = SegmentCommit;
  DeCommitFreeBlockThreshold = v58.DeCommitFreeBlockThreshold;
  if ( !v58.DeCommitFreeBlockThreshold )
    DeCommitFreeBlockThreshold = qword_140400138;
  v55 = DeCommitFreeBlockThreshold;
  DeCommitTotalFreeThreshold = v58.DeCommitTotalFreeThreshold;
  if ( !v58.DeCommitTotalFreeThreshold )
    DeCommitTotalFreeThreshold = qword_140400140;
  v56 = DeCommitTotalFreeThreshold;
  v19 = qword_14038D550;
  if ( !qword_14038D550 )
  {
    qword_14038D558 = 0x10000LL;
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
      goto LABEL_71;
    v19 = v66;
    qword_14038D550 = v66;
  }
  MaximumAllocationSize = v58.MaximumAllocationSize;
  if ( !v58.MaximumAllocationSize )
    MaximumAllocationSize = v19 - qword_14038D558 - 4096;
  VirtualMemoryThreshold = v58.VirtualMemoryThreshold;
  if ( v58.VirtualMemoryThreshold - 1 > 0xFEFFF )
    VirtualMemoryThreshold = 1044480LL;
  v57 = VirtualMemoryThreshold;
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
  v47 = v21;
  if ( (v14 & 2) == 0 || HeapBase )
  {
    v51 = 0LL;
  }
  else
  {
    v51 = 4096LL;
    v45 = 2;
    if ( v22 - 4096 < v21 )
    {
      v22 = (v22 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      InitialReserve = v22;
    }
  }
  if ( !v21 || !v22 )
    goto LABEL_71;
  v43 = 672;
  v10 = v42;
  if ( (v14 & 1) != 0 )
  {
    if ( v42 )
      goto LABEL_70;
  }
  else if ( v42 )
  {
    v14 |= 0x80000000;
    v11 = v42;
  }
  else
  {
    v43 = 776;
  }
  v23 = v58.CommitRoutine;
  if ( HeapBase )
  {
    if ( v58.CommitRoutine )
    {
      if ( !v58.InitialCommit || !v58.InitialReserve || v58.InitialCommit > v58.InitialReserve || (v14 & 2) != 0 )
        goto LABEL_71;
      v46 = HeapBase;
      v24 = (char *)HeapBase + v58.InitialCommit;
      InitialReserve = v58.InitialReserve;
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
        goto LABEL_71;
      v24 = (char *)MemoryInformation[0];
      if ( MemoryInformation[0] != HeapBase || v61 == 0x10000 )
        goto LABEL_71;
      v25 = (char *)MemoryInformation[0];
      v46 = MemoryInformation[0];
      if ( v61 == 4096 )
      {
        if ( (v14 & 0x40000) != 0 && (v62 & 0x40) == 0 )
          goto LABEL_71;
        memset(MemoryInformation[0], 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v63, 0x20uLL, 0LL) < 0 )
          goto LABEL_71;
        InitialReserve = v64;
        v47 = v60;
        v25 = (char *)v46;
        v24 = (char *)v46 + v60;
      }
      else
      {
        InitialReserve = v60;
        v39 = v47;
        if ( v47 > v60 )
          v39 = v60;
        v47 = v39;
        if ( v39 < 0x2000 )
          goto LABEL_71;
      }
    }
    v45 |= 1u;
    v26 = (char *)HeapBase;
    v41 = HeapBase;
    goto LABEL_49;
  }
  BaseAddress = 0LL;
  v49 = 0LL;
  if ( v58.CommitRoutine )
  {
LABEL_70:
    v35 = 0LL;
    goto LABEL_65;
  }
  v49 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  RegionSize = InitialReserve + v49;
  if ( InitialReserve + v49 < InitialReserve )
  {
    RegionSize = InitialReserve;
    v49 = 0LL;
  }
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
    goto LABEL_71;
  v26 = (char *)BaseAddress;
  v41 = BaseAddress;
  InitialReserve = RegionSize;
  if ( v49 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v49, 0x8000u);
    v26 = (char *)BaseAddress + v49;
    v41 = (char *)BaseAddress + v49;
    InitialReserve = RegionSize - v49;
  }
  v25 = v26;
  v46 = v26;
  v24 = v26;
LABEL_49:
  if ( v25 == v24 )
  {
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v46, 0LL, &v47, 0x1000u, 4u) < 0 )
      goto LABEL_71;
    if ( (BYTE8(PerfGlobalGroupMask[0]) & 0x20) != 0 )
      RtlpLogHeapCommit((__int64)v41, (__int64)v46, v47, 1u);
    v24 += v47;
    v26 = (char *)v41;
  }
  v27 = (__int64)(v26 + 672);
  v28 = v43;
  if ( (NtGlobalFlag & 0x800) != 0 )
  {
    v40 = (unsigned __int64)(v26 + 679) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)v26 + 41) = v40;
    v28 += 2064;
    v27 = v40 + 2064;
    v14 |= 0x4000000u;
    v26 = (char *)v41;
  }
  v43 = (v28 + 15) & 0xFFFFFFF0;
  *((_WORD *)v26 + 4) = v43 >> 4;
  *((_BYTE *)v41 + 10) = 1;
  *((_BYTE *)v41 + 15) = 1;
  *((_DWORD *)v41 + 38) = -285217025;
  *((_DWORD *)v41 + 28) = v14 & 0xEFFFFFFF;
  *((_DWORD *)v41 + 36) = 0;
  memset((char *)v41 + 536, 0, 0x78uLL);
  RtlpCreateHeapEncoding((__int64)v41);
  *((_DWORD *)v41 + 29) = v14 & 0x6001007D;
  *((_WORD *)v41 + 105) = v27 - (_WORD)v41;
  *((_QWORD *)v41 + 27) = 0LL;
  v30 = (char *)v41 + 336;
  *((_QWORD *)v41 + 43) = (char *)v41 + 336;
  *v30 = v30;
  v31 = (char *)v41 + 272;
  *((_QWORD *)v41 + 35) = (char *)v41 + 272;
  *v31 = v31;
  v32 = (char *)v41 + 288;
  *((_QWORD *)v41 + 37) = (char *)v41 + 288;
  *v32 = v32;
  v33 = (char *)v41 + 240;
  *((_QWORD *)v41 + 31) = (char *)v41 + 240;
  *v33 = v33;
  if ( v11 || (v14 & 1) != 0 )
  {
LABEL_54:
    *((_QWORD *)v41 + 44) = v11;
    *((_DWORD *)v41 + 30) |= 0x80000000;
    if ( RtlpInitializeHeapSegment(
           (unsigned __int64)v41,
           (__int64)v41,
           v43 + 1104,
           v29,
           v45,
           (__int64)v46,
           v24,
           (ULONG_PTR)v46 + InitialReserve - v51) )
    {
      if ( HeapBase )
        memset((void *)v27, 0, 0x80uLL);
      *(_DWORD *)(v27 + 8) = 128;
      *(_QWORD *)(v27 + 40) = v27 + 56;
      *(_QWORD *)(v27 + 32) = (char *)v41 + 336;
      *(_QWORD *)(v27 + 48) = v27 + 72;
      RtlpPopulateListIndex((__int64)v41, v27);
      *((_WORD *)v41 + 104) = 0;
      *((_QWORD *)v41 + 20) = v53;
      *((_QWORD *)v41 + 21) = v54;
      *((_QWORD *)v41 + 22) = v55 >> 4;
      *((_QWORD *)v41 + 23) = v56 >> 4;
      *((_QWORD *)v41 + 25) = MaximumAllocationSize;
      *((_DWORD *)v41 + 37) = (v57 + 15) >> 4;
      *((_QWORD *)v41 + 45) = RtlpHeapKey ^ (unsigned __int64)v23;
      *((_DWORD *)v41 + 164) = 4;
      *((_QWORD *)v41 + 83) = 2088960LL;
      *((_QWORD *)v41 + 32) = 31LL;
      *((_QWORD *)v41 + 33) = -16LL;
      v34 = v41;
      if ( (*((_DWORD *)v41 + 28) & 0x20) != 0 )
      {
        *((_QWORD *)v41 + 32) += 16LL;
        v34 = v41;
      }
      if ( (BYTE8(PerfGlobalGroupMask[0]) & 0x20) != 0 )
      {
        RtlpLogHeapCreateEvent((__int64)v34, v14, InitialReserve, v47);
        v34 = v41;
      }
      if ( (BYTE8(PerfGlobalGroupMask[0]) & 0x20) != 0 )
      {
        RtlpHeapLogRangeCreate((__int64)v34, InitialReserve, v14);
        v34 = v41;
      }
      v34[30] &= ~0x80000000;
      v35 = v41;
      v41 = 0LL;
      v11 = 0LL;
      goto LABEL_64;
    }
    goto LABEL_71;
  }
  v11 = (struct _ERESOURCE *)v27;
  if ( ExInitializeResourceLite((PERESOURCE)v27) >= 0 )
  {
    v27 += 104LL;
    goto LABEL_54;
  }
  v11 = 0LL;
LABEL_71:
  v35 = 0LL;
LABEL_64:
  v10 = v42;
LABEL_65:
  if ( v11 && v11 != v10 )
    ExDeleteResourceLite(v11);
  if ( v41 && !HeapBase )
  {
    InitialReserve = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v41, &InitialReserve, 0x8000u);
  }
  return v35;
}
