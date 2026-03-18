/*
 * XREFs of ProducerConsumerCopyFromContextBuffer @ 0x140486CD8
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140473C3C (PopDecompressHiberBlocks.c)
 *     PopReadProducerConsumerBuffer @ 0x140486494 (PopReadProducerConsumerBuffer.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

void *__fastcall ProducerConsumerCopyFromContextBuffer(char *a1, size_t Size, __int64 a3, char *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned int v6; // ebx
  unsigned int v9; // ecx
  __int64 v10; // rdi
  void *result; // rax

  v4 = *(unsigned int *)(a3 + 8);
  v5 = (_DWORD)a4 - *(_DWORD *)a3;
  v6 = 0;
  if ( v5 >= (unsigned int)v4 )
    a4 -= v4;
  v9 = v5 - v4;
  if ( v5 < (unsigned int)v4 )
    v9 = v5;
  if ( v9 + (unsigned int)Size > (unsigned int)v4 )
  {
    v6 = Size + v9 - v4;
    LODWORD(Size) = v4 - v9;
  }
  v10 = (unsigned int)Size;
  result = memmove(a1, a4, (unsigned int)Size);
  if ( v6 )
    return memmove(&a1[v10], *(const void **)a3, v6);
  return result;
}
