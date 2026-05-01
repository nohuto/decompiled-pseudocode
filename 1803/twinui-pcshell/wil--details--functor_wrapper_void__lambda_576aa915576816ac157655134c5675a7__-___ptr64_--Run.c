/*
 * XREFs of wil::details::functor_wrapper_void__lambda_576aa915576816ac157655134c5675a7__&___ptr64_::Run @ 0x180089F80
 * Callers:
 *     ?Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z @ 0x180089C00 (-Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1800924CC (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180092518 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CAX_NW4ReportingKi.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_576aa915576816ac157655134c5675a7______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  int v3; // eax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 344;
  if ( *(_DWORD *)(*(_QWORD *)(v1 + 8) + 12LL) - *(_DWORD *)(*(_QWORD *)(v1 + 8) + 4LL) < 1196 )
    v2 = 320;
  v5 = 0;
  wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::ReportUsageToService();
  if ( (int)CortanaFeatureConfiguration::GetDWORD(29LL, &v5) >= 0 && (v3 = v5) != 0
    || (int)CortanaFeatureConfiguration::GetDWORD(28LL, &v5) >= 0 && (v3 = v5) != 0 )
  {
    v2 += v3;
  }
  **(float **)v1 = (float)**(int **)(v1 + 16) + (float)v2;
  return 0LL;
}
