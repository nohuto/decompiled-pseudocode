/*
 * XREFs of ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1802B9BC4
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateViewArrayForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIObjectArray@@@Z @ 0x1802B931C (-CreateViewArrayForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIObjectArray@@.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B93F0 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::SendControlLostToPositioner(
        struct IObjectArray *a1,
        struct IApplicationView *a2,
        IUnknown *a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  int PositionerForMonitor; // eax
  unsigned int v10; // ebx
  ShellPositionerManager *v11; // rcx
  int v12; // eax
  void *v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IObjectArray *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1;
  v14[1] = (void *)-2LL;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                           a4,
                           a3,
                           &GUID_ee010e17_919a_4068_868b_675acf787303,
                           v14);
  v10 = PositionerForMonitor;
  if ( PositionerForMonitor >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
    v12 = ShellPositionerManager::CreateViewArrayForView(v11, a2, &v16);
    v10 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(void *, struct IObjectArray *, _QWORD, __int64))(*(_QWORD *)v14[0] + 72LL))(
        v14[0],
        v16,
        a5,
        a6);
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x263,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x260,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)PositionerForMonitor);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return v10;
}
