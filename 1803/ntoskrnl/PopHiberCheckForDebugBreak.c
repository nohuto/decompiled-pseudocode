/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140474DD8
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140473C3C (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140473D5C (ConsumerPeekAndConsumeBuffer.c)
 *     PopWriteHiberImage @ 0x140474280 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x1404746C4 (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140474C6C (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140474D34 (ProducerGetBuffer.c)
 *     PopRequestRead @ 0x1404865F4 (PopRequestRead.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x14014F22C (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
