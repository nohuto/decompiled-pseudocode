/*
 * XREFs of sub_1800D75C8 @ 0x1800D75C8
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 *     sub_1800790B8 @ 0x1800790B8 (sub_1800790B8.c)
 */

__int64 __fastcall sub_1800D75C8(unsigned __int64 a1)
{
  int v2; // r14d
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v9);
  v2 = *(_DWORD *)(v9 + 80);
  sub_180039AE0(a1, v2);
  v3 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18016B4C0 + 1)
    || a1 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
  {
    v4 = sub_180034A40(a1, (__int64)&v7);
  }
  else
  {
    v4 = xmmword_18016B4C0;
    v7 = xmmword_18016B4C0;
    v8 = qword_18016B4D0;
  }
  if ( v4 )
  {
    v5 = *((_QWORD *)&v7 + 1);
    v3 = HIDWORD(v8);
  }
  else
  {
    v5 = v9;
  }
  sub_18001DEA8(0);
  *(_QWORD *)&xmmword_18016B4C0 = v4;
  HIDWORD(qword_18016B4D0) = v3;
  *((_QWORD *)&xmmword_18016B4C0 + 1) = v5;
  LODWORD(qword_18016B4D0) = v2;
  sub_1800790B8(a1);
  return sub_18001DEA8(1);
}
