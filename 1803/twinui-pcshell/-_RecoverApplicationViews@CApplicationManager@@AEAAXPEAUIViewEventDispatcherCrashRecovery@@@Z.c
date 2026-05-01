/*
 * XREFs of ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180111218
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_RecoverApplicationViews(
        CApplicationManager *this,
        struct IViewEventDispatcherCrashRecovery *a2)
{
  unsigned int i; // edi
  void *v5; // rbx
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF
  void *v7; // [rsp+68h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // [rsp+70h] [rbp+30h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v7);
  if ( (*(int (__fastcall **)(struct IViewEventDispatcherCrashRecovery *, _QWORD, void **))(*(_QWORD *)a2 + 24LL))(
         a2,
         *((_QWORD *)this + 102),
         &v7) >= 0
    && (*(int (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v6) >= 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v8 = 0LL;
      v5 = v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v8);
      if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v5 + 32LL))(
             v5,
             i,
             &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
             &v8) >= 0 )
        CApplicationManager::_HandleViewCreation(this, v8, 0LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v8);
    }
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v7);
}
