/*
 * XREFs of PiDmCompareObjects @ 0x140485770
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 */

__int64 __fastcall PiDmCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // r8d
  bool v8; // zf
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rdx
  int v11; // eax

  v3 = *a2;
  v4 = *a3;
  if ( v3 != *a3 )
  {
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v4 + 24);
    if ( v5 < v6 )
      return 0LL;
    if ( v5 > v6 )
      return 1LL;
    v8 = *(_DWORD *)(v3 + 28) == 3;
    v9 = *(const wchar_t **)(v3 + 16);
    v10 = *(const wchar_t **)(v4 + 16);
    if ( v8 )
    {
      v10 += 4;
      v9 += 4;
    }
    v11 = wcsicmp(v9, v10);
    if ( v11 < 0 )
      return 0LL;
    if ( v11 > 0 )
      return 1LL;
  }
  return 2LL;
}
