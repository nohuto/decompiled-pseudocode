/*
 * XREFs of CloseProtectedHandle @ 0x1C0048FAC
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00484B0 (xxxRestoreCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C0048EAC (_CloseDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0048FF0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserOpenInputDesktop @ 0x1C00D8B30 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C00D9164 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00D92F0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01C62BC (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01C64CC (xxxResolveDesktopForWOW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle, KPROCESSOR_MODE a2)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL, 0LL);
  return ObCloseHandle(Handle, a2);
}
