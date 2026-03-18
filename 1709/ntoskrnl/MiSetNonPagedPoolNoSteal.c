/*
 * XREFs of MiSetNonPagedPoolNoSteal @ 0x14015B274
 * Callers:
 *     MiGetPhysicalAddress @ 0x1400BBFF0 (MiGetPhysicalAddress.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

signed __int64 __fastcall MiSetNonPagedPoolNoSteal(signed __int64 *a1)
{
  signed __int64 result; // rax
  volatile signed __int64 *v2; // r9
  signed __int64 v3; // rtt

  result = *a1;
  v2 = a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    result = MiReadPteShadow(a1, result);
  do
  {
    if ( (result & 0x200) != 0 )
      break;
    v3 = result;
    result = _InterlockedCompareExchange64(v2, result | 0x220, result);
  }
  while ( v3 != result );
  return result;
}
