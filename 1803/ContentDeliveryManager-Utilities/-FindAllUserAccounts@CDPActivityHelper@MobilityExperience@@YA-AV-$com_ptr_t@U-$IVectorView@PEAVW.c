/*
 * XREFs of ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004A490
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x18004B79C (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004FEB8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAVWebAccount@Credentials@Security.c)
 *     ??_9IIdentityManager@ContentManagement@@$BDI@AA @ 0x1800506DC (--_9IIdentityManager@ContentManagement@@$BDI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts(_QWORD *a1)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v11[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(v11);
  v15 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v11[0] + 104LL))(v11[0], &v15);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x173,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v2);
    goto LABEL_14;
  }
  v13 = 0LL;
  v3 =  ContentManagement::IIdentityManager::`vcall'{56,{flat}}(v15, &v13);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x658,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    goto LABEL_15;
  }
  v5 = v13;
  v14 = 0LL;
  v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *> *>(v13);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v14);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x640,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x18004A5D8LL);
  }
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v14;
  v14 = 0LL;
  *a1 = v9;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v11[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return a1;
}
