/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140408000
 * Callers:
 *     PopWriteHiberImage @ 0x140406638 (PopWriteHiberImage.c)
 *     PopDecompressHiberBlocks @ 0x14040749C (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140407A10 (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x140407B98 (PopRequestRead.c)
 *     ProducerGetBuffer @ 0x140407F0C (ProducerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140408044 (ProducerConsumerBufferComplete.c)
 *     ConsumerGetBuffer @ 0x140408278 (ConsumerGetBuffer.c)
 * Callees:
 *     KdCheckForDebugBreak @ 0x140137A34 (KdCheckForDebugBreak.c)
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
