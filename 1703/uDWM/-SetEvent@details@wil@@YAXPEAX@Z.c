/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800745BC
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180049418 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     _lambda_acfb370dec9f0af1ea203035a4ccbb17_::_lambda_invoker_cdecl_ @ 0x180072930 (_lambda_acfb370dec9f0af1ea203035a4ccbb17_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180072454 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86F,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v2);
    __debugbreak();
  }
}
