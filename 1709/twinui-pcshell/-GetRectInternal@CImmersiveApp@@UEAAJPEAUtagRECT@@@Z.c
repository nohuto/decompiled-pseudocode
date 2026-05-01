/*
 * XREFs of ?GetRectInternal@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z @ 0x180058160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetRectInternal(CImmersiveApp *this, struct tagRECT *a2)
{
  char v4; // di
  signed int v5; // esi
  LONG left; // r8d
  signed int LastError; // eax
  __int64 v8; // rcx
  int v9; // edi
  LONG top; // ebx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  HWND hWnd[2]; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT rcDst; // [rsp+48h] [rbp-18h] BYREF

  hWnd[1] = (HWND)-2LL;
  SetRectEmpty(a2);
  *(_QWORD *)&rcDst.left = 0LL;
  *(_QWORD *)&rcDst.right = 0LL;
  v4 = *((_BYTE *)this + 576);
  v5 = v4 != 0 ? 0x8007139F : 0;
  if ( !v4 )
    CopyRect(&rcDst, (const RECT *)((char *)this + 168));
  left = 0;
  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !v4 )
  {
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 496LL))(this, &v12);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, hWnd);
      if ( v5 >= 0 )
      {
        if ( GetWindowRect(hWnd[0], &Rect) )
        {
          v5 = 0;
        }
        else
        {
          LastError = GetLastError();
          v5 = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            v5 = LastError;
          if ( v5 >= 0 )
            v5 = -2147467259;
        }
      }
    }
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    left = Rect.left;
  }
  if ( v5 >= 0 )
  {
    v9 = left + (Rect.right + rcDst.left - rcDst.right - left) / 2;
    top = Rect.top;
    CopyRect(a2, &rcDst);
    OffsetRect(a2, v9, top);
  }
  return (unsigned int)v5;
}
