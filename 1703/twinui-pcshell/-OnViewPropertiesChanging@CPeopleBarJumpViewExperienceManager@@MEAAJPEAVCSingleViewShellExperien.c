/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A5010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1800A53AC (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  HSTRING_HEADER *v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  int v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  _QWORD v22[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21 = -2LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    *((_DWORD *)this + 74) = (int)*((float *)a2 + 11);
    *((_DWORD *)this + 75) = (int)*((float *)a2 + 12);
    v4 = *((_QWORD *)this + 27);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 32), 0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, char *))(*(_QWORD *)v4 + 120LL))(
           v4,
           StringRawBuffer,
           (char *)this + 264);
    if ( v6 < 0 )
    {
      v7 = 188LL;
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
      v7 = 189LL;
      goto LABEL_4;
    }
    v18 = 0LL;
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4))(
           *((_QWORD *)a2 + 4),
           &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
           &v18);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_24:
      v16 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      return (unsigned int)v6;
    }
    v19 = 0LL;
    v20 = 0;
    v10 = v18;
    v11 = RoVariant::operator&((__int64)&v19, v22);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&off_1801BD050);
    v6 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v10 + 48LL))(
           v10,
           v12[1].Reserved.Reserved1,
           v11 + 1);
    v24 = 0LL;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v22);
    if ( v6 < 0 )
    {
      v13 = (unsigned int)v6;
      v14 = 195LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)v13);
      if ( v19 && ((v20 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v19 + 16LL))();
      goto LABEL_24;
    }
    if ( v19 )
    {
      WindowsDeleteString(*((HSTRING *)this + 38));
      *((_QWORD *)this + 38) = 0LL;
      if ( v20 != 7 )
      {
        v6 = -2147316576;
        if ( v20 < 0 )
          v6 = v20;
        goto LABEL_18;
      }
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 152LL))(v19, (char *)this + 304);
      if ( v6 < 0 )
      {
LABEL_18:
        v13 = (unsigned int)v6;
        v14 = 198LL;
        goto LABEL_21;
      }
    }
    v15 = CSingleViewShellExperience::Show((char *)this + 8, 4LL);
    v6 = v15;
    if ( v15 < 0 )
    {
      v13 = (unsigned int)v15;
      v14 = 201LL;
      goto LABEL_21;
    }
    if ( v19 && ((v20 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v19 + 16LL))();
    v17 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  return 0LL;
}
