/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x14071FC44
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14071F3A0 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14071F948 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     MmIsAddressValid @ 0x140256450 (MmIsAddressValid.c)
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
