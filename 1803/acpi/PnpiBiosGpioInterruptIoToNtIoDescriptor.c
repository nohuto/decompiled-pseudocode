/*
 * XREFs of PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C0085634
 * Callers:
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C003865C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C007A814 (AcpiExternalTranslateBiosToNtResources.c)
 *     PnpiUpdateResourceList @ 0x1C0085FAC (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosGpioInterruptIoToNtIoDescriptor(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 result; // rax
  _OWORD *v9; // [rsp+58h] [rbp+20h] BYREF

  result = PnpiUpdateResourceList(a4 + 8LL * a5, &v9);
  if ( (int)result >= 0 )
    return AcpiExternalTranslateBiosToNtResources(a1, a2, (unsigned int)*(unsigned __int16 *)(a2 + 1) + 3, a6, v9);
  return result;
}
