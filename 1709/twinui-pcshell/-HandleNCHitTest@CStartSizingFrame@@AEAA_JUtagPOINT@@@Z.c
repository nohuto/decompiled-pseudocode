/*
 * XREFs of ?HandleNCHitTest@CStartSizingFrame@@AEAA_JUtagPOINT@@@Z @ 0x1800D038C
 * Callers:
 *     ?v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800D0220 (-v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CStartSizingFrame::HandleNCHitTest(CStartSizingFrame *this, struct tagPOINT a2)
{
  __int64 v2; // rax
  int v3; // esi
  LONG x; // ebx
  LONG top; // eax
  int v7; // ecx
  __int64 result; // rax
  LONG bottom; // eax
  bool v10; // cc
  LONG y; // [rsp+24h] [rbp-24h]
  struct tagRECT Rect; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  y = a2.y;
  x = a2.x;
  if ( !v2 )
    return 1LL;
  if ( *(_BYTE *)(v2 + 52) )
    return 1LL;
  GetWindowRect(*((HWND *)this + 1), &Rect);
  if ( x < Rect.left || x >= Rect.right )
    return 1LL;
  top = Rect.top;
  if ( y >= Rect.top )
  {
    if ( *((_DWORD *)this + 10) == 3 )
    {
      v7 = MulDiv(8, *((_DWORD *)this + 14), 96);
      top = Rect.top;
    }
    else
    {
      v7 = 0;
    }
    if ( y < v7 + top )
      return 12LL;
  }
  bottom = Rect.bottom;
  if ( y > Rect.bottom )
    return 1LL;
  if ( *((_DWORD *)this + 10) != 3 )
  {
    v3 = MulDiv(8, *((_DWORD *)this + 14), 96);
    bottom = Rect.bottom;
  }
  v10 = y <= bottom - v3;
  result = 15LL;
  if ( v10 )
    return 1LL;
  return result;
}
