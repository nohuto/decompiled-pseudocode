/*
 * XREFs of MiSkipFractionalPagefileRegion @ 0x1400C571C
 * Callers:
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiSkipFractionalPagefileRegion(unsigned __int64 a1)
{
  unsigned __int64 v1; // r10
  __int16 v2; // ax
  __int64 v3; // r9
  unsigned __int64 v4; // r11

  v1 = a1;
  do
  {
    v2 = MI_READ_PTE_LOCK_FREE(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v2 & 0x3E0) != 0LL || (v2 & 1) != 0 )
      break;
    v1 = ((v3 << 25) + 0x10000000) >> 16;
  }
  while ( v1 < v4 );
  if ( v1 <= v4 )
    return v1;
  return v4;
}
