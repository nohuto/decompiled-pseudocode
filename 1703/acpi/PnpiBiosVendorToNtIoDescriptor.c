/*
 * XREFs of PnpiBiosVendorToNtIoDescriptor @ 0x1C00A2EFC
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C008D8B4 (PnpiUpdateResourceList.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C009E7AC (AcpiExternalTranslateBiosToNtResources.c)
 */

__int64 __fastcall PnpiBiosVendorToNtIoDescriptor(
        ULONG_PTR a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        _OWORD *a7)
{
  _BYTE *v7; // r14
  unsigned int v8; // ebx
  unsigned int v10; // esi
  __int64 result; // rax
  BOOL v14; // ecx
  unsigned int v15; // esi

  v7 = a7;
  v8 = 0;
  v10 = *(unsigned __int16 *)(a2 + 1) + 3;
  *(_BYTE *)a7 = 0;
  if ( v10 < 0x15 )
    return 3221225485LL;
  v14 = (GUID *)(a2 + 4) == &GUID_MSFT_VENDOR_TYPE
     || RtlCompareMemory((const void *)(a2 + 4), &GUID_MSFT_VENDOR_TYPE, 0x10uLL) == 16;
  if ( !v14 || *(_BYTE *)(a2 + 3) )
    return v8;
  v15 = v10 - 20;
  if ( v15 < 0x12 )
    return 3221225485LL;
  *v7 = 1;
  result = PnpiUpdateResourceList(a4 + 8LL * a5, &a7, a3);
  if ( (int)result >= 0 )
    return (unsigned int)AcpiExternalTranslateBiosToNtResources(a1, a2 + 20, v15, a6, a7);
  return result;
}
