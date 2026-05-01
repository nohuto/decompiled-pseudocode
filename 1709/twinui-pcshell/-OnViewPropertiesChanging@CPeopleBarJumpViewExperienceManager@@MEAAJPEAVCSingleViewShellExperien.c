/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B1AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1800B1E6C (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rbx
  PCWSTR StringRawBuffer; // rax
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  int v19; // [rsp+30h] [rbp-50h]
  __int64 *v20; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v22[24]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21[1] = -2LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    *((_DWORD *)this + 74) = (int)*((float *)a2 + 11);
    *((_DWORD *)this + 75) = (int)*((float *)a2 + 12);
    v4 = *((_QWORD *)this + 27);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 32), 0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, char *))(*(_QWORD *)v4 + 112LL))(
           v4,
           StringRawBuffer,
           (char *)this + 264);
    if ( v6 < 0 )
    {
      v7 = 261LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = CPeopleBarJumpViewExperienceManager::PositionJumpView((CPeopleBarJumpViewExperienceManager *)((char *)this - 48));
    if ( v6 < 0 )
    {
      v7 = 262LL;
      goto LABEL_4;
    }
    v17 = 0LL;
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
           *((_QWORD *)a2 + 4),
           &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
           &v17);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x109,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_24:
      v15 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return (unsigned int)v6;
    }
    v18 = 0LL;
    v19 = 0;
    v10 = v17;
    v20 = &v18;
    v21[0] = 0LL;
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, (const WCHAR **)&off_180214748);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, *(_QWORD *)(v11 + 24), v21);
    v23 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v20);
    if ( v6 < 0 )
    {
      v12 = (unsigned int)v6;
      v13 = 268LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)v12);
      if ( v18 && ((v19 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v18 + 16LL))();
      goto LABEL_24;
    }
    if ( v18 )
    {
      WindowsDeleteString(*((HSTRING *)this + 38));
      *((_QWORD *)this + 38) = 0LL;
      if ( v19 != 7 )
      {
        v6 = -2147316576;
        if ( v19 < 0 )
          v6 = v19;
        goto LABEL_18;
      }
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 152LL))(v18, (char *)this + 304);
      if ( v6 < 0 )
      {
LABEL_18:
        v12 = (unsigned int)v6;
        v13 = 271LL;
        goto LABEL_21;
      }
    }
    v14 = CSingleViewShellExperience::Show((char *)this + 8, 4LL);
    v6 = v14;
    if ( v14 < 0 )
    {
      v12 = (unsigned int)v14;
      v13 = 274LL;
      goto LABEL_21;
    }
    if ( v18 && ((v19 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v18 + 16LL))();
    v16 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  return 0LL;
}
