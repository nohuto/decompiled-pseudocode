/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0142EE8
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01E3140 (NtUserCalculatePopupWindowPosition.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  SmartObjStackRefBase<tagPOPUPMENU>::Init(a1, a2, a3, a4);
  return a1;
}
