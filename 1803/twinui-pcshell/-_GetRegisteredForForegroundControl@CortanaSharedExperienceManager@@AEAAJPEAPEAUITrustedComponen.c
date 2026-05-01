/*
 * XREFs of ?_GetRegisteredForForegroundControl@CortanaSharedExperienceManager@@AEAAJPEAPEAUITrustedComponentForegroundControl@@@Z @ 0x18015E4F4
 * Callers:
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E00C (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18015E5F0 (-_ImmersiveShellQueryService@CortanaSharedExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_GetRegisteredForForegroundControl(
        CortanaSharedExperienceManager *this,
        struct ITrustedComponentForegroundControl **a2)
{
  __int64 *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 392);
  if ( !*((_QWORD *)this + 49) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v5 = CortanaSharedExperienceManager::_ImmersiveShellQueryService(
           this,
           &IID_IRequestTrustedComponentForegroundControlInitialization,
           &GUID_2a239388_fc85_4077_981e_9e4205cf9451,
           &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = (unsigned int)v5;
      v8 = 763LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      return v6;
    }
    v9 = (*(__int64 (__fastcall **)(void *, GUID *))(*(_QWORD *)v12 + 24LL))(v12, &CLSID_CortanaExperienceMgr);
    v6 = v9;
    if ( v9 < 0 )
    {
      v7 = (unsigned int)v9;
      v8 = 764LL;
      goto LABEL_8;
    }
    if ( !*v4 )
    {
      v6 = -2147467261;
      v7 = 2147500035LL;
      v8 = 765LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
  *a2 = (struct ITrustedComponentForegroundControl *)*v4;
  return 0LL;
}
