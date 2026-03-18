/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x14004FA88
 * Callers:
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14004FA24 (MiTryLockLeafAndContainingPagesAtDpc.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rax
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = MI_READ_PTE_LOCK_FREE(v1);
  if ( (v12 & 1) == 0 )
    return 0LL;
  v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
  if ( !(unsigned int)MiIsPfnInline((v2 >> 12) & 0xFFFFFFFFFLL) )
    return 0LL;
  v4 = 48 * v3 - 0x58000000000LL;
  v5 = (volatile signed __int64 *)(v4 + 24);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    return 0LL;
  if ( (*v5 & 0x4000000000000000LL) != 0
    || (v6 = MI_READ_PTE_LOCK_FREE(v1), v12 = v6, v7 = v6, (v6 & 1) == 0)
    || (v6 & 0x200) != 0
    || (v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12), v10 != (v9 & (v8 >> 12)))
    || (*(_BYTE *)(v4 + 34) & 0x20) != 0 )
  {
    v4 = 0LL;
  }
  else
  {
    MiAddLockedPageCharge(v4, 1LL);
    *(_BYTE *)(v4 + 34) |= 0x20u;
    if ( (v7 & 0x20) == 0 )
      MiWriteValidPteVolatile(v1, 1LL, 0LL);
  }
  _InterlockedAnd64(v5, 0x7FFFFFFFFFFFFFFFuLL);
  return v4;
}
