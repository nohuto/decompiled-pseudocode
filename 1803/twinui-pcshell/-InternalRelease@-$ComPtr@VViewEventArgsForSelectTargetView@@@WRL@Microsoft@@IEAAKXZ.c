/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000428C
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800041E0 (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Found.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAD78 (--1-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800042B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(
        ViewEventArgsForSelectTargetView **a1)
{
  ViewEventArgsForSelectTargetView *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v1);
  }
  return result;
}
