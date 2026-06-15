/*
 * XREFs of ?Initialize@DynamicAudioEndpointManager@@AEAAJXZ @ 0x180059C94
 * Callers:
 *     ?CreateInstance@DynamicAudioEndpointManager@@SAJPEAPEAV1@@Z @ 0x180059BFC (-CreateInstance@DynamicAudioEndpointManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@AEAAPEAVCNode@12@PEAUIPolicyRule@@PEAV312@1@Z @ 0x180059E30 (-NewNode@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U.c)
 *     ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x180059F00 (-Release@PersistedEndpointPolicyRule@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicAudioEndpointManager::Initialize(DynamicAudioEndpointManager *this)
{
  PersistedEndpointPolicyRule *v2; // rax
  PersistedEndpointPolicyRule *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  unsigned int (__fastcall *v7)(PersistedEndpointPolicyRule *__hidden); // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (PersistedEndpointPolicyRule *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 4) = 1;
    *(_QWORD *)v2 = &PersistedEndpointPolicyRule::`vftable'{for `IPolicyRule'};
    *((_QWORD *)v2 + 1) = &PersistedEndpointPolicyRule::`vftable'{for `CUnknown'};
    v4 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::NewNode(
           (char *)this + 736,
           v2,
           0LL,
           *((_QWORD *)this + 92),
           -2LL);
    v5 = *((_QWORD *)this + 92);
    if ( v5 )
      *(_QWORD *)(v5 + 8) = v4;
    else
      *((_QWORD *)this + 93) = v4;
    *((_QWORD *)this + 92) = v4;
    v6 = 0;
  }
  else
  {
    v3 = 0LL;
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x8007000ELL,
      -2);
  }
  if ( v3 )
  {
    v7 = *(unsigned int (__fastcall **)(PersistedEndpointPolicyRule *__hidden))(*(_QWORD *)v3 + 16LL);
    if ( v7 == PersistedEndpointPolicyRule::Release )
      PersistedEndpointPolicyRule::Release(v3);
    else
      v7(v3);
  }
  return v6;
}
