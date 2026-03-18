/*
 * XREFs of bReconnectBmfdFont @ 0x1C0233590
 * Callers:
 *     BmfdQueryAdvanceWidths @ 0x1C0232E60 (BmfdQueryAdvanceWidths.c)
 *     BmfdQueryFontData @ 0x1C023307C (BmfdQueryFontData.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bReconnectBmfdFont(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  EngAcquireSemaphore(ghsemBMFD);
  if ( (*(_DWORD *)(a1 + 4) & 1) == 0 )
  {
LABEL_7:
    v2 = 1;
    goto LABEL_8;
  }
  v2 = 0;
  if ( (unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 16), &v6, &v5, 1) )
  {
    if ( *(int *)(a1 + 28) > 0 )
    {
      v3 = a1 + 40;
      do
      {
        ++v2;
        *(_QWORD *)v3 = v6 + *(int *)(v3 + 8);
        v3 += 88LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 28) );
    }
    *(_DWORD *)(a1 + 4) &= ~1u;
    goto LABEL_7;
  }
LABEL_8:
  EngReleaseSemaphore(ghsemBMFD);
  return (unsigned int)v2;
}
