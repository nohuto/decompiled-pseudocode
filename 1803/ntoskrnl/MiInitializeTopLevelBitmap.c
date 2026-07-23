/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x1408BB990
 * Callers:
 *     MiInitializeSystemVa @ 0x1408BB130 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiGetTopPteAddress @ 0x140070E30 (MiGetTopPteAddress.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 TopPteAddress; // rdi
  unsigned __int64 i; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  dword_1403CBA80 = (unsigned __int8)ExGenRandom(1);
  memset(dword_1403CBA60, 0, sizeof(dword_1403CBA60));
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)dword_1403CBA60;
  TopPteAddress = MiGetTopPteAddress(0xFFFF800000000000uLL);
  for ( i = TopPteAddress; (i & 0xFFF) != 0; i += 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) )
      RtlSetBits(&BitMapHeader, (__int64)(i - TopPteAddress) >> 3, 1u);
  }
  RtlSetBits(&BitMapHeader, ((__int64)(i - TopPteAddress) >> 3) - 1, 1u);
  if ( (MiFlags & 0x400000) == 0 )
    _bittestandreset(dword_1403CBA60, (__int64)(MiGetTopPteAddress(0xFFFFF68000000000uLL) - TopPteAddress) >> 3);
}
