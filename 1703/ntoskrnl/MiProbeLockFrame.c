/*
 * XREFs of MiProbeLockFrame @ 0x1400B3EF0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400B2BF0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockNonPagedPoolPte @ 0x1400A7D10 (MiLockNonPagedPoolPte.c)
 *     MiLockPageTablePage @ 0x1400B50F0 (MiLockPageTablePage.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1)
{
  unsigned __int64 v1; // rax
  bool v3; // bp
  bool v4; // zf
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // r9
  __int64 CurrentPrcb; // rdx
  ULONG_PTR v10; // r8
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG_PTR *v15; // r15
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int v18; // ebx
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

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 > qword_14036C290
    || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 64)
      || (Address = MiLocateAddress(*(_QWORD *)a1)) != 0
      && ((v27 = *(_DWORD *)(Address + 48) & 7, v27 == 6) || v27 == 1) )
    {
      result = MiReferenceIoPages(0, *(_QWORD *)(a1 + 112), 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 40) + 10LL) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_14036C9EC;
      }
    }
    else
    {
      ++dword_14036C9E8;
      return 3221225477LL;
    }
    return result;
  }
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 48) == 4;
  v28 = 17;
  if ( !v4
    || (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)a1)
    || (v6 = MiLockNonPagedPoolPte(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v28),
        *(_QWORD *)(a1 + 112) = (__int64)(v6 + 0x58000000000LL) / 48,
        !v6) )
  {
    v6 = 48LL * *(_QWORD *)(a1 + 112) - 0x58000000000LL;
    if ( *(PVOID *)(a1 + 80) == MmBadPointer )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v6);
      v28 = CurrentIrql;
    }
    else
    {
      v28 = 17;
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29);
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
      }
    }
  }
  v8 = *(unsigned __int8 *)(v6 + 34);
  if ( ((unsigned __int8)v8 & 7u) <= 1 || (CurrentPrcb = *(unsigned __int16 *)(v6 + 32), !(_WORD)CurrentPrcb) )
  {
    if ( v28 == 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v28);
    }
    ++dword_14036C9DC;
    return 3221225477LL;
  }
  v10 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v10 + 10) < 0
    && (v8 & 0x20) != 0
    && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && *(_QWORD *)v6
    && ((*(_QWORD *)(v6 + 40) >> 54) & 7) != 1 )
  {
    KeBugCheckEx(0x1Au, 0x61946uLL, v10, *(_QWORD *)(a1 + 112), 0LL);
  }
  if ( (unsigned __int16)CurrentPrcb >= 0x7FFFu )
    goto LABEL_67;
  v11 = *(_QWORD *)(v6 + 24);
  v12 = *(_QWORD *)(v6 + 40);
  if ( (v12 & 0x10000000000000LL) == 0 )
  {
    v11 &= 0x3FFFFFFFFFFFFFFFuLL;
    if ( (_WORD)CurrentPrcb == 1 )
    {
      if ( v11 )
        goto LABEL_27;
    }
    else if ( (_WORD)CurrentPrcb != 2 || !v11 )
    {
      goto LABEL_44;
    }
    if ( (v8 & 8) != 0 )
    {
LABEL_27:
      if ( (v12 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
      {
        v3 = 1;
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
        if ( v13 <= 0xFFFFF6BFFFFFFF78uLL && v13 >= 0xFFFFF68000000000uLL )
          v3 = ((*(unsigned __int8 *)(v6 + 35) >> 5) & 1) != 0;
      }
      v14 = (v12 >> 40) & 0x3FF;
      v15 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v14);
      if ( !v3 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v14), 1LL, 8LL) )
      {
        if ( v15 == &MiSystemPartition )
        {
          CurrentPrcb = (__int64)KeGetCurrentPrcb();
          v16 = *(_DWORD *)(CurrentPrcb + 24764);
          while ( v16 )
          {
            if ( v16 == -1 )
              break;
            v17 = v16;
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24764), v16 - 1, v16);
            if ( v17 == v16 )
              goto LABEL_44;
          }
        }
        v18 = MiChargePartitionResidentAvailable((__int64)v15, 1uLL, 0LL);
        if ( !v18 && v3 )
          MiReturnCommit(v15, 1LL);
        if ( v18 )
          goto LABEL_44;
      }
LABEL_67:
      if ( v28 == 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v28);
      }
      ++dword_14036C9E0;
      return 3221225633LL;
    }
  }
LABEL_44:
  ++*(_WORD *)(v6 + 32);
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v19 = *(_QWORD *)(v6 + 16);
    if ( (v19 & 0x400) == 0 && (v19 & 4) != 0 )
      *(_BYTE *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v6 + 40) >> 40) & 0x3FFLL)) + 706LL) = 1;
  }
  if ( v28 == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v28);
  }
  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v20 = *(_QWORD *)(v6 + 40);
    if ( ((v20 >> 54) & 7) != 1 )
    {
      v21 = v20 & 0xFFFFFFFFFLL;
      CurrentPrcb = 0xFFFFFFFFDLL;
      if ( (v20 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v22 = (v20 >> 57) & 1;
        if ( *(_QWORD *)(a1 + 120) != v21 )
        {
          if ( v22 )
          {
            v23 = 1LL;
            v24 = v6;
          }
          else
          {
            v24 = 48 * v21 - 0x58000000000LL;
            v23 = 2LL;
          }
          if ( !(unsigned int)MiLockPageTablePage(v24, v23) )
          {
            MiLockPageAtDpcInline(v6);
            MiRemoveLockedPageChargeAndDecRef(v6);
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_14036C9E4;
            return 3221225633LL;
          }
          *(_QWORD *)(a1 + 120) = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
          *(_WORD *)(*(_QWORD *)(a1 + 40) + 10LL) |= 0x100u;
        }
      }
    }
  }
  if ( *(char *)(*(_QWORD *)(a1 + 40) + 10LL) < 0
    && (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)MiGetPrototypePteDirect(
                                                                     *(_QWORD *)(v6 + 16),
                                                                     CurrentPrcb,
                                                                     v11,
                                                                     v8)
                                                      + 112LL));
  }
  return 0LL;
}
