/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C00BEF54
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00BEF10 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00405F0 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C00BF0E4 (GreEnableEUDC.c)
 */

void __fastcall CleanUpEUDC(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  struct _FONTHASH **v4; // rcx
  unsigned int v5; // edi
  char *v6; // rbx

  if ( !gpPFTPublic || (v3 = 1, !ghsemPublicPFT) )
    v3 = 0;
  dword_1C0327C04 |= 2u;
  if ( v3 )
    GreEnableEUDC(0LL);
  if ( qword_1C0327408 )
  {
    Win32FreePool(qword_1C0327408, a2, a3);
    qword_1C0327408 = 0LL;
  }
  if ( qword_1C032F968 )
  {
    Win32FreePool(qword_1C032F968, a2, a3);
    qword_1C032F968 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v5 = 0;
    v6 = (char *)&unk_1C0324A4C;
    do
    {
      if ( *((_DWORD *)v6 - 31) && *(_WORD *)v6 && *(_QWORD *)(v6 + 524) )
        bUnloadEudcFont((__int64)&unk_1C0324C58 + 664 * v5);
      ++v5;
      v6 += 664;
    }
    while ( v5 < 7 );
  }
  v4 = (struct _FONTHASH **)pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs, a2, a3);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v4, &gawcSystemDBCSFontPath);
}
