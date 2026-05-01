/*
 * XREFs of Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8___ @ 0x180219974
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18021E834 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x180099304 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180099316 (__Platform_AcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?Invoke@__abi_IDelegate@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@45@@Z @ 0x18020CB88 (-Invoke@__abi_IDelegate@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platfor.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8___(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        __int64 *a3)
{
  __int64 *v3; // rsi
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // r14
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  struct EventRegistrationToken v12; // r9
  int v14; // eax
  __int64 *v15; // [rsp+20h] [rbp-78h]
  struct Platform::Details::EventLock *v17; // [rsp+28h] [rbp-70h] BYREF
  Platform::Details *v18; // [rsp+30h] [rbp-68h]
  _QWORD **v19; // [rsp+38h] [rbp-60h]
  _QWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  __int128 v22[4]; // [rsp+58h] [rbp-40h] BYREF

  v20[1] = -2LL;
  v3 = a3;
  v18 = 0LL;
  v22[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v22, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v18 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v15) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v17 = 0LL;
      try
      {
        v19 = 0LL;
        TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                        TargetArray,
                                        (void *)i,
                                        (unsigned int)&_uuidof__AV__VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__,
                                        &v17,
                                        v15);
        v19 = TargetArrayEvent;
        if ( *TargetArrayEvent == &Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::`vftable'{for `__abi_IUnknown'} )
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(
            TargetArrayEvent[37],
            *v3,
            v3[1]);
        else
          Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke((__int64)TargetArrayEvent);
        __abi_winrt_ptr_dtor((__int64)TargetArrayEvent);
      }
      catch ( Platform::Exception *v21 )
      {
        v14 = *(_DWORD *)(v21 + 64);
        if ( v14 != -2147023174 && v14 != -2147417848 && v14 != -2146823277 && v14 != -1996357631 )
        {
          v20[0] = __abi_winrt_ptr_ctor(v21);
          throw (Platform::Exception **)v20;
        }
        Platform::Details::EventSourceRemove((Platform::Details *)a1, &a2->Ptr, v17, v12);
        v3 = a3;
        TargetArray = v18;
        TargetArraySize = (unsigned int)v15;
        continue;
      }
    }
  }
  __abi_winrt_ptr_dtor((__int64)TargetArray);
  __abi_winrt_ptr_dtor(v3[1]);
  return __abi_winrt_ptr_dtor(*v3);
}
