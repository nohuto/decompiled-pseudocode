/*
 * XREFs of PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00A2EA0
 * Callers:
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C0056DF0 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C008D8B4 (PnpiUpdateResourceList.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009E7AC (AcpiExternalTranslateBiosToNtResources.c)
 */

__int64 __fastcall PnpiBiosGpioInterruptIoToNtIoDescriptor(
        ULONG_PTR a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 result; // rax
  _OWORD *v9; // [rsp+58h] [rbp+20h] BYREF

  result = PnpiUpdateResourceList(a4 + 8LL * a5, &v9, a3);
  if ( (int)result >= 0 )
    return AcpiExternalTranslateBiosToNtResources(a1, a2, (unsigned int)*(unsigned __int16 *)(a2 + 1) + 3, a6, v9);
  return result;
}
