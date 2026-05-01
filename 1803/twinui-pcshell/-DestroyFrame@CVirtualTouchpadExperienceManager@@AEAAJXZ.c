/*
 * XREFs of ?DestroyFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180181498
 * Callers:
 *     ?Close@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x180180FD0 (-Close@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180182020 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::DestroyFrame(CVirtualTouchpadExperienceManager *this)
{
  int v2; // eax
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 88) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        589LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
    *((_DWORD *)this + 88) = 0;
  }
  v3 = (__int64 *)((char *)this + 344);
  v9 = 0LL;
  v4 = 0LL;
  if ( &v9 != (__int64 *)((char *)this + 344) )
  {
    v9 = *v3;
    v5 = v9;
    *v3 = 0LL;
    v4 = v5;
  }
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 32LL))(*((_QWORD *)this + 42));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        597LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  *((_DWORD *)this + 184) = 4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return 0LL;
}
