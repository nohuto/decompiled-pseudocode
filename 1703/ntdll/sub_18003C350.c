/*
 * XREFs of sub_18003C350 @ 0x18003C350
 * Callers:
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 * Callees:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18003C350(__int64 a1, int a2, int a3, char a4, PVOID *a5)
{
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // r8d
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+44h] [rbp-BCh] BYREF
  _UNICODE_STRING v17; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v18; // [rsp+60h] [rbp-A0h] BYREF

  sub_18003CA5C(0LL, a1, 5288LL);
  *(_DWORD *)&v17.Length = 0x1000000;
  v18 = 0;
  v9 = (2 * (a3 & 4)) | 0x40;
  if ( (a3 & 2) == 0 )
    v9 = 2 * (a3 & 4);
  v10 = v9 | 0x80;
  if ( (a3 & 0x800000) == 0 )
    v10 = v9;
  v11 = v10 | 0x100;
  if ( (a3 & 0x1000) == 0 )
    v11 = v10;
  v12 = v11 | 0x400000;
  if ( a3 >= 0 )
    v12 = v11;
  v15 = v12;
  v17.Buffer = (PWCH)&v18;
  LODWORD(v16) = sub_18003C6F4(a1, &v17, 0LL, &v15);
  if ( (int)v16 >= 0 )
  {
    v13 = v15;
    if ( !a4 )
      v13 = v15 | 1;
    sub_18001DF1C(&v17, a2, v13, 4, 0LL, 0LL, a5, (int *)&v16);
  }
  sub_18003CA5C(0LL, a1, 5289LL);
  return (unsigned int)v16;
}
