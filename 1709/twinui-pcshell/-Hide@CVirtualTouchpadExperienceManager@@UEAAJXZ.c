/*
 * XREFs of ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1800CBA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CBA60 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::Hide(CVirtualTouchpadExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 184) != 2 )
    return 0LL;
  v1 = CVirtualTouchpadExperienceManager::HideInternal(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1C7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
