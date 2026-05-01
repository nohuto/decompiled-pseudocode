/*
 * XREFs of ??$InvokeAll@W4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJW4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@Z @ 0x18011972C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03414d84f3d5ff7225f9a5327e0534d9___::Run @ 0x18011A7F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_03414d84f3d5ff7225f9a5327e0534d9___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c548e16b200961cdbec772528a46f987___::Run @ 0x18011A830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c548e16b200961cdbec772528a46f987___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b4e5891bfe32cdf355ef1d0f41df519___::Run @ 0x18011AAA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b4e5891bfe32cdf355ef1d0f41df519___--Run.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<enum Windows::Internal::Shell::Popups::PopupClientPropertyChangedEventType>(
        RTL_SRWLOCK *a1,
        unsigned int a2)
{
  RTL_SRWLOCK v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // eax
  struct IUnknown **i; // rdi
  int v8; // eax
  int v9; // esi
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  v4.Ptr = 0LL;
  wil::srwlock::lock_exclusive(a1 + 1, &SRWLock);
  if ( a1->Ptr )
  {
    v4.Ptr = a1->Ptr;
    do
      v5 = *((_DWORD *)v4.Ptr + 3);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)v4.Ptr + 3, v5 + 1, v5) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4.Ptr )
  {
    do
      v6 = *((_DWORD *)v4.Ptr + 3);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)v4.Ptr + 3, v6 + 1, v6) );
    for ( i = (struct IUnknown **)*((_QWORD *)v4.Ptr + 2); i != *((struct IUnknown ***)v4.Ptr + 3); ++i )
    {
      v8 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, a2);
      v9 = v8;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 0LL, 0LL);
        if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            a1,
            *i);
      }
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v4.Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v4.Ptr);
  }
  return 0LL;
}
