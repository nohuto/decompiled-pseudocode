/*
 * XREFs of ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802D4EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01PEAW4FinalizeLayoutFlags@@@Z @ 0x1802D5274 (-QueryAppToAppSwitch@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREF.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18031117C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180311AD0 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::AppToAppSwitch(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        CWinRTApplicationView *a4)
{
  __int64 v4; // r14
  CAppLayoutOperation *v9; // rbp
  int AppToAppSwitch; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+70h] [rbp+8h]

  v4 = a1 - 176;
  v14 = (a1 + 16) & -(__int64)(a1 != 176);
  v9 = (CAppLayoutOperation *)(a1 - 152);
  v15 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v14, 1);
  AppToAppSwitch = CAppLayoutOperation::_VerifyAndPrepareLayout(v9, 0LL, 0);
  v11 = AppToAppSwitch;
  if ( AppToAppSwitch >= 0 )
  {
    AppToAppSwitch = AppSwitchOperation::QueryAppToAppSwitch(v4, a2, a3, a4);
    v11 = AppToAppSwitch;
    if ( AppToAppSwitch >= 0 )
    {
      *(_DWORD *)(a1 - 72) = 327699;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 - 88), a4);
      AppToAppSwitch = CAppLayoutOperation::_FinalizeLayout(a1 - 152, v17 | 4u);
      v11 = AppToAppSwitch;
      if ( AppToAppSwitch >= 0 )
      {
        v11 = 0;
        goto LABEL_9;
      }
      v12 = 130LL;
    }
    else
    {
      v12 = 120LL;
    }
  }
  else
  {
    v12 = 116LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
    (const char *)(unsigned int)AppToAppSwitch);
LABEL_9:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v14);
  return v11;
}
