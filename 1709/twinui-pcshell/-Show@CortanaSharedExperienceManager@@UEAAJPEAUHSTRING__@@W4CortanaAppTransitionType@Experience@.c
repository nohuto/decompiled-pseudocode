/*
 * XREFs of ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A0B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x18009EC5C (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FD98 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x1800A269C (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1800A29E4 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A4500 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A6988 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A70B8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x1800A7C2C (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x1800A7CA8 (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  unsigned __int16 *StringRawBuffer; // rdi
  CortanaSharedExperienceManager *v19; // rcx
  int CortanaEntryPointAndArgs; // eax
  const unsigned __int16 *v21; // rsi
  const unsigned __int16 *v22; // rdi
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v26; // rcx
  __int64 v27; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v28; // rcx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v29; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING v31; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  UINT32 length[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  _QWORD v36[4]; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+98h] [rbp-70h]
  int *v38; // [rsp+A0h] [rbp-68h]
  int *v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+B0h] [rbp-58h] BYREF
  char v41; // [rsp+B4h] [rbp-54h]
  int v42; // [rsp+D8h] [rbp-30h] BYREF
  const char *v43; // [rsp+E0h] [rbp-28h]
  __int64 v44; // [rsp+E8h] [rbp-20h]
  char v45; // [rsp+F0h] [rbp-18h]
  __int64 v46; // [rsp+F8h] [rbp-10h]
  _BYTE v47[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v48; // [rsp+190h] [rbp+88h]
  __int64 v49; // [rsp+198h] [rbp+90h]
  __int64 v50; // [rsp+1A0h] [rbp+98h]
  __int64 v51; // [rsp+1A8h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v35 = -2LL;
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
      v11 = 406LL;
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
      v11 = 410LL;
      goto LABEL_6;
    }
  }
  v29 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(**(_QWORD **)(a1 + 400) + 8LL))(
          *(_QWORD *)(a1 + 400),
          &v29);
  v10 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x19E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_12;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v16 = CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(v15, a2, v29, &string);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    WindowsDeleteString(string);
LABEL_12:
    v14 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return (unsigned int)v10;
  }
  length[0] = 0;
  v17 = string;
  StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, length);
  string = (HSTRING)StringRawBuffer;
  v31 = 0LL;
  v32 = 0LL;
  WindowsDeleteString(0LL);
  v32 = 0LL;
  WindowsDeleteString(v31);
  v31 = 0LL;
  CortanaEntryPointAndArgs = CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
                               v19,
                               StringRawBuffer,
                               length[0],
                               &v31,
                               &v32);
  if ( CortanaEntryPointAndArgs < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)CortanaEntryPointAndArgs);
  v21 = WindowsGetStringRawBuffer(v32, 0LL);
  v22 = WindowsGetStringRawBuffer(v31, 0LL);
  v36[1] = 0LL;
  v36[2] = v36;
  v36[3] = 0LL;
  v37 = 0;
  v38 = &v42;
  v39 = &v40;
  v40 = 0;
  v41 = 0;
  v45 = 0;
  v42 = 0;
  v43 = "CortanaExperienceManager_ShowDocked";
  v44 = 0LL;
  v46 = 1LL;
  v48 = 0LL;
  v49 = 0LL;
  memset(v47, 0, sizeof(v47));
  v50 = 0LL;
  v51 = 0LL;
  v36[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(
    (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v36,
    v22,
    v21);
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
    v36,
    &string);
  v33 = 0LL;
  if ( (**(int (__fastcall ***)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, GUID *, __int64 *))v29)(
         v29,
         &GUID_c2f00e7e_94c0_4da2_8530_103a4f231f12,
         &v33) < 0 )
  {
    v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, _QWORD, HSTRING, _QWORD))(*(_QWORD *)v29 + 80LL))(
            v29,
            *(_QWORD *)(a1 + 480),
            v17,
            0LL);
    if ( v23 < 0 )
    {
      v24 = 436LL;
      goto LABEL_21;
    }
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v33 + 80LL))(v33, v17, a3);
    if ( v23 < 0 )
    {
      v24 = 432LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
      v25 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      v36[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v36);
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v36);
      WindowsDeleteString(v32);
      v32 = 0LL;
      WindowsDeleteString(v31);
      v31 = 0LL;
      WindowsDeleteString(v17);
      v26 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v26 + 16LL))(v26);
      }
      return (unsigned int)v23;
    }
  }
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v36);
  v27 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v36[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v36);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v36);
  WindowsDeleteString(v32);
  v32 = 0LL;
  WindowsDeleteString(v31);
  v31 = 0LL;
  WindowsDeleteString(v17);
  v28 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return 0LL;
}
