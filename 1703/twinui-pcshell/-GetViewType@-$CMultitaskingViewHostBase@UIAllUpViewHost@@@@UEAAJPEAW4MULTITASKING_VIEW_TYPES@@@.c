/*
 * XREFs of ?GetViewType@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18012F710
 * Callers:
 *     <none>
 * Callees:
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<IAllUpViewHost>::GetViewType(unsigned __int64 a1, _DWORD *a2)
{
  bool v4; // sf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 16) & ((unsigned __int128)-(__int128)a1 >> 64)));
  v4 = v7 < 0;
  *a2 = *(_DWORD *)(a1 + 64);
  if ( !v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
