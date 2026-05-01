/*
 * XREFs of ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800BA790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009B9DC (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009D378 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009DAA8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x18009E64C (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x1800BC124 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1800BC460 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BDDA0 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x1800BEF48 (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$Start@PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x1800BEFC8 (--$Start@PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA-AV01@$$QEAPE.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  int v13; // eax
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v14; // rcx
  CortanaSharedExperienceManager *v15; // rcx
  int v16; // eax
  HSTRING v17; // rbx
  PCWSTR StringRawBuffer; // rdi
  CortanaSharedExperienceManager *v19; // rcx
  int CortanaEntryPointAndArgs; // eax
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v24; // rcx
  __int64 v25; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v26; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v27; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING v29; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  UINT32 length[2]; // [rsp+60h] [rbp-A8h] BYREF
  PCWSTR v33; // [rsp+68h] [rbp-A0h]
  void *v34[3]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v35[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v34[1] = (void *)-2LL;
  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 472) + 64LL))(*(_QWORD *)(a1 + 472), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>(&string);
  CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((CortanaSharedExperienceManager *)a1);
  v8 = *(__int64 **)(a1 + 400);
  v9 = *v8;
  if ( *(_BYTE *)(a1 + 513) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 32))(v8, 1LL, *(_QWORD *)(a1 + 480));
    if ( v10 < 0 )
    {
      v11 = 391LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HSTRING))(v9 + 24))(v8, *(_QWORD *)(a1 + 480), a2);
    if ( v10 < 0 )
    {
      v11 = 395LL;
      goto LABEL_6;
    }
  }
  v27 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(**(_QWORD **)(a1 + 400) + 8LL))(
          *(_QWORD *)(a1 + 400),
          &v27);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_12;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v16 = CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(v15, a2, v27, &string);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x192,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    WindowsDeleteString(string);
LABEL_12:
    v14 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return (unsigned int)v10;
  }
  length[0] = 0;
  v17 = string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, length);
  v34[0] = (void *)StringRawBuffer;
  v29 = 0LL;
  v30 = 0LL;
  WindowsDeleteString(0LL);
  v30 = 0LL;
  WindowsDeleteString(v29);
  v29 = 0LL;
  CortanaEntryPointAndArgs = CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
                               v19,
                               StringRawBuffer,
                               length[0],
                               &v29,
                               &v30);
  if ( CortanaEntryPointAndArgs < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x199,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)CortanaEntryPointAndArgs);
  string = (HSTRING)WindowsGetStringRawBuffer(v30, 0LL);
  v33 = WindowsGetStringRawBuffer(v29, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::Start<unsigned short const *,unsigned short const *>((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v35);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
    (__int64)v35,
    v34);
  v31 = 0LL;
  if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, GUID *, __int64 *))v27)(
         v27,
         &GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12,
         &v31) < 0 )
  {
    v21 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, _QWORD, HSTRING, _QWORD))(*(_QWORD *)v27 + 80LL))(
            v27,
            *(_QWORD *)(a1 + 480),
            v17,
            0LL);
    if ( v21 < 0 )
    {
      v22 = 421LL;
      goto LABEL_21;
    }
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v31 + 80LL))(v31, v17, a3);
    if ( v21 < 0 )
    {
      v22 = 417LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
      v23 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v35[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v35);
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v35);
      WindowsDeleteString(v30);
      v30 = 0LL;
      WindowsDeleteString(v29);
      v29 = 0LL;
      WindowsDeleteString(v17);
      v24 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      return (unsigned int)v21;
    }
  }
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v35);
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v35[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v35);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v35);
  WindowsDeleteString(v30);
  v30 = 0LL;
  WindowsDeleteString(v29);
  v29 = 0LL;
  WindowsDeleteString(v17);
  v26 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return 0LL;
}
