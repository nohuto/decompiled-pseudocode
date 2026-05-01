/*
 * XREFs of ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BBF88
 * Callers:
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BA560 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1800BDF60 (-OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800BBE68 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::_AllowForegroundRights(CortanaSharedExperienceManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // edi
  __int64 v5; // rdx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h]

  v2 = 0LL;
  v16 = 0LL;
  if ( !*((_QWORD *)this + 49) )
  {
    v15 = 0LL;
    v3 = CortanaSharedExperienceManager::_ImmersiveShellQueryService(
           this,
           &IID_IRequestTrustedComponentForegroundControlInitialization,
           &GUID_2a239388_fc85_4077_981e_9e4205cf9451,
           &v15);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 748LL;
      goto LABEL_4;
    }
    v3 = (*(__int64 (__fastcall **)(void *, GUID *))(*(_QWORD *)v15 + 24LL))(v15, &CLSID_CortanaExperienceMgr);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 749LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      v6 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
      }
      goto LABEL_16;
    }
    if ( !*((_QWORD *)this + 49) )
    {
      v4 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)0x80004003LL);
      v7 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      goto LABEL_17;
    }
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = *((_QWORD *)this + 49);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v2 = *((_QWORD *)this + 49);
  v16 = v2;
  v4 = 0;
LABEL_16:
  if ( v4 < 0 )
  {
LABEL_17:
    v10 = (unsigned int)v4;
    v11 = 759LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v10);
    goto LABEL_22;
  }
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v11 = 760LL;
    goto LABEL_20;
  }
  v4 = 0;
LABEL_22:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v4;
}
