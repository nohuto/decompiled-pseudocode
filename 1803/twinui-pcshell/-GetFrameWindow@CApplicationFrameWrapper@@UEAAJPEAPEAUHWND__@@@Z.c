/*
 * XREFs of ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180016F00
 * Callers:
 *     _lambda_b1e4bdca0075c456ca4a487c57ae0709_::operator() @ 0x180008E28 (_lambda_b1e4bdca0075c456ca4a487c57ae0709_--operator().c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x18005DC88 (-GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA-AW4ZBID@@XZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetFrameWindow(CApplicationFrameWrapper *this, HWND *a2)
{
  HWND v2; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( *((_BYTE *)this + 72) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)0x8007139FLL,
      v4);
    return 2147947423LL;
  }
  else
  {
    v2 = (HWND)*((_QWORD *)this + 10);
    if ( v2 )
    {
      *a2 = v2;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        (const char *)0x80070490LL,
        v4);
      return 2147943568LL;
    }
  }
}
