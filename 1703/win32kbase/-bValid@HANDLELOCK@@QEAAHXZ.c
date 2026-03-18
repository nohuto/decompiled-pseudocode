/*
 * XREFs of ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80
 * Callers:
 *     GreSetBrushOwner @ 0x1C002E550 (GreSetBrushOwner.c)
 *     HmgReplaceObject @ 0x1C003EC10 (HmgReplaceObject.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0059040 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0059670 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C005A5D0 (HmgMarkUndeletable.c)
 *     GreSetSolidBrushLight @ 0x1C0077340 (GreSetSolidBrushLight.c)
 *     HmgLockAndModifyHandleType @ 0x1C0078300 (HmgLockAndModifyHandleType.c)
 *     HmgLockAllOwners @ 0x1C007B9E0 (HmgLockAllOwners.c)
 *     HmgMarkLazyDelete @ 0x1C007C340 (HmgMarkLazyDelete.c)
 *     HmgMarkDeletable @ 0x1C007E370 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00817F0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkUnXferable @ 0x1C0083340 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0083B50 (HmgMarkXferable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0083CAC (HmgShareLockIgnoreStockBit.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgUnlock @ 0x1C00A0158 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A09E0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00A0AF0 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EBE30 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLELOCK::bValid(HANDLELOCK *this)
{
  return *((_DWORD *)this + 2) && *(_QWORD *)this;
}
