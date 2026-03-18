/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006EC4C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0041424 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     HmgNextOwned @ 0x1C004DEA0 (HmgNextOwned.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

void __fastcall vRemoveRefPalettes(int a1)
{
  int Owned; // edi
  HPALETTE v3; // [rsp+38h] [rbp+10h] BYREF
  struct OBJECT *v4; // [rsp+40h] [rbp+18h] BYREF
  PERESOURCE v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  Owned = 0;
  while ( 1 )
  {
    Owned = HmgNextOwned(Owned, a1, (unsigned __int64 *)&v3);
    if ( !Owned )
      break;
    if ( (BYTE2(v3) & 0x1F) == 8 )
    {
      v5 = ghsemPalette;
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v4, v3);
      if ( v4 )
      {
        XEPALOBJ::apalResetColorTable(&v4);
        HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      SEMOBJ::vUnlock(&v5);
    }
  }
}
