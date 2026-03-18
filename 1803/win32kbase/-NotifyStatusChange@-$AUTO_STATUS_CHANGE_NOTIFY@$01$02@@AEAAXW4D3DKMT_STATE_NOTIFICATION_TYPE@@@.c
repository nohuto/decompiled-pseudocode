/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C006D0CC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettings @ 0x1C004BCC8 (DrvChangeDisplaySettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = *a1;
  v8 = a2;
  result = ((__int64 (__fastcall *)(int *))qword_1C01A1BB8)(&v8);
  if ( (int)result < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5, v6);
    return WdLogEvent5_WdAssertion(v7);
  }
  return result;
}
