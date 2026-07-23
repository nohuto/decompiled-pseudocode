/*
 * XREFs of sub_1800FE344 @ 0x1800FE344
 * Callers:
 *     sub_1800FEB20 @ 0x1800FEB20 (sub_1800FEB20.c)
 * Callees:
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

ULONG __fastcall sub_1800FE344(int a1, int a2, int a3, __int64 a4)
{
  _QWORD v5[7]; // [rsp+20h] [rbp-60h] BYREF
  int v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+5Ch] [rbp-24h]
  int v8; // [rsp+90h] [rbp+10h] BYREF
  int v9; // [rsp+98h] [rbp+18h] BYREF
  int v10; // [rsp+A0h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = a1;
  v6 = a3;
  v5[1] = 4LL;
  v5[3] = 4LL;
  v5[0] = &v8;
  v5[5] = 4LL;
  v5[2] = &v9;
  v5[6] = a4;
  v7 = 0;
  v5[4] = &v10;
  return EtwEventWrite(qword_18015C2F8, &stru_180124770, 4u, (PEVENT_DATA_DESCRIPTOR)v5);
}
