/*
 * XREFs of MiMapSystemCachePage @ 0x1402568B0
 * Callers:
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMapFrame @ 0x140256814 (MiMapFrame.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int8 v8; // si
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v10 & 1) == 0 )
      return 0LL;
    v6 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL;
    if ( !MiIsPfnInline(v6) )
      return 0LL;
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    v10 = MI_READ_PTE_LOCK_FREE(a2);
    if ( (v10 & 1) == 0 )
      goto LABEL_11;
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL) == v6 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
  }
  if ( !(unsigned int)MiAddLockedPageCharge(48 * v6 - 0x58000000000LL, 0) )
  {
LABEL_11:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    return 0LL;
  }
  if ( (a3 & 4) == 0 || !(unsigned int)MiIsPfnFileOnly(48 * v6 - 0x58000000000LL) )
    *(_BYTE *)(v7 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  return MiMapFrame(a1, v6);
}
