/*
 * XREFs of Template_pqPR1x @ 0x1C00396A4
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqPR1x(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-21h] BYREF
  int *v6; // [rsp+50h] [rbp-11h]
  __int64 v7; // [rsp+58h] [rbp-9h]
  __int64 v8; // [rsp+60h] [rbp-1h]
  __int64 v9; // [rsp+68h] [rbp+7h]
  va_list v10; // [rsp+70h] [rbp+Fh]
  __int64 v11; // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+C8h] [rbp+67h] BYREF
  va_list va; // [rsp+C8h] [rbp+67h]
  __int64 v14; // [rsp+D0h] [rbp+6Fh]
  __int64 v15; // [rsp+D8h] [rbp+77h]
  va_list va1; // [rsp+E0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  v4 = 1;
  v6 = &v4;
  v8 = v15;
  va_copy(v10, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  v7 = 4LL;
  v9 = 8LL;
  v11 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventWaitForSynchronizationObject2, 0LL, 4u, &UserData);
}
