/*
 * XREFs of ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x18006BFAC
 * Callers:
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B900 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180157F40 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180164D10 (-OnViewCreated@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016C570 (-OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016ED50 (-OnViewCreated@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180173D20 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetPreferentialRMSettings@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ImportanceVectorOptions@CSingleViewShellExperience@@@Z @ 0x1801842C0 (-SetPreferentialRMSettings@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ImportanceVectorOptions@CS.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180004C14 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetDehydrationPolicy@ViewWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180053120 (-SetDehydrationPolicy@ViewWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Interna.c)
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x180069838 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::SetPreferentialRMSettings(__int64 a1, int a2)
{
  _QWORD *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, unsigned int); // rax
  int v7; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) || *(_DWORD *)(a1 + 168) == a2 )
    return 0LL;
  *(_DWORD *)(a1 + 168) = a2;
  v3 = CSingleViewShellExperience::SetImportanceValues(a1, a2 & 0xFD);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F2,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3,
      -2);
  }
  else
  {
    v12 = 0LL;
    v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v2,
           (__int64)&v12);
    v4 = v5;
    if ( v5 < 0 )
    {
      v9 = (unsigned int)v5;
      v10 = 1013LL;
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v12 + 80LL);
      if ( v6 == ViewWrapperBase::SetDehydrationPolicy )
        v7 = ViewWrapperBase::SetDehydrationPolicy(v12, 2u);
      else
        v7 = v6(v12, 2u);
      v4 = v7;
      if ( v7 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        return 0LL;
      }
      v9 = (unsigned int)v7;
      v10 = 1014LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v9,
      -2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return v4;
}
