/*
 * XREFs of ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18007D624
 * Callers:
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18007D480 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180078798 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::CopyCloakableWindowsFromGatherer(
        CWin32ApplicationView *this,
        unsigned int *a2,
        HWND **a3)
{
  __int64 v3; // r12
  unsigned int v7; // esi
  int v8; // ebx
  HWND v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebp
  HWND *v13; // r14
  HWND *v14; // rcx
  unsigned __int64 v15; // r13
  HWND v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  *a2 = 0;
  *a3 = 0LL;
  v7 = *((_DWORD *)this + 48) + 1;
  *a3 = 0LL;
  if ( !is_mul_ok(v7, 8uLL) )
  {
    v8 = -2147024362;
LABEL_4:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x31B,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = CTCoAllocPolicy::Alloc((IMalloc *)this, 1, 8LL * v7, (void **)a3);
  if ( v8 < 0 )
    goto LABEL_4;
  v10 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21));
  v11 = GhostWindowFromHungWindow(v10);
  v12 = 1;
  if ( v11 )
    v10 = (HWND)v11;
  **a3 = v10;
  v13 = (HWND *)*((_QWORD *)this + 23);
  v14 = &v13[*((_QWORD *)this + 24)];
  v15 = (unsigned __int64)(8LL * *((_QWORD *)this + 24) + 7) >> 3;
  if ( v13 > v14 )
    v15 = 0LL;
  if ( v15 )
  {
    do
    {
      v16 = *v13;
      v17 = GhostWindowFromHungWindow(*v13);
      v18 = v12;
      ++v13;
      if ( v17 )
        v16 = (HWND)v17;
      ++v12;
      ++v3;
      (*a3)[v18] = v16;
    }
    while ( v3 != v15 );
  }
  *a2 = v7;
  return 0LL;
}
