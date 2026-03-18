/*
 * XREFs of CloseProtectedHandle @ 0x1C00C736C
 * Callers:
 *     NtUserOpenInputDesktop @ 0x1C00107D0 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C0010E24 (_OpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C0010FB0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C0017ED0 (xxxSetCsrssThreadDesktop.c)
 *     _CloseDesktop @ 0x1C00C726C (_CloseDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00C7A50 (xxxRestoreCsrssThreadDesktop.c)
 *     _OpenThreadDesktop @ 0x1C01C359C (_OpenThreadDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01C37AC (xxxResolveDesktopForWOW.c)
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
