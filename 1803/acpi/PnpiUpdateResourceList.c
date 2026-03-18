/*
 * XREFs of PnpiUpdateResourceList @ 0x1C0085FAC
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0084334 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C0084678 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0084A78 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C0084C80 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C008503C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00853B4 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C008547C (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00854E0 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C0085634 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C0085690 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C008574C (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C0085850 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C00858CC (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C008595C (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0085A98 (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(const void **a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  void *v10; // rcx

  v3 = 0;
  if ( *a1 && (*((_DWORD *)*a1 + 1) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, (__int64)a2, a3), v3 = result, (int)result >= 0) )
  {
    v7 = (__int64)*a1 + 8;
    v8 = 32LL * *((unsigned int *)*a1 + 1);
    v9 = v8 + v7 == 0;
    v10 = (void *)(v8 + v7);
    *a2 = v10;
    if ( v9 )
    {
      return 3221225473LL;
    }
    else
    {
      memset(v10, 0, 0x20uLL);
      ++*((_DWORD *)*a1 + 1);
      return v3;
    }
  }
  return result;
}
