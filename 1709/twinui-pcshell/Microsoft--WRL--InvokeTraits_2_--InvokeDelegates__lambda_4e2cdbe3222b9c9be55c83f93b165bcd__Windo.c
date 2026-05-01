/*
 * XREFs of Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_4e2cdbe3222b9c9be55c83f93b165bcd__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ActionCenterExperienceManager_____ptr64_IInspectable_____ptr64___ @ 0x18009D3BC
 * Callers:
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@$$T@Z @ 0x18009CCAC (--$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVAct.c)
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_4e2cdbe3222b9c9be55c83f93b165bcd__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ActionCenterExperienceManager_____ptr64_IInspectable_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rbx
  struct IUnknown **i; // rdi
  int v7; // eax
  int v8; // esi
  __int64 v10; // [rsp+68h] [rbp+20h]

  v5 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 12));
    v5 = a2;
    v10 = a2;
  }
  for ( i = *(struct IUnknown ***)(v5 + 16); i != *(struct IUnknown ***)(v5 + 24); ++i )
  {
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))(*i)->lpVtbl[1].QueryInterface)(
           *i,
           (**a1 + 24LL) & -(__int64)(**a1 != 0LL),
           *a1[1]);
    v8 = v7;
    if ( v7 < 0 )
    {
      RoTransformError((unsigned int)v7, 0LL, 0LL);
      if ( v8 == -2147417848 || v8 == -2147023174 || v8 == -1996357631 )
        Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
          a3,
          *i);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
