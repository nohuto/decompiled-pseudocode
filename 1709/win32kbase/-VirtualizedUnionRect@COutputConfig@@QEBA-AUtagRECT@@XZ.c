/*
 * XREFs of ?VirtualizedUnionRect@COutputConfig@@QEBA?AUtagRECT@@XZ @ 0x1C0094470
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00160F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     GetScreenRect @ 0x1C00594A4 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall COutputConfig::VirtualizedUnionRect(
        COutputConfig *this,
        struct tagRECT *__return_ptr retstr)
{
  struct tagRECT v3; // xmm0
  struct tagRECT *result; // rax
  struct tagRECT v5; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 184) )
    v3 = (struct tagRECT)*GetScreenRect(&v5);
  else
    v3 = *(struct tagRECT *)((char *)this + 24);
  v5 = v3;
  result = retstr;
  *retstr = v3;
  return result;
}
