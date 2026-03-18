/*
 * XREFs of CmpInitSiloSupport @ 0x1405BFC08
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     CmInitServerSiloState @ 0x1405BFC38 (CmInitServerSiloState.c)
 *     PspStorageAllocSlot @ 0x1405C76F8 (PspStorageAllocSlot.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot(&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
