/*
 * XREFs of ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004D1DC
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180050E50 (--$_Callback_once@V-$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000819C (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180008B98 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008BD4 (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1800092C8 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800092F8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800503A0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800580B0 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
MPCHolographicInputManager *__fastcall MPCHolographicInputManager::MPCHolographicInputManager(
        MPCHolographicInputManager *this)
{
  char *v2; // rbx
  __int64 *v3; // rdi
  _DWORD *v4; // r14
  void ***v5; // rbx
  const char *v6; // r9
  wil::details::in1diag3 *v7; // rcx
  const char *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  RTL_SRWLOCK *v11; // rax
  RTL_SRWLOCK *v12; // rdi
  __int64 v13; // rdx
  void ***Ptr; // rcx
  void **v15; // rax
  void ***v16; // rbx
  void ***v17; // r8
  unsigned int *v18; // rax
  void ***v19; // rdx
  RTL_SRWLOCK *v20; // rax
  RTL_SRWLOCK *v21; // rdi
  char v22; // bl
  std::exception_ptr *v24; // rax
  _BYTE v25[16]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v26; // [rsp+40h] [rbp-49h] BYREF
  MPCHolographicInputManager *v27; // [rsp+50h] [rbp-39h]
  _QWORD v28[2]; // [rsp+58h] [rbp-31h] BYREF
  void **v29; // [rsp+68h] [rbp-21h] BYREF
  __int128 v30; // [rsp+70h] [rbp-19h]
  MPCHolographicInputManager *v31; // [rsp+80h] [rbp-9h]
  void ***v32; // [rsp+A0h] [rbp+17h]
  __int64 v33; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  void ***v35; // [rsp+F8h] [rbp+6Fh] BYREF
  void ***v36; // [rsp+100h] [rbp+77h]
  RTL_SRWLOCK *v37; // [rsp+108h] [rbp+7Fh]

  v33 = -2LL;
  v2 = (char *)this + 200;
  memset_0((char *)this + 200, 0, 0x6C8uLL);
  *((_DWORD *)v2 + 6) = 1736;
  *((_QWORD *)this + 243) = 0LL;
  *((_QWORD *)this + 244) = 0LL;
  *((_QWORD *)this + 245) = 0LL;
  *((_QWORD *)this + 246) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = 0LL;
  *((_QWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  *((_DWORD *)this + 502) = 0;
  *((_BYTE *)this + 2012) = 0;
  *((_DWORD *)this + 504) = 0;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 254) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  memset_0((char *)this + 2048, 0, 0xB0uLL);
  *((_QWORD *)this + 278) = 0LL;
  *((_QWORD *)this + 279) = 0LL;
  *((_QWORD *)this + 280) = 0LL;
  v3 = (__int64 *)((char *)this + 2248);
  *((_QWORD *)this + 281) = 0LL;
  *((_QWORD *)this + 282) = 0LL;
  *((_QWORD *)this + 283) = 0LL;
  *((_DWORD *)this + 568) = 1;
  *((_QWORD *)this + 285) = 0LL;
  *((_DWORD *)this + 572) = 0;
  v4 = (_DWORD *)((char *)this + 2292);
  *((_DWORD *)this + 573) = 0;
  *((_BYTE *)this + 2296) = 0;
  *(_QWORD *)((char *)this + 2300) = 0LL;
  *((_DWORD *)this + 577) = 50;
  *((_DWORD *)this + 578) = 50;
  v5 = (void ***)operator new(0x30uLL);
  v35 = v5;
  *(_WORD *)v5 = 0;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  *((_WORD *)v5 + 20) = 0;
  *((_DWORD *)v5 + 7) = GetCurrentProcessId();
  MPCGamepadInputHelper::UpdateGamepadFocus((MPCGamepadInputHelper *)v5);
  MPCGamepadInputHelper::s_instance = (struct MPCGamepadInputHelper *)v5;
  v7 = retaddr;
  if ( MPCManager::s_instance )
    goto LABEL_24;
  LOBYTE(v35) = 0;
  __ExceptionPtrCreate(v25);
  v28[0] = v25;
  v28[1] = &v35;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCManager::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_bf3949d951f60169eb17c52705c3d45b_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v28) )
  {
    if ( __ExceptionPtrToBool(v25) )
      goto LABEL_27;
    std::_XGetLastError();
LABEL_24:
    wil::details::in1diag3::_FailFast_Unexpected(
      v7,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v6);
    __debugbreak();
  }
  __ExceptionPtrDestroy(v25);
  if ( !MPCManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v8);
    __debugbreak();
  }
  v9 = *v3;
  if ( *v3 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = CoreUICreate((char *)this + 2248);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_27:
    v24 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v26, (const struct std::exception_ptr *)v25);
    std::rethrow_exception(v24);
  }
  *((_BYTE *)this + 1936) = 0;
  v35 = &v29;
  *(_QWORD *)&v26 = MPCHolographicInputManager::OnHitTestingStateChanged;
  v27 = this;
  v29 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::`vftable';
  v30 = v26;
  v31 = this;
  v32 = &v29;
  v36 = &v29;
  MPC3DStateHelper::GetInstance();
  v12 = v11;
  AcquireSRWLockExclusive(v11);
  v37 = v12;
  *v4 = LODWORD(v12[2].Ptr)++;
  Ptr = (void ***)v12[6].Ptr;
  v15 = Ptr[1];
  v16 = Ptr;
  while ( !*((_BYTE *)v15 + 25) )
  {
    v17 = (void ***)v15;
    v13 = *((unsigned int *)v15 + 8);
    if ( (unsigned int)v13 >= *v4 )
      v15 = (void **)*v15;
    else
      v15 = (void **)v15[2];
    if ( (unsigned int)v13 >= *v4 )
      v16 = v17;
  }
  if ( v16 == Ptr || *v4 < *((_DWORD *)v16 + 8) )
  {
    v35 = (void ***)((char *)this + 2292);
    v18 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            (__int64)&v12[6],
                            v13,
                            (_DWORD **)&v35);
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      (__int64)&v12[6],
      &v35,
      (__int64 *)v16,
      v18 + 8,
      v18);
    v16 = v35;
  }
  std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=((__int64)(v16 + 5), (__int64)&v29);
  ReleaseSRWLockExclusive(v12);
  if ( v32 )
  {
    v19 = &v29;
    LOBYTE(v19) = v32 != &v29;
    ((void (__fastcall *)(void ***, void ***))(*v32)[4])(v32, v19);
  }
  MPC3DStateHelper::GetInstance();
  v21 = v20;
  AcquireSRWLockShared(v20);
  v22 = BYTE5(v21[2].Ptr);
  ReleaseSRWLockShared(v21);
  if ( v22 )
    MPCHolographicInputManager::OnHitTestingStateChanged(this, 1);
  return this;
}
