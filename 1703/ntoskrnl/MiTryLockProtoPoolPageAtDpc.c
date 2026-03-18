/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x14010A810
 * Callers:
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14010A7AC (MiTryLockLeafAndContainingPagesAtDpc.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1)
{
  volatile signed __int64 *v1; // rdi
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (volatile signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_READ_PTE_LOCK_FREE(v1);
  if ( (v9 & 1) == 0 )
    return 0LL;
  v2 = MI_READ_PTE_LOCK_FREE(&v9);
  if ( !MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL) )
    return 0LL;
  v4 = 48 * v3 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    return 0LL;
  if ( (*(_QWORD *)(v4 + 24) & 0x4000000000000000LL) != 0
    || (v5 = MI_READ_PTE_LOCK_FREE(v1), v9 = v5, (v5 & 1) == 0)
    || (v5 & 0x200) != 0
    || (v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v9), v7 != v6)
    || (*(_BYTE *)(v4 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  MiAddLockedPageCharge(v4, 1);
  *(_BYTE *)(v4 + 34) |= 0x20u;
  if ( (v9 & 0x20) == 0 )
    MiWriteValidPteVolatile(v1, 1, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v4;
}
