/*
 * XREFs of ?SetRegistration@WindowWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1801F3D70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800FA8D8 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800FAB54 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1801E5760 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F2D1C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerI.c)
 */

int __fastcall WindowWrapperBase::SetRegistration(__int64 a1, __int64 a2, int a3)
{
  char v6; // bl
  unsigned int v7; // eax
  _QWORD *v8; // rax
  int v9; // eax
  int v10; // ebp
  char v11; // bp
  int v12; // ebx
  int v13; // ecx
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // edx
  BOOL v17; // ecx
  __int16 v18; // ax
  __int64 ExperienceIdPersistenceIndex; // rax
  const WCHAR *StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v23; // [rsp+50h] [rbp+8h] BYREF
  __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v23 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 168LL))(*(_QWORD *)(a1 + 296));
  *(_DWORD *)(a1 + 336) = *(_DWORD *)(a2 + 16);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v7 = 0;
    v23 = 0;
    if ( a3 != 1 )
      goto LABEL_8;
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 296) + 112LL))(
                     *(_QWORD *)(a1 + 296),
                     &v24);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)*v8 + 64LL))(
           *v8,
           *(_QWORD *)(a1 + 88),
           &v23);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1284LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9);
    v6 = 1;
    v7 = v23;
    if ( v10 >= 0 && v23 )
      v11 = 1;
    else
LABEL_8:
      v11 = 0;
    if ( (v6 & 1) != 0 )
    {
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v24);
      v7 = v23;
    }
    if ( v11 )
    {
      v12 = *(_DWORD *)(a1 + 452);
      v13 = v12;
      if ( v7 != *(_DWORD *)(a1 + 448) )
      {
        *(_DWORD *)(a1 + 448) = v7;
        WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16), v7);
        v13 = *(_DWORD *)(a1 + 452);
        v7 = v23;
      }
      if ( v12 == v13 )
      {
        v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 296) + 112LL))(
                          *(_QWORD *)(a1 + 296),
                          &v24);
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v14 + 56LL))(
                *v14,
                *(unsigned int *)(a1 + 192),
                *(unsigned int *)(a1 + 452));
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1305LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v15);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v24);
        v7 = v23;
      }
      if ( v7 - 4 <= 1 )
      {
        WindowReadyState::VisibilityChanged((WindowReadyState *)(a1 + 344));
        WindowReadyState::VisibilityChanged((WindowReadyState *)(a1 + 344));
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 336);
  if ( (v16 & 4) == 0 )
  {
    v17 = (unsigned int)(*(_DWORD *)(a1 + 448) - 4) <= 1;
    *(_WORD *)(a1 + 276) &= 0xFFF1u;
    v18 = 8;
    if ( !v17 )
      v18 = 4;
    *(_WORD *)(a1 + 276) |= v18 | 1;
  }
  if ( (v16 & 8) == 0 )
  {
    *(_WORD *)(a1 + 276) &= ~0x10u;
    *(_WORD *)(a1 + 276) |= 0x21u;
  }
  LODWORD(ExperienceIdPersistenceIndex) = WindowsIsStringEmpty(*(HSTRING *)a2);
  if ( (_DWORD)ExperienceIdPersistenceIndex )
  {
    LODWORD(ExperienceIdPersistenceIndex) = WindowsIsStringEmpty(*(HSTRING *)(a2 + 8));
    if ( !(_DWORD)ExperienceIdPersistenceIndex )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 8), 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LODWORD(ExperienceIdPersistenceIndex) = LightweightPropertySet::SetProperty(
                                                  (LightweightPropertySet *)(a1 + 232),
                                                  L"ExperienceId",
                                                  ExperienceIdPersistenceIndex,
                                                  (HWND)*(int *)(a1 + 312));
    }
  }
  return ExperienceIdPersistenceIndex;
}
