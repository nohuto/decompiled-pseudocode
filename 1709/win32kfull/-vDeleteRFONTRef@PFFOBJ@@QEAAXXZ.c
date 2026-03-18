/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     GreGetKerningPairs @ 0x1C01301D8 (GreGetKerningPairs.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C014321C (--1PFFREFOBJ@@QEAA@XZ.c)
 *     vKillRFONTList @ 0x1C024BCC0 (vKillRFONTList.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028366C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C0283E50 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C003903C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0041A18 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v6 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  --*(_DWORD *)(*(_QWORD *)this + 68LL);
  v4 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) && !*(_QWORD *)(v4 + 160) && !*(_DWORD *)(v4 + 68) && !*(_DWORD *)(v4 + 64) )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v5, v3);
    v2 = 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  if ( v2 )
    vCleanupFontFile((struct PFFCLEANUP *)v5);
}
