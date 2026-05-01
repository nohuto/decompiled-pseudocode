/*
 * XREFs of ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x1801F2AB0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1801F2690 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1801F2690.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x180180A54 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@AEA_N@Z @ 0x1801EEAA4 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandle.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180263C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowWrapperBase::OnBackComplete(WindowWrapperBase *this, char a2)
{
  __int64 v3; // rbx
  int v4; // eax
  PSRWLOCK v5; // rbx
  void *v6; // rcx
  void *v7; // [rsp+50h] [rbp+20h] BYREF
  char v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+38h] BYREF

  v8 = a2;
  v3 = 0LL;
  v9 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 39) + 152LL))(*((_QWORD *)this + 39), &SRWLock);
  if ( *((_BYTE *)this + 236) )
  {
    *((_BYTE *)this + 236) = 0;
    AgileGitPtr::operator=(&v9, (__int64 *)this + 30);
    v3 = v9;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v7 = 0LL;
  if ( v3 && (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v9, &GUID_067c572c_3d80_58c9_807a_311aafdc58b6, &v7) >= 0 )
  {
    SRWLock = 0LL;
    v4 = Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool &>(&SRWLock, &v8);
    v5 = SRWLock;
    if ( v4 >= 0 )
      (*(void (__fastcall **)(void *, char *, PSRWLOCK))(*(_QWORD *)v7 + 24LL))(v7, (char *)this + 8, SRWLock);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v5);
  }
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v9);
}
