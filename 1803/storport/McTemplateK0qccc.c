/*
 * XREFs of McTemplateK0qccc @ 0x1C0034340
 * Callers:
 *     RaidUnitMaintenanceTime @ 0x1C0035B7C (RaidUnitMaintenanceTime.c)
 *     RaidUnitResetUnit @ 0x1C003D990 (RaidUnitResetUnit.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0005478 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qccc(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-21h] BYREF
  int *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char *v15; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = a4;
  v10 = 4LL;
  v9 = &v17;
  v12 = 1LL;
  v11 = &a5;
  v14 = 1LL;
  v13 = &a6;
  v15 = &a7;
  v16 = 1LL;
  return McGenEventWriteKM(a1, a2, 0LL, 5u, &v8);
}
