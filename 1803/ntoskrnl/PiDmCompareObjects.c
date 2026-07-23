/*
 * XREFs of PiDmCompareObjects @ 0x140507610
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 */

__int64 __fastcall PiDmCompareObjects(_RTL_AVL_TABLE *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // r8d
  const wchar_t *v8; // rcx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rcx
  int v11; // eax

  v3 = *a2;
  v4 = *a3;
  if ( *a2 != *a3 )
  {
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v4 + 24);
    if ( v5 < v6 )
      return 0LL;
    if ( v5 > v6 )
      return 1LL;
    v8 = *(const wchar_t **)(v4 + 16);
    v9 = v8 + 4;
    if ( *(_DWORD *)(v3 + 28) != 3 )
      v9 = v8;
    v10 = (const wchar_t *)(*(_QWORD *)(v3 + 16) + 8LL);
    if ( *(_DWORD *)(v3 + 28) != 3 )
      v10 = *(const wchar_t **)(v3 + 16);
    v11 = wcsicmp(v10, v9);
    if ( v11 < 0 )
      return 0LL;
    if ( v11 > 0 )
      return 1LL;
  }
  return 2LL;
}
