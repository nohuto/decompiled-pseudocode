/*
 * XREFs of ?Activate@Win32BackedViewHostItem@@UEAAJXZ @ 0x180107F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::Activate(HWND *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( SetForegroundWindow(this[14]) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xC3,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v1);
}
