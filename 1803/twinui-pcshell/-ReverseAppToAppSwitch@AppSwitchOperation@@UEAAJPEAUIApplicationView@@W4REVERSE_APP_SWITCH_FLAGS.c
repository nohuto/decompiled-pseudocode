/*
 * XREFs of ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x1802D5D50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1802D5748 (-QuerySwitchToApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18031117C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180311AD0 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::ReverseAppToAppSwitch(__int64 a1, struct IApplicationView *a2, char a3)
{
  __int64 v3; // rbp
  int SwitchToApp; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 176;
  v12 = (a1 + 16) & -(__int64)(a1 != 176);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
  SwitchToApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = SwitchToApp;
  if ( SwitchToApp >= 0 )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(v3, a2, 4);
    v8 = SwitchToApp;
    if ( SwitchToApp >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 129;
      v10 = *(_DWORD *)(a1 - 72);
      if ( (a3 & 1) == 0 )
        v10 = 131;
      *(_DWORD *)(a1 - 72) = v10;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 - 88), a2);
      SwitchToApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
      v8 = SwitchToApp;
      if ( SwitchToApp >= 0 )
      {
        v8 = 0;
        goto LABEL_11;
      }
      v9 = 215LL;
    }
    else
    {
      v9 = 202LL;
    }
  }
  else
  {
    v9 = 199LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)SwitchToApp);
LABEL_11:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v12);
  return v8;
}
