/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801013E8
 * Callers:
 *     ??_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z @ 0x180105890 (--_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180105D50 (--_G-$RuntimeClass@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Interna.c)
 *     ??_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z @ 0x18012AF60 (--_GViewEventArgsForSelectTargetView@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForNavigationRequest@@UEAAPEAXI@Z @ 0x18012B080 (--_GViewEventArgsForNavigationRequest@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x18012B0C0 (--_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForSwitch@@UEAAPEAXI@Z @ 0x18012B150 (--_GViewEventArgsForSwitch@@UEAAPEAXI@Z.c)
 *     ??_GViewEventArgsForPropertyChanged@@UEAAPEAXI@Z @ 0x18012B1E0 (--_GViewEventArgsForPropertyChanged@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode>(
        _QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[12];
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = a1[8];
  if ( v5 )
  {
    a1[8] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[5];
  if ( v6 )
  {
    a1[5] = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
