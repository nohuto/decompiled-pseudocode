/*
 * XREFs of GreRemoveFontMemResourceEx @ 0x1C026A55C
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x1C02897B0 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiRemoveFontMemResourceEx @ 0x1C028B230 (NtGdiRemoveFontMemResourceEx.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00406F0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C011C2B8 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 */

__int64 __fastcall GreRemoveFontMemResourceEx(unsigned int a1)
{
  unsigned int v2; // ebx
  struct PFF *PFFFromId; // rax
  struct PFF **v5; // [rsp+38h] [rbp+10h] BYREF
  struct PFT **v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
  v6 = gpPFTPrivate;
  if ( gpPFTPrivate
    && (PFFFromId = GetPFFFromId(gpPFTPrivate, a1, &v5)) != 0LL
    && (*((_DWORD *)PFFFromId + 13) & 0x10) != 0 )
  {
    return (unsigned int)PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v6, PFFFromId, v5, 48);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  return v2;
}
