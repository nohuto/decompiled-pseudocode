/*
 * XREFs of CmpHashCompressedComponent @ 0x1405E227C
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashCompressedComponent(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // ebx
  int i; // esi
  WCHAR v5; // ax

  v2 = 0;
  for ( i = a2; i; --i )
  {
    v5 = *a1;
    if ( (unsigned __int8)v5 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
        v5 -= 32;
      else
        v5 = RtlUpcaseUnicodeChar(*a1);
    }
    ++a1;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
