/*
 * XREFs of ??1CObjectWithThreadUseDetection@@QEAA@XZ @ 0x180104908
 * Callers:
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180266DB0 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180270838 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180277FB0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAll.c)
 *     ??_ECPPIAllUpViewHost@@UEAAPEAXI@Z @ 0x180278010 (--_ECPPIAllUpViewHost@@UEAAPEAXI@Z.c)
 *     ??_ECAppTransitionManager@@UEAAPEAXI@Z @ 0x1802ABC10 (--_ECAppTransitionManager@@UEAAPEAXI@Z.c)
 *     ??_GTabletModePositionerOperation@@UEAAPEAXI@Z @ 0x1802D6C00 (--_GTabletModePositionerOperation@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CObjectWithThreadUseDetection::~CObjectWithThreadUseDetection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
