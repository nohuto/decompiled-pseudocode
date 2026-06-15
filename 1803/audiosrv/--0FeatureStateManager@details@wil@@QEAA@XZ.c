/*
 * XREFs of ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x180017AE0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001130 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     <none>
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::FeatureStateManager(
        wil::details::FeatureStateManager *this)
{
  wil::details::FeatureStateManager *result; // rax

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = "WilStaging_02";
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 32) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 168), 0, 0);
  *((_QWORD *)this + 26) = 0LL;
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *(_BYTE *)this = 1;
  return result;
}
