/*
 * XREFs of EtwpEventWriteTemplateBackingFile @ 0x14070DB88
 * Callers:
 *     EtwpRealtimeSaveBuffer @ 0x140550854 (EtwpRealtimeSaveBuffer.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateBackingFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        char a6)
{
  int v7; // [rsp+30h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  void *v9; // [rsp+50h] [rbp-9h]
  __int64 v10; // [rsp+58h] [rbp-1h]
  int *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  char *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]

  UserData.Ptr = *((_QWORD *)a4 + 1);
  UserData.Size = *a4;
  v9 = &EtwpNull;
  v11 = &v7;
  UserData.Reserved = 0;
  v13 = &a6;
  v7 = -1073741432;
  v10 = 2LL;
  v12 = 4LL;
  v14 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL, 0LL, 4u, &UserData);
}
