/*
 * XREFs of ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x1801C9694
 * Callers:
 *     ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180065540 (-SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ImmersiveOwnedWindowHelper::RepositionOwnedWindows(
        ImmersiveOwnedWindowHelper *this,
        __int128 *a2,
        const struct tagRECT *const a3)
{
  signed int LastError; // eax
  unsigned int v5; // ecx
  LPARAM lParam; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]

  lParam = (LPARAM)GetAncestor((HWND)this, 2u);
  v8 = *a2;
  if ( !lParam || EnumWindows(ImmersiveOwnedWindowHelper::EnumImmersiveComponentOwnedWindows, (LPARAM)&lParam) )
  {
    return (unsigned int)-2147023496;
  }
  else
  {
    LastError = GetLastError();
    v5 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      return (unsigned int)LastError;
  }
  return v5;
}
