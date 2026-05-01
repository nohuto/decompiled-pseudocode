/*
 * XREFs of Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50___ @ 0x180202DA8
 * Callers:
 *     ?raise@SwitchItemCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@ME$AAAXPE$AAUISwitchItemDataSource@3456@PE$AAUISwitchItemCollectionChangedEventArgs@3456@@Z @ 0x180215F20 (-raise@SwitchItemCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x180099304 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x180099316 (__Platform_AcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?Invoke@__abi_IDelegate@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@45@@Z @ 0x18020CB88 (-Invoke@__abi_IDelegate@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platfor.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50___(
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
  __int64 v12; // r8
  __int64 v13; // rdx
  struct EventRegistrationToken v14; // r9
  int v16; // eax
  __int64 *v17; // [rsp+20h] [rbp-78h]
  struct Platform::Details::EventLock *v19; // [rsp+28h] [rbp-70h] BYREF
  Platform::Details *v20; // [rsp+30h] [rbp-68h]
  _QWORD **v21; // [rsp+38h] [rbp-60h]
  _QWORD v22[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __int128 v24[4]; // [rsp+58h] [rbp-40h] BYREF

  v22[1] = -2LL;
  v3 = a3;
  v20 = 0LL;
  v24[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v24, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v20 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v17) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v19 = 0LL;
      try
      {
        v21 = 0LL;
        TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                        TargetArray,
                                        (void *)i,
                                        (unsigned int)&_uuidof__AV__TypedEventHandler_PE_AAUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemCollectionChangedEventArgs_2345__Foundation_Windows__,
                                        &v19,
                                        v17);
        v21 = TargetArrayEvent;
        v12 = v3[1];
        v13 = *v3;
        if ( *TargetArrayEvent == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable'{for `__abi_IUnknown'} )
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(
            TargetArrayEvent[37],
            v13,
            v12);
        else
          Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(TargetArrayEvent, v13, v12);
        __abi_winrt_ptr_dtor((__int64)TargetArrayEvent);
      }
      catch ( Platform::Exception *v23 )
      {
        v16 = *(_DWORD *)(v23 + 64);
        if ( v16 != -2147023174 && v16 != -2147417848 && v16 != -2146823277 && v16 != -1996357631 )
        {
          v22[0] = __abi_winrt_ptr_ctor(v23);
          throw (Platform::Exception **)v22;
        }
        Platform::Details::EventSourceRemove((Platform::Details *)a1, &a2->Ptr, v19, v14);
        v3 = a3;
        TargetArray = v20;
        TargetArraySize = (unsigned int)v17;
        continue;
      }
    }
  }
  __abi_winrt_ptr_dtor((__int64)TargetArray);
  __abi_winrt_ptr_dtor(v3[1]);
  return __abi_winrt_ptr_dtor(*v3);
}
