/*
 * XREFs of CcIncrementVacbActiveCount @ 0x1400A4028
 * Callers:
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400A5C80 (CcGetVirtualAddressIfMapped.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
    KeBugCheckEx(0x34u, 0x9AEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return result;
}
