/*
 * XREFs of ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180062600
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18006167C (-RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOpe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FrameFactory::CreateFrameWithWrapper(FrameFactory *this, struct IApplicationFrameWrapper **a2)
{
  int v4; // eax
  int v5; // edi
  struct IPrivilegedPresentationOperations *v6; // rdi
  struct IApplicationFrame *v7; // r14
  Microsoft::WRL::FtmBase *v8; // rax
  Microsoft::WRL::FtmBase *v9; // rbx
  char v10; // al
  struct IApplicationFrame *v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IApplicationFrame *v17; // [rsp+80h] [rbp+30h] BYREF
  Microsoft::WRL::FtmBase *v18; // [rsp+90h] [rbp+40h]
  Microsoft::WRL::FtmBase *v19; // [rsp+98h] [rbp+48h]

  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrame **))(**((_QWORD **)this + 3) + 24LL))(
         *((_QWORD *)this + 3),
         &v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x159,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_17;
  }
  *(_QWORD *)&v13 = (char *)this - 24;
  *((_QWORD *)&v13 + 1) = &v17;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v14, &v13);
  v6 = (struct IPrivilegedPresentationOperations *)*((_QWORD *)this + 2);
  v7 = v17;
  *a2 = 0LL;
  v18 = 0LL;
  v8 = (Microsoft::WRL::FtmBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v19 = v8;
  if ( !v8 )
  {
    v5 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x160,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v5);
    v10 = v15;
    goto LABEL_15;
  }
  Microsoft::WRL::FtmBase::FtmBase(v8);
  *((_DWORD *)v9 + 9) = 1;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IApplicationFrameWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IApplicationFrameWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationFrameWrapper,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &FrameWrapper::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v9 + 3) = &FrameWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IApplicationFrameWrapper,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)v9 + 5) = 0LL;
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 8) = 0LL;
  *((_DWORD *)v9 + 18) = 0;
  v18 = v9;
  v19 = 0LL;
  v5 = FrameWrapper::RuntimeClassInitialize(v9, v7, v6);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, struct IApplicationFrameWrapper **))v9)(
           v9,
           &GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19,
           a2);
  }
  else if ( !v9 )
  {
    goto LABEL_12;
  }
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_12:
  if ( v5 < 0 )
    goto LABEL_13;
  v10 = 0;
  v5 = 0;
LABEL_15:
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14[0] + 48LL) + 32LL))(
      *(_QWORD *)(v14[0] + 48LL),
      *(_QWORD *)v14[1]);
LABEL_17:
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v5;
}
