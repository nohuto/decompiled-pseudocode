/*
 * XREFs of ?pbackfail@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x18007D6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::stringbuf::pbackfail(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rbx

  if ( !std::streambuf::gptr(a1) )
    return 0xFFFFFFFFLL;
  v4 = std::streambuf::eback(a1);
  if ( std::streambuf::gptr(a1) <= v4
    || a2 != -1 && (_BYTE)a2 != *(_BYTE *)(std::streambuf::gptr(a1) - 1) && (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  std::streambuf::gbump(a1, 0xFFFFFFFFLL);
  if ( a2 == -1 )
    return 0;
  else
    *(_BYTE *)std::streambuf::gptr(a1) = a2;
  return a2;
}
