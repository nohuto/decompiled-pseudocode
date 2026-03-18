/*
 * XREFs of ExpTranslateArcPath @ 0x1407C1888
 * Callers:
 *     NtTranslateFilePath @ 0x1407C51D4 (NtTranslateFilePath.c)
 * Callees:
 *     ExpConvertArcName @ 0x1407BEF08 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1407BF0C4 (ExpConvertSignatureName.c)
 *     ExpParseArcPathName @ 0x1407C0328 (ExpParseArcPathName.c)
 */

__int64 __fastcall ExpTranslateArcPath(__int64 a1, unsigned int a2, void *a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // [rsp+30h] [rbp-28h] BYREF
  void *v11; // [rsp+38h] [rbp-20h] BYREF
  wchar_t *v12; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+60h] [rbp+8h] BYREF

  result = ExpParseArcPathName((_WORD *)(a1 + 12), &v12, &v11, &v10, &v13);
  if ( (int)result >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( v13 )
    {
      if ( v9 != 2 )
        return 3221225485LL;
      return ExpConvertSignatureName(a2, a3, a4, v12, v11);
    }
    else
    {
      if ( v9 != 1 )
        return 3221225485LL;
      return ExpConvertArcName(a2, (__int64)a3, a4, v12, (wchar_t *)v11, v10);
    }
  }
  return result;
}
