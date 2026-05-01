/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180308F1C
 * Callers:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180153514 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180157068 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801620EC (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18016E418 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$15 @ 0x1801730F0 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$15.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$16 @ 0x180173103 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$16.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x180173180 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180175A70 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x180180CA0 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x180184CAC (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  volatile int **v1; // rbx
  __int64 v2; // rcx

  v1 = (volatile int **)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(v1);
}
