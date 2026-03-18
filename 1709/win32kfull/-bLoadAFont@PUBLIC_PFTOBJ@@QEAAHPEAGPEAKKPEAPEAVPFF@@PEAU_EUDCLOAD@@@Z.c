/*
 * XREFs of ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00B0248
 * Callers:
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     FinishStockFontInit @ 0x1C00C02A0 (FinishStockFontInit.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C15BC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C027394C (-bSetupDefaultFlEntry@@YAHXZ.c)
 *     GreEudcLoadLinkW @ 0x1C0273D04 (GreEudcLoadLinkW.c)
 *     bInitOneStockFontInternal @ 0x1C03825CC (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C038420C (bInitSystemFont.c)
 * Callees:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadAFont(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int *a3,
        unsigned int a4,
        struct PFF **a5,
        struct _EUDCLOAD *a6)
{
  __int64 v6; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int16 *v13; // rdi
  unsigned int Fonts; // ebx
  size_t v16; // [rsp+28h] [rbp-50h]

  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v11 = v6 + 1;
  if ( v11 > 0x1388000 )
    return 0LL;
  v12 = AllocFreeTmpBuffer(2 * v11);
  v13 = (unsigned __int16 *)v12;
  if ( !v12 )
    return 0LL;
  cCapString(v12, a2, v11);
  LODWORD(v16) = 0;
  Fonts = PUBLIC_PFTOBJ::bLoadFonts(this, v13, v11, 1u, 0LL, v16, a3, a4, a5, 0, 0, a6);
  FreeTmpBuffer(v13);
  return Fonts;
}
