/*
 * XREFs of RtlIsNormalizedString @ 0x180001EB0
 * Callers:
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 * Callees:
 *     sub_180001F34 @ 0x180001F34 (sub_180001F34.c)
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
 */

__int64 __fastcall RtlIsNormalizedString(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = -1LL;
  if ( a3 < -1 || !(_DWORD)a1 )
    return 3221225485LL;
  result = sub_180069810(a1, &v9);
  if ( (int)result >= 0 )
  {
    if ( v5 == -1 )
    {
      do
        ++v7;
      while ( *(_WORD *)(a2 + 2 * v7) );
      v5 = v7 + 1;
    }
    return sub_180001F34(v9, a2, v5, a4);
  }
  return result;
}
