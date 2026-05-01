/*
 * XREFs of ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x180271D80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800F7A6C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180272594 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18027262C (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?s_GetMTVHostType@CMultitaskingViewManager@@CA?AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingViewHost@@@Z @ 0x18027272C (-s_GetMTVHostType@CMultitaskingViewManager@@CA-AW4MULTITASKING_VIEW_TYPES@@PEAUIMultitaskingView.c)
 */

__int64 __fastcall CMultitaskingViewManager::ViewDismissed(CMultitaskingViewManager *this, struct IUnknown *a2)
{
  CMultitaskingViewManager *v2; // rdi
  unsigned int MTVHostType; // eax
  unsigned int v5; // ebx
  int MTVHost; // eax
  unsigned int v7; // ebx
  signed __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = (CMultitaskingViewManager *)((char *)this - 16);
  v9 = ((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewManager *)16);
  v10 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v9, 1);
  MTVHostType = CMultitaskingViewManager::s_GetMTVHostType(a2);
  v12 = 0LL;
  v5 = MTVHostType;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  MTVHost = CMultitaskingViewManager::_FindMTVHost(v2, v5, 0LL, &v12, &v13);
  v7 = MTVHost;
  if ( MTVHost >= 0 )
  {
    if ( (unsigned int)SHIsSameObject(v12, a2) )
      CMultitaskingViewManager::_DestroyMTVHost(v2, v13);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MTVHost);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v9);
  return v7;
}
