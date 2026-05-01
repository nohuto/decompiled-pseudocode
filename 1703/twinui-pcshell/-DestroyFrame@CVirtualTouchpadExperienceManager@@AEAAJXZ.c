/*
 * XREFs of ?DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B7E00
 * Callers:
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1800B7D50 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B8490 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::DestroyFrame(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  __int64 *v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 88) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x24C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    *((_DWORD *)this + 88) = 0;
  }
  v3 = (__int64 *)((char *)this + 344);
  v4 = 0LL;
  v8 = 0LL;
  if ( &v8 != (__int64 *)((char *)this + 344) )
  {
    v4 = *v3;
    v8 = *v3;
    *v3 = 0LL;
  }
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 42) + 32LL))(*((_QWORD *)this + 42), v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x254,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
  }
  *((_DWORD *)this + 184) = 4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
