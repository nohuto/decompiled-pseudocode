/*
 * XREFs of ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180052E80
 * Callers:
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180052D20 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x180180A54 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E5C98 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@AEA_N@Z @ 0x1801EEAA4 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandle.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ViewWrapperBase::OperationRequestComplete(__int64 a1, int a2, __int32 a3)
{
  RTL_SRWLOCK *v5; // rsi
  volatile __int32 *v6; // rbx
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  void *v9; // rcx
  void *v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  volatile __int32 *v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+38h] [rbp-8h]
  bool v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = -2LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
      AcquireSRWLockExclusive(v5);
      v6 = *(volatile __int32 **)(a1 + 464);
      *(_QWORD *)(a1 + 464) = 0LL;
      v12 = v6;
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      if ( v6 )
      {
        _InterlockedExchange(v6 + 42, a3);
        v6 = v12;
        (*(void (__fastcall **)(volatile __int32 *))(*((_QWORD *)v12 + 2) + 128LL))(v12 + 4);
      }
      if ( v6 )
        (*(void (__fastcall **)(volatile __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v7 = 0LL;
    v11 = 0LL;
    v8 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
    AcquireSRWLockExclusive(v8);
    if ( *(_BYTE *)(a1 + 452) )
    {
      *(_BYTE *)(a1 + 452) = 0;
      AgileGitPtr::operator=(&v11, a1 + 456);
      v7 = v11;
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v10 = 0LL;
    if ( v7 && (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v11, &GUID_067c572c_3d80_58c9_807a_311aafdc58b6, &v10) >= 0 )
    {
      v15 = 0LL;
      v14 = a3 == 1;
      Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v15);
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool &>(&v15, &v14) >= 0 )
        (*(void (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)v10 + 24LL))(
          v10,
          a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 8) >> 64),
          v15);
      Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v15);
    }
    v9 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  }
}
