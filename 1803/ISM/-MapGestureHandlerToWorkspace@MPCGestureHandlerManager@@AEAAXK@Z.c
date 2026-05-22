/*
 * XREFs of ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800552E0
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??A?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBK@Z @ 0x180055A08 (--A-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U-$less@K@std@@V-$al.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180058CE4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace(
        MPCGestureHandlerManager *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  MPCGestureHandler *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct IInputProcessorHost *v9; // rsi
  MPCGestureHandler *v10; // rax
  MPCGestureHandler **v11; // rax
  MPCGestureHandler *v12; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]

  v5 = *((_QWORD *)this + 6);
  if ( *((_QWORD *)this + 5) == v5 )
  {
    MPCHolographicInputManager::GetInstance();
    v9 = *(struct IInputProcessorHost **)(v8 + 1960);
    v10 = (MPCGestureHandler *)operator new(0x400uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = 0LL;
    if ( v10 )
      v6 = MPCGestureHandler::MPCGestureHandler(v10, v9);
  }
  else
  {
    v6 = *(MPCGestureHandler **)(v5 - 8);
    if ( v6 )
    {
      (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v6 + 8LL))(v6);
      v5 = *((_QWORD *)this + 6);
    }
    v7 = *(_QWORD *)(v5 - 8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 6) -= 8LL;
  }
  if ( !v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      a4);
    JUMPOUT(0x180055421LL);
  }
  v11 = (MPCGestureHandler **)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 8);
  v12 = *v11;
  *v11 = v6;
  (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v12 )
    (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v12 + 16LL))(v12);
  *((_DWORD *)v6 + 232) = a2;
  (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)v6 + 16LL))(v6);
}
