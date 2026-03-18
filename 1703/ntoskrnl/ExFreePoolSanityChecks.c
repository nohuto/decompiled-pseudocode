/*
 * XREFs of ExFreePoolSanityChecks @ 0x1407883B0
 * Callers:
 *     VerifierExFreePoolWithTag @ 0x1407647C0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     MmDeterminePoolType @ 0x1400A6B04 (MmDeterminePoolType.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KevSkipVerification @ 0x14026B490 (KevSkipVerification.c)
 */

__int64 __fastcall ExFreePoolSanityChecks(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  ULONG_PTR v3; // r8
  unsigned int *v4; // r9
  char v5; // cl

  result = KevSkipVerification();
  if ( !(_DWORD)result )
  {
    if ( BugCheckParameter4 <= 0x7FFFFFFEFFFFLL )
      KeBugCheckEx(0xC4u, 0x10uLL, BugCheckParameter4, 0LL, 0LL);
    if ( !ExpSpecialAllocations || (result = MmIsSpecialPoolAddress(BugCheckParameter4), !(_DWORD)result) )
    {
      if ( (BugCheckParameter4 & 0xFFF) != 0 )
      {
        if ( (BugCheckParameter4 & 0xF) != 0 )
          KeBugCheckEx(0xC4u, 0x16uLL, 0x1EBBuLL, BugCheckParameter4, 0LL);
        v4 = (unsigned int *)(BugCheckParameter4 - 16);
        v5 = *(_BYTE *)(BugCheckParameter4 - 16 + 3);
        if ( (v5 & 3) == 0 )
          KeBugCheckEx(0xC4u, 0x13uLL, 0x1EC5uLL, (ULONG_PTR)v4, *v4);
        result = KeGetCurrentIrql();
        if ( (v5 & 1) != 0 )
        {
          if ( (unsigned __int8)result > 1u )
            KeBugCheckEx(0xC4u, 0x11uLL, KeGetCurrentIrql(), v5 & 3, BugCheckParameter4);
        }
        else if ( (unsigned __int8)result > 2u )
        {
          KeBugCheckEx(0xC4u, 0x12uLL, KeGetCurrentIrql(), v5 & 3, BugCheckParameter4);
        }
        if ( (v5 & 2) == 0 )
          KeBugCheckEx(0xC4u, 0x14uLL, 0x1EE2uLL, (ULONG_PTR)v4, 0LL);
      }
      else
      {
        result = MmDeterminePoolType(BugCheckParameter4);
        v3 = (int)result;
        if ( (result & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result > 1u )
            KeBugCheckEx(0xC4u, 0x11uLL, KeGetCurrentIrql(), v3, BugCheckParameter4);
        }
        else if ( KeGetCurrentIrql() > 2u )
        {
          KeBugCheckEx(0xC4u, 0x12uLL, KeGetCurrentIrql(), (int)result, BugCheckParameter4);
        }
      }
    }
  }
  return result;
}
