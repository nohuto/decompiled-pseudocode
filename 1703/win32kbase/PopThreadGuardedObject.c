/*
 * XREFs of PopThreadGuardedObject @ 0x1C0012E10
 * Callers:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     NtGdiOpenDCW @ 0x1C00221E0 (NtGdiOpenDCW.c)
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0022F80 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GdiThreadCallout @ 0x1C0028480 (GdiThreadCallout.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0057A9C (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C0067BC4 (MultiUserNtGreCleanup.c)
 *     CaptureDriverInfo2W @ 0x1C007C9C0 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C008CFC0 (CaptureDEVMODEW.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00965F8 (GreCreatePolyPolygonRgnInternal.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0097C80 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     vFreeDriverInfo2 @ 0x1C0098500 (vFreeDriverInfo2.c)
 *     GrePopThreadGuardedObject @ 0x1C00EBE10 (GrePopThreadGuardedObject.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( a1 )
  {
    KeEnterCriticalRegion();
    v2 = *a1;
    v3 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a1[1] = a1;
    *a1 = a1;
    KeLeaveCriticalRegion();
  }
}
