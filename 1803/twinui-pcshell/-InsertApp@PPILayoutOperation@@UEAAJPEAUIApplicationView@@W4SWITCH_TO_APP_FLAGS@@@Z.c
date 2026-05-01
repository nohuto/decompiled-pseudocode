/*
 * XREFs of ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1802D9370
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1802D9594 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18031117C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180311AD0 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall PPILayoutOperation::InsertApp(__int64 a1, CWinRTApplicationView *a2, char a3)
{
  PPILayoutOperation *v3; // r12
  int v6; // ebx
  int InsertApp; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (PPILayoutOperation *)(a1 - 176);
  v6 = 1;
  v13 = (a1 + 16) & -(__int64)(a1 != 176);
  v14 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v13, 1);
  InsertApp = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v9 = InsertApp;
  if ( InsertApp < 0 )
  {
    v10 = 95LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)InsertApp);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 - 88), a2);
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
      *(_DWORD *)(a1 - 72) = v11 | 0x400000;
  }
  InsertApp = PPILayoutOperation::QueryInsertApp(v3, a2);
  v9 = InsertApp;
  if ( InsertApp < 0 )
  {
    v10 = 114LL;
    goto LABEL_12;
  }
  InsertApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 2LL);
  v9 = InsertApp;
  if ( InsertApp < 0 )
  {
    v10 = 115LL;
    goto LABEL_12;
  }
LABEL_13:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v13);
  return v9;
}
