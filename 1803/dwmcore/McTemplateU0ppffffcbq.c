/*
 * XREFs of McTemplateU0ppffffcbq @ 0x180163590
 * Callers:
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18006E4A0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0ppffffcbq(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, char a5, char a6, char a7, ...)
{
  char v8; // [rsp+20h] [rbp-A1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-91h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-81h]
  __int64 v11; // [rsp+48h] [rbp-79h]
  __int64 *v12; // [rsp+50h] [rbp-71h]
  __int64 v13; // [rsp+58h] [rbp-69h]
  char *v14; // [rsp+60h] [rbp-61h]
  __int64 v15; // [rsp+68h] [rbp-59h]
  char *v16; // [rsp+70h] [rbp-51h]
  __int64 v17; // [rsp+78h] [rbp-49h]
  char *v18; // [rsp+80h] [rbp-41h]
  __int64 v19; // [rsp+88h] [rbp-39h]
  va_list v20; // [rsp+90h] [rbp-31h]
  __int64 v21; // [rsp+98h] [rbp-29h]
  char *v22; // [rsp+A0h] [rbp-21h]
  __int64 v23; // [rsp+A8h] [rbp-19h]
  __int64 v24; // [rsp+B0h] [rbp-11h]
  __int64 v25; // [rsp+B8h] [rbp-9h]
  va_list v26; // [rsp+C0h] [rbp-1h]
  __int64 v27; // [rsp+C8h] [rbp+7h]
  __int64 v28; // [rsp+100h] [rbp+3Fh] BYREF
  __int64 v29; // [rsp+108h] [rbp+47h] BYREF
  __int64 v30; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v32; // [rsp+130h] [rbp+6Fh]
  __int64 v33; // [rsp+138h] [rbp+77h]
  va_list va1; // [rsp+140h] [rbp+7Fh] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v30 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v33 = va_arg(va1, _QWORD);
  v29 = a4;
  v28 = a3;
  v8 = 68;
  v10 = &v28;
  v11 = 8LL;
  v12 = &v29;
  v13 = 8LL;
  v14 = &a5;
  v15 = 4LL;
  v16 = &a6;
  v17 = 4LL;
  v18 = &a7;
  va_copy(v20, va);
  v22 = &v8;
  v24 = v33;
  va_copy(v26, va1);
  v19 = 4LL;
  v21 = 4LL;
  v23 = 1LL;
  v25 = 68LL;
  v27 = 4LL;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE,
           0xAu,
           &v9);
}
