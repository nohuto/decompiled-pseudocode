/*
 * XREFs of EtwpTraceSavePersistedLoggerStop @ 0x140714594
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwpTraceSavePersistedLoggerStop(unsigned __int16 *a1, int a2, int a3, int a4, int a5)
{
  const EVENT_DESCRIPTOR *v6; // rbx
  BOOLEAN result; // al
  ULONGLONG v8; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-41h] BYREF
  void *v10; // [rsp+48h] [rbp-31h]
  int v11; // [rsp+50h] [rbp-29h]
  int v12; // [rsp+54h] [rbp-25h]
  int *v13; // [rsp+58h] [rbp-21h]
  int v14; // [rsp+60h] [rbp-19h]
  int v15; // [rsp+64h] [rbp-15h]
  int *v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+74h] [rbp-5h]
  int *v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+84h] [rbp+Bh]
  int *v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+94h] [rbp+1Bh]
  int v25; // [rsp+E0h] [rbp+67h] BYREF
  int v26; // [rsp+E8h] [rbp+6Fh] BYREF
  int v27; // [rsp+F0h] [rbp+77h] BYREF

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v6 = (const EVENT_DESCRIPTOR *)&ETW_EVENT_SAVE_PERSISTED_LOGGER_STOP;
  if ( a5 < 0 )
    v6 = &ETW_EVENT_SAVE_PERSISTED_LOGGER_ERROR;
  result = EtwEventEnabled(EtwpPsProvRegHandle, v6);
  if ( result )
  {
    v8 = *((_QWORD *)a1 + 1);
    UserData.Reserved = 0;
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    UserData.Ptr = v8;
    UserData.Size = *a1;
    v10 = &EtwpNull;
    v13 = &v25;
    v16 = &v26;
    v19 = &v27;
    v22 = &a5;
    v14 = 4;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    v11 = 2;
    return EtwWrite(EtwpEventTracingProvRegHandle, v6, 0LL, 6u, &UserData);
  }
  return result;
}
