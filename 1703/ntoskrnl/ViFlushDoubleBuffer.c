/*
 * XREFs of ViFlushDoubleBuffer @ 0x14076BD8C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140769790 (VfFlushAdapterBuffers.c)
 *     VfPutScatterGatherList @ 0x14076AD70 (VfPutScatterGatherList.c)
 * Callees:
 *     MmMapLockedPages @ 0x14020F890 (MmMapLockedPages.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViCopyBackModifiedBuffer @ 0x14076BB20 (ViCopyBackModifiedBuffer.c)
 *     ViFindMappedRegisterInFile @ 0x14076BD58 (ViFindMappedRegisterInFile.c)
 *     ViFreeMapRegistersToFile @ 0x14076C0A0 (ViFreeMapRegistersToFile.c)
 *     ViGetMdlBufferSa @ 0x14076C348 (ViGetMdlBufferSa.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViFlushDoubleBuffer(_QWORD *a1, ULONG_PTR a2, int a3, unsigned int a4, char a5)
{
  __int64 v6; // rbx
  __int64 MdlBufferSa; // rax
  __int64 v10; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  char *v14; // r15
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  unsigned __int64 v18; // [rsp+30h] [rbp-38h] BYREF

  v6 = a4;
  MdlBufferSa = ViGetMdlBufferSa(a2);
  v10 = MdlBufferSa;
  if ( !MdlBufferSa )
    return 0LL;
  if ( !ViFindMappedRegisterInFile((__int64)a1, MdlBufferSa, &v18) )
  {
    ViHalPreprocessOptions(byte_1403413A4, "Cannot flush buffers that aren't mapped (Addr %p).", (const void *)0x16);
    VfReportIssueWithOptions(0xE6u, 22, v10, (int)a1, 0LL, byte_1403413A4);
    return 0LL;
  }
  v12 = a1[7];
  v13 = (unsigned int)((_DWORD)v18 << 12) + (unsigned __int64)(v10 & 0xFFF);
  v14 = (char *)(v13 + a1[8]);
  v18 = v13;
  if ( (*(_BYTE *)(v12 + 10) & 5) != 0 )
    v15 = *(_QWORD *)(v12 + 24);
  else
    LODWORD(v15) = (unsigned int)MmMapLockedPages((PMDL)v12, 0);
  v16 = v15 + *(_DWORD *)(a1[7] + 40LL) - (_DWORD)v14;
  if ( (unsigned int)v6 > v16 )
  {
    ViHalPreprocessOptions(
      byte_1403413A8,
      "FLUSH: Can only flush %x bytes to end of map register file (%x attempted)",
      0x10000000,
      1);
    VfReportIssueWithOptions(0xE6u, 0, 1, v16, v6, byte_1403413A8);
    v13 = v18;
    LODWORD(v6) = v16;
  }
  if ( !a5 )
  {
    v17 = a1[9];
    if ( v17 )
      ViCopyBackModifiedBuffer(a2, a3, v14, (char *)(v17 + v13), (unsigned int)v6);
  }
  if ( !(unsigned int)ViFreeMapRegistersToFile(a1, v10, (unsigned int)v6) )
    VfUtilDbgPrint("Flushing too many map registers\n");
  return 1LL;
}
