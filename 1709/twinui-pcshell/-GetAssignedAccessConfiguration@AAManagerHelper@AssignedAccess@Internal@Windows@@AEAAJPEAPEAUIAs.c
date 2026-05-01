/*
 * XREFs of ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x1801DEF70
 * Callers:
 *     ?GetAssignedAccessTypeByUserSid@AAManagerHelper@AssignedAccess@Internal@Windows@@QEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1801DEE5C (-GetAssignedAccessTypeByUserSid@AAManagerHelper@AssignedAccess@Internal@Windows@@QEAAJPEBGPEAW4A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration **a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( v2 != -2147221164 )
    {
      if ( (v2 & 0x80000000) != 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC8,
          (__int64)"base\\embedded\\sys\\lockdown\\config\\aamanagerhelper.cpp",
          (const char *)v2);
      return v2;
    }
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
    v2 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCA,
        (__int64)"base\\embedded\\sys\\lockdown\\config\\aamanagerhelper.cpp",
        (const char *)(unsigned int)v4);
      return v2;
    }
  }
  return 0LL;
}
