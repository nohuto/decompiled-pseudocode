/*
 * XREFs of ?get_Size@Win32BackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1801BA3B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Win32BackedViewHostItem::get_Size(
        Win32BackedViewHostItem *this,
        struct Windows::Foundation::Size *a2)
{
  HWND v2; // rcx
  const char *v4; // r9
  __int64 result; // rax
  float v6; // xmm0_4
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (HWND)*((_QWORD *)this + 14);
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(v2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x144,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v4);
  result = 0LL;
  v6 = (float)(Rect.bottom - Rect.top);
  *(float *)a2 = (float)(Rect.right - Rect.left);
  *((float *)a2 + 1) = v6;
  return result;
}
