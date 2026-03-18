/*
 * XREFs of CmpHashCompressedComponent @ 0x140572750
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashCompressedComponent(_BYTE *a1, int a2)
{
  unsigned int v2; // ebx
  int i; // esi
  WCHAR v5; // ax

  v2 = 0;
  for ( i = a2; i; --i )
  {
    LOBYTE(v5) = *a1;
    if ( *a1 >= 0x61u )
    {
      if ( (unsigned __int8)v5 <= 0x7Au )
        v5 = (unsigned __int8)v5 - 32;
      else
        v5 = RtlUpcaseUnicodeChar((unsigned __int8)v5);
    }
    else
    {
      v5 = (unsigned __int8)v5;
    }
    ++a1;
    v2 = v5 + 37 * v2;
  }
  return v2;
}
