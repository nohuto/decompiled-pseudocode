/*
 * XREFs of Template_ppffffcbq @ 0x18014E488
 * Callers:
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18000F62C (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_ppffffcbq(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, char a5, char a6, char a7, ...)
{
  char v8; // [rsp+20h] [rbp-A1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-91h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-81h]
  __int64 v11; // [rsp+48h] [rbp-79h]
  char *v12; // [rsp+50h] [rbp-71h]
  __int64 v13; // [rsp+58h] [rbp-69h]
  char *v14; // [rsp+60h] [rbp-61h]
  __int64 v15; // [rsp+68h] [rbp-59h]
  char *v16; // [rsp+70h] [rbp-51h]
  __int64 v17; // [rsp+78h] [rbp-49h]
  va_list v18; // [rsp+80h] [rbp-41h]
  __int64 v19; // [rsp+88h] [rbp-39h]
  char *v20; // [rsp+90h] [rbp-31h]
  __int64 v21; // [rsp+98h] [rbp-29h]
  __int64 v22; // [rsp+A0h] [rbp-21h]
  __int64 v23; // [rsp+A8h] [rbp-19h]
  va_list v24; // [rsp+B0h] [rbp-11h]
  __int64 v25; // [rsp+B8h] [rbp-9h]
  __int64 v26; // [rsp+100h] [rbp+3Fh] BYREF
  __int64 v27; // [rsp+108h] [rbp+47h] BYREF
  __int64 v28; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v30; // [rsp+130h] [rbp+6Fh]
  __int64 v31; // [rsp+138h] [rbp+77h]
  va_list va1; // [rsp+140h] [rbp+7Fh] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v28 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v27 = a4;
  v26 = a3;
  UserData.Ptr = (ULONGLONG)&v26;
  v8 = 68;
  v10 = &v27;
  *(_QWORD *)&UserData.Size = 8LL;
  v12 = &a5;
  v11 = 8LL;
  v14 = &a6;
  v16 = &a7;
  va_copy(v18, va);
  v20 = &v8;
  v22 = v31;
  va_copy(v24, va1);
  v13 = 4LL;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 1LL;
  v23 = 68LL;
  v25 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWING_CONTEXT_STATE, 9u, &UserData);
}
