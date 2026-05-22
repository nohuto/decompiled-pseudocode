/*
 * XREFs of ??0MPCManager@@QEAA@XZ @ 0x18005D4B8
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_99e73fa34aafd1797f49aac95efb490d_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18005E590 (--$_Callback_once@V-$tuple@$$QEAV_lambda_99e73fa34aafd1797f49aac95efb490d_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@PEAX@2@XZ @ 0x180028CF4 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoCompar.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x18005D2BC (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
MPCManager *__fastcall MPCManager::MPCManager(MPCManager *this)
{
  __int64 *v2; // r13
  __int64 *v3; // r12
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // rbp
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  const char *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rbx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int EndpointHost; // eax
  __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  ISMTracing *v30; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v33; // [rsp+88h] [rbp+10h] BYREF
  char *v34; // [rsp+90h] [rbp+18h]

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageSessionListener>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCManager::`vftable';
  v2 = (__int64 *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v3 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v4 = (_QWORD *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  v5 = (_QWORD *)((char *)this + 48);
  *((_QWORD *)this + 6) = 0LL;
  v6 = (_QWORD *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  memset((char *)this + 64, 0, 0x28uLL);
  v7 = (_QWORD *)((char *)this + 104);
  *((_QWORD *)this + 13) = 0LL;
  v34 = (char *)this + 112;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = std::_Tree_comp_alloc<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::_Buyheadnode();
  v33 = 0LL;
  v8 = QueryTransientObjectSecurityDescriptor(8LL, L"CompositorAPI", &v33);
  if ( v8 < 0 )
  {
    v29 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v29 && *v29 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCManager_InitializationFailed_(v30, v8);
    }
  }
  else
  {
    v9 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = CoreUICreate((char *)this + 40);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v12 = *v4;
    if ( !*v4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v11);
      __debugbreak();
    }
    v13 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 24LL))(v12, (char *)this + 104);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = *v4;
    v16 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v15 + 48LL))(
            v15,
            v33,
            L"System\\Input\\MPCManagerPort",
            (char *)this + 48);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (_QWORD *)((char *)this + 32);
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, const void *, int), MPCManager *, _QWORD, char *))(*(_QWORD *)*v4 + 80LL))(
            *v4,
            MPCManager::MessageProc,
            this,
            *v5,
            (char *)this + 32);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v4 + 112LL))(*v4, *v18, (char *)this + 64);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64))(*(_QWORD *)*v7 + 40LL))(
            *v7,
            L"System\\Input\\MPCManagerEndpoint",
            *v18,
            1LL);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v22 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    EndpointHost = CoreUICallCreateEndpointHost(*v4, (char *)this + 16, (char *)this + 24);
    if ( EndpointHost < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)EndpointHost);
      __debugbreak();
    }
    v25 = *v4;
    v26 = *v6;
    if ( *v6 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 296LL))(v25, (char *)this + 56);
    if ( v27 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v27);
      __debugbreak();
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD, MPCManager *))(*(_QWORD *)*v6 + 32LL))(*v6, this);
    if ( v28 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v28);
      __debugbreak();
    }
  }
  return this;
}
