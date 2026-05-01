/*
 * XREFs of ?GetViewType@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180278480
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<IPPIAllUpViewHost>::GetViewType(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v5 = (a1 + 24) & -(__int64)(a1 != 0);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1);
  *a2 = *(_DWORD *)(a1 + 72);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v5);
  return 0LL;
}
