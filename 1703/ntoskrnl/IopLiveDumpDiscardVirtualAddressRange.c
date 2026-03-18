/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x14068EFF4
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14068E734 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14068ECF0 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MmIsAddressValid @ 0x140211F10 (MmIsAddressValid.c)
 */

void __fastcall IopLiveDumpDiscardVirtualAddressRange(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 i; // rdi
  PHYSICAL_ADDRESS v6; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( a2 )
    {
      for ( i = (a3 >> 12) + ((a3 & 0xFFF) != 0); i; --i )
      {
        if ( MmIsAddressValid(v3) )
        {
          v6.QuadPart = (unsigned __int64)MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 400) )
            RtlClearBitsEx(a1 + 400, v6.QuadPart, 1uLL);
        }
        v3 += 4096;
      }
    }
  }
}
