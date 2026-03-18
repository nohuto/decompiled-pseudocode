/*
 * XREFs of ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C013918C
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C013C224 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::PassedCurtainMoveThresholds(
        CPTPEngine *this,
        __int64 a2,
        __int64 a3,
        struct CContactState *a4)
{
  int v5; // r8d
  int v6; // edx

  if ( a3 - a2 > *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 71) / 0x3E8 )
    return 0LL;
  v5 = *((_QWORD *)this + 381) - *((_QWORD *)a4 + 3);
  v6 = HIDWORD(*((_QWORD *)this + 381)) - HIDWORD(*((_QWORD *)a4 + 3));
  return v6 * v6 + v5 * v5 > (unsigned __int64)*((unsigned int *)this + 72);
}
