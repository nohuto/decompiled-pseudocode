/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1C0037154
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0084334 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0084678 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0084C80 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008503C (PnpiBiosAddressToIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

_QWORD *__fastcall ACPIInitIgnoreResourceMapDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // r14
  _QWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
  memset(PoolWithTag, 0, 0x28uLL);
  PoolWithTag[4] = a3;
  PoolWithTag[2] = a1;
  PoolWithTag[3] = a2;
  result = (_QWORD *)qword_1C0066F38;
  if ( *(__int64 **)qword_1C0066F38 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *PoolWithTag = &AcpiIgnoreResourceMapValidationList;
  PoolWithTag[1] = result;
  *result = PoolWithTag;
  qword_1C0066F38 = (__int64)PoolWithTag;
  return result;
}
