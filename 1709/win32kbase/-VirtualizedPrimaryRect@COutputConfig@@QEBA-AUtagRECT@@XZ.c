/*
 * XREFs of ?VirtualizedPrimaryRect@COutputConfig@@QEBA?AUtagRECT@@XZ @ 0x1C012FD70
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00160F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     GetPrimaryMonitorRect @ 0x1C013D6D4 (GetPrimaryMonitorRect.c)
 */

struct tagRECT *__fastcall COutputConfig::VirtualizedPrimaryRect(
        COutputConfig *this,
        struct tagRECT *__return_ptr retstr)
{
  struct tagRECT v3; // xmm0
  struct tagRECT *result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 184) )
    v3 = *(struct tagRECT *)GetPrimaryMonitorRect(&v5);
  else
    v3 = *(struct tagRECT *)((char *)this + 104);
  result = retstr;
  *retstr = v3;
  return result;
}
