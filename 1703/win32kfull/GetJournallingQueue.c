/*
 * XREFs of GetJournallingQueue @ 0x1C001A990
 * Callers:
 *     zzzSetDesktop @ 0x1C001A520 (zzzSetDesktop.c)
 * Callees:
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  char v1; // r11
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 Valid; // rcx

  v1 = 0x80;
  if ( (*(_DWORD *)(a1 + 440) & 0x80u) != 0 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 408) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 416);
  Valid = *(_QWORD *)(v3 + 48);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 0x80) != 0 )
      Valid = PhkNextValid();
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 384LL);
  }
  Valid = *(_QWORD *)(v3 + 40);
  if ( Valid )
  {
    if ( ((unsigned __int8)*(_DWORD *)(Valid + 64) & (unsigned __int8)v1) != 0 )
      Valid = PhkNextValid();
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 384LL);
  }
  return v2;
}
