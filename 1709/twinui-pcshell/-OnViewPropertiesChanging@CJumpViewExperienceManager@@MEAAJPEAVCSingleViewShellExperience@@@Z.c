/*
 * XREFs of ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE618 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CJumpViewExperienceManager::OnViewPropertiesChanging(
        HSTRING *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  int v17; // [rsp+30h] [rbp-50h]
  __int64 *v18; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v20[24]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19[1] = -2LL;
  v15 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
         *((_QWORD *)a2 + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 486LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_25;
  }
  v4 = CJumpViewExperienceManager::EnsureWindowPosition((CJumpViewExperienceManager *)(this - 8), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 502LL;
    goto LABEL_5;
  }
  v16 = 0LL;
  v17 = 0;
  v7 = v15;
  v18 = &v16;
  v19[0] = 0LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v20,
         (const WCHAR **)&JumpViewExperienceEvents::Param_Title);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v7 + 48LL))(v7, *(_QWORD *)(v8 + 24), v19);
  v21 = 0LL;
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v18);
  if ( v5 >= 0 )
  {
    v11 = v16;
    if ( v16 )
    {
      WindowsDeleteString(this[41]);
      this[41] = 0LL;
      if ( v17 != 7 )
      {
        v5 = -2147316576;
        if ( v17 < 0 )
          v5 = v17;
        goto LABEL_14;
      }
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 152LL))(v16, (char *)this + 328);
      if ( v5 < 0 )
      {
LABEL_14:
        v9 = (unsigned int)v5;
        v10 = 508LL;
        goto LABEL_19;
      }
      v11 = v16;
    }
    if ( *((_BYTE *)this + 412) )
    {
      *((_BYTE *)this + 412) = 0;
      v12 = CSingleViewShellExperience::Show(this + 8, 4LL);
      v5 = v12;
      if ( v12 < 0 )
      {
        v9 = (unsigned int)v12;
        v10 = 516LL;
        goto LABEL_19;
      }
      v11 = v16;
    }
    v5 = 0;
    goto LABEL_22;
  }
  v9 = (unsigned int)v5;
  v10 = 505LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)v9);
  v11 = v16;
LABEL_22:
  if ( v11 && ((v17 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_25:
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v5;
}
