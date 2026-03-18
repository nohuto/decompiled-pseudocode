/*
 * XREFs of CmpRemoveCellFromIndex @ 0x140700224
 * Callers:
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407002C0 (CmpRemoveSubKeyCellNoCellRef.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

unsigned __int16 __fastcall CmpRemoveCellFromIndex(_WORD *a1, unsigned __int16 a2)
{
  __int16 v3; // ax
  unsigned __int16 result; // ax
  size_t v5; // r8
  _WORD *v6; // rdx
  _WORD *v7; // rcx

  v3 = a1[1];
  if ( ((*a1 - 26220) & 0xFDFF) != 0 )
  {
    result = v3 - 1;
    a1[1] = result;
    if ( !result )
      return result;
    v5 = 4LL * (result - a2);
    v6 = &a1[2 * a2 + 4];
    v7 = &a1[2 * a2 + 2];
  }
  else
  {
    result = v3 - 1;
    a1[1] = result;
    if ( !result )
      return result;
    v5 = 8LL * (result - a2);
    v6 = &a1[4 * a2 + 6];
    v7 = &a1[4 * a2 + 2];
  }
  return (unsigned __int16)memmove(v7, v6, v5);
}
