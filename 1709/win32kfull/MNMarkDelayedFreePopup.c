/*
 * XREFs of MNMarkDelayedFreePopup @ 0x1C01F6F04
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 */

_QWORD *__fastcall MNMarkDelayedFreePopup(__int64 **a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 **v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = a2;
  v5 = **a1;
  *(_DWORD *)v5 |= 0x10000u;
  if ( **a2 )
  {
    a4 = **a2;
    v5 = **a1;
    *(_QWORD *)(v5 + 72) = *(_QWORD *)(a4 + 72);
    *(_DWORD *)**a1 |= 0x20000000u;
    a2 = (__int64 **)**a1;
    *(_QWORD *)(**v4 + 72) = a2;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, (__int64)a2, v5, a4);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4, v6, v7, v8);
}
