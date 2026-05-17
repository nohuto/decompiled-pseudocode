/*
 * XREFs of sub_180050924 @ 0x180050924
 * Callers:
 *     sub_180053748 @ 0x180053748 (sub_180053748.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180043E30 (RtlUnicodeToMultiByteN.c)
 *     sub_180050A54 @ 0x180050A54 (sub_180050A54.c)
 *     sub_180050AC0 @ 0x180050AC0 (sub_180050AC0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_180050924(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  _DWORD v10[4]; // [rsp+40h] [rbp-358h] BYREF
  _BYTE v11[272]; // [rsp+50h] [rbp-348h] BYREF
  unsigned __int16 v12[264]; // [rsp+160h] [rbp-238h] BYREF

  v4 = a3 - *(_DWORD *)(a2 + 48);
  result = sub_180050AC0(a1, a2, v12);
  if ( (int)result >= 0 )
  {
    result = RtlUnicodeToMultiByteN(v11, 0x104u, 0LL, v12, 0x208u);
    if ( (int)result >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
      result = sub_180050A54(a2, 66LL, a2 + 88, v11, (int)v7 + 1, v4, v10);
      if ( (int)result < 0 )
        return result;
      result = (v10[0] + 7) & 0xFFFFFFF8;
      v4 -= result;
    }
  }
  v8 = (__int64 **)(a1 + 464);
  v9 = *v8;
  while ( v9 != (__int64 *)v8 )
  {
    result = sub_180050A54(a2, 64LL, a2 + 88, (char *)v9 + 28, *((_DWORD *)v9 + 5) - 4, v4, v10);
    if ( (int)result < 0 )
      break;
    v9 = (__int64 *)*v9;
    result = (v10[0] + 7) & 0xFFFFFFF8;
    v4 -= result;
  }
  return result;
}
