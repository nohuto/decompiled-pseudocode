/*
 * XREFs of Template_qiii @ 0x1C003BD18
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C0103C8C (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C01B6AE0 (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qiii(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
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
  UserData.Ptr = (ULONGLONG)&v15;
  v10 = 8LL;
  v9 = &a5;
  *(_QWORD *)&UserData.Size = 4LL;
  v11 = &a6;
  v12 = 8LL;
  v13 = &a7;
  v14 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventBltQueueUpdateVSyncState, 0LL, 4u, &UserData);
}
