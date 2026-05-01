/*
 * XREFs of ??$InvokeAll@W4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJW4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@Z @ 0x180144100
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d6acbb3e081afa0e4e5dd79f28d1dee4___::Run @ 0x1801450C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d6acbb3e081afa0e4e5dd79f28d1dee4___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f84fce809ac0e1f9243c73a102b75c55___::Run @ 0x180145100 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f84fce809ac0e1f9243c73a102b75c55___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_04ffc410d54a5b59f3cef8d5da6c5c21___::Run @ 0x180145400 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_04ffc410d54a5b59f3cef8d5da6c5c21___--Run.c)
 * Callees:
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<enum Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType>(
        RTL_SRWLOCK *a1,
        unsigned int a2)
{
  RTL_SRWLOCK *v2; // rdi
  PVOID Ptr; // rbx
  struct IUnknown **i; // rdi
  int v6; // eax
  int v7; // esi

  v2 = a1 + 1;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = a1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)a1->Ptr + 3);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( Ptr )
  {
    _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
    for ( i = (struct IUnknown **)*((_QWORD *)Ptr + 2); i != *((struct IUnknown ***)Ptr + 3); ++i )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 0LL, 0LL);
        if ( v7 == -2147417848 || v7 == -2147023174 || v7 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            (__int64)a1,
            *i);
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
