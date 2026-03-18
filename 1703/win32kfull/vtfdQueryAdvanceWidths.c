/*
 * XREFs of vtfdQueryAdvanceWidths @ 0x1C0238390
 * Callers:
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0236BF0 (vtfdQueryAdvanceWidthsTE.c)
 * Callees:
 *     bReconnectVtfdFont @ 0x1C0238064 (bReconnectVtfdFont.c)
 *     vtfdOpenFontContext @ 0x1C0238ACC (vtfdOpenFontContext.c)
 */

__int64 __fastcall vtfdQueryAdvanceWidths(__int64 a1, __int64 a2, int *a3, _WORD *a4, unsigned int a5)
{
  __int64 v7; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax

  v7 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v7 + 28) & 1) != 0 && !(unsigned int)bReconnectVtfdFont(v7) )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = vtfdOpenFontContext(a1);
  v10 = *(_QWORD *)(a1 + 56);
  if ( !v10 )
    return 0xFFFFFFFFLL;
  v11 = **(_QWORD **)(v10 + 112);
  if ( a5 )
  {
    v12 = a5;
    do
    {
      v13 = *a3++;
      *a4++ = ((int)(float)((float)(*(unsigned __int8 *)((unsigned int)(4 * v13) + v11 + 119) | (*(unsigned __int8 *)((unsigned int)(4 * v13) + v11 + 120) << 8))
                          * *(float *)(v10 + 40))
             + 8) & 0xFFF0;
      --v12;
    }
    while ( v12 );
  }
  return 1LL;
}
