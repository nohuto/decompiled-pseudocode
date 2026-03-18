/*
 * XREFs of MiDbgMarkPfnModified @ 0x140260BA0
 * Callers:
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // r9
  __int64 v5; // r9
  signed __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // r14
  char v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE *PrototypePteDirect; // r12
  __int64 v14; // rbp
  int v15; // ecx
  unsigned int i; // ebp
  signed __int64 v17; // rax
  char v18; // dl
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = a2;
  v3 = 0;
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL;
  if ( !MmPhysicalMemoryBlock )
    return 1LL;
  if ( !MiIsPfnInline(v4) )
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
  v9 = *(_BYTE *)(v6 + 34);
  if ( (*(_DWORD *)(v6 + 16) & 0x400LL) == 0 )
  {
    if ( (v9 & 8) == 0 && (unsigned int)MiGetPagingFileOffset(v6 + 16) )
    {
      for ( i = 0; i < 0x20; ++i )
      {
        v17 = _InterlockedCompareExchange64(&MiState[i + 467], v6, 0LL);
        if ( !v17 )
          break;
        if ( (v17 | 1) == (v6 | 1) )
          goto LABEL_23;
      }
      if ( i == 32 )
        goto LABEL_24;
      v18 = 5;
      if ( CurrentIrql != 17 )
        v18 = 1;
      MiAddLockedPageCharge(v6, v18);
      _InterlockedAdd64(&MiState[i + 467], 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  if ( (v9 & 0x10) != 0 )
  {
LABEL_23:
    v3 = 1;
    goto LABEL_24;
  }
  if ( !(unsigned int)MiIsPfnFileOnly(v6) )
  {
    PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*v10, (__int64)v10, v11, v12);
    v14 = *(_QWORD *)PrototypePteDirect;
    v15 = *(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL);
    if ( (v15 & 0x20) == 0 )
    {
LABEL_22:
      *(_BYTE *)(v6 + 34) = v9 | 0x10;
      goto LABEL_23;
    }
    if ( (v15 & 0x40000) != 0 || !*(_QWORD *)(*(_QWORD *)(v14 + 96) + 32LL) )
    {
LABEL_18:
      if ( (PrototypePteDirect[32] & 0x3Eu) < 8 && (unsigned int)MiGetSystemRegionType(a1) == 1 )
        byte_1403CB5E4 = 1;
      byte_1403CBF81 = 1;
      goto LABEL_22;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v14 + 72)) )
    {
      *(_DWORD *)(v14 + 56) |= 0x40000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
      v9 = *(_BYTE *)(v6 + 34);
      goto LABEL_18;
    }
  }
LABEL_24:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  return v3;
}
