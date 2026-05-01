/*
 * XREFs of ?get_Params@CJumpViewExperienceEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800BBD10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceEventArgs::get_Params(HSTRING *this, HSTRING *a2)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowsDuplicateString(this[9], a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperienceeventargs.h",
      (const char *)(unsigned int)v2);
  return v3;
}
