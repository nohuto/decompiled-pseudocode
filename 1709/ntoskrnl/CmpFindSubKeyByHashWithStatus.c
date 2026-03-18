/*
 * XREFs of CmpFindSubKeyByHashWithStatus @ 0x1405BC750
 * Callers:
 *     CmpFindSubKeyByNameWithStatus @ 0x1405BC634 (CmpFindSubKeyByNameWithStatus.c)
 * Callees:
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpDoCompareKeyName @ 0x140481960 (CmpDoCompareKeyName.c)
 */

__int64 __fastcall CmpFindSubKeyByHashWithStatus(__int64 a1, __int64 a2, __m128i *a3, _DWORD *a4)
{
  int v8; // eax
  unsigned __int16 v9; // di
  int v10; // ebx
  int v12; // eax

  v8 = CmpHashUnicodeComponent(a3);
  v9 = 0;
  *a4 = -1;
  v10 = v8;
  if ( !*(_WORD *)(a2 + 2) )
    return 3221225524LL;
  while ( 1 )
  {
    if ( v10 != *(_DWORD *)(a2 + 8LL * v9 + 8) )
      goto LABEL_3;
    v12 = CmpDoCompareKeyName(a1, (const UNICODE_STRING *)a3, *(_DWORD *)(a2 + 8LL * v9 + 4));
    if ( v12 == 2 )
      return 3221225626LL;
    if ( !v12 )
    {
      *a4 = *(_DWORD *)(a2 + 8LL * v9 + 4);
      return 0LL;
    }
LABEL_3:
    if ( ++v9 >= *(_WORD *)(a2 + 2) )
      return 3221225524LL;
  }
}
