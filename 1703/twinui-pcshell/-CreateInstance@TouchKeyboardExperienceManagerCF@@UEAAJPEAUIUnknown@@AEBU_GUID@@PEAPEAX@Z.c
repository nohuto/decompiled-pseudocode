/*
 * XREFs of ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18016CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18016AD24 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18016B20C (-RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIImmersiveLayoutChanges@@U?$InterfaceList@UITabTipAdapterOwner@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016D3C0 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$I_ea_18016D3C0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIImmersiveLayoutChanges@@U?$InterfaceList@UITabTipAdapterOwner@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016D470 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$In_ea_18016D470.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIImmersiveLayoutChanges@@U?$InterfaceList@UITabTipAdapterOwner@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016D4E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSit_ea_18016D4E0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManagerCF::CreateInstance(
        TouchKeyboardExperienceManagerCF *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  TouchKeyboardExperienceManager *v7; // rax
  int v8; // edi
  TouchKeyboardExperienceManager *v9; // rbx
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  TouchKeyboardExperienceManager *v12; // [rsp+58h] [rbp+10h]

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  v12 = 0LL;
  v7 = (TouchKeyboardExperienceManager *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(v7);
    v8 = TouchKeyboardExperienceManager::RuntimeClassInitialize((LONG_PTR)v9);
    if ( v8 >= 0 )
    {
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v9);
      v12 = v9;
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v9);
      v8 = 0;
    }
    else if ( v9 )
    {
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v9);
    }
    if ( v8 >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    v12,
                    a3,
                    a4);
      v8 = Interface;
      if ( Interface < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x366,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)Interface);
      goto LABEL_17;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x365,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_17:
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v12);
  return (unsigned int)v8;
}
