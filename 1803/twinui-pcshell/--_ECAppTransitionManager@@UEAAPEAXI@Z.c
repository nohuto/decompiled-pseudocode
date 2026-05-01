/*
 * XREFs of ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1802ABC10
 * Callers:
 *     ??_ECAppTransitionManager@@WBI@EAAPEAXI@Z @ 0x1800AEB10 (--_ECAppTransitionManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CObjectWithThreadUseDetection@@QEAA@XZ @ 0x180104908 (--1CObjectWithThreadUseDetection@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18014CC88 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardCompareHelper@UAppSpecialInfo@CAppTransitionManager@@@@V?$CSimpleArrayStandardMergeHelper@UAppSpecialInfo@CAppTransitionManager@@@@@@QEAAXXZ @ 0x1802ACB04 (-RemoveAll@-$CTSimpleArray@UAppSpecialInfo@CAppTransitionManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 */

CAppTransitionManager *__fastcall CAppTransitionManager::`vector deleting destructor'(
        CAppTransitionManager *this,
        char a2)
{
  CTSimpleArray<CAppTransitionManager::AppSpecialInfo,4294967294,CTPolicyCoTaskMem<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardCompareHelper<CAppTransitionManager::AppSpecialInfo>,CSimpleArrayStandardMergeHelper<CAppTransitionManager::AppSpecialInfo>>::RemoveAll((char *)this + 232);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  CObjectWithThreadUseDetection::~CObjectWithThreadUseDetection((LPCRITICAL_SECTION)this + 3);
  *((_DWORD *)this + 29) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite((CWinRTApplicationView **)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
