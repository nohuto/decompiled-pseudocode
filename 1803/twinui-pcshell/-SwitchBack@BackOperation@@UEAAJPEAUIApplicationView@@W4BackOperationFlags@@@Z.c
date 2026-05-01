/*
 * XREFs of ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x1802D7840
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18031117C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180311788 (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x180311AD0 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall BackOperation::SwitchBack(__int64 a1, CWinRTApplicationView *a2, char a3)
{
  __int64 v3; // rsi
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // edi
  int ViewFullScreen; // eax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 - 176;
  v14 = (a1 + 16) & -(__int64)(a1 != 176);
  v15 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v14, 1);
  v7 = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 55LL;
    goto LABEL_10;
  }
  v11 = 589889;
  if ( (a3 & 1) == 0 )
    goto LABEL_7;
  ViewFullScreen = CAppLayoutOperation::_MakeViewFullScreen(v3 + 24, a2, 10LL);
  v8 = ViewFullScreen;
  if ( ViewFullScreen >= 0 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(v3 + 88), a2);
    v11 = 589891;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
    (const char *)(unsigned int)ViewFullScreen);
LABEL_8:
  if ( v8 >= 0 )
  {
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    v8 = 0;
    *(_DWORD *)(a1 - 72) = v11;
    goto LABEL_12;
  }
  v9 = (unsigned int)v8;
  v10 = 58LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\backoperation.cpp",
    (const char *)v9);
LABEL_12:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v14);
  return (unsigned int)v8;
}
