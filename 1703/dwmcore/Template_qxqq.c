/*
 * XREFs of Template_qxqq @ 0x1801664B8
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18004CB80 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_qxqq(__int64 a1, __int64 a2, int a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-60h] BYREF
  va_list v5; // [rsp+30h] [rbp-50h]
  __int64 v6; // [rsp+38h] [rbp-48h]
  va_list v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  va_list v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v11 = a3;
  UserData.Ptr = (ULONGLONG)&v11;
  v6 = 8LL;
  *(_QWORD *)&UserData.Size = 4LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  v10 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_DCOMPEVENT_PRIMITIVEGROUP_UPDATE, 4u, &UserData);
}
