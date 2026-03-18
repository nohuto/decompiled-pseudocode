/*
 * XREFs of ViGetMdlBufferSa @ 0x14076C348
 * Callers:
 *     ViCopyBackModifiedBuffer @ 0x14076BB20 (ViCopyBackModifiedBuffer.c)
 *     ViFlushDoubleBuffer @ 0x14076BD8C (ViFlushDoubleBuffer.c)
 *     ViSwap @ 0x14076D244 (ViSwap.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetMdlBufferSa(__int64 a1, const void *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  PVOID v6; // rcx

  v4 = *(unsigned int *)(a1 + 44);
  v5 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)a2 < v5 + v4 || (unsigned __int64)a2 >= v4 + v5 + (unsigned __int64)*(unsigned int *)(a1 + 40) )
  {
    ViHalPreprocessOptions(byte_140341384, "Virtual address %p out of bounds of MDL %p", (const void *)0x1B, a2);
    VfReportIssueWithOptions(0xE6u, 27, (int)a2, a1, 0LL, byte_140341384);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
      v6 = *(PVOID *)(a1 + 24);
    else
      v6 = MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v6 )
      return (__int64)v6 + (_QWORD)a2 - *(_QWORD *)(a1 + 32) - *(unsigned int *)(a1 + 44);
    ViHalPreprocessOptions(&dword_14034137C, "Dma MDL %p not mapped in system VA.", (const void *)0x22);
    VfReportIssueWithOptions(0xE6u, 34, a1, 0, 0LL, &dword_14034137C);
  }
  return 0LL;
}
