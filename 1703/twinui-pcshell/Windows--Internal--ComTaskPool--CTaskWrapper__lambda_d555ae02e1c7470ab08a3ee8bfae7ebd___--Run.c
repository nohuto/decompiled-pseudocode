/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x180070A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___ @ 0x18005FB58 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  RTL_SRWLOCK *v8; // rax
  RTL_SRWLOCK *v9; // rdi
  volatile signed __int32 *Ptr; // rbx
  signed __int32 v11; // eax
  __int128 v12; // [rsp+30h] [rbp-20h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+90h] [rbp+40h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 121LL) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(__int64 **)(v2 + 88);
  v4 = *(__int64 **)(v2 + 96);
  while ( v3 != v4 )
  {
    v5 = *v3;
    v16 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v14 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 40LL))(
           v5,
           &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67,
           &v14) >= 0 )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL))(v14, v6);
    }
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    ++v3;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *(RTL_SRWLOCK **)(a1 + 16);
  v9 = v8 + 8;
  v12 = (unsigned __int64)v8;
  Ptr = 0LL;
  wil::srwlock::lock_exclusive(v8 + 9, &SRWLock);
  if ( v9->Ptr )
  {
    Ptr = (volatile signed __int32 *)v9->Ptr;
    do
      v11 = *((_DWORD *)Ptr + 3);
    while ( v11 != 0x7FFFFFFF && v11 != _InterlockedCompareExchange(Ptr + 3, v11 + 1, v11) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr )
  {
    v13 = v12;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bf1a12db3054eef3113d4368dbd0853d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___(
      &v13,
      (__int64)Ptr,
      v9);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(Ptr);
  }
}
