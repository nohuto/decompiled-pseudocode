/*
 * XREFs of ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1800CC090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800CC140 (-DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::Close(CVirtualTouchpadExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  void (__fastcall ***v6)(_QWORD, __int64); // rdi
  DWORD LastError; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = CVirtualTouchpadExperienceManager::DestroyFrame((CVirtualTouchpadExperienceManager *)((char *)this - 24));
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 90);
    if ( v6 )
    {
      LastError = GetLastError();
      (**v6)(v6, 1LL);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 90) = 0LL;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x244,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
