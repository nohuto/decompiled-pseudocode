/*
 * XREFs of Template_qccctq @ 0x1C00383F4
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C0036350 (RaidUnitEndMaintenanceTime.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qccctq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  char *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  char *v17; // [rsp+70h] [rbp-11h]
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
  v14 = 1LL;
  v15 = &a7;
  v17 = &a8;
  v19 = &a9;
  v16 = 1LL;
  v18 = 4LL;
  v20 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitMaintenanceTimeStop, 0LL, 6u, &UserData);
}
