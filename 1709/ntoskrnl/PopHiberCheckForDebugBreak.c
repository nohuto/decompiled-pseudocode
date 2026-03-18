/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x14043356C
 * Callers:
 *     ConsumerGetBuffer @ 0x140431F74 (ConsumerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140432074 (ConsumerPeekAndConsumeBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140432B24 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140435DD4 (PopWriteHiberImage.c)
 *     ProducerConsumerBufferComplete @ 0x1404363B8 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140436598 (ProducerGetBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x1401F8968 (KdCheckForDebugBreak.c)
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
