/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00405F0
 * Callers:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00BEF54 (-CleanUpEUDC@@YAXXZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00C15BC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C00C16B8 (bAddAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C027394C (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00406F0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 */

__int64 __fastcall PFTOBJ::bUnloadEUDCFont(struct _FONTHASH **this, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int16 *v7; // rsi
  struct PFF *v8; // rax
  struct _FONTHASH **v10; // [rsp+60h] [rbp+8h] BYREF
  struct PFF **v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = this;
  v2 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = v4 + 1;
  if ( v5 > 0x1388000 )
    return 0LL;
  v6 = AllocFreeTmpBuffer(2 * v5);
  v7 = (unsigned __int16 *)v6;
  if ( !v6 )
    return 0LL;
  cCapString(v6, a2, v5);
  v10 = gpPFTPublic;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
  v8 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&v10, v7, v5, 1u, 0LL, 0, &v11, 1);
  if ( v8 )
  {
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v10, v8, v11, 0);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  FreeTmpBuffer(v7);
  return v2;
}
