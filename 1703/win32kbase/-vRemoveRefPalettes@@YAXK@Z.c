/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C0080794
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgNextOwned @ 0x1C0032D20 (HmgNextOwned.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0037A88 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C005A3A8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(int a1)
{
  unsigned int Owned; // edi
  HPALETTE v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v5; // [rsp+48h] [rbp+20h] BYREF

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
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v4, v3);
      if ( v4 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v4);
        HmgDecrementShareReferenceCount(v4);
      }
      SEMOBJ::vUnlock((PERESOURCE *)&v5);
    }
  }
}
