/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C0008754
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C0008710 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C0008B20 (bUnloadEudcFont.c)
 *     GreEnableEUDC @ 0x1C0008EAC (GreEnableEUDC.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C002A42C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  unsigned int v1; // edi
  char *v2; // rbx
  PFTOBJ *v3; // rcx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C032C964 |= 2u;
  if ( v0 )
    GreEnableEUDC(0LL);
  if ( qword_1C032C178 )
  {
    Win32FreePool(qword_1C032C178);
    qword_1C032C178 = 0LL;
  }
  if ( qword_1C032C168 )
  {
    Win32FreePool(qword_1C032C168);
    qword_1C032C168 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v1 = 0;
    v2 = (char *)&unk_1C03275EC;
    do
    {
      if ( *((_DWORD *)v2 - 31) && *(_WORD *)v2 && *(_QWORD *)(v2 + 524) )
        bUnloadEudcFont(&qword_1C03277F8[83 * v1]);
      ++v1;
      v2 += 664;
    }
    while ( v1 < 7 );
  }
  v3 = pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v3, &gawcSystemDBCSFontPath);
}
