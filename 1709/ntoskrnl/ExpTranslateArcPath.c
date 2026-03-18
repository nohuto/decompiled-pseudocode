/*
 * XREFs of ExpTranslateArcPath @ 0x14075A95C
 * Callers:
 *     NtTranslateFilePath @ 0x14075E188 (NtTranslateFilePath.c)
 * Callees:
 *     ExpConvertArcName @ 0x140758274 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x140758430 (ExpConvertSignatureName.c)
 *     ExpParseArcPathName @ 0x140759448 (ExpParseArcPathName.c)
 */

__int64 __fastcall ExpTranslateArcPath(__int64 a1, unsigned int a2, void *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  void *v10; // [rsp+38h] [rbp-20h] BYREF
  wchar_t *v11; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF

  result = ExpParseArcPathName((_WORD *)(a1 + 12), &v11, &v10, &v9, &v12);
  if ( (int)result >= 0 )
  {
    if ( v12 )
    {
      if ( *(_DWORD *)(a1 + 8) != 2 )
        return 3221225485LL;
      return ExpConvertSignatureName(a2, a3, a4, v11, v10);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) != 1 )
        return 3221225485LL;
      return ExpConvertArcName(a2, (__int64)a3, a4, v11, (wchar_t *)v10, v9);
    }
  }
  return result;
}
