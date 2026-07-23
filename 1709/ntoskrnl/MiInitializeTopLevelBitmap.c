/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x14083A100
 * Callers:
 *     MiInitializeSystemVa @ 0x14083959C (MiInitializeSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 TopPteAddress; // rax
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 PteShadow; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  dword_140388880 = (unsigned __int8)ExGenRandom(1);
  memset(dword_140388860, 0, sizeof(dword_140388860));
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)dword_140388860;
  TopPteAddress = MiGetTopPteAddress(0xFFFF800000000000uLL);
  v1 = TopPteAddress;
  v2 = TopPteAddress;
  if ( (TopPteAddress & 0xFFF) != 0 )
  {
    v3 = -(__int64)TopPteAddress;
    do
    {
      PteShadow = *(_QWORD *)v2;
      if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( PteShadow )
        RtlSetBits(&BitMapHeader, (__int64)(v3 + v2) >> 3, 1u);
      v2 += 8LL;
    }
    while ( (v2 & 0xFFF) != 0 );
  }
  RtlSetBits(&BitMapHeader, ((__int64)(v2 - v1) >> 3) - 1, 1u);
  if ( (MiFlags & 0x400000) == 0 )
    _bittestandreset(dword_140388860, (__int64)(MiGetTopPteAddress(0xFFFFF68000000000uLL) - v1) >> 3);
}
