/*
 * XREFs of ?AsyncDestroy@XamlTaskbarProxy@@UEAAXXZ @ 0x180128740
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180129360 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00___ @ 0x180129594 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlTaskbarProxy::AsyncDestroy(XamlTaskbarProxy *this)
{
  signed __int32 v2; // eax
  void *v3; // r8
  signed __int32 v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  XamlTaskbarProxy *v10; // [rsp+68h] [rbp+10h]
  __int64 v11; // [rsp+70h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+20h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 11, &SRWLock);
  if ( *((_QWORD *)this + 9) )
  {
    v10 = this;
    do
      v2 = *((_DWORD *)this + 9);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange((volatile signed __int32 *)this + 9, v2 + 1, v2) );
    v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v11 = (__int64)v3;
    v8[0] = this;
    v8[1] = this;
    do
      v4 = *((_DWORD *)this + 9);
    while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange((volatile signed __int32 *)this + 9, v4 + 1, v4) );
    v5 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00___(v3, v8);
    v11 = v5;
    v6 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, v5);
    v7 = v6;
    v12 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v7);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)this);
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
}
