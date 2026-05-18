/*
 * XREFs of DwmpUpdateUserSettings @ 0x1800040F0
 * Callers:
 *     DwmpNotifyUserLogon @ 0x1800031F0 (DwmpNotifyUserLogon.c)
 * Callees:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004390 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 */

int __fastcall DwmpUpdateUserSettings(CApiPortClient *a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+24h] [rbp-24h]
  __int64 v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+34h] [rbp-14h]

  v5 = a2;
  v4 = 536870914;
  v7 = (int)a1;
  v6 = a3;
  return CApiPortClient::SendNotification(a1, &v4, a3);
}
