/*
 * XREFs of ?GetExperienceManager@VirtualTouchpadExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B8780
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x1800B61C8 (--0CVirtualTouchpadExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B6500 (-RuntimeClassInitialize@CVirtualTouchpadExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B8920 (-Release@-$RuntimeClass@U-$InterfaceList@UIVirtualTouchpadExperienceManager@Experience@Shell@Int.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B89C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIVirtualTouchpadExperienceManager@Experience@Sh.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadExperienceManagerFactory::GetExperienceManager(
        VirtualTouchpadExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  CVirtualTouchpadExperienceManager *v5; // rax
  int Interface; // ebx
  struct IUnknown *v7; // rdi
  struct IInspectable *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v11; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v5 = (CVirtualTouchpadExperienceManager *)operator new(0x2F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = (struct IUnknown *)CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager(v5);
    Interface = CVirtualTouchpadExperienceManager::RuntimeClassInitialize(v7, a2);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    (CVirtualTouchpadExperienceManager *)v7,
                    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                    (void **)&v11);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((CVirtualTouchpadExperienceManager *)v7);
    if ( Interface >= 0 )
    {
      Interface = 0;
      *a3 = v11;
      goto LABEL_11;
    }
  }
  else
  {
    Interface = -2147024882;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x310,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)Interface);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v8->lpVtbl->Release)(v8);
  }
LABEL_11:
  if ( Interface >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x321,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)Interface);
  return (unsigned int)Interface;
}
