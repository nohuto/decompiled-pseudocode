/*
 * XREFs of ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180270CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180271E58 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 */

__int64 __fastcall CMultitaskingViewManager::CreateMultitaskingView(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  int MTVHost; // eax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = (a1 + 40) & -(__int64)(a1 != 0);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  MTVHost = CMultitaskingViewManager::_CreateMTVHost(a1, a2, 0LL, a3, a4);
  v9 = MTVHost;
  if ( MTVHost < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MTVHost);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v9;
}
