/*
 * XREFs of ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180113EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHandledEventArgs@@@WRL@Microsoft@@@012@$$QEA_N@Z @ 0x180119818 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComP.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ViewWrapperBase::OperationRequestComplete(__int64 a1, int a2, __int32 a3)
{
  __int64 v5; // rbx
  void *v6; // rcx
  volatile signed __int64 *v7; // rcx
  volatile signed __int64 *v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-20h] BYREF
  PSRWLOCK v11[3]; // [rsp+38h] [rbp-18h] BYREF
  bool v12; // [rsp+78h] [rbp+28h] BYREF
  void *v13; // [rsp+88h] [rbp+38h] BYREF

  v11[1] = (PSRWLOCK)-2LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      return;
    ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 144), &SRWLock);
    v5 = *(_QWORD *)(a1 + 440);
    *(_QWORD *)(a1 + 440) = 0LL;
    v11[2] = (PSRWLOCK)v5;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v5 )
    {
      _InterlockedExchange((volatile __int32 *)(v5 + 144), a3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 128LL))(v5 + 16);
    }
  }
  else
  {
    v5 = 0LL;
    v9 = 0LL;
    ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 144), v11);
    if ( *(_BYTE *)(a1 + 428) )
    {
      *(_BYTE *)(a1 + 428) = 0;
      v5 = *(_QWORD *)(a1 + 432);
      *(_QWORD *)(a1 + 432) = 0LL;
      v9 = v5;
    }
    if ( v11[0] )
      ReleaseSRWLockExclusive(v11[0]);
    v6 = 0LL;
    v13 = 0LL;
    if ( v5 )
    {
      if ( (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v9, &GUID_067c572c_3d80_58c9_807a_311aafdc58b6, &v13) >= 0 )
      {
        v8 = 0LL;
        v12 = a3 == 1;
        if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool>(&v8, &v12) >= 0 )
          (*(void (__fastcall **)(void *, _QWORD, volatile signed __int64 *))(*(_QWORD *)v13 + 24LL))(
            v13,
            a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 8) >> 64),
            v8);
        v7 = v8;
        if ( v8 )
        {
          v8 = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v7);
        }
      }
      v6 = v13;
    }
    if ( v6 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
