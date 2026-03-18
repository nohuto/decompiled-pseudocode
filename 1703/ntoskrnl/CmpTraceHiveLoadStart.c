/*
 * XREFs of CmpTraceHiveLoadStart @ 0x1404D546C
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CmpTraceHiveLoadStart(unsigned __int16 *a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  __int16 v5; // [rsp+38h] [rbp-9h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  __int16 *v8; // [rsp+60h] [rbp+1Fh]
  __int64 v9; // [rsp+68h] [rbp+27h]
  int *v10; // [rsp+70h] [rbp+2Fh]
  __int64 v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+B0h] [rbp+6Fh] BYREF

  v12 = a2;
  v2 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_LOAD_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
  {
    UserData.Ptr = *((_QWORD *)a1 + 1);
    UserData.Size = *a1;
    v8 = &v5;
    v10 = &v12;
    v5 = 0;
    UserData.Reserved = 0;
    v9 = 2LL;
    v11 = 4LL;
    return EtwWrite(v2, &EventDescriptor, 0LL, 3u, &UserData);
  }
  return result;
}
