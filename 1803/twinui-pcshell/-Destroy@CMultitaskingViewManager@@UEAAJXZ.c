/*
 * XREFs of ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180270DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180272594 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::Destroy(CMultitaskingViewManager *this)
{
  unsigned __int64 i; // rbx
  signed __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v4 = ((unsigned __int64)this + 40) & -(__int64)(this != 0LL);
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  for ( i = *((_QWORD *)this + 35); i; CMultitaskingViewManager::_DestroyMTVHost(this, i) )
    --i;
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v4);
  return 0LL;
}
