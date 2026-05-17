/*
 * XREFs of sub_180075C44 @ 0x180075C44
 * Callers:
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_1800D08FC @ 0x1800D08FC (sub_1800D08FC.c)
 */

__int64 __fastcall sub_180075C44(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = sub_18001014C(*(_QWORD *)(v1 + 48), 1, 1u, &v7, &v8);
  v4 = v8;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v1 == qword_18015BF88 && ((*((_QWORD *)&xmmword_18016F370 + 1) >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v8);
    if ( ((unsigned __int8)sub_180075CF8(v8 + 144, 8LL) || (unsigned __int8)sub_180075CF8(v4, v7))
      && (int)sub_1800D08FC(a1) >= 0 )
    {
      v6 = sub_18001014C(*(_QWORD *)(a1 + 184), 1, 1u, &v7, &v8);
      v4 = v8;
      if ( v6 < 0 )
        return 0LL;
    }
  }
  return v4;
}
