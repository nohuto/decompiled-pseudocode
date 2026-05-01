/*
 * XREFs of ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x1800F06F4
 * Callers:
 *     ?RegisterHostComponentPair@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@IIPEAUIInspectable@@@Z @ 0x1801CCC60 (-RegisterHostComponentPair@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCor.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x180034620 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::_PropagateNewRegistration(ViewEventDispatcher *a1, int a2, int a3, int a4)
{
  int v8; // eax
  struct IViewWrapperInternal *v10; // [rsp+20h] [rbp-28h] BYREF
  struct IViewWrapperInternal *v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11[1] = (struct IViewWrapperInternal *)-2LL;
  v11[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v11);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(a1, a4, v11) >= 0 )
  {
    v10 = 0LL;
    if ( !a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
      v8 = ViewEventDispatcher::_ViewFromViewInstanceId(a1, a3, &v10);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1263LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
    }
    ViewEventDispatcher::_PropagateNewRegistration(a1, v10, v11[0]);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v11);
}
