/*
 * XREFs of ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C029D510
 * Callers:
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C011B4E0 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00325F8 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C02497D8 (-HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D398 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D650 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 */

void __fastcall UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(void *a1, _BYTE *a2, struct PFF *a3)
{
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h] BYREF
  struct _FONTHASH **v7; // [rsp+58h] [rbp+10h] BYREF
  struct PFT **v8; // [rsp+68h] [rbp+20h] BYREF

  if ( a2 )
  {
    v6 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = KeGetCurrentThread();
    if ( a3
      || gpPFTPublic && (v7 = gpPFTPublic, (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v7, (__int64)a2)) != 0LL)
      || gpPFTPrivate && (v8 = gpPFTPrivate, (a3 = PFTOBJ::HFFToPPFF((PFTOBJ *)&v8, (__int64)a2)) != 0LL) )
    {
      if ( *((struct PDEV **)a3 + 11) == qword_1C0338A40
        && a2[12]
        && a2[13] != 1
        && UmfdHostLifeTimeManager::EnsureUmfdHost()
        && UmfdHostLifeTimeManager::TryResurrectHff(a2, a3) )
      {
        v5 = *((_QWORD *)a3 + 11);
        if ( (unsigned int)PDEVOBJ::QueryFontFile((PDEVOBJ *)&v5, (__int64)a2, 2u, 0, 0LL) == *((_DWORD *)a3 + 36) )
        {
          if ( UmfdHostLifeTimeManager::TryResurrectUmfdAllocations((unsigned __int64)a2, a3) )
            a2[12] = 0;
        }
        else
        {
          a2[13] = 1;
        }
      }
    }
    UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v6);
  }
}
