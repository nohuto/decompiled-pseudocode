/*
 * XREFs of MNMarkDelayedFreePopup @ 0x1C01EB044
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 */

_QWORD *__fastcall MNMarkDelayedFreePopup(_QWORD *a1, _QWORD *a2)
{
  *(_DWORD *)*a1 |= 0x10000u;
  if ( *a2 )
  {
    *(_QWORD *)(*a1 + 72LL) = *(_QWORD *)(*a2 + 72LL);
    *(_DWORD *)*a1 |= 0x20000000u;
    *(_QWORD *)(*a2 + 72LL) = *a1;
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a2);
}
