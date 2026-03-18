/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1C0056288
 * Callers:
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008B758 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008D048 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A253C (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A2928 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C002CB80 (memset.c)
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
  result = (_QWORD *)qword_1C0076E18;
  if ( *(__int64 **)qword_1C0076E18 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *PoolWithTag = &AcpiIgnoreResourceMapValidationList;
  PoolWithTag[1] = result;
  *result = PoolWithTag;
  qword_1C0076E18 = (__int64)PoolWithTag;
  return result;
}
