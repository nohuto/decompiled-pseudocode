/*
 * XREFs of sub_1800DAFC0 @ 0x1800DAFC0
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     sub_180074154 @ 0x180074154 (sub_180074154.c)
 */

__int64 __fastcall sub_1800DAFC0(unsigned __int64 a1, int a2)
{
  int v3; // edi
  __int64 v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h]

  v3 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18016F4E0 + 1)
    || a1 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
  {
    v5 = sub_18000EF10(a1, (__int64 *)&v11);
  }
  else
  {
    v5 = xmmword_18016F4E0;
    v11 = xmmword_18016F4E0;
    v12 = qword_18016F4F0;
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)&v11 + 1);
    v3 = HIDWORD(v12);
  }
  else
  {
    v6 = v13;
  }
  sub_1800259B4(0);
  *(_QWORD *)&xmmword_18016F4E0 = v5;
  HIDWORD(qword_18016F4F0) = v3;
  *((_QWORD *)&xmmword_18016F4E0 + 1) = v6;
  LODWORD(qword_18016F4F0) = a2;
  sub_180074154(a1, v7, v8, v9);
  return sub_1800259B4(1);
}
