/*
 * XREFs of PopThreadGuardedObject @ 0x1C001DE60
 * Callers:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C001B1C8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C001C970 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GdiThreadCallout @ 0x1C001DCC0 (GdiThreadCallout.c)
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C0059EE0 (NtGdiOpenDCW.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     CaptureDriverInfo2W @ 0x1C007D7C0 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C0094360 (CaptureDEVMODEW.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C009ED10 (GreCreatePolyPolygonRgnInternal.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C009F11C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     vFreeDriverInfo2 @ 0x1C00A2630 (vFreeDriverInfo2.c)
 *     GrePopThreadGuardedObject @ 0x1C00EFD10 (GrePopThreadGuardedObject.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  if ( a1 )
  {
    KeEnterCriticalRegion();
    v2 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a1[1] = a1;
    *a1 = a1;
    KeLeaveCriticalRegion();
  }
}
