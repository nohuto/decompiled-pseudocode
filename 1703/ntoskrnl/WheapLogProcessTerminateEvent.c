/*
 * XREFs of WheapLogProcessTerminateEvent @ 0x140260678
 * Callers:
 *     WheaTerminateProcess @ 0x140723504 (WheaTerminateProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapLogProcessTerminateEvent(int a1, __int64 a2, int a3)
{
  int v4; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v6; // [rsp+60h] [rbp+1Fh]
  int v7; // [rsp+68h] [rbp+27h]
  int v8; // [rsp+6Ch] [rbp+2Bh]
  const size_t *v9; // [rsp+70h] [rbp+2Fh]
  __int64 v10; // [rsp+78h] [rbp+37h]

  v4 = a1;
  v5.Ptr = (ULONGLONG)&v4;
  v6 = a2;
  v9 = &cchOriginalDestLength;
  v7 = a3;
  v8 = 0;
  *(_QWORD *)&v5.Size = 4LL;
  v10 = 2LL;
  return EtwWriteEx((REGHANDLE)WheapDispatchPtr.DriverObject, &EVENT_WHEA_PROCESS_TERMINATE, 0LL, 0, 0LL, 0LL, 3u, &v5);
}
