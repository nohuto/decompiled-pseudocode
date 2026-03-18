/*
 * XREFs of MiDbgMarkPfnModified @ 0x1402279A0
 * Callers:
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // r9
  signed __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 *v9; // rdx
  __int64 v10; // r8
  _BYTE *PrototypePteDirect; // r12
  __int64 v12; // rbp
  int v13; // ecx
  char v14; // r9
  __int64 v15; // r8
  unsigned int i; // ebp
  signed __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = a2;
  v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
  v4 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 1LL;
  if ( !MiIsPfnInline(v3) )
    return 1LL;
  v6 = 48 * v5 - 0x58000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x10) != 0 )
    return 1LL;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() <= 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( (*(_DWORD *)(v6 + 16) & 0x400LL) == 0 )
  {
    v14 = *(_BYTE *)(v6 + 34);
    if ( (v14 & 8) != 0 || !(unsigned int)MiGetPagingFileOffset((__int64 *)(v6 + 16)) )
    {
      *(_BYTE *)(v6 + 34) = v14 | 0x10;
    }
    else
    {
      for ( i = 0; i < 0x20; ++i )
      {
        v17 = _InterlockedCompareExchange64(&MiState[i + 411], v6, 0LL);
        if ( !v17 )
          break;
        if ( (v17 | 1) == (v6 | 1) )
          goto LABEL_34;
      }
      if ( i == 32 )
        goto LABEL_35;
      v18 = 5LL;
      if ( CurrentIrql != 17 )
        v18 = 1LL;
      MiAddLockedPageCharge(v6, v18, v15);
      _InterlockedAdd64(&MiState[i + 411], 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
    }
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(v6 + 34) & 0x10) != 0 )
  {
LABEL_34:
    v4 = 1;
    goto LABEL_35;
  }
  if ( !(unsigned int)MiIsPfnFileOnly(48 * v5 - 0x58000000000LL) )
  {
    PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*v9, (__int64)v9, v10);
    v12 = *(_QWORD *)PrototypePteDirect;
    v13 = *(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL);
    if ( (v13 & 0x20) == 0 )
    {
LABEL_22:
      *(_BYTE *)(v6 + 34) |= 0x10u;
      goto LABEL_34;
    }
    if ( (v13 & 0x40000) != 0 || !**(_QWORD **)(v12 + 96) )
    {
LABEL_18:
      if ( (PrototypePteDirect[32] & 0x3Eu) < 8 && (unsigned int)MiGetSystemRegionType(a1) == 1 )
        byte_14038845C = 1;
      byte_140388CC1 = 1;
      goto LABEL_22;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v12 + 72)) )
    {
      *(_DWORD *)(v12 + 56) |= 0x40000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      goto LABEL_18;
    }
  }
LABEL_35:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  return v4;
}
