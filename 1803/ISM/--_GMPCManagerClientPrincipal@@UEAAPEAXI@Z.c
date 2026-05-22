/*
 * XREFs of ??_GMPCManagerClientPrincipal@@UEAAPEAXI@Z @ 0x18002A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_180029F80.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

MPCManagerClientPrincipal *__fastcall MPCManagerClientPrincipal::`scalar deleting destructor'(
        MPCManagerClientPrincipal *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  volatile signed __int64 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (volatile signed __int64 *)*((_QWORD *)this + 7);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::Release(v6);
  v7 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = _InterlockedDecrement(v7 + 2);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x18002A259LL);
    }
    if ( !v8 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
