/*
 * XREFs of KdpCopyMemoryChunks @ 0x140799698
 * Callers:
 *     KdpSetCommonState @ 0x1402019CC (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x1406D6B20 (KdSystemDebugControl.c)
 *     KdpFillMemory @ 0x140796FC0 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x140797308 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x1407974FC (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x1407975B4 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1407977FC (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x140797910 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x140797EA0 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x140798A38 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140798BE4 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x140798C80 (KdLogDbgPrint.c)
 *     KdpSysReadControlSpace @ 0x140799408 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x1407994F0 (KdpSysWriteControlSpace.c)
 *     KdpCopyCodeStream @ 0x140799598 (KdpCopyCodeStream.c)
 *     KdpPrintString @ 0x140799F70 (KdpPrintString.c)
 *     KdpPromptString @ 0x14079A04C (KdpPromptString.c)
 *     KdpCreateRemoteFile @ 0x14079A6E8 (KdpCreateRemoteFile.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x140228280 (MmDbgCopyMemory.c)
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
  ULONG i; // ebx
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
