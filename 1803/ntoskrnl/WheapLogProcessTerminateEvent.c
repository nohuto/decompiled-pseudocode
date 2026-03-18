/*
 * XREFs of WheapLogProcessTerminateEvent @ 0x1402BF918
 * Callers:
 *     WheaTerminateProcess @ 0x1407CAC14 (WheaTerminateProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapLogProcessTerminateEvent(int a1, __int64 a2, int a3)
{
  int v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  const size_t *v9; // [rsp+68h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp-10h]

  v4 = a1;
  UserData.Ptr = (ULONGLONG)&v4;
  v6 = a2;
  v9 = &pwsz;
  v7 = a3;
  v8 = 0;
  *(_QWORD *)&UserData.Size = 4LL;
  v10 = 2LL;
  return EtwWriteEx(
           (REGHANDLE)WheapDispatchPtr.DriverObject,
           &EVENT_WHEA_PROCESS_TERMINATE,
           0LL,
           0,
           0LL,
           0LL,
           3u,
           &UserData);
}
