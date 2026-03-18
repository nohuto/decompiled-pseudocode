/*
 * XREFs of ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02944AC
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C0039F08 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C003BE1C (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00406F0 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00ACEF0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C011C2B8 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C0293D68 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

struct tagPvtData *__fastcall PFFOBJ::pPvtDataMatch(PFFOBJ *this)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(*(_QWORD *)this + 160LL);
        i
     && ((*(_DWORD *)(i + 8) & 4) == 0 || *(_DWORD *)(i + 12) != (unsigned int)PsGetCurrentThreadId())
     && *(_DWORD *)(i + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
        i = *(_QWORD *)(i + 16) )
  {
    ;
  }
  return (struct tagPvtData *)i;
}
