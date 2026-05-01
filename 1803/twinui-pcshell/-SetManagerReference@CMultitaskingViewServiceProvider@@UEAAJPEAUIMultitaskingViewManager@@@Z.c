/*
 * XREFs of ?SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z @ 0x180267F10
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::SetManagerReference(
        CMultitaskingViewServiceProvider *this,
        struct IMultitaskingViewManager *a2)
{
  signed __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v4 = ((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewServiceProvider *)88);
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 72);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v4);
  return 0LL;
}
