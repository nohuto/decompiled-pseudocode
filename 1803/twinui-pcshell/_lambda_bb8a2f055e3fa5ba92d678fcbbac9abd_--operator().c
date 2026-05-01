/*
 * XREFs of _lambda_bb8a2f055e3fa5ba92d678fcbbac9abd_::operator() @ 0x180258318
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8a2f055e3fa5ba92d678fcbbac9abd___::Run @ 0x180259680 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bb8a2f055e3fa5ba92d678fcbbac9abd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_bb8a2f055e3fa5ba92d678fcbbac9abd_::operator()(AgileGitPtr *this)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  v2 = AgileGitPtr::CopyLocal(this, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, &v7);
  v4 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = *((_DWORD *)this + 2) == 0;
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, v3);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v4;
}
