/*
 * XREFs of ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180071A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z @ 0x18007A50C (-RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::v_PublishServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  struct CApplicationViewManager *v3; // rdi
  Microsoft::WRL::FtmBase *v4; // rax
  Microsoft::WRL::FtmBase *v5; // rbx
  int v6; // edi
  signed __int32 v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h]

  v10 = 0LL;
  v3 = (CApplicationViewManager *)((char *)this - 56);
  v4 = (Microsoft::WRL::FtmBase *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v4);
    *((_DWORD *)v5 + 7) = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = &ApplicationViewManagement::CGlobals::`vftable';
    *((_QWORD *)v5 + 5) = 0LL;
    v6 = ApplicationViewManagement::CGlobals::RuntimeClassInitialize(v5, v3);
    if ( v6 >= 0 )
    {
      do
        v7 = *((_DWORD *)v5 + 7);
      while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 7, v7 + 1, v7) );
      v10 = (volatile signed __int32 *)v5;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
      v6 = 0;
    }
    else
    {
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
    }
    if ( v6 >= 0 )
    {
      AcquireSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals = (__int64)v10;
      ReleaseSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
      v6 = 0;
      goto LABEL_15;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x36,
    (__int64)"internal\\shell\\private\\inc\\GlobalsUtil.h",
    (const char *)(unsigned int)v6);
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
LABEL_15:
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
