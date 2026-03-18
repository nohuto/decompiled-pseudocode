/*
 * XREFs of McTemplateU0qxqq @ 0x1801752C4
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800276E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG McTemplateU0qxqq(__int64 a1, __int64 a2, int a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-60h] BYREF
  int *v5; // [rsp+30h] [rbp-50h]
  __int64 v6; // [rsp+38h] [rbp-48h]
  va_list v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  va_list v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  va_list v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v13 = a3;
  v6 = 4LL;
  v5 = &v13;
  v8 = 8LL;
  va_copy(v7, va);
  v10 = 4LL;
  va_copy(v9, va1);
  v12 = 4LL;
  va_copy(v11, va2);
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DCOMPEVENT_PRIMITIVEGROUP_UPDATE,
           5u,
           &v4);
}
