/*
 * XREFs of sub_18005D1A4 @ 0x18005D1A4
 * Callers:
 *     sub_18005D0E0 @ 0x18005D0E0 (sub_18005D0E0.c)
 *     sub_18008A97C @ 0x18008A97C (sub_18008A97C.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     sub_18005DE38 @ 0x18005DE38 (sub_18005DE38.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18005D1A4(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  _BYTE v9[16]; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h]
  _BYTE *v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h]
  __int128 v14; // [rsp+50h] [rbp-B0h]
  _OWORD v15[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+80h] [rbp-80h]
  __int16 v17; // [rsp+84h] [rbp-7Ch]
  _BYTE v18[484]; // [rsp+86h] [rbp-7Ah] BYREF

  v16 = 6029413;
  v15[0] = xmmword_180119D50;
  v15[1] = xmmword_180119D60;
  v17 = 0;
  v6 = 0;
  memset(v18, 0, sizeof(v18));
  if ( a1
    && a2
    && a3
    && (int)sub_18005DE38(v15, 261LL, a3) >= 0
    && (int)RtlInitUnicodeStringEx((__int64)v9, (__int64)v15) >= 0 )
  {
    v10 = 48;
    v12 = v9;
    v11 = 0LL;
    v13 = 64;
    *a1 = 0LL;
    v14 = 0LL;
    v7 = ZwOpenKey(a1, 131097LL, &v10);
    *a2 = 2;
    return v7 >= 0;
  }
  return v6;
}
