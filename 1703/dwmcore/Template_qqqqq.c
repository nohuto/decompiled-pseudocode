/*
 * XREFs of Template_qqqqq @ 0x18013BD74
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180068B90 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013EBD4 (-WaitForWork@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4, char a5, char a6, char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-31h] BYREF
  int *v9; // [rsp+30h] [rbp-21h]
  __int64 v10; // [rsp+38h] [rbp-19h]
  char *v11; // [rsp+40h] [rbp-11h]
  __int64 v12; // [rsp+48h] [rbp-9h]
  char *v13; // [rsp+50h] [rbp-1h]
  __int64 v14; // [rsp+58h] [rbp+7h]
  char *v15; // [rsp+60h] [rbp+Fh]
  __int64 v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+B0h] [rbp+5Fh] BYREF
  int v18; // [rsp+B8h] [rbp+67h] BYREF

  v18 = a4;
  v17 = a3;
  UserData.Ptr = (ULONGLONG)&v17;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = &v18;
  v10 = 4LL;
  v11 = &a5;
  v13 = &a6;
  v15 = &a7;
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 5u, &UserData);
}
