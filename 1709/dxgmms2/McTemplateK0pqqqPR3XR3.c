/*
 * XREFs of McTemplateK0pqqqPR3XR3 @ 0x1C00269D4
 * Callers:
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C002152C (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0pqqqPR3XR3(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-51h] BYREF
  va_list v5; // [rsp+40h] [rbp-41h]
  __int64 v6; // [rsp+48h] [rbp-39h]
  va_list v7; // [rsp+50h] [rbp-31h]
  __int64 v8; // [rsp+58h] [rbp-29h]
  va_list v9; // [rsp+60h] [rbp-21h]
  __int64 v10; // [rsp+68h] [rbp-19h]
  va_list v11; // [rsp+70h] [rbp-11h]
  __int64 v12; // [rsp+78h] [rbp-9h]
  __int64 v13; // [rsp+80h] [rbp-1h]
  int v14; // [rsp+88h] [rbp+7h]
  int v15; // [rsp+8Ch] [rbp+Bh]
  __int64 v16; // [rsp+90h] [rbp+Fh]
  int v17; // [rsp+98h] [rbp+17h]
  int v18; // [rsp+9Ch] [rbp+1Bh]
  __int64 v19; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v21; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v23; // [rsp+E8h] [rbp+67h] BYREF
  va_list va2; // [rsp+E8h] [rbp+67h]
  __int64 v25; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F0h] [rbp+6Fh]
  __int64 v27; // [rsp+F8h] [rbp+77h]
  __int64 v28; // [rsp+100h] [rbp+7Fh]
  va_list va4; // [rsp+108h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  v27 = va_arg(va4, _QWORD);
  v28 = va_arg(va4, _QWORD);
  va_copy(v5, va);
  va_copy(v7, va1);
  va_copy(v9, va2);
  va_copy(v11, va3);
  v13 = v27;
  v16 = v28;
  v14 = 8 * v25;
  v15 = 0;
  v17 = 8 * v25;
  v18 = 0;
  v6 = 8LL;
  v8 = 4LL;
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWriteKM(&DxgkControlGuid_Context, &EventSignalQueueSubmit, a3, 7u, &v4);
}
