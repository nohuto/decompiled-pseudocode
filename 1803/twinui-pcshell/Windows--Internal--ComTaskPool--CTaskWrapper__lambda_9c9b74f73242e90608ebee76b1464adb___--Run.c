/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9c9b74f73242e90608ebee76b1464adb___::Run @ 0x180182510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9c9b74f73242e90608ebee76b1464adb___::Run(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  v2 = AgileGitPtr::CopyLocal((AgileGitPtr *)(a1 + 16), &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, &v5);
  if ( v2 < 0 || (v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 56LL))(v5), v2 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
}
