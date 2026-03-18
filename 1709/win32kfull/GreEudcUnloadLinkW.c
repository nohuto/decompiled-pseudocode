/*
 * XREFs of GreEudcUnloadLinkW @ 0x1C0273F4C
 * Callers:
 *     NtGdiEudcLoadUnloadLink @ 0x1C0274B80 (NtGdiEudcLoadUnloadLink.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C01100E0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01454EC (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bDeleteFlEntry @ 0x1C0274498 (bDeleteFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1C0274670 (bWriteUserSystemEUDCRegistry.c)
 */

__int64 __fastcall GreEudcUnloadLinkW(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v8; // rcx

  v5 = 1;
  v6 = 0;
  if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    return 0LL;
  GreAcquireSemaphore(ghsemEUDC1);
  if ( gcEUDCCount <= 0 )
  {
    if ( a1 )
    {
      v5 = bDeleteFlEntry(a1, a3);
      if ( !v5 )
        v5 = bDeleteFlEntry(a1, a3);
    }
    else if ( *(_OWORD *)&gappfeSysEUDC != 0LL )
    {
      vUnlinkAllEudcRFONTsAndPFEs(v8, 0);
      bUnloadEudcFont((__int64)&gappfeSysEUDC);
      ++dword_1C0327BF8;
      *(_OWORD *)&gappfeSysEUDC = 0uLL;
      Dst[0] = 0;
      bWriteUserSystemEUDCRegistry(&unk_1C02DF1F8);
    }
    v6 = v5;
  }
  else
  {
    EngSetLastError(0xA7u);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v6;
}
