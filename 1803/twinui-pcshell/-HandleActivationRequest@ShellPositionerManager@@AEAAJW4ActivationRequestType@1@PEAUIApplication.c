/*
 * XREFs of ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80
 * Callers:
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800237C0 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180024480 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020560 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020F50 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleActivation@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800217A0 (-ShouldHandleActivation@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180021B10 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180021C40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x180024650 (-GetPositioner@PerMonitorShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@AEBU_GUID@@PEAPEA.c)
 *     ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x1800246F0 (-Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?GetBitfieldToPersist@PositionerPriority@@UEAAKXZ @ 0x1800249B0 (-GetBitfieldToPersist@PositionerPriority@@UEAAKXZ.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z @ 0x180024E60 (-SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180025960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShe.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800259E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800259E0.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18005A864 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18008AE5C (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4_TABLETMODESTATE@@@Z @ 0x18008AEEC (--$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJP.c)
 *     ?InternalRelease@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@IEAAKXZ @ 0x1800951C4 (-InternalRelease@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@IEAAKXZ.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Create@ShellPositionerTelemetry@@IEAAXXZ @ 0x1802B91C8 (-Create@ShellPositionerTelemetry@@IEAAXXZ.c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1802B9BC4 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802BDF9C (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ShellPositionerManager::HandleActivationRequest(
        __int64 a1,
        int a2,
        CApplicationViewBase *a3,
        IUnknown *a4,
        struct IUnknown *a5)
{
  PositionerPriority *v8; // r14
  __int64 (__fastcall *v9)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  struct IApplicationView *v11; // rdx
  __int64 (__fastcall *v12)(PositionerPriority *); // rax
  int CurrentPositioner; // eax
  __int64 (__fastcall *v14)(PositionerPriority *__hidden, struct IShellPositionerPriority **); // rax
  int v15; // eax
  int v16; // ebx
  RTL_SRWLOCK *v17; // r12
  HRESULT v18; // eax
  unsigned int v19; // ebx
  struct IUnknown *v20; // r13
  __int64 (__fastcall *v21)(void *, _QWORD, GUID *, FullScreenPositioner **); // rax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, FullScreenPositioner **); // rcx
  int v23; // eax
  int v24; // edi
  __int64 (__fastcall *v25)(RTL_SRWLOCK *, _QWORD); // rax
  int v26; // esi
  __int64 (__fastcall *v27)(SurfaceHubPositioner *, struct IApplicationView *, struct IUnknown *); // rax
  unsigned int ShouldHandleActivation; // eax
  FullScreenPositioner *v29; // rcx
  struct IShellPositionerPriority *v30; // rbx
  __int64 (__fastcall *v31)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int v32; // eax
  int v33; // eax
  __int64 (*v34)(void); // rax
  unsigned int BitfieldToPersist; // eax
  struct IApplicationView *v36; // rdx
  unsigned int v37; // edi
  HWND v38; // rax
  const char *v39; // r9
  PositionerPriority *v40; // rcx
  void *v41; // rcx
  __int64 (*v42)(void); // rax
  unsigned int v43; // eax
  unsigned int v44; // edi
  IUnknown *v45; // r12
  __int64 (__fastcall *v46)(void *, _QWORD, GUID *, CDesktopPositioner **); // rax
  int Positioner; // eax
  void *v48; // rcx
  __int64 (__fastcall *v49)(CApplicationViewBase *__hidden, struct IShellPositionerPriority *); // rax
  int v50; // eax
  unsigned int v51; // esi
  _DWORD *v52; // rcx
  __int64 v53; // rcx
  __int64 (__fastcall *v54)(PositionerPropertySetHelpers *, CWinRTApplicationView *, unsigned int, struct IApplicationView *); // rax
  int v55; // eax
  CDesktopPositioner *v56; // rcx
  struct IShellPositionerPriority *v57; // rcx
  __int64 (__fastcall *v59)(CDesktopPositioner *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **), struct IUnknown *); // rax
  int v60; // eax
  struct IShellPositionerPriority *v61; // rcx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v64; // rdx
  struct IShellPositionerPriority *v65; // rcx
  int v66; // eax
  __int64 (__fastcall *v67)(FullScreenPositioner *, GUID *, struct IShellPositionerPriority **); // rax
  int v68; // eax
  FullScreenPositioner *v69; // rcx
  void (*v70)(void); // rax
  __int64 (__fastcall *v71)(CApplicationViewBase *__hidden, struct IShellPositionerPriority *); // rax
  int v72; // eax
  int Instance; // eax
  __int64 v74; // rdx
  struct IApplicationView *v75; // rdx
  HWND v76; // rax
  unsigned int v77; // eax
  const struct _GUID *v78; // rdx
  int v79; // eax
  __int64 v80; // rdx
  int v81; // eax
  int v82; // edi
  __int64 v83; // rdx
  __int64 v84; // r9
  __int64 v85; // rdx
  unsigned __int64 v86; // r9
  __int64 v87; // rdx
  HRESULT Service; // eax
  __int64 v89; // rcx
  int v90; // eax
  int v91; // [rsp+20h] [rbp-51h]
  int v92; // [rsp+20h] [rbp-51h]
  struct IShellPositionerPriority *v93; // [rsp+30h] [rbp-41h] BYREF
  FullScreenPositioner *v94; // [rsp+38h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  CDesktopPositioner *v97; // [rsp+50h] [rbp-21h] BYREF
  struct IShellPositionerPriority *v98; // [rsp+58h] [rbp-19h] BYREF
  PositionerPriority *v99; // [rsp+60h] [rbp-11h] BYREF
  struct IShellPositionerPriority *v100; // [rsp+68h] [rbp-9h] BYREF
  PositionerPriority *v101; // [rsp+70h] [rbp-1h]
  __int64 v102; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]
  __int64 fPending; // [rsp+E0h] [rbp+6Fh] BYREF
  IUnknown *punk; // [rsp+E8h] [rbp+77h]

  punk = a4;
  v102 = -2LL;
  v8 = 0LL;
  Context = 0LL;
  v101 = 0LL;
  v93 = 0LL;
  v9 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a3 + 264LL);
  if ( v9 == CApplicationViewBase::GetPositionerPriority )
    PositionerPriority = CApplicationViewBase::GetPositionerPriority(a3, &v93);
  else
    PositionerPriority = v9(a3, &v93);
  if ( PositionerPriority < 0 )
  {
    v61 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v93 = 0LL;
    WindowForView = ApplicationViewHelpers::GetWindowForView(a3, v11);
    if ( WindowForView )
    {
      PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
      if ( PropW )
      {
        Instance = PositionerPriority_CreateInstance(PropW, v64, (void **)&v93);
        if ( Instance >= 0 )
          goto LABEL_107;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D6,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)Instance,
          v91);
      }
    }
    v65 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v65 + 16LL))(v65);
    }
    LODWORD(fPending) = *(_DWORD *)(a1 + 144);
    v93 = 0LL;
    v94 = 0LL;
    v66 = Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum _TABLETMODESTATE &>(
            &v94,
            &fPending);
    v16 = v66;
    if ( v66 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
        (const char *)(unsigned int)v66,
        v91);
      Microsoft::WRL::ComPtr<PositionerPriority>::InternalRelease(&v94);
    }
    else
    {
      v67 = **(__int64 (__fastcall ***)(FullScreenPositioner *, GUID *, struct IShellPositionerPriority **))v94;
      if ( (char *)v67 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::QueryInterface )
        v68 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::QueryInterface(
                v94,
                &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb,
                &v93);
      else
        v68 = v67(v94, &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb, &v93);
      v16 = v68;
      if ( v68 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xED,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
          (const char *)(unsigned int)v68,
          v91);
      v69 = v94;
      if ( v94 )
      {
        v94 = 0LL;
        v70 = *(void (**)(void))(*(_QWORD *)v69 + 16LL);
        if ( (char *)v70 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::Release();
        else
          v70();
      }
    }
    if ( v16 < 0 )
    {
      v74 = 834LL;
      goto LABEL_119;
    }
LABEL_107:
    v71 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority *))(*(_QWORD *)a3 + 272LL);
    if ( v71 == CApplicationViewBase::SetPositionerPriority )
      v72 = CApplicationViewBase::SetPositionerPriority(a3, v93);
    else
      v72 = v71(a3, v93);
    v16 = v72;
    if ( v72 >= 0 )
      goto LABEL_4;
    v74 = 838LL;
LABEL_119:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v74,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v16,
      v91);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v93);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v16,
        v91);
      goto LABEL_82;
    }
    goto LABEL_8;
  }
LABEL_4:
  v8 = v93;
  Context = v93;
  if ( v93 )
  {
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v93 + 8LL))(v93);
    v8 = v93;
    Context = v93;
  }
  v101 = v8;
  if ( v8 )
  {
    v93 = 0LL;
    (*(void (__fastcall **)(PositionerPriority *))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_8:
  v12 = *(__int64 (__fastcall **)(PositionerPriority *))(*(_QWORD *)v8 + 24LL);
  if ( (char *)v12 == (char *)PositionerPriority::GetCurrentPositioner )
    CurrentPositioner = PositionerPriority::GetCurrentPositioner(v8);
  else
    CurrentPositioner = v12(v8);
  LODWORD(fPending) = CurrentPositioner;
  v98 = 0LL;
  v14 = *(__int64 (__fastcall **)(PositionerPriority *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)v8 + 64LL);
  if ( v14 == PositionerPriority::Clone )
    v15 = PositionerPriority::Clone(v8, &v98);
  else
    v15 = v14(v8, &v98);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v15,
      v91);
    goto LABEL_80;
  }
  v17 = (RTL_SRWLOCK *)v98;
  ppvOut = 0LL;
  v18 = IUnknown_QueryService(
          a4,
          &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
          &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
          &ppvOut);
  v16 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x358,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v18,
      v91);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v16,
      v92);
    goto LABEL_80;
  }
  v19 = 0;
  v20 = a5;
  do
  {
    if ( v19 <= 1 )
      goto LABEL_33;
    v94 = 0LL;
    v21 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, FullScreenPositioner **))(*(_QWORD *)ppvOut + 24LL);
    if ( (char *)v21 != (char *)PerMonitorShellPositionerManager::GetPositioner )
    {
      v24 = v21(ppvOut, v19, &GUID_ee010e17_919a_4068_868b_675acf787303, &v94);
LABEL_20:
      if ( v24 >= 0 )
      {
        v25 = (__int64 (__fastcall *)(RTL_SRWLOCK *, _QWORD))*((_QWORD *)v17->Ptr + 4);
        if ( (char *)v25 == (char *)&PositionerPriority::ContainsPositioner )
        {
          AcquireSRWLockShared(v17 + 3);
          v26 = *((unsigned __int8 *)&v17[4].Ptr + (int)v19);
          if ( v17 != (RTL_SRWLOCK *)-24LL )
            ReleaseSRWLockShared(v17 + 3);
        }
        else
        {
          v26 = v25(v17, v19);
        }
        v27 = *(__int64 (__fastcall **)(SurfaceHubPositioner *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v94 + 24LL);
        if ( v26 )
        {
          if ( !(unsigned int)v27(v94, a3, v20) )
            (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v17->Ptr + 6))(v17, v19);
        }
        else
        {
          if ( (char *)v27 == (char *)FullScreenPositioner::ShouldHandleActivation )
          {
            ShouldHandleActivation = FullScreenPositioner::ShouldHandleActivation(
                                       v94,
                                       (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **))a3,
                                       v20);
          }
          else if ( v27 == SurfaceHubPositioner::ShouldHandleActivation )
          {
            ShouldHandleActivation = SurfaceHubPositioner::ShouldHandleActivation(v94, a3, v20);
          }
          else if ( (char *)v27 == (char *)HolographicPositioner::ShouldHandleActivation )
          {
            ShouldHandleActivation = HolographicPositioner::ShouldHandleActivation(
                                       v94,
                                       (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a3,
                                       v20);
          }
          else
          {
            ShouldHandleActivation = v27(v94, a3, v20);
          }
          if ( ShouldHandleActivation )
            (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v17->Ptr + 5))(v17, v19);
        }
      }
      goto LABEL_31;
    }
    v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, FullScreenPositioner **))*((_QWORD *)ppvOut + (int)v19 + 2);
    if ( v22 )
    {
      v23 = (**v22)(v22, &GUID_ee010e17_919a_4068_868b_675acf787303, &v94);
      v24 = v23;
      if ( v23 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\permonitorshellpositionermanager.cpp",
          (const char *)(unsigned int)v23,
          v91);
      goto LABEL_20;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\permonitorshellpositionermanager.cpp",
      (const char *)0x8002802BLL,
      v91);
LABEL_31:
    v29 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(FullScreenPositioner *))(*(_QWORD *)v29 + 16LL))(v29);
    }
LABEL_33:
    ++v19;
  }
  while ( v19 < 7 );
  v30 = 0LL;
  v100 = 0LL;
  v93 = 0LL;
  v31 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a3 + 264LL);
  if ( v31 == CApplicationViewBase::GetPositionerPriority )
    v32 = CApplicationViewBase::GetPositionerPriority(a3, &v93);
  else
    v32 = v31(a3, &v93);
  v8 = (PositionerPriority *)Context;
  if ( v32 >= 0 )
  {
LABEL_37:
    v30 = v93;
    if ( v93 )
    {
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v93 + 8LL))(v93);
      v30 = v93;
    }
    v100 = v30;
    if ( v30 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v30 + 16LL))(v30);
    }
LABEL_41:
    v99 = 0LL;
    v33 = (**(__int64 (__fastcall ***)(struct IShellPositionerPriority *, GUID *, PositionerPriority **))v30)(
            v30,
            &GUID_12c8e92e_f569_48ec_9d4d_56b96469e294,
            &v99);
    if ( v33 < 0 )
    {
      v84 = (unsigned int)v33;
      v85 = 957LL;
    }
    else
    {
      v34 = *(__int64 (**)(void))(*(_QWORD *)v99 + 24LL);
      if ( (char *)v34 == (char *)PositionerPriority::GetBitfieldToPersist )
        BitfieldToPersist = PositionerPriority::GetBitfieldToPersist(v99);
      else
        BitfieldToPersist = v34();
      v37 = BitfieldToPersist;
      v38 = ApplicationViewHelpers::GetWindowForView(a3, v36);
      if ( v38 )
      {
        if ( SetPropW(v38, L"ShellPositionerManager:PriorityList", (HANDLE)v37) )
        {
          v40 = v99;
          if ( v99 )
          {
            v99 = 0LL;
            (*(void (__fastcall **)(PositionerPriority *))(*(_QWORD *)v40 + 16LL))(v40);
          }
          (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v30 + 16LL))(v30);
          goto LABEL_49;
        }
        wil::details::in1diag3::Return_GetLastError(
          retaddr,
          (void *)0x3C7,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          v39);
LABEL_145:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v99);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v100);
        goto LABEL_49;
      }
      v84 = 2147943568LL;
      v85 = 964LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v85,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v84,
      v91);
    goto LABEL_145;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v93);
  v93 = 0LL;
  v76 = ApplicationViewHelpers::GetWindowForView(a3, v75);
  if ( v76 && (v77 = (unsigned int)GetPropW(v76, L"ShellPositionerManager:PriorityList")) != 0 )
  {
    v79 = PositionerPriority_CreateInstance(v77, v78, (void **)&v93);
    if ( v79 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D6,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v79,
        v91);
      goto LABEL_135;
    }
LABEL_137:
    v81 = (*(__int64 (__fastcall **)(CApplicationViewBase *, struct IShellPositionerPriority *))(*(_QWORD *)a3 + 272LL))(
            a3,
            v93);
    v82 = v81;
    if ( v81 >= 0 )
      goto LABEL_37;
    v83 = 838LL;
  }
  else
  {
LABEL_135:
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v93);
    v81 = PositionerPriority_CreateInstance(*(unsigned int *)(a1 + 144), v80, &v93);
    v82 = v81;
    if ( v81 >= 0 )
      goto LABEL_137;
    v83 = 834LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v83,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v81,
    v91);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v93);
  if ( v82 >= 0 )
    goto LABEL_41;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B9,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v82,
    v91);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v100);
LABEL_49:
  v41 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = *(__int64 (**)(void))(*(_QWORD *)v98 + 24LL);
  if ( (char *)v42 == (char *)PositionerPriority::GetCurrentPositioner )
    v43 = PositionerPriority::GetCurrentPositioner(v98);
  else
    v43 = v42();
  v44 = v43;
  v97 = 0LL;
  ppvOut = 0LL;
  v45 = punk;
  if ( IUnknown_QueryService(
         punk,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &ppvOut) < 0 )
  {
    Service = IUnknown_QueryService(
                v45,
                &c_positionersSIDs + (int)v44,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                (void **)&v97);
    v16 = Service;
    if ( Service < 0 )
    {
      v86 = (unsigned int)Service;
      v87 = 1030LL;
      goto LABEL_152;
    }
LABEL_57:
    v48 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v48 + 16LL))(v48);
    }
  }
  else
  {
    v46 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, CDesktopPositioner **))(*(_QWORD *)ppvOut + 24LL);
    if ( (char *)v46 == (char *)PerMonitorShellPositionerManager::GetPositioner )
      Positioner = PerMonitorShellPositionerManager::GetPositioner(
                     ppvOut,
                     v44,
                     &GUID_ee010e17_919a_4068_868b_675acf787303,
                     &v97);
    else
      Positioner = v46(ppvOut, v44, &GUID_ee010e17_919a_4068_868b_675acf787303, &v97);
    v16 = Positioner;
    if ( Positioner >= 0 )
      goto LABEL_57;
    v86 = (unsigned int)Positioner;
    v87 = 1023LL;
LABEL_152:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v87,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v86,
      v91);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v16,
        v91);
      goto LABEL_78;
    }
  }
  if ( (*(unsigned int (__fastcall **)(CDesktopPositioner *, CApplicationViewBase *, struct IUnknown *))(*(_QWORD *)v97 + 32LL))(
         v97,
         a3,
         v20) )
  {
    v16 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)0x80004004LL,
      v91);
    goto LABEL_78;
  }
  v49 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority *))(*(_QWORD *)a3 + 272LL);
  if ( v49 == CApplicationViewBase::SetPositionerPriority )
    v50 = CApplicationViewBase::SetPositionerPriority(a3, v98);
  else
    v50 = v49(a3, v98);
  v16 = v50;
  if ( v50 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x200,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v50,
      v91);
    goto LABEL_78;
  }
  if ( a2 )
  {
    v51 = fPending;
    if ( v44 != (_DWORD)fPending )
    {
      fPending = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&fPending);
      v91 = v44;
      v90 = ShellPositionerManager::SendControlLostToPositioner(v89, a3, v45, v51);
      v16 = v90;
      if ( v90 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x208,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v90,
          v44);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&fPending);
        goto LABEL_78;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&fPending);
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      Context = &qword_180438A68;
      qword_180438A68 = &IamTraceLogging::`vftable';
      atexit(lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
      ShellPositionerTelemetry::Create((ShellPositionerTelemetry *)&qword_180438A68);
      InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, &qword_180438A68);
    }
    v52 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v52 && *v52 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
        && (_DWORD)fPending )
      {
        Context = &qword_180438A68;
        qword_180438A68 = &IamTraceLogging::`vftable';
        atexit(lambda_8642547911a9ee42fdc61caf8f8cd99f_::_lambda_invoker_cdecl_);
        ShellPositionerTelemetry::Create((ShellPositionerTelemetry *)&qword_180438A68);
        InitOnceComplete(&`ShellPositionerTelemetry::Instance'::`2'::wrapper, 0, &qword_180438A68);
      }
      ShellPositionerTelemetry::PositionViewForActivation_(v53, a3, v44);
    }
    v54 = *(__int64 (__fastcall **)(PositionerPropertySetHelpers *, CWinRTApplicationView *, unsigned int, struct IApplicationView *))(*(_QWORD *)v97 + 48LL);
    if ( v54 == CDesktopPositioner::ControlGainedForActivation )
      v55 = CDesktopPositioner::ControlGainedForActivation(v97, a3, v51, (struct IApplicationView *)v20);
    else
      v55 = v54(v97, a3, v51, (struct IApplicationView *)v20);
    v16 = v55;
    if ( v55 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x214,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v55,
        v91);
      goto LABEL_78;
    }
LABEL_77:
    v16 = 0;
  }
  else
  {
    v59 = *(__int64 (__fastcall **)(CDesktopPositioner *, __int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **), struct IUnknown *))(*(_QWORD *)v97 + 40LL);
    if ( v59 == CDesktopPositioner::InitializePosition )
      v60 = CDesktopPositioner::InitializePosition(
              v97,
              (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **))a3,
              v20);
    else
      v60 = v59(v97, (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWinRTApplicationView **))a3, v20);
    v16 = v60;
    if ( v60 >= 0 )
      goto LABEL_77;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20E,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v60,
      v91);
  }
LABEL_78:
  v56 = v97;
  if ( v97 )
  {
    v97 = 0LL;
    (*(void (__fastcall **)(CDesktopPositioner *))(*(_QWORD *)v56 + 16LL))(v56);
  }
LABEL_80:
  v57 = v98;
  if ( v98 )
  {
    v98 = 0LL;
    (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v57 + 16LL))(v57);
  }
LABEL_82:
  if ( v8 )
    (*(void (__fastcall **)(PositionerPriority *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v16;
}
