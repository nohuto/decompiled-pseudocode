/*
 * XREFs of wil::details::functor_wrapper_void__lambda_053d61a7963efcca289c130717ec5f8b__&___ptr64_::Run @ 0x180089D10
 * Callers:
 *     ?Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z @ 0x180089C00 (-Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z.c)
 * Callees:
 *     ?IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089D3C (-IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089E5C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_053d61a7963efcca289c130717ec5f8b______ptr64_::Run(
        CortanaFlightingHelpers *a1)
{
  __int64 v1; // rbx
  CortanaFlightingHelpers *v2; // rcx

  v1 = *((_QWORD *)a1 + 1);
  if ( CortanaFlightingHelpers::IsWideQFDeltaEnabled(a1) || CortanaFlightingHelpers::IsWideAtStartupDeltaEnabled(v2) )
  {
    if ( **(_BYTE **)v1 )
      **(_BYTE **)v1 = *(_BYTE *)(*(_QWORD *)(v1 + 8) + 204LL);
  }
  return 0LL;
}
