/*
 * XREFs of sub_1800FE2D0 @ 0x1800FE2D0
 * Callers:
 *     sub_1800FEB20 @ 0x1800FEB20 (sub_1800FEB20.c)
 * Callees:
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

ULONG __fastcall sub_1800FE2D0(int a1, int a2)
{
  int *v3; // [rsp+20h] [rbp-38h] BYREF
  int v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+2Ch] [rbp-2Ch]
  int *v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v9 = a1;
  v3 = &v9;
  v5 = 0;
  v4 = 4;
  v6 = &v10;
  v8 = 0;
  v7 = 4;
  return EtwEventWrite(qword_18015C2F8, &stru_180124730, 2u, (PEVENT_DATA_DESCRIPTOR)&v3);
}
