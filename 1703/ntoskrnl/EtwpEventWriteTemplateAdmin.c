/*
 * XREFs of EtwpEventWriteTemplateAdmin @ 0x14070DAC8
 * Callers:
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpFlushBufferToLogfile @ 0x140550754 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x140550854 (EtwpRealtimeSaveBuffer.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteTemplateAdmin(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-41h] BYREF
  void *v9; // [rsp+40h] [rbp-31h]
  __int64 v10; // [rsp+48h] [rbp-29h]
  __int64 v11; // [rsp+50h] [rbp-21h]
  int v12; // [rsp+58h] [rbp-19h]
  int v13; // [rsp+5Ch] [rbp-15h]
  void *v14; // [rsp+60h] [rbp-11h]
  __int64 v15; // [rsp+68h] [rbp-9h]
  char *v16; // [rsp+70h] [rbp-1h]
  __int64 v17; // [rsp+78h] [rbp+7h]
  char *v18; // [rsp+80h] [rbp+Fh]
  __int64 v19; // [rsp+88h] [rbp+17h]

  UserData.Ptr = *((_QWORD *)a4 + 1);
  UserData.Size = *a4;
  v11 = *((_QWORD *)a5 + 1);
  v12 = *a5;
  v16 = &a6;
  v18 = &a7;
  v9 = &EtwpNull;
  v14 = &EtwpNull;
  UserData.Reserved = 0;
  v10 = 2LL;
  v13 = 0;
  v15 = 2LL;
  v17 = 4LL;
  v19 = 4LL;
  return EtwWrite(EtwpEventTracingProvRegHandle, a2, 0LL, 6u, &UserData);
}
