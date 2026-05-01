/*
 * XREFs of ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1800642F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18006336C (-RuntimeClassInitialize@FrameWrapper@@QEAAJPEAUIApplicationFrame@@PEAUIPrivilegedPresentationOpe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FrameFactory::CreateFrameWithWrapper(FrameFactory *this, struct IApplicationFrameWrapper **a2)
{
  int v4; // eax
  int v5; // edi
  char *v6; // r14
  char v7; // si
  struct IPrivilegedPresentationOperations *v8; // rdi
  struct IApplicationFrame *v9; // r12
  Microsoft::WRL::FtmBase *v10; // rax
  Microsoft::WRL::FtmBase *v11; // rbx
  struct IApplicationFrame *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct IApplicationFrame *v15; // [rsp+80h] [rbp+40h] BYREF
  Microsoft::WRL::FtmBase *v16; // [rsp+90h] [rbp+50h]
  Microsoft::WRL::FtmBase *v17; // [rsp+98h] [rbp+58h]

  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrame **))(**((_QWORD **)this + 3) + 24LL))(
         *((_QWORD *)this + 3),
         &v15);
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
  v6 = (char *)this - 40;
  v7 = 1;
  v8 = (struct IPrivilegedPresentationOperations *)*((_QWORD *)this + 2);
  v9 = v15;
  *a2 = 0LL;
  v10 = (Microsoft::WRL::FtmBase *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v16 = v10;
  if ( !v10 )
  {
    v5 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x160,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_15;
  }
  Microsoft::WRL::FtmBase::FtmBase(v10);
  *((_DWORD *)v11 + 13) = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IApplicationFrameWrapper>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v11 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IApplicationFrameWrapper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationFrameWrapper>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v11 = &FrameWrapper::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v11 + 5) = &FrameWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationFrameWrapper>'};
  *((_QWORD *)v11 + 7) = 0LL;
  *((_QWORD *)v11 + 8) = 0LL;
  *((_QWORD *)v11 + 10) = 0LL;
  *((_DWORD *)v11 + 22) = 0;
  v17 = v11;
  v16 = 0LL;
  v5 = FrameWrapper::RuntimeClassInitialize(v11, v9, v8);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, struct IApplicationFrameWrapper **))v11)(
           v11,
           &GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19,
           a2);
  }
  else if ( !v11 )
  {
    goto LABEL_12;
  }
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_12:
  if ( v5 < 0 )
    goto LABEL_13;
  v7 = 0;
  v5 = 0;
LABEL_15:
  if ( v7 )
    (*(void (__fastcall **)(_QWORD, struct IApplicationFrame *))(**((_QWORD **)v6 + 8) + 32LL))(
      *((_QWORD *)v6 + 8),
      v15);
LABEL_17:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v5;
}
