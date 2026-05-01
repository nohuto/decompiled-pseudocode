/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1801DBEA0
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009581C (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B6434 (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x1801DBF58 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct IServiceProvider *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  int HostExperiencePriorityManipulator; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v8; // r8
  unsigned int v9; // ebx
  __int64 v10; // rdx
  ExperienceManagerUtils *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ExperienceManagerUtils *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v5 = *(_QWORD *)this;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v14);
  HostExperiencePriorityManipulator = (*(__int64 (__fastcall **)(ExperienceManagerUtils *, GUID *, GUID *, __int64 *))(v5 + 24))(
                                        this,
                                        &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                        &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                        v6);
  v9 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v10 = 261LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
    goto LABEL_7;
  }
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        v14,
                                        (struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *)a2,
                                        v8);
  v9 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v10 = 262LL;
    goto LABEL_5;
  }
  v9 = 0;
LABEL_7:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v9;
}
