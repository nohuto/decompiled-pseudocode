/*
 * XREFs of MxGetPhase0Mapping @ 0x14082C6D4
 * Callers:
 *     MxCopyPage @ 0x14082BAD0 (MxCopyPage.c)
 *     MxSwapPages @ 0x14082C2BC (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 MxGetPhase0Mapping()
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // r9
  __int64 PteShadow; // rax

  if ( MiHalScratchPte )
    return MiHalScratchPte << 25 >> 16;
  v1 = (((unsigned __int64)MiLowHalVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = 0xFFFFF68000000000uLL;
  while ( (*(_BYTE *)v1 & 1) == 0 )
  {
LABEL_11:
    v1 += 8LL;
    if ( (v1 & 0xFFF) == 0 )
      return 0LL;
  }
  v3 = (__int64)((v1 << 25) - (v2 << 25)) >> 16;
  while ( 1 )
  {
    PteShadow = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    if ( !PteShadow )
      break;
    v3 += 8LL;
    if ( (v3 & 0xFFF) == 0 )
      goto LABEL_11;
  }
  MiHalScratchPte = v3;
  return (__int64)((v3 << 25) - (v2 << 25)) >> 16;
}
