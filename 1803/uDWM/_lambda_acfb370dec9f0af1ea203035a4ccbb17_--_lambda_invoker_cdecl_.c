/*
 * XREFs of _lambda_acfb370dec9f0af1ea203035a4ccbb17_::_lambda_invoker_cdecl_ @ 0x18006F9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180070060 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall lambda_acfb370dec9f0af1ea203035a4ccbb17_::_lambda_invoker_cdecl_(
        __int64 a1,
        wil::details **a2,
        int a3)
{
  wil::details *v3; // rcx

  if ( !a3 )
  {
    v3 = *a2;
LABEL_5:
    wil::details::SetEvent(v3, a2);
    return 0LL;
  }
  if ( a3 == 1 )
  {
    v3 = a2[1];
    goto LABEL_5;
  }
  return 0LL;
}
