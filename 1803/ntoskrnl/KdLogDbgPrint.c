/*
 * XREFs of KdLogDbgPrint @ 0x140805D60
 * Callers:
 *     KdpPrint @ 0x140805FF8 (KdpPrint.c)
 *     KdpPrompt @ 0x14080616C (KdpPrompt.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     KdpCopyMemoryChunks @ 0x140806778 (KdpCopyMemoryChunks.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(unsigned __int16 *a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned int v4; // eax
  unsigned int v5; // ecx
  bool v6; // cc
  __int64 v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rcx
  signed __int64 v10; // rsi
  unsigned __int64 v11; // r10
  void *v12; // rcx
  unsigned int v13; // ebx
  char *v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  if ( (struct _KPRCB *)qword_1403E9CD8 == result )
  {
    _InterlockedIncrement(&KdPrintSkippedCount);
    return result;
  }
  _InterlockedIncrement((_DWORD *)&KdpPrintSpinLock + 1);
  while ( (_DWORD)KdpPrintSpinLock )
    _mm_pause();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KdPrintCircularBuffer )
  {
    v4 = (unsigned int)KdPrintBufferSize >> 3;
    if ( (unsigned int)KdPrintBufferSize >> 3 > 0x200 )
      v4 = 512;
    v5 = *a1;
    v6 = v5 <= v4;
    if ( v5 > v4 )
    {
      _InterlockedIncrement(&KdPrintTruncatedCount);
      v6 = v5 <= v4;
    }
    if ( v6 )
      v4 = v5;
    v7 = v4;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, 0LL, 0LL);
    do
    {
      v9 = v7 + v8 - (unsigned int)KdPrintBufferSize;
      v10 = v8;
      v11 = v8;
      if ( v7 + v8 < (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
        v9 = v7 + v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, v9, v8);
    }
    while ( v8 != v11 );
    if ( v9 < v11 )
      _InterlockedIncrement(&KdPrintRolloverCount);
    v12 = (void *)*((_QWORD *)a1 + 1);
    if ( v7 + v10 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v15 = KdPrintBufferSize + (_DWORD)KdPrintCircularBuffer - v10;
      KdpCopyMemoryChunks(v12, 4, (__int64)&v16);
      if ( (unsigned int)v16 < v15 )
        memset((void *)(v10 + (unsigned int)v16), 0, v15 - (unsigned int)v16);
      v13 = v7 - v15;
      if ( (_DWORD)v16 != v15 )
      {
        v14 = (char *)KdPrintCircularBuffer;
        goto LABEL_28;
      }
      KdpCopyMemoryChunks((PVOID)(*((_QWORD *)a1 + 1) + v15), 4, (__int64)&v16);
      if ( (unsigned int)v16 < v13 )
      {
        v13 -= v16;
        v14 = (char *)KdPrintCircularBuffer + (unsigned int)v16;
        goto LABEL_28;
      }
    }
    else
    {
      KdpCopyMemoryChunks(v12, 4, (__int64)&v16);
      if ( (unsigned int)v16 < (unsigned int)v7 )
      {
        v13 = v7 - v16;
        v14 = (char *)(v10 + (unsigned int)v16);
LABEL_28:
        memset(v14, 0, v13);
      }
    }
  }
  _InterlockedDecrement((_DWORD *)&KdpPrintSpinLock + 1);
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
