/*
 * XREFs of sub_1800818B0 @ 0x1800818B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 sub_1800818B0()
{
  unsigned int v1; // eax
  int v2; // r8d
  int v3; // ecx
  __int64 v4; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-1h] BYREF
  int v6; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+48h] [rbp+Fh]
  void *v8; // [rsp+50h] [rbp+17h]
  int v9; // [rsp+58h] [rbp+1Fh]
  __int128 v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+37h] BYREF
  __int128 v12; // [rsp+78h] [rbp+3Fh]

  v4 = 0LL;
  v6 = 48;
  v7 = 0LL;
  v11 = 0LL;
  v12 = 0uLL;
  v8 = &unk_180110820;
  v9 = 64;
  v10 = 0LL;
  if ( (int)ZwOpenKey(&v4, 9LL, &v6) >= 0 && (int)ZwQueryValueKey(v4, L" \"", 2LL, &v11, 24, v5) >= 0 )
  {
    v1 = DWORD1(v12);
    qword_18015C428 = *(_QWORD *)((char *)&v12 + 4);
    v2 = 1049601;
    if ( BYTE4(v12) > 0x14u || !_bittest(&v2, BYTE4(v12)) )
      LOBYTE(qword_18015C428) = 0;
    if ( BYTE1(qword_18015C428) > 0x14u || (v1 = BYTE1(qword_18015C428), !_bittest(&v2, BYTE1(qword_18015C428))) )
      BYTE1(qword_18015C428) = 0;
    LOBYTE(v1) = BYTE2(qword_18015C428);
    if ( BYTE2(qword_18015C428) > 0x14u || (v3 = 1082401, !_bittest(&v3, v1)) )
      BYTE2(qword_18015C428) = 0;
  }
  if ( v4 )
    ZwClose(v4);
  return 0LL;
}
