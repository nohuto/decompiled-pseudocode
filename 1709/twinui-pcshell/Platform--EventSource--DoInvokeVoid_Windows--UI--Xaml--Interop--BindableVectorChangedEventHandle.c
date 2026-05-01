/*
 * XREFs of Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___ @ 0x180165B84
 * Callers:
 *     ??$InvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@PE$AAUIBindableObservableVector@2345@PE$AAVObject@Platform@@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@PE$AAVObject@1@@Z @ 0x180165D00 (--$InvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@PE$AAUIBindableObserva.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     __Platform_ReleaseSRWLockShared @ 0x1801E2FB0 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x1801E2FC2 (__Platform_AcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79___(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // rsi
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  struct EventRegistrationToken v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // [rsp+20h] [rbp-78h]
  struct Platform::Details::EventLock *v20; // [rsp+28h] [rbp-70h] BYREF
  Platform::Details *v21; // [rsp+30h] [rbp-68h]
  _QWORD **v22; // [rsp+38h] [rbp-60h]
  _QWORD v23[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  _OWORD v25[4]; // [rsp+58h] [rbp-40h] BYREF

  v23[1] = -2LL;
  v3 = a3;
  v21 = 0LL;
  v25[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v25, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v21 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v18) = TargetArraySize;
    for ( i = 0; i < TargetArraySize; ++i )
    {
      v20 = 0LL;
      try
      {
        v22 = 0LL;
        TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                        TargetArray,
                                        (void *)i,
                                        (unsigned int)&_uuidof__AU__abi_IDelegate_BindableVectorChangedEventHandler_Interop_Xaml_UI_Windows__,
                                        &v20,
                                        v18);
        v22 = TargetArrayEvent;
        v12 = v3[1];
        v13 = *v3;
        if ( *TargetArrayEvent == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*TargetArrayEvent[37] + 8LL))(
            TargetArrayEvent[37],
            v13,
            v12);
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*TargetArrayEvent)[3])(
                  TargetArrayEvent,
                  v13,
                  v12);
          if ( v14 < 0 )
            __abi_WinRTraiseException(v14);
        }
        ((void (__fastcall *)(_QWORD **))(*TargetArrayEvent)[2])(TargetArrayEvent);
      }
      catch ( Platform::Exception *v24 )
      {
        v17 = *(_DWORD *)(v24 + 64);
        if ( v17 != -2147023174 && v17 != -2147417848 && v17 != -2146823277 && v17 != -1996357631 )
        {
          v23[0] = __abi_winrt_ptr_ctor(v24);
          throw (Platform::Exception **)v23;
        }
        Platform::Details::EventSourceRemove((Platform::Details *)a1, &a2->Ptr, v20, v15);
        v3 = a3;
        TargetArray = v21;
        TargetArraySize = (unsigned int)v18;
        continue;
      }
    }
  }
  if ( TargetArray )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)TargetArray + 16LL))(TargetArray);
  v16 = v3[1];
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
}
