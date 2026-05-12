/*
 * XREFs of Template_qcccjq @ 0x1C003FA10
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C001AE20 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C003A0A8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetQOSIoctl @ 0x1C003AA14 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003B010 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C003E02C (RaidUnitRequestTimeout.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  char *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  __int64 v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  char *v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+D8h] [rbp+57h] BYREF

  v21 = a4;
  UserData.Ptr = (unsigned __int64)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v11 = &a5;
  v12 = 1LL;
  v13 = &a6;
  v15 = &a7;
  v17 = a8;
  v19 = &a9;
  v14 = 1LL;
  v16 = 1LL;
  v18 = 16LL;
  v20 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, a2, 0LL, 6u, &UserData);
}
