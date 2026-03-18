/*
 * XREFs of CmpInitSiloSupport @ 0x1406209D4
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     CmInitServerSiloState @ 0x1406203CC (CmInitServerSiloState.c)
 *     PspStorageAllocSlot @ 0x1406217F8 (PspStorageAllocSlot.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot(&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
