/*
 * XREFs of MiIoSpaceIsConstant @ 0x1401253AC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiIoSpaceIsConstant(unsigned __int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx

  result = (_QWORD *)qword_14036CE60;
  v3 = a1 + a2 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !result )
        return 0LL;
      if ( v3 >= result[3] )
        break;
      result = (_QWORD *)*result;
    }
    if ( a1 <= result[4] )
      break;
    result = (_QWORD *)result[1];
  }
  if ( a1 >= result[3] )
  {
    v4 = result[4];
    if ( a1 <= v4 && v3 > v4 )
      return 0LL;
  }
  return result;
}
