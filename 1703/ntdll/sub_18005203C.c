/*
 * XREFs of sub_18005203C @ 0x18005203C
 * Callers:
 *     sub_180050D48 @ 0x180050D48 (sub_180050D48.c)
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     sub_1800514A0 @ 0x1800514A0 (sub_1800514A0.c)
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18005203C(__int64 a1, int a2, int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _BYTE Notification[96]; // [rsp+30h] [rbp-29h] BYREF

  *(_DWORD *)((char *)&v8 + 2) = 256;
  HIWORD(v8) = 0;
  LOWORD(v8) = *(_WORD *)(a1 + 20);
  memset(Notification, 0, sizeof(Notification));
  *(_DWORD *)&Notification[24] = -1;
  v6 = *(_OWORD *)(a1 + 56);
  *(_DWORD *)&Notification[4] = 96;
  *(_OWORD *)&Notification[40] = xmmword_180119D30;
  *(_DWORD *)Notification = 7;
  *(_OWORD *)&Notification[56] = v6;
  *(_QWORD *)&Notification[80] = v8;
  *(_DWORD *)&Notification[72] = a2;
  *(_DWORD *)&Notification[76] = a3;
  *(_DWORD *)&Notification[36] = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock((PETW_NOTIFICATION_HEADER)Notification);
}
