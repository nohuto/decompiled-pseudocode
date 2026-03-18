/*
 * XREFs of MiMapSystemCachePage @ 0x140212408
 * Callers:
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiMapFrame @ 0x14021236C (MiMapFrame.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int8 v8; // di
  __int64 i; // [rsp+68h] [rbp+20h] BYREF

  for ( i = MI_READ_PTE_LOCK_FREE(a2); (i & 1) != 0; i = MI_READ_PTE_LOCK_FREE(a2) )
  {
    v6 = MI_GET_PAGE_FRAME_FROM_PTE(&i);
    if ( !MiIsPfnInline(v6) )
      break;
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    i = MI_READ_PTE_LOCK_FREE(a2);
    if ( (i & 1) == 0 )
      goto LABEL_12;
    if ( MI_GET_PAGE_FRAME_FROM_PTE(&i) == v6 )
    {
      if ( !(unsigned int)MiAddLockedPageCharge(48 * v6 - 0x58000000000LL, 0) )
      {
LABEL_12:
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
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
  }
  return 0LL;
}
