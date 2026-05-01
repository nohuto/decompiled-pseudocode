/*
 * XREFs of ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1800169CC
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_RecoverApplicationViews(
        __int64 **this,
        struct IViewEventDispatcherCrashRecovery *a2)
{
  unsigned int i; // ebx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // [rsp+70h] [rbp+30h] BYREF

  v7 = 0LL;
  if ( (*(int (__fastcall **)(struct IViewEventDispatcherCrashRecovery *, __int64 *, __int64 *))(*(_QWORD *)a2 + 24LL))(
         a2,
         this[104],
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v6) >= 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v7 + 32LL))(
             v7,
             i,
             &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
             &v8) >= 0 )
        CApplicationManager::_HandleViewCreation(this, v8, 0LL);
      v4 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
