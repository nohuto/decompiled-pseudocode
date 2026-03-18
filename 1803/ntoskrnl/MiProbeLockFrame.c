/*
 * XREFs of MiProbeLockFrame @ 0x140020C00
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140136C00 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPageTablePage @ 0x1400211A0 (MiLockPageTablePage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1400A4F70 (ExAcquireRundownProtectionCacheAware.c)
 *     MiLockNonPagedPoolPte @ 0x1400DC2A0 (MiLockNonPagedPoolPte.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiProbeLockFrame(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  char v8; // r8
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // r9
  bool v13; // bp
  unsigned __int64 v14; // rcx
  ULONG_PTR *v15; // r14
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v18; // ett
  int v19; // edi
  __int64 v20; // rbp
  __int64 v21; // rax
  char v22; // al
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 result; // rax
  __int64 Address; // rax
  int v29; // eax
  unsigned __int8 v30; // [rsp+80h] [rbp+8h]
  int v31; // [rsp+88h] [rbp+10h] BYREF

  v4 = a1[16];
  if ( v4 > qword_1403CB780
    || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !a1[10]
      || (Address = MiLocateAddress(*a1, a2, a3, a4)) != 0
      && ((v29 = *(_DWORD *)(Address + 48) & 7, v29 == 6) || v29 == 1) )
    {
      result = MiReferenceIoPages(0, a1[16], 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(a1[7] + 10) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_1403CBE7C;
      }
    }
    else
    {
      ++dword_1403CBE78;
      return 3221225477LL;
    }
    return result;
  }
  v30 = 17;
  if ( (a1[8] & 0xF0) != 0x40
    || (v6 = *a1, (unsigned int)MI_IS_PHYSICAL_ADDRESS(*a1))
    || (v7 = MiLockNonPagedPoolPte(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        v4 = (v7 + 0x58000000000LL) / 48,
        a1[16] = v4,
        !v7) )
  {
    v7 = 48 * v4 - 0x58000000000LL;
    if ( a1[12] )
    {
      v30 = 17;
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v31);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
    }
    else
    {
      v30 = MiLockPageInline(48 * v4 - 0x58000000000LL);
    }
  }
  v8 = *(_BYTE *)(v7 + 34);
  if ( (v8 & 7u) <= 1 || (v9 = *(_WORD *)(v7 + 32)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v30 != 17 )
      __writecr8(v30);
    ++dword_1403CBE6C;
    return 3221225477LL;
  }
  if ( v9 >= 0x7FFFu )
    goto LABEL_67;
  v10 = *(_QWORD *)(v7 + 40);
  v11 = 1;
  if ( (v10 & 0x10000000000000LL) == 0 )
  {
    v12 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 == 1 )
    {
      if ( v12 )
        goto LABEL_22;
    }
    else if ( v9 != 2 || !v12 )
    {
      goto LABEL_39;
    }
    if ( (v8 & 8) != 0 )
    {
LABEL_22:
      v13 = 0;
      if ( (v10 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v13 = 1;
      }
      else
      {
        v14 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
        if ( v14 <= 0xFFFFF6BFFFFFFF78uLL && v14 >= 0xFFFFF68000000000uLL )
          v13 = (*(_BYTE *)(v7 + 35) & 0x20) != 0;
      }
      v15 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * ((v10 >> 40) & 0x3FF));
      if ( !v13 || (unsigned int)MiChargeCommit(v15, 1LL, 8LL, v12) )
      {
        if ( v15 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( CachedResidentAvailable )
          {
            if ( CachedResidentAvailable == -1 )
              break;
            v18 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v18 == CachedResidentAvailable )
              goto LABEL_39;
          }
        }
        v19 = MiChargePartitionResidentAvailable(v15, 1LL, 0LL, v12);
        if ( !v19 && v13 )
          MiReturnCommit((__int64)v15, 1uLL);
        if ( v19 )
          goto LABEL_39;
      }
LABEL_67:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v30 != 17 )
        __writecr8(v30);
      ++dword_1403CBE70;
      return 3221225633LL;
    }
  }
LABEL_39:
  ++*(_WORD *)(v7 + 32);
  v20 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v21 = *(_QWORD *)(v7 + 16);
    if ( (v21 & 0x400) == 0 && (v21 & 4) != 0 )
      *(_BYTE *)(v20 + 659) = 1;
  }
  v22 = *(_BYTE *)(v7 + 34);
  if ( (v22 & 0x20) != 0 && (v22 & 8) == 0 && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v7 + 224LL));
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v30 != 17 )
    __writecr8(v30);
  if ( (a1[8] & 0xF0) == 0x10 )
  {
    v23 = *(_QWORD *)(v7 + 40);
    if ( ((v23 >> 54) & 7) != 1 )
    {
      v24 = v23 & 0xFFFFFFFFFLL;
      if ( (v23 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v25 = (v23 >> 57) & 1;
        if ( a1[17] != v24 )
        {
          if ( v25 )
          {
            v26 = v7;
          }
          else
          {
            v26 = 48 * v24 - 0x58000000000LL;
            v11 = 2;
          }
          if ( !(unsigned int)MiLockPageTablePage(v26, v11) )
          {
            MiLockPageAtDpcInline(v7);
            MiRemoveLockedPageChargeAndDecRef(v7);
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_1403CBE74;
            return 3221225633LL;
          }
          a1[17] = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL;
          *(_WORD *)(a1[7] + 10) |= 0x100u;
        }
      }
    }
  }
  if ( *(char *)(a1[7] + 10) < 0
    && (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v7 + 16)) + 112LL));
  }
  if ( (ULONG_PTR *)v20 != &MiSystemPartition )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v20 + 2064));
  return 0LL;
}
