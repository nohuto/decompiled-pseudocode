/*
 * XREFs of Template_qccc @ 0x1C0037FBC
 * Callers:
 *     RaidUnitMaintenanceTime @ 0x1C00364CC (RaidUnitMaintenanceTime.c)
 *     RaidUnitResetUnit @ 0x1C003E4F0 (RaidUnitResetUnit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qccc(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+B8h] [rbp+67h] BYREF

  v15 = a4;
  UserData.Ptr = (unsigned __int64)&v15;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = &a5;
  v10 = 1LL;
  v11 = &a6;
  v13 = &a7;
  v12 = 1LL;
  v14 = 1LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, a2, 0LL, 4u, &UserData);
}
