/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x1408115D8
 * Callers:
 *     MiInitializeSystemVa @ 0x140810A84 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiGetTopPteAddress @ 0x140063BE8 (MiGetTopPteAddress.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 TopPteAddress; // rax
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  dword_14036C4F8 = (unsigned __int8)ExGenRandom(1);
  memset(dword_14036C4D8, 0, sizeof(dword_14036C4D8));
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)dword_14036C4D8;
  TopPteAddress = MiGetTopPteAddress(0xFFFF800000000000uLL);
  v1 = TopPteAddress;
  v2 = TopPteAddress;
  if ( (TopPteAddress & 0xFFF) != 0 )
  {
    v3 = -(__int64)TopPteAddress;
    do
    {
      if ( MI_READ_PTE_LOCK_FREE(v2) )
        RtlSetBits(&BitMapHeader, (__int64)(v3 + v2) >> 3, 1u);
      v2 += 8LL;
    }
    while ( (v2 & 0xFFF) != 0 );
  }
  RtlSetBits(&BitMapHeader, ((__int64)(v2 - v1) >> 3) - 1, 1u);
  if ( (MiFlags & 0x400000) == 0 )
    _bittestandreset(dword_14036C4D8, (__int64)(MiGetTopPteAddress(0xFFFFF68000000000uLL) - v1) >> 3);
}
