/*
 * XREFs of ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x1800B8970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::IsWindowFullyVisible(CStartExperienceManager *this, bool *a2)
{
  bool v2; // bl
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 76) == 2 )
  {
    if ( *((_QWORD *)this + 36) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 43) + 56LL))(*((_QWORD *)this + 43), &v7);
      if ( v4 >= 0 )
        v2 = v7 != 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xCD,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x8000FFFFLL);
    }
  }
  *a2 = v2;
  return 0LL;
}
