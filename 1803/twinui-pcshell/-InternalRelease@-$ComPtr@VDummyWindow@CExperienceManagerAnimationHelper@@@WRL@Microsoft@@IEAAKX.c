/*
 * XREFs of ?InternalRelease@?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F9DA0
 * Callers:
 *     ??1?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9DC0 (--1-$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x18029E16C (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18029E2B8 (-DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x18029E5D0 (-s_WndProcBase@-$CWRLImpWndProc@VDragInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x180308E10 (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180308F1C (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180309134 (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180075E00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(
        volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
