/*
 * XREFs of ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18006B6A0
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006B1D0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18006C090 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006DF50 (-OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B900 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1803070E4 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180307214 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180307DF4 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewCreatedBase(CSingleViewShellExperience *this, __int64 *a2)
{
  __int64 v4; // rcx
  char v5; // si
  DesktopSingleViewShellExperiencePersonality *v6; // rcx
  __int64 (*v7)(void); // rax
  int v8; // eax
  unsigned int v9; // edi
  CActionCenterExperienceManager *v10; // rcx
  __int64 (__fastcall *v11)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *); // rax
  int v12; // eax
  int v14; // esi
  int v15; // ebp
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v24 = -2;
  if ( *((_QWORD *)this + 3) )
  {
    v14 = *((_DWORD *)this + 16);
    v15 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    v16 = CSingleViewShellExperience::DestroyView(this);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x187,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v16,
        -2);
    *((_DWORD *)this + 16) = v14;
    *((_DWORD *)this + 17) = v15;
  }
  v4 = 0LL;
  if ( &v26 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
  }
  v26 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
  v5 = 1;
  v6 = (DesktopSingleViewShellExperiencePersonality *)*((_QWORD *)this + 10);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 32LL);
  if ( (char *)v7 == (char *)DesktopSingleViewShellExperiencePersonality::OnViewWrapperChanged )
    v8 = DesktopSingleViewShellExperiencePersonality::OnViewWrapperChanged(v6);
  else
    v8 = v7();
  v9 = v8;
  if ( v8 < 0 )
  {
    v17 = 402LL;
    goto LABEL_32;
  }
  v5 = 0;
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v9 = -2147023673;
LABEL_28:
    v22 = CSingleViewShellExperience::DestroyView(this);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BD,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v22,
        v24);
    *((_DWORD *)this + 16) = 0;
    *((_DWORD *)this + 17) = 0;
    CSingleViewShellExperience::ResetViews(this);
    v17 = 450LL;
    goto LABEL_32;
  }
  if ( !*((_DWORD *)this + 15) || (v18 = CSingleViewShellExperience::SetWindowBand(this), v9 = v18, v18 >= 0) )
  {
    if ( *((_BYTE *)this + 53) )
    {
      ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride((char *)this + 72, *((_QWORD *)this + 3));
      LOBYTE(v20) = *((_BYTE *)this + 53);
      v21 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
              *((_QWORD *)this + 11),
              this,
              v20);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AC,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v21,
          v24);
    }
    if ( *((_QWORD *)this + 3) )
    {
      v10 = (CActionCenterExperienceManager *)*((_QWORD *)this + 11);
      v11 = **(__int64 (__fastcall ***)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *))v10;
      if ( v11 == CActionCenterExperienceManager::OnViewCreated )
        v12 = CActionCenterExperienceManager::OnViewCreated(v10, this);
      else
        v12 = v11(v10, this);
      v9 = v12;
      if ( v12 >= 0 )
        goto LABEL_14;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B3,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v12,
        v24);
      goto LABEL_28;
    }
    v9 = -2147023673;
    v17 = 439LL;
LABEL_32:
    v19 = v9;
    goto LABEL_33;
  }
  v19 = (unsigned int)v18;
  v17 = 417LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)v19,
    v24);
LABEL_14:
  if ( v5 )
  {
    v23 = CSingleViewShellExperience::DestroyView(this);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x191,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v23,
        v24);
  }
  return v9;
}
