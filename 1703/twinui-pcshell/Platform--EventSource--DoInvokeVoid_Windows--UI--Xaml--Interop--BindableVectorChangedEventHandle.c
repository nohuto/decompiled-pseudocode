/*
 * XREFs of Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___ @ 0x18013A9F4
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18013AB4C (-Notify@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___(
        Platform::Details **a1,
        void *a2,
        struct Platform::Details::EventLock *a3)
{
  struct Platform::Details::EventLock *v3; // rsi
  Platform::Details *TargetArray; // rax
  void *v5; // rdx
  Platform::Details *v6; // rdi
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // r14
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  struct EventRegistrationToken v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // [rsp+20h] [rbp-68h]
  struct Platform::Details::EventLock *v18; // [rsp+28h] [rbp-60h] BYREF
  Platform::Details *v19; // [rsp+30h] [rbp-58h]
  _QWORD **v20; // [rsp+38h] [rbp-50h]
  _QWORD v21[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h] BYREF

  v21[1] = -2LL;
  v3 = a3;
  v19 = 0LL;
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, a2, a3);
  v6 = TargetArray;
  v19 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v5);
    LODWORD(v16) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v18 = 0LL;
      try
      {
        v20 = 0LL;
        TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                        v6,
                                        (void *)i,
                                        (unsigned int)&_uuidof__AU__abi_IDelegate_BindableVectorChangedEventHandler_Interop_Xaml_UI_Windows__,
                                        &v18,
                                        v16);
        v20 = TargetArrayEvent;
        v10 = *((_QWORD *)v3 + 1);
        v11 = *(_QWORD *)v3;
        if ( *TargetArrayEvent == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(
            TargetArrayEvent[37],
            v11,
            v10);
        }
        else
        {
          v12 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*TargetArrayEvent)[3])(
                  TargetArrayEvent,
                  v11,
                  v10);
          if ( v12 < 0 )
            __abi_WinRTraiseException(v12);
        }
        ((void (__fastcall *)(_QWORD **))(*TargetArrayEvent)[2])(TargetArrayEvent);
      }
      catch ( Platform::Exception *v22 )
      {
        v15 = *(_DWORD *)(v22 + 64);
        if ( v15 != -2147023174 && v15 != -2147417848 && v15 != -2146823277 && v15 != -1996357631 )
        {
          v21[0] = __abi_winrt_ptr_ctor(v22);
          throw (Platform::Exception **)v21;
        }
        Platform::Details::EventSourceRemove((Platform::Details *)a1, (void **)a2, v18, v13);
        v3 = a3;
        v6 = v19;
        TargetArraySize = (unsigned int)v16;
        continue;
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v6 + 16LL))(v6);
  v14 = *((_QWORD *)v3 + 1);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( *(_QWORD *)v3 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 16LL))(*(_QWORD *)v3);
}
