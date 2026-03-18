/*
 * XREFs of BmfdQueryFontFile @ 0x1C02334C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall BmfdQueryFontFile(__int64 a1, int a2, unsigned int a3, void *a4)
{
  int v6; // edx
  unsigned int v7; // eax
  _WORD *v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return *(unsigned int *)(a1 + 28);
    return 0xFFFFFFFFLL;
  }
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 )
  {
    if ( a4 )
    {
      if ( a3 < v7 )
        return 0xFFFFFFFFLL;
      memmove(a4, (const void *)(a1 + *(int *)(a1 + 36)), v7);
    }
    return *(unsigned int *)(a1 + 32);
  }
  else
  {
    v8 = (_WORD *)(*(_QWORD *)(a1 + 120) + *(int *)(*(_QWORD *)(a1 + 120) + 16LL));
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    v10 = 2 * v9 + 2;
    if ( a4 )
    {
      if ( a3 < v10 )
        return 0xFFFFFFFFLL;
      memmove(a4, v8, v10);
    }
    return v10;
  }
}
