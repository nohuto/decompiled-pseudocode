/*
 * XREFs of Template_qcccpq @ 0x1C0038054
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccpq(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6, char a7, char a8)
{
  int v9; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-51h] BYREF
  char *v11; // [rsp+50h] [rbp-41h]
  __int64 v12; // [rsp+58h] [rbp-39h]
  char *v13; // [rsp+60h] [rbp-31h]
  __int64 v14; // [rsp+68h] [rbp-29h]
  char *v15; // [rsp+70h] [rbp-21h]
  __int64 v16; // [rsp+78h] [rbp-19h]
  char *v17; // [rsp+80h] [rbp-11h]
  __int64 v18; // [rsp+88h] [rbp-9h]
  int *v19; // [rsp+90h] [rbp-1h]
  __int64 v20; // [rsp+98h] [rbp+7h]
  int v21; // [rsp+E8h] [rbp+57h] BYREF

  v21 = a4;
  UserData.Ptr = (unsigned __int64)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = 0;
  v11 = &a5;
  v13 = &a6;
  v15 = &a7;
  v12 = 1LL;
  v17 = &a8;
  v19 = &v9;
  v14 = 1LL;
  v16 = 1LL;
  v18 = 8LL;
  v20 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPowerRequestComplete, a3, 6u, &UserData);
}
