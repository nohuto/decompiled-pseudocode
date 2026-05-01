/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x18005FCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x18005FB58 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Wind.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run(
        __int64 a1)
{
  volatile signed __int32 *Ptr; // rbx
  RTL_SRWLOCK *v2; // rdi
  signed __int32 v3; // eax
  __int128 v4; // [rsp+20h] [rbp-28h]
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 16);
  Ptr = 0LL;
  v2 = (RTL_SRWLOCK *)(v4 + 8);
  *((_QWORD *)&v4 + 1) = *(_QWORD *)(a1 + 32);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v4 + 16), &SRWLock);
  if ( *(_QWORD *)(v4 + 8) )
  {
    Ptr = (volatile signed __int32 *)v2->Ptr;
    do
      v3 = *((_DWORD *)Ptr + 3);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange(Ptr + 3, v3 + 1, v3) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr )
  {
    v5 = v4;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
      &v5,
      (__int64)Ptr,
      v2);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(Ptr);
  }
}
