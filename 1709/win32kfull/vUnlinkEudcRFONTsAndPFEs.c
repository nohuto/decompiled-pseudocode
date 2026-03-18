/*
 * XREFs of vUnlinkEudcRFONTsAndPFEs @ 0x1C02748C4
 * Callers:
 *     bDeleteFlEntry @ 0x1C0274498 (bDeleteFlEntry.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C027497C (vUnlinkEudcRFONTsAndPFEsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEs(__int64 a1, __int64 a2)
{
  struct _FONTHASH **v4; // rbx
  __int64 i; // rdi
  struct PFT *v6; // rbx
  __int64 j; // rdi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v8 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v4 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v4 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v4[i + 5] )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  v6 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v6 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v6 + j + 5) )
      vUnlinkEudcRFONTsAndPFEsWorker(a1, a2);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
}
