/*
 * XREFs of PnpiUpdateResourceList @ 0x1C008D8B4
 * Callers:
 *     PnpiBiosDmaToIoDescriptor @ 0x1C008B124 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C008B1E0 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008B758 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C008BD78 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C008CB54 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C008CE3C (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C008D048 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C008D828 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00A253C (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00A2928 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00A2CE4 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00A2D48 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00A2EA0 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00A2EFC (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C002CB80 (memset.c)
 *     PnpiGrowResourceDescriptor @ 0x1C008CF64 (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  void *v9; // rcx
  __int64 result; // rax

  v3 = 0;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, (__int64)a2, a3), v3 = result, (int)result >= 0) )
  {
    v6 = *(_QWORD *)a1 + 8LL;
    v7 = 32LL * *(unsigned int *)(*(_QWORD *)a1 + 4LL);
    v8 = v7 + v6 == 0;
    v9 = (void *)(v7 + v6);
    *a2 = v9;
    if ( v8 )
    {
      return 3221225473LL;
    }
    else
    {
      memset(v9, 0, 0x20uLL);
      ++*(_DWORD *)(*(_QWORD *)a1 + 4LL);
      return v3;
    }
  }
  return result;
}
