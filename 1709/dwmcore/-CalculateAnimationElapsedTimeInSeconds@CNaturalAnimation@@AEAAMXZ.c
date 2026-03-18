/*
 * XREFs of ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x180172838
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801728A0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x180174684 (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 */

float __fastcall CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(CNaturalAnimation *this)
{
  LONGLONG v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL)
     - 1000 * Time::s_luFreq.QuadPart * *((int *)this + 88) / 1000000
     - *((_QWORD *)this + 42)
     - Time::s_luBegin.QuadPart;
  return TimeDelta::ToSeconds((TimeDelta *)&v2);
}
