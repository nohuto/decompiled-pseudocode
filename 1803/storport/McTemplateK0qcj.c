/*
 * XREFs of McTemplateK0qcj @ 0x1C003A10C
 * Callers:
 *     RaUnitResetBusSrb @ 0x1C003ACE8 (RaUnitResetBusSrb.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003C39C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C003CCD0 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0005478 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qcj(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v11 = 1LL;
  v8 = &v14;
  v13 = 16LL;
  v10 = &a5;
  v12 = a6;
  v9 = 4LL;
  return McGenEventWriteKM(a1, &EventBusReset, 0LL, 4u, &v7);
}
