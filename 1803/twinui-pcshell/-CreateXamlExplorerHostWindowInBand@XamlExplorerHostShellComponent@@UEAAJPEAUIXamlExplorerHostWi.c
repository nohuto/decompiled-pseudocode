/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1801F7F10
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x1801F7E70 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x1801F87A0 (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F9134 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4Rep.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FA99C (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::CreateXamlExplorerHostWindowInBand(
        XamlExplorerHostShellComponent *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        struct tagRECT *a3,
        unsigned int a4,
        const struct _GUID *a5,
        void **a6)
{
  const struct _GUID *v10; // r9
  __int64 (__fastcall ***v11)(void *, GUID *, struct tagRECT *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  int v16; // eax
  bool v17; // [rsp+40h] [rbp-68h] BYREF
  void *v18; // [rsp+48h] [rbp-60h] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v20 = -2LL;
  try
  {
    *a6 = 0LL;
    v18 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService();
    v17 = 0;
    v19 = *a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    if ( (int)XamlExplorerHostShellComponent::GrabAvailableWindowForSize(
                (XamlExplorerHostShellComponent *)((char *)this - 128),
                &v19,
                &v17,
                v10,
                &v18) < 0 )
    {
      v19 = *a3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
        *((_QWORD *)this + 12),
        (_DWORD)a2,
        (unsigned int)&v19,
        a4,
        *((_QWORD *)this + 14),
        this != (XamlExplorerHostShellComponent *)128 ? (unsigned int)this : 0);
    }
    else
    {
      if ( !v17 )
        (*(void (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)v18 + 48LL))(v18, a3);
      *(_QWORD *)&v19.left = 0LL;
      v11 = (__int64 (__fastcall ***)(void *, GUID *, struct tagRECT *))v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19.left);
      v12 = (**v11)(v11, &GUID_f8e82291_6438_4724_8220_b95054cbeac9, &v19);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB1,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19.left);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        return v13;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v19.left + 88LL))(*(_QWORD *)&v19.left, a4);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v19.left + 80LL))(*(_QWORD *)&v19.left);
      (*(void (__fastcall **)(_QWORD, struct IXamlExplorerHostWindowCreatedCallback *))(**(_QWORD **)&v19.left + 64LL))(
        *(_QWORD *)&v19.left,
        a2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19.left);
    }
    v16 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v18)(v18, a5, a6);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        193LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC5,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v14);
  }
  return result;
}
