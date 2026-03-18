/*
 * XREFs of ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800BA5C4
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800BA7E8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800BAD20 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 */

wchar_t *__fastcall CAnimationTracking::GetScenarioDetails(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rcx

  v3 = a3;
  if ( *(_DWORD *)a2 )
  {
    v4 = *((_QWORD *)a2 + 19);
    if ( v4 && *(_WORD *)(v4 + 38) && v4 + *(unsigned __int16 *)(v4 + 38) )
    {
      if ( *(_WORD *)(v4 + 38) )
        return (wchar_t *)(v4 + *(unsigned __int16 *)(v4 + 38));
      else
        return 0LL;
    }
    else
    {
      return word_1801D5868;
    }
  }
  else
  {
    CAnimationTracking::GuidToString((const struct _GUID *)((char *)a2 + 4), a3, 0);
  }
  return v3;
}
