/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0008D60
 * Callers:
 *     bDeleteAllFlEntry @ 0x1C00088FC (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0277328 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C0277580 (GreEudcUnloadLinkW.c)
 * Callees:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0008E14 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  struct _FONTHASH **v4; // rbx
  __int64 i; // rdi
  struct PFT *v6; // rbx
  __int64 j; // rdi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v8 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v4 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v4[i + 5] )
      vUnlinkAllEudcRFONTsAndPFEsWorker(v3, a2);
  }
  v6 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v6 + j + 5) )
      vUnlinkAllEudcRFONTsAndPFEsWorker(v3, a2);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
}
