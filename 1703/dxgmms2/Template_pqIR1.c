/*
 * XREFs of Template_pqIR1 @ 0x1C0024358
 * Callers:
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0022830 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

NTSTATUS Template_pqIR1(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v12; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  __int64 v14; // [rsp+A8h] [rbp+38h]
  va_list va2; // [rsp+B0h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v9 = 0;
  va_copy(v5, va1);
  v7 = v14;
  v8 = 8 * v12;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventRecordGpuWork, 0LL, 3u, &UserData);
}
