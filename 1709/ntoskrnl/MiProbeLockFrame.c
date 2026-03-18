/*
 * XREFs of MiProbeLockFrame @ 0x1400BDD10
 * Callers:
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140100140 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiLockNonPagedPoolPte @ 0x14002F5F4 (MiLockNonPagedPoolPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPageTablePage @ 0x1400BE2E0 (MiLockPageTablePage.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 *a1)
{
  unsigned __int64 v1; // rax
  bool v3; // zf
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int16 v7; // dx
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // bp
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG_PTR *v14; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v17; // ett
  int v18; // edi
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 Address; // rax
  int v27; // eax
  unsigned __int8 v28; // [rsp+80h] [rbp+8h] BYREF
  int v29; // [rsp+88h] [rbp+10h] BYREF

  v1 = a1[14];
  if ( v1 > qword_1403885E0
    || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !a1[8]
      || (Address = MiLocateAddress(*a1)) != 0 && ((v27 = *(_DWORD *)(Address + 48) & 7, v27 == 6) || v27 == 1) )
    {
      result = MiReferenceIoPages(0, a1[14], 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(a1[5] + 10) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_140388BE4;
      }
    }
    else
    {
      ++dword_140388BE0;
      return 3221225477LL;
    }
    return result;
  }
  v3 = *((_DWORD *)a1 + 12) == 4;
  v28 = 17;
  if ( !v3
    || (v4 = *a1, (unsigned int)MI_IS_PHYSICAL_ADDRESS(*a1))
    || (v5 = MiLockNonPagedPoolPte((__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), &v28),
        a1[14] = (v5 + 0x58000000000LL) / 48,
        !v5) )
  {
    v5 = 48 * a1[14] - 0x58000000000LL;
    if ( (PVOID)a1[10] == MmBadPointer )
    {
      v28 = MiLockPageInline(48 * a1[14] - 0x58000000000LL);
    }
    else
    {
      v28 = 17;
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
    }
  }
  v6 = *(unsigned __int8 *)(v5 + 34);
  if ( ((unsigned __int8)v6 & 7u) <= 1 || (v7 = *(_WORD *)(v5 + 32)) == 0 )
  {
    if ( v28 == 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v28);
    }
    ++dword_140388BD4;
    return 3221225477LL;
  }
  v8 = a1[5];
  if ( *(char *)(v8 + 10) < 0
    && (v6 & 0x20) != 0
    && (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && *(_QWORD *)v5 != 32LL
    && ((*(_QWORD *)(v5 + 40) >> 54) & 7) != 1 )
  {
    KeBugCheckEx(0x1Au, 0x61946uLL, v8, a1[14], 0LL);
  }
  if ( v7 >= 0x7FFFu )
    goto LABEL_67;
  v9 = *(_QWORD *)(v5 + 40);
  if ( (v9 & 0x10000000000000LL) == 0 )
  {
    v10 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v7 == 1 )
    {
      if ( v10 )
        goto LABEL_27;
    }
    else if ( v7 != 2 || !v10 )
    {
      goto LABEL_44;
    }
    if ( (v6 & 8) != 0 )
    {
LABEL_27:
      v11 = 0;
      if ( (v9 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v5 + 16) & 0x400LL) != 0 )
      {
        v11 = 1;
      }
      else
      {
        v12 = *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL;
        if ( v12 <= 0xFFFFF6BFFFFFFF78uLL && v12 >= 0xFFFFF68000000000uLL )
          v11 = (*(_BYTE *)(v5 + 35) & 0x20) != 0;
      }
      v13 = (v9 >> 40) & 0x3FF;
      v14 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v13);
      if ( !v11 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * v13), 1uLL, 8LL, v6) )
      {
        if ( v14 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( CachedResidentAvailable )
          {
            if ( CachedResidentAvailable == -1 )
              break;
            v17 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v17 == CachedResidentAvailable )
              goto LABEL_44;
          }
        }
        v18 = MiChargePartitionResidentAvailable(v14);
        if ( !v18 && v11 )
          MiReturnCommit((__int64)v14, 1uLL);
        if ( v18 )
          goto LABEL_44;
      }
LABEL_67:
      if ( v28 == 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v28);
      }
      ++dword_140388BD8;
      return 3221225633LL;
    }
  }
LABEL_44:
  ++*(_WORD *)(v5 + 32);
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v19 = *(_QWORD *)(v5 + 16);
    if ( (v19 & 0x400) == 0 && (v19 & 4) != 0 )
      *(_BYTE *)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL)) + 659LL) = 1;
  }
  if ( v28 == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v28);
  }
  if ( *((_DWORD *)a1 + 12) == 1 )
  {
    v20 = *(_QWORD *)(v5 + 40);
    if ( ((v20 >> 54) & 7) != 1 )
    {
      v21 = v20 & 0xFFFFFFFFFLL;
      if ( (v20 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v22 = (v20 >> 57) & 1;
        if ( a1[15] != v21 )
        {
          if ( v22 )
          {
            v23 = 1LL;
            v24 = v5;
          }
          else
          {
            v24 = 48 * v21 - 0x58000000000LL;
            v23 = 2LL;
          }
          if ( !(unsigned int)MiLockPageTablePage(v24, v23) )
          {
            MiLockPageAtDpcInline(v5);
            MiRemoveLockedPageChargeAndDecRef(v5);
            _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_140388BDC;
            return 3221225633LL;
          }
          a1[15] = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL;
          *(_WORD *)(a1[5] + 10) |= 0x100u;
        }
      }
    }
  }
  if ( *(char *)(a1[5] + 10) < 0
    && (*(_QWORD *)(v5 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(v5 + 16) & 0x400LL) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v5 + 16)) + 112LL));
  }
  return 0LL;
}
