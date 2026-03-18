/*
 * XREFs of CmpSortedValueEnumStackAdvance @ 0x140700AA8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140222658 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140700AD8 (CmpSortedValueEnumStackAdvanceInternal.c)
 */

__int64 __fastcall CmpSortedValueEnumStackAdvance(void *a1)
{
  void *i; // rbx
  __int64 result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = CmpSortedValueEnumStackAdvanceInternal(a1);
    if ( (int)result < 0 )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)i + 16LL) & 2) == 0 )
      return 0LL;
  }
  return result;
}
