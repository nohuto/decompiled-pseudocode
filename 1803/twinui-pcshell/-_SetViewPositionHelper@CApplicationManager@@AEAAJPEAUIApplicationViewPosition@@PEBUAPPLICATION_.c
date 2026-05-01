/*
 * XREFs of ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004361C
 * Callers:
 *     ?SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800424D0 (-SetCloak@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@HW4APPLICATION_VIEW_CLOAK_TYPE@@@.c)
 *     ?_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@PEAPEAXW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1800F167C (-_SetApplicationPos@CApplicationManager@@AEAAJPEAUIImmersiveApplication@@PEBUAPPLICATION_VIEW_DA.c)
 *     ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x18010B390 (-SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F12F0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_SetViewPositionHelper(
        CApplicationManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        struct ISyncIAMEventHandler *a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rax
  int v15; // ebp
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = a12;
  v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a12 + 256LL);
  v15 = a10;
  HIDWORD(v19) = HIDWORD(a7);
  if ( v14 == CImmersiveApp::SetViewPosition )
    v16 = CImmersiveApp::SetViewPosition(a12);
  else
    v16 = v14(a12);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF39,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v16,
      a5);
    return v17;
  }
  else
  {
    if ( v15 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 280LL))(v13) & 2) != 0 )
    {
      a8 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &a8) >= 0 )
      {
        LODWORD(v19) = 1;
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, unsigned __int64, __int64, int, int, __int64))(*(_QWORD *)a8 + 24LL))(
          a8,
          0LL,
          ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
          a11,
          v15,
          5,
          v19);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
    }
    return 0LL;
  }
}
