/*
 * XREFs of ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180056074
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180059B40 (--$_Callback_once@V-$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x180007784 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800077A8 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??$?4AEAV?$function@$$A6AX_N@Z@std@@X@?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z @ 0x18000886C (--$-4AEAV-$function@$$A6AX_N@Z@std@@X@-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180008CF8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008D3C (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180058FD0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall MPCHolographicInputManager::MPCHolographicInputManager(MPCHolographicInputManager *this)
{
  __int64 *v2; // rdi
  _DWORD *v3; // r14
  __int64 *v4; // rbx
  const char *v5; // r9
  const char *v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  RTL_SRWLOCK *v9; // rax
  RTL_SRWLOCK *v10; // rdi
  __int64 v11; // rdx
  __int64 *Ptr; // rcx
  __int64 v13; // rax
  __int64 *v14; // rbx
  unsigned int *v15; // rax
  _QWORD *v16; // rdx
  RTL_SRWLOCK *v17; // rax
  RTL_SRWLOCK *v18; // rdi
  char v19; // bl
  std::exception_ptr *v20; // rax
  _BYTE v21[16]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-41h] BYREF
  char v23[16]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v24[2]; // [rsp+68h] [rbp-21h] BYREF
  char v25; // [rsp+78h] [rbp-11h]
  MPCHolographicInputManager *v26; // [rsp+80h] [rbp-9h]
  _QWORD *v27; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  char v29; // [rsp+F0h] [rbp+67h]
  __int64 *v30; // [rsp+F8h] [rbp+6Fh] BYREF
  _QWORD *v31; // [rsp+100h] [rbp+77h]
  RTL_SRWLOCK *v32; // [rsp+108h] [rbp+7Fh]

  v29 = (char)this;
  *((_QWORD *)this + 382) = 0LL;
  *((_QWORD *)this + 383) = 0LL;
  *((_QWORD *)this + 384) = 0LL;
  *((_QWORD *)this + 385) = 0LL;
  *((_QWORD *)this + 386) = 0LL;
  *((_QWORD *)this + 387) = 0LL;
  *((_QWORD *)this + 388) = 0LL;
  *((_QWORD *)this + 389) = 0LL;
  *((_QWORD *)this + 390) = 0LL;
  *((_WORD *)this + 1564) = 0;
  *((_BYTE *)this + 3132) = 0;
  *((_DWORD *)this + 784) = 0;
  *((_QWORD *)this + 393) = 0LL;
  *((_QWORD *)this + 394) = 0LL;
  memset((char *)this + 3160, 0, 0xB0uLL);
  *((_QWORD *)this + 417) = 0LL;
  *((_QWORD *)this + 418) = 0LL;
  *((_QWORD *)this + 419) = 0LL;
  v2 = (__int64 *)((char *)this + 3360);
  *((_QWORD *)this + 420) = 0LL;
  *((_QWORD *)this + 421) = 0LL;
  *((_QWORD *)this + 422) = 0LL;
  *((_DWORD *)this + 846) = 1;
  *((_QWORD *)this + 424) = 0LL;
  *((_DWORD *)this + 850) = 0;
  v3 = (_DWORD *)((char *)this + 3404);
  *((_DWORD *)this + 851) = 0;
  *((_QWORD *)this + 426) = 0LL;
  *((_BYTE *)this + 3416) = 0;
  *(_QWORD *)((char *)this + 3420) = 0LL;
  *((_DWORD *)this + 857) = 50;
  *((_DWORD *)this + 858) = 50;
  v4 = (__int64 *)operator new(0x30uLL);
  v30 = v4;
  *(_WORD *)v4 = 0;
  v4[1] = 0LL;
  v4[2] = 0LL;
  v4[3] = 0LL;
  v4[4] = 0LL;
  *((_BYTE *)v4 + 40) = 0;
  *((_DWORD *)v4 + 7) = GetCurrentProcessId();
  MPCGamepadInputHelper::UpdateGamepadFocus((MPCGamepadInputHelper *)v4);
  MPCGamepadInputHelper::s_instance = (struct MPCGamepadInputHelper *)v4;
  if ( MPCManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v5);
    __debugbreak();
  }
  LOBYTE(v30) = 0;
  __ExceptionPtrCreate(v21);
  v22[0] = v21;
  v22[1] = &v30;
  if ( std::_Execute_once(
         (struct std::once_flag *)&MPCManager::s_singletonCreated,
         (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_99e73fa34aafd1797f49aac95efb490d_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
         v22) )
  {
    __ExceptionPtrDestroy(v21);
    if ( !MPCManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v6);
      __debugbreak();
    }
    v7 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = CoreUICreate((char *)this + 3360);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    *((_BYTE *)this + 3048) = 0;
    v30 = v24;
    v24[0] = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
    v24[1] = MPCHolographicInputManager::OnHitTestingStateChanged;
    v25 = v29;
    v26 = this;
    v27 = v24;
    v31 = v24;
    MPC3DStateHelper::GetInstance();
    v10 = v9;
    AcquireSRWLockExclusive(v9);
    v32 = v10;
    *v3 = LODWORD(v10[2].Ptr)++;
    Ptr = (__int64 *)v10[6].Ptr;
    v13 = Ptr[1];
    v14 = Ptr;
    if ( !*(_BYTE *)(v13 + 25) )
    {
      v11 = (unsigned int)*v3;
      do
      {
        if ( *(_DWORD *)(v13 + 32) >= (unsigned int)v11 )
        {
          v14 = (__int64 *)v13;
          v13 = *(_QWORD *)v13;
        }
        else
        {
          v13 = *(_QWORD *)(v13 + 16);
        }
      }
      while ( !*(_BYTE *)(v13 + 25) );
    }
    if ( v14 == Ptr || *v3 < *((_DWORD *)v14 + 8) )
    {
      v30 = (__int64 *)((char *)this + 3404);
      v15 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                              (__int64)&v10[6],
                              v11,
                              (_DWORD **)&v30);
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        (__int64 ***)&v10[6],
        &v30,
        v14,
        v15 + 8,
        v15);
      v14 = v30;
    }
    std::function<void (bool)>::operator=<std::function<void (bool)> &,void>((__int64)(v14 + 5), (__int64)v24);
    ReleaseSRWLockExclusive(v10);
    if ( v27 )
    {
      v16 = v24;
      LOBYTE(v16) = v27 != v24;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v27 + 32LL))(v27, v16);
    }
    MPC3DStateHelper::GetInstance();
    v18 = v17;
    AcquireSRWLockShared(v17);
    v19 = BYTE5(v18[2].Ptr);
    ReleaseSRWLockShared(v18);
    if ( v19 )
      MPCHolographicInputManager::OnHitTestingStateChanged(this, 1);
  }
  else
  {
    if ( __ExceptionPtrToBool(v21) )
    {
      v20 = std::exception_ptr::exception_ptr((std::exception_ptr *)v23, (const struct std::exception_ptr *)v21);
      std::rethrow_exception(v20);
    }
    std::_XGetLastError();
  }
}
