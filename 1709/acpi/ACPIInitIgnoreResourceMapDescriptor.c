/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1C0056E78
 * Callers:
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008E8B0 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008EE14 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A5190 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A557C (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
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
  result = (_QWORD *)qword_1C0078ED8;
  if ( *(__int64 **)qword_1C0078ED8 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *PoolWithTag = &AcpiIgnoreResourceMapValidationList;
  PoolWithTag[1] = result;
  *result = PoolWithTag;
  qword_1C0078ED8 = (__int64)PoolWithTag;
  return result;
}
