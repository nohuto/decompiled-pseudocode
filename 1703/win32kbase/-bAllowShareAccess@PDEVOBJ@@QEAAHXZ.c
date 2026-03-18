/*
 * XREFs of ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C00387B0
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1C005BBF0 (GreLockVisRgnSharedOrExclusive.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C005C160 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007BCB0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C007BD40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00EF130 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 */

_BOOL8 __fastcall PDEVOBJ::bAllowShareAccess(PDEVOBJ *this)
{
  __int64 v1; // rdx
  int v2; // r8d

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  return (v2 & 0x1000001) == 1
      && (*(_DWORD *)(v1 + 2628) == 5 || (v2 & 0x20000) != 0 || (unsigned int)PDEVOBJ::bLddmDriver(this))
      && (*(_DWORD *)(v1 + 2144) & 0x400) == 0
      && (*(_DWORD *)(v1 + 1840) & 0x8000000) == 0
      && (v2 & 0x48000000) == 0
      && (*(_DWORD *)(*(_QWORD *)(v1 + 16) + 32LL) & 0x1000000) == 0;
}
