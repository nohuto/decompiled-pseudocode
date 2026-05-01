/*
 * XREFs of ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x18014C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::ShutdownServices(XamlLauncher *this, struct IProfferService *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ((__int64 (__fastcall *)(struct IProfferService *, _QWORD))a2->lpVtbl->RevokeService)(
         a2,
         *((unsigned int *)this + 18));
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 18) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2CB,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
