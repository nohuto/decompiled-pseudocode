/*
 * XREFs of xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0084DEC
 * Callers:
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0084CFC (xxxEndGetWidnowTrackInfoAsync.c)
 * Callees:
 *     TransformWindowTrackInfo @ 0x1C0084D4C (TransformWindowTrackInfo.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowTrackingInfo(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-30h] BYREF

  memset(v7, 0, sizeof(v7));
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 24);
  v7[0] = *(_QWORD *)a1;
  LODWORD(v7[1]) = 1;
  TransformWindowTrackInfo(a1, (INT *)&v5, (INT *)&v6, 0);
  v7[3] = v5;
  v7[2] = v6;
  LOWORD(v7[4]) = *(_WORD *)(a1 + 372);
  return xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v7);
}
