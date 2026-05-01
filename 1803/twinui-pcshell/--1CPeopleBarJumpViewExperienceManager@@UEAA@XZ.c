/*
 * XREFs of ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18016E418
 * Callers:
 *     ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x18016E4D0 (--_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180306D10 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180308F1C (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CPeopleBarJumpViewExperienceManager::~CPeopleBarJumpViewExperienceManager(
        CPeopleBarJumpViewExperienceManager *this)
{
  __int64 v2; // rcx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CPeopleBarJumpViewExperienceManager *)((char *)this + 392));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CPeopleBarJumpViewExperienceManager *)((char *)this + 360));
  WindowsDeleteString(*((HSTRING *)this + 44));
  *((_QWORD *)this + 44) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 38));
  *((_QWORD *)this + 38) = 0LL;
  v2 = *((_QWORD *)this + 35);
  if ( v2 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 32);
  CSingleViewShellExperience::~CSingleViewShellExperience((CPeopleBarJumpViewExperienceManager *)((char *)this + 56));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(this);
}
