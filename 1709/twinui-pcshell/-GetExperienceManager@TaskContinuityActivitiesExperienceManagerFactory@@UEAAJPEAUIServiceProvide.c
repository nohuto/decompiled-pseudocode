/*
 * XREFs of ?GetExperienceManager@TaskContinuityActivitiesExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800AB8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AAF14 (-RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ABAC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskContinuityActivitiesExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ABB30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskConti.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1801CF4FC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskContinuityActivitiesExperienceManagerFactory::GetExperienceManager(
        TaskContinuityActivitiesExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int Interface; // edi
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 2LL;
  do
  {
    *a3 = 0LL;
    --v5;
  }
  while ( v5 );
  v6 = operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    Interface = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x115,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v6[5] = 1LL;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::`vftable'{for `Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager'};
  v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>'};
  v6[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::`vftable'{for `Windows::Foundation::IClosable'};
  v6[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActiveZBandNotificationForMonitor>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v7 = &CTaskContinuityActivitiesExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager'};
  v7[1] = &CTaskContinuityActivitiesExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>'};
  v7[2] = &CTaskContinuityActivitiesExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  v7[3] = &CTaskContinuityActivitiesExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActiveZBandNotificationForMonitor>'};
  v7[6] = &CTaskContinuityActivitiesExperienceManager::`vftable';
  *((_DWORD *)v7 + 14) = 0;
  v7[8] = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience(v7 + 9, v7 + 6, 0LL);
  *((_DWORD *)v7 + 68) &= v9;
  v7[35] &= v9;
  *((_DWORD *)v7 + 33) = 10;
  Interface = CTaskContinuityActivitiesExperienceManager::RuntimeClassInitialize((HSTRING *)v7, a2);
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::QueryInterface(
                  (CTaskContinuityActivitiesExperienceManager *)v7,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  (void **)a3);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release((CTaskContinuityActivitiesExperienceManager *)v7);
  if ( Interface < 0 )
    goto LABEL_12;
  return 0LL;
}
