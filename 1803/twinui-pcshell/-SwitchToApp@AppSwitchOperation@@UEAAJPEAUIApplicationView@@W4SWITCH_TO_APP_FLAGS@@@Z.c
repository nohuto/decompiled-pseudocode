/*
 * XREFs of ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1802D5E50
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

__int64 __fastcall AppSwitchOperation::SwitchToApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  __int64 v3; // r15
  int v6; // ebx
  int SwitchToApp; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 176;
  v6 = 1;
  v13 = (a1 + 16) & -(__int64)(a1 != 176);
  v14 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v13, 1);
  SwitchToApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = SwitchToApp;
  if ( SwitchToApp >= 0 )
  {
    SwitchToApp = AppSwitchOperation::QuerySwitchToApp(v3, a2, a3);
    v9 = SwitchToApp;
    if ( SwitchToApp >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 1;
      if ( (a3 & 1) == 0 )
      {
        v6 = 3;
        *(_DWORD *)(a1 - 72) = 3;
      }
      if ( (a3 & 2) == 0 )
      {
        v11 = v6 | 0x10000;
        *(_DWORD *)(a1 - 72) = v11;
        if ( (a3 & 8) != 0 )
        {
          v11 |= 0x400000u;
          *(_DWORD *)(a1 - 72) = v11;
        }
        if ( (a3 & 0x10) != 0 )
          *(_DWORD *)(a1 - 72) = v11 | 0x2000000;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 - 88), a2);
      SwitchToApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 4LL);
      v9 = SwitchToApp;
      if ( SwitchToApp >= 0 )
      {
        v9 = 0;
        goto LABEL_16;
      }
      v10 = 102LL;
    }
    else
    {
      v10 = 74LL;
    }
  }
  else
  {
    v10 = 71LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)SwitchToApp);
LABEL_16:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v13);
  return v9;
}
