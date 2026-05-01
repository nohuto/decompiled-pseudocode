/*
 * XREFs of ?CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180270D50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180271E58 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 */

__int64 __fastcall CMultitaskingViewManager::CreateMultitaskingViewWithFilter(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int MTVHost; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12 = (a1 + 40) & -(__int64)(a1 != 0);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
  MTVHost = CMultitaskingViewManager::_CreateMTVHost(a1, a2, a3, a4, a5);
  v10 = MTVHost;
  if ( MTVHost < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MTVHost);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v12);
  return v10;
}
