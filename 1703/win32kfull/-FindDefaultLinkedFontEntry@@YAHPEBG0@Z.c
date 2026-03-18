/*
 * XREFs of ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C0277270
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00299AC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002DCAC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FindDefaultLinkedFontEntry(wchar_t *Str1, char *a2)
{
  _WORD *v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // rsi

  v2 = &unk_1C03275EC;
  v3 = 0;
  while ( 1 )
  {
    if ( *((_DWORD *)v2 - 31) )
    {
      if ( !*v2 )
      {
        v6 = 664LL * v3;
        if ( !_wcsicmp(Str1, (const wchar_t *)((char *)&FontAssocDefaultTable + v6 + 58))
          && (int)StringCchCopyW((char *)&FontAssocDefaultTable + v6 + 124, 261LL, a2) < 0 )
        {
          break;
        }
      }
    }
    ++v3;
    v2 += 332;
    if ( v3 >= 7 )
      return 1LL;
  }
  return 0LL;
}
