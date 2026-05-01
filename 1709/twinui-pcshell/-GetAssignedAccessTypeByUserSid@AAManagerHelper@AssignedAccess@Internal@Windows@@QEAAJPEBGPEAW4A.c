/*
 * XREFs of ?GetAssignedAccessTypeByUserSid@AAManagerHelper@AssignedAccess@Internal@Windows@@QEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1801DEE5C
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x1801DE920 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x1801DEF70 (-GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAs.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeByUserSid(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        const unsigned __int16 *a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  int AssignedAccessConfiguration; // eax
  unsigned int v5; // ebx
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *v13; // [rsp+28h] [rbp-38h] BYREF
  const WCHAR *v14; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *(_DWORD *)a3 = 0;
  v13 = 0LL;
  v14 = a2;
  AssignedAccessConfiguration = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
                                  this,
                                  &v13);
  v5 = AssignedAccessConfiguration;
  if ( AssignedAccessConfiguration < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB9,
      (__int64)"base\\embedded\\sys\\lockdown\\config\\aamanagerhelper.cpp",
      (const char *)(unsigned int)AssignedAccessConfiguration);
    goto LABEL_13;
  }
  v6 = v13;
  v12 = 0LL;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v15, &v14);
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *, _QWORD, __int64 *))(*(_QWORD *)v6 + 64LL))(
         v6,
         *(_QWORD *)(v7 + 24),
         &v12);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 188LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"base\\embedded\\sys\\lockdown\\config\\aamanagerhelper.cpp",
      (const char *)(unsigned int)v8);
    v10 = v12;
    goto LABEL_11;
  }
  v10 = v12;
  if ( v12 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::AssignedAccess::AssignedAccessType *))(*(_QWORD *)v12 + 72LL))(
           v12,
           a3);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 191LL;
      goto LABEL_8;
    }
    v10 = v12;
  }
  v5 = 0;
LABEL_11:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_13:
  if ( v13 )
    (*(void (__fastcall **)(struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration *))(*(_QWORD *)v13 + 16LL))(v13);
  return v5;
}
