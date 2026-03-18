/*
 * XREFs of CmpInitSiloSupport @ 0x1405A3780
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x14059F4C8 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x1405A37B0 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
