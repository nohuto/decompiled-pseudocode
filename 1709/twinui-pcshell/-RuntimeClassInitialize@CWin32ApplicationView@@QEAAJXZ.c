/*
 * XREFs of ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007E124
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180075BF0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18007E35C (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18007FDB0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18008492C (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppSizeConstraintsCache@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800859F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::RuntimeClassInitialize(CWin32ApplicationView *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  _QWORD *v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // rax
  void *v7; // rbx
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v11; // [rsp+40h] [rbp+18h]

  v2 = CApplicationViewBase::RuntimeClassInitialize(this);
  if ( v2 < 0 )
  {
    v3 = 32LL;
    goto LABEL_23;
  }
  v4 = (_QWORD *)((char *)this + 200);
  v5 = *((_QWORD *)this + 25);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *v4 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6E,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)0x8007000ELL);
LABEL_22:
    v3 = 33LL;
    goto LABEL_23;
  }
  v6[3] = 1;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppSizeConstraintsCache>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &AppSizeConstraintsCache::`vftable';
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_QWORD *)v7 + 5) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 3);
  v11 = (volatile signed __int32 *)v7;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 40LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppSizeConstraintsCache>::QueryInterface(
                v7,
                &GUID_0ef8c099_d96f_4be1_94ed_cd8beb90775b,
                (char *)this + 200);
  v2 = Interface;
  if ( Interface < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)(unsigned int)Interface);
  if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 40LL))(v11, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( v2 < 0 )
    goto LABEL_22;
  v2 = CWin32ApplicationView::InitializeCloakType(this, 0LL);
  if ( v2 >= 0 )
  {
    CWin32ApplicationView::QuerySizeConstraintsFromApp(this);
    return 0LL;
  }
  v3 = 34LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
