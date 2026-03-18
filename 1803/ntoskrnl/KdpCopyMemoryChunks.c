/*
 * XREFs of KdpCopyMemoryChunks @ 0x140806778
 * Callers:
 *     KdpSetCommonState @ 0x14023EB1C (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x140740980 (KdSystemDebugControl.c)
 *     KdpFillMemory @ 0x140804020 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x1408043A4 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x1408045A8 (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x140804660 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1408048A8 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x1408049C4 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140805B18 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140805CC4 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140805D60 (KdLogDbgPrint.c)
 *     KdpSysReadControlSpace @ 0x1408064E8 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1408065D0 (KdpSysWriteControlSpace.c)
 *     KdpCopyCodeStream @ 0x140806678 (KdpCopyCodeStream.c)
 *     KdpPrintString @ 0x14080708C (KdpPrintString.c)
 *     KdpPromptString @ 0x140807168 (KdpPromptString.c)
 *     KdpCreateRemoteFile @ 0x140807804 (KdpCreateRemoteFile.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140261418 (MmDbgCopyMemory.c)
 */

__int64 __fastcall KdpCopyMemoryChunks(
        char *BaseAddress,
        _BYTE *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v12; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v12 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)BaseAddress) != 0 )
          break;
        i *= 2;
      }
      while ( v12 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)MmDbgCopyMemory(BaseAddress, a2, i, i, a5) < 0 )
      break;
    BaseAddress += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
