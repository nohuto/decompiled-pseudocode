/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00484E0 (GreSetBrushOwner.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgLock @ 0x1C004CF70 (HmgLock.c)
 *     HmgLockEx @ 0x1C004D1C0 (HmgLockEx.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0051670 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00518E8 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     HmgMarkUndeletable @ 0x1C0063790 (HmgMarkUndeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0070104 (HmgShareLockIgnoreStockBit.c)
 *     HmgLockAllOwners @ 0x1C00738F0 (HmgLockAllOwners.c)
 *     HmgMarkDeletable @ 0x1C00801F0 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0088FD0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C008A750 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C008B240 (HmgMarkXferable.c)
 *     HmgFree @ 0x1C00A26F0 (HmgFree.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00EFA4C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C00A9D9C (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this, struct HOBJ__ *a2, int a3, int a4, int a5)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  HANDLELOCK::vLockHandle(this, ((unsigned int)a2 >> 8) & 0xFF0000 | (unsigned __int16)a2, a3, a4, a5);
  return this;
}
