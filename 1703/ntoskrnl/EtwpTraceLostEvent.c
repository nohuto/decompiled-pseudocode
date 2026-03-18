/*
 * XREFs of EtwpTraceLostEvent @ 0x140255744
 * Callers:
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

int __fastcall EtwpTraceLostEvent(_QWORD *a1, __int16 *a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rax
  __int16 v6; // [rsp+40h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-78h] BYREF
  int *v8; // [rsp+60h] [rbp-68h]
  __int64 v9; // [rsp+68h] [rbp-60h]
  __int16 *v10; // [rsp+70h] [rbp-58h]
  __int64 v11; // [rsp+78h] [rbp-50h]
  __int64 v12; // [rsp+80h] [rbp-48h]
  int v13; // [rsp+88h] [rbp-40h]
  int v14; // [rsp+8Ch] [rbp-3Ch]
  void *v15; // [rsp+90h] [rbp-38h]
  __int64 v16; // [rsp+98h] [rbp-30h]
  int v17; // [rsp+E8h] [rbp+20h] BYREF

  v17 = a4;
  v4 = *a1 - *(_QWORD *)&EventTracingProvGuid.Data1;
  if ( *a1 == *(_QWORD *)&EventTracingProvGuid.Data1 )
    v4 = a1[1] - *(_QWORD *)EventTracingProvGuid.Data4;
  if ( v4 )
  {
    v6 = *a2;
    UserData.Ptr = (ULONGLONG)a1;
    *(_QWORD *)&UserData.Size = 16LL;
    v8 = &v17;
    v9 = 4LL;
    v10 = &v6;
    v11 = 2LL;
    v12 = *((_QWORD *)a3 + 1);
    v13 = *a3;
    v14 = 0;
    v15 = &EtwpNull;
    v16 = 2LL;
    LODWORD(v4) = EtwWriteEx(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT, 0LL, 1u, 0LL, 0LL, 5u, &UserData);
  }
  return v4;
}
