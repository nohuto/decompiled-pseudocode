/*
 * XREFs of ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E00C
 * Callers:
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18015BBE0 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18015D100 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponentForegroundControl@@@Z @ 0x18015E4F4 (-_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_AllowForegroundRights(CortanaSharedExperienceManager *this)
{
  int RegisteredForForegroundControl; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ITrustedComponentForegroundControl *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  RegisteredForForegroundControl = CortanaSharedExperienceManager::_GetRegisteredForForegroundControl(this, &v7);
  v3 = RegisteredForForegroundControl;
  if ( RegisteredForForegroundControl >= 0 )
  {
    RegisteredForForegroundControl = (*(__int64 (__fastcall **)(struct ITrustedComponentForegroundControl *))(*(_QWORD *)v7 + 24LL))(v7);
    v3 = RegisteredForForegroundControl;
    if ( RegisteredForForegroundControl >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 775LL;
  }
  else
  {
    v4 = 774LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)RegisteredForForegroundControl);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v3;
}
