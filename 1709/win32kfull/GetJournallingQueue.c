/*
 * XREFs of GetJournallingQueue @ 0x1C008CAA0
 * Callers:
 *     zzzSetDesktop @ 0x1C008C630 (zzzSetDesktop.c)
 * Callees:
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  char v1; // r10
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 Valid; // rcx

  v1 = 0x80;
  if ( (*(_DWORD *)(a1 + 464) & 0x80u) != 0 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 432) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 440);
  Valid = *(_QWORD *)(v3 + 48);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 0x80) != 0 )
      Valid = PhkNextValid(Valid);
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 408LL);
  }
  Valid = *(_QWORD *)(v3 + 40);
  if ( Valid )
  {
    if ( ((unsigned __int8)*(_DWORD *)(Valid + 64) & (unsigned __int8)v1) != 0 )
      Valid = PhkNextValid(Valid);
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 408LL);
  }
  return v2;
}
