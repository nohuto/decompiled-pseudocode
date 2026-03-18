/*
 * XREFs of ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C0134FDC
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0137E8C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::PassedCurtainMoveThresholds(
        CPTPEngine *this,
        __int64 a2,
        __int64 a3,
        struct CContactState *a4)
{
  return a3 - a2 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 71) / 0x3E8
      && (int)((HIDWORD(*(_QWORD *)((char *)this + 3044)) - HIDWORD(*(_QWORD *)((char *)a4 + 20)))
             * (HIDWORD(*(_QWORD *)((char *)this + 3044)) - HIDWORD(*(_QWORD *)((char *)a4 + 20)))
             + (*(_QWORD *)((char *)this + 3044) - *(_QWORD *)((char *)a4 + 20))
             * (*(_QWORD *)((char *)this + 3044) - *(_QWORD *)((char *)a4 + 20))) > (unsigned __int64)*((unsigned int *)this + 72);
}
