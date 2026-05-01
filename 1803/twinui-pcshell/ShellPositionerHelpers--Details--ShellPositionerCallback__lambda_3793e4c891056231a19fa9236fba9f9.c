/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97___::Invoke @ 0x18000BFC0
 * Callers:
 *     ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x1800254C0 (-PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z.c)
 * Callees:
 *     ?GetPosition@CDesktopPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180021FB0 (-GetPosition@CDesktopPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18002A470 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97___::Invoke(
        __int64 a1,
        CDesktopPositioner *a2)
{
  int Window; // eax
  unsigned int v5; // ebx
  void **v6; // r9
  const struct _GUID *v7; // r8
  __int64 (__fastcall *v8)(CDesktopPositioner *__hidden, HWND, const struct _GUID *, void **); // rax
  int Position; // eax
  unsigned __int64 v11; // r9
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v14; // [rsp+40h] [rbp+8h] BYREF

  Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)(*(_QWORD *)(a1 + 48) + 144LL), &v14);
  v5 = Window;
  if ( Window < 0 )
  {
    v11 = (unsigned int)Window;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)v11,
      v12);
    return v5;
  }
  v6 = *(void ***)(a1 + 72);
  v7 = (const struct _GUID *)(a1 + 56);
  v8 = *(__int64 (__fastcall **)(CDesktopPositioner *__hidden, HWND, const struct _GUID *, void **))(*(_QWORD *)a2 + 24LL);
  if ( v8 == CDesktopPositioner::GetPosition )
    Position = CDesktopPositioner::GetPosition(a2, v14, v7, v6);
  else
    Position = v8(a2, v14, v7, v6);
  v5 = Position;
  if ( Position < 0 )
  {
    v11 = (unsigned int)Position;
    goto LABEL_10;
  }
  return 0;
}
