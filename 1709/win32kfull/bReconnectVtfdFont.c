/*
 * XREFs of bReconnectVtfdFont @ 0x1C02395D0
 * Callers:
 *     vtfdQueryAdvanceWidths @ 0x1C02398FC (vtfdQueryAdvanceWidths.c)
 *     vtfdQueryFontData @ 0x1C02399E0 (vtfdQueryFontData.c)
 *     vtfdQueryFontFile @ 0x1C0239B70 (vtfdQueryFontFile.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bReconnectVtfdFont(__int64 a1)
{
  int v2; // eax
  int v3; // r8d
  __int64 v5; // rdx

  if ( (unsigned int)(*(_DWORD *)a1 - 1) > 1 )
    return 0LL;
  v2 = EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), (_QWORD *)(a1 + 16), (_DWORD *)(a1 + 24), 1);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  if ( *(int *)(a1 + 36) > 0 )
  {
    v5 = a1 + 40;
    do
    {
      ++v3;
      *(_QWORD *)v5 = *(_QWORD *)(a1 + 16) + *(int *)(v5 + 8);
      v5 += 48LL;
    }
    while ( v3 < *(_DWORD *)(a1 + 36) );
  }
  *(_DWORD *)(a1 + 28) &= ~1u;
  return 1LL;
}
