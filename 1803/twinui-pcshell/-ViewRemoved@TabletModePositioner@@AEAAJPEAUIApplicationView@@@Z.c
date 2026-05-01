/*
 * XREFs of ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802CF520
 * Callers:
 *     ?OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001F2E0 (-OnApplicationViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1802CF2A0 (-ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Ta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x1802C35A8 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1802C6270 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1802C83F8 (-IsOldFullScreenView@TabletModePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802C84B8 (-IsSwitcherVisible@TabletModePositioner@@AEAA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1802CEB84 (-TryClearFullScreenCachedAppLayout@TabletModePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::ViewRemoved(CWinRTApplicationView **this, struct IApplicationView *a2)
{
  bool IsSwitcherVisible; // al
  CWinRTApplicationView *v5; // rbx
  bool v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationView *v18; // [rsp+78h] [rbp+38h] BYREF
  struct IUnknown *v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v18 = a2;
  TabletModePositioner::TryClearFullScreenCachedAppLayout((TabletModePositioner *)this, a2);
  if ( TabletModePositioner::IsOldFullScreenView((TabletModePositioner *)this, (struct IUnknown *)a2) )
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(this + 34);
  if ( !(*(unsigned int (__fastcall **)(CWinRTApplicationView *, struct IApplicationView *))(*(_QWORD *)this[31] + 184LL))(
          this[31],
          a2) )
    return 0LL;
  IsSwitcherVisible = TabletModePositioner::IsSwitcherVisible((__int64)this, 15LL);
  v14 = 0LL;
  v5 = this[31];
  v6 = IsSwitcherVisible;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v7 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, GUID *, __int64 *))(*(_QWORD *)v5 + 192LL))(
         v5,
         &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
         &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v20 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    if ( (*((int (__fastcall **)(char *, __int64 *))this[14] + 4))((char *)this + 112, &v20) < 0
      || (v9 = v20,
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19),
          LOBYTE(v10) = v6,
          (*(int (__fastcall **)(__int64, CWinRTApplicationView *, struct IApplicationView *, __int64, struct IUnknown **))(*(_QWORD *)v9 + 24LL))(
            v9,
            this[31],
            a2,
            v10,
            &v19) < 0)
      || (int)TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)this, v19) < 0 )
    {
      v12 = 8;
      if ( v6 )
        v12 = 10;
      v13 = TabletModePositioner::EvictAppHelper((IUnknown *)this, (__int64)a2, v12);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6F8,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        goto LABEL_16;
      }
    }
    else
    {
      v17 = 0;
      v15 = v14;
      TabletModeTelemetry::ReverseAppToAppSwitch<IAppLayout *,IApplicationView * &,enum AppCloseMethod>(
        &v15,
        &v18,
        &v17);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6E7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v8;
}
