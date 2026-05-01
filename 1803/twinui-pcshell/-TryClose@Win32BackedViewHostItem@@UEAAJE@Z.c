/*
 * XREFs of ?TryClose@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801B95D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::TryClose(HWND *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( PostMessageW(this[14], 0x112u, 0xF060uLL, 0LL) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE3,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v1);
}
