/*
 * XREFs of sub_180005554 @ 0x180005554
 * Callers:
 *     sub_1800024A8 @ 0x1800024A8 (sub_1800024A8.c)
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     sub_180073218 @ 0x180073218 (sub_180073218.c)
 * Callees:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180005554(__int64 a1, int a2, int a3)
{
  __int128 v6; // xmm1
  __int64 v8; // [rsp+20h] [rbp-39h]
  _BYTE Notification[96]; // [rsp+30h] [rbp-29h] BYREF

  v8 = *(unsigned __int16 *)(a1 + 20);
  BYTE3(v8) = 1;
  memset(Notification, 0, sizeof(Notification));
  *(_DWORD *)&Notification[24] = -1;
  v6 = *(_OWORD *)(a1 + 56);
  *(_DWORD *)&Notification[4] = 96;
  *(_OWORD *)&Notification[40] = xmmword_180118FC0;
  *(_DWORD *)Notification = 7;
  *(_OWORD *)&Notification[56] = v6;
  *(_QWORD *)&Notification[80] = v8;
  *(_DWORD *)&Notification[72] = a2;
  *(_DWORD *)&Notification[76] = a3;
  *(_DWORD *)&Notification[36] = NtCurrentTeb()->ClientId.UniqueProcess;
  return EtwDeliverDataBlock((PETW_NOTIFICATION_HEADER)Notification);
}
