/*
 * XREFs of MiMapSystemCachePage @ 0x140219F0C
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiCaptureSystemCachePte @ 0x140219D54 (MiCaptureSystemCachePte.c)
 *     MiMapFrame @ 0x140219E5C (MiMapFrame.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, __int64 *a2, char a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int8 v8; // si
  __int64 PteShadow; // rax
  __int64 v10; // r8
  __int64 i; // [rsp+68h] [rbp+20h] BYREF

  for ( i = MiCaptureSystemCachePte(a2); (i & 1) != 0; i = MiCaptureSystemCachePte(a2) )
  {
    v6 = MI_GET_PAGE_FRAME_FROM_PTE(&i);
    if ( !MiIsPfnInline(v6) )
      break;
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = MiLockPageInline(v7);
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    i = PteShadow;
    if ( (PteShadow & 1) == 0 )
      goto LABEL_15;
    if ( MI_GET_PAGE_FRAME_FROM_PTE(&i) == v6 )
    {
      if ( !(unsigned int)MiAddLockedPageCharge(48 * v6 - 0x58000000000LL, 0LL, v10) )
      {
LABEL_15:
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
