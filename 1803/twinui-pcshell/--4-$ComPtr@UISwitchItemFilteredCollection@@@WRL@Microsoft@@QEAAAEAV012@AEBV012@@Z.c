/*
 * XREFs of ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1802767A4
 * Callers:
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802434C0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025A090 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x180277294 (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
  return a1;
}
