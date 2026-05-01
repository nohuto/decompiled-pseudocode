/*
 * XREFs of ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180305708
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18011F150 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18012BC80 (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x18014FE60 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 *     ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801500E0 (-ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@.c)
 *     ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802F16B0 (-SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetViewForApplication(
        IUnknown *punk,
        struct IUnknown *a2,
        struct IImmersiveApplication *a3,
        struct IApplicationView **a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v7 = IUnknown_QueryService(
         punk,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &ppvOut);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 77LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(void *, struct IUnknown *, struct IImmersiveApplication *))(*(_QWORD *)ppvOut + 56LL))(
         ppvOut,
         a2,
         a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 79LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v8;
}
