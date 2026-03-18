/*
 * XREFs of CcIncrementVacbActiveCount @ 0x1400A94B8
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x1400250F8 (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
    KeBugCheckEx(0x34u, 0x97FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
