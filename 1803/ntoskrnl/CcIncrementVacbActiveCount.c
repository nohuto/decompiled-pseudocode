/*
 * XREFs of CcIncrementVacbActiveCount @ 0x1400DD81C
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x1400DB2F8 (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
    KeBugCheckEx(0x34u, 0x9BAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
