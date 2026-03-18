/*
 * XREFs of KdpCopyMemoryChunks @ 0x14078C474
 * Callers:
 *     KdpSetCommonState @ 0x1401FBCAC (KdpSetCommonState.c)
 *     KdSystemDebugControl @ 0x1406AB880 (KdSystemDebugControl.c)
 *     KdpFillMemory @ 0x140789D80 (KdpFillMemory.c)
 *     KdpReadPhysicalMemory @ 0x14078A0C8 (KdpReadPhysicalMemory.c)
 *     KdpReadVirtualMemory @ 0x14078A2BC (KdpReadVirtualMemory.c)
 *     KdpReportCommandStringStateChange @ 0x14078A374 (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x14078A5C8 (KdpReportLoadSymbolsStateChange.c)
 *     KdpRestoreBreakPointEx @ 0x14078A6E0 (KdpRestoreBreakPointEx.c)
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x14078B818 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x14078B9C4 (KdpWritePhysicalMemory.c)
 *     KdLogDbgPrint @ 0x14078BA60 (KdLogDbgPrint.c)
 *     KdpSysReadControlSpace @ 0x14078C1E4 (KdpSysReadControlSpace.c)
 *     KdpSysWriteControlSpace @ 0x14078C2CC (KdpSysWriteControlSpace.c)
 *     KdpCopyCodeStream @ 0x14078C374 (KdpCopyCodeStream.c)
 *     KdpPrintString @ 0x14078CD54 (KdpPrintString.c)
 *     KdpPromptString @ 0x14078CE30 (KdpPromptString.c)
 *     KdpCreateRemoteFile @ 0x14078D4BC (KdpCreateRemoteFile.c)
 * Callees:
 *     MmDbgCopyMemory @ 0x14021B98C (MmDbgCopyMemory.c)
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
