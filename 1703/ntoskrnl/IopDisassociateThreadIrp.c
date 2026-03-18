/*
 * XREFs of IopDisassociateThreadIrp @ 0x1401EF7E0
 * Callers:
 *     IoCancelThreadIo @ 0x14053F190 (IoCancelThreadIo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IoAllocateErrorLogEntry @ 0x140149ED0 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x140149FE0 (IoWriteErrorLogEntry.c)
 */

LONG_PTR IopDisassociateThreadIrp()
{
  unsigned __int8 CurrentIrql; // si
  void **p_FirstArgument; // rdi
  LONG_PTR result; // rax
  KIRQL v3; // al
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  _QWORD *v6; // rcx
  _QWORD **v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rbx
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  p_FirstArgument = &KeGetCurrentThread()[1].FirstArgument;
  if ( *p_FirstArgument == p_FirstArgument )
    goto LABEL_2;
  v3 = KeAcquireQueuedSpinLock(0xBuLL);
  v4 = *p_FirstArgument;
  v5 = v3;
  if ( *((char *)*p_FirstArgument + 35) == *((char *)*p_FirstArgument + 34) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v3);
LABEL_2:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag((PVOID)v4[15], 0x746C6644u);
  v6 = *p_FirstArgument;
  v7 = *(_QWORD ***)*p_FirstArgument;
  if ( *((void ***)*p_FirstArgument + 1) != p_FirstArgument || v7[1] != v6 )
    __fastfail(3u);
  *p_FirstArgument = v7;
  v7[1] = p_FirstArgument;
  v4[1] = v4;
  *v4 = v4;
  v8 = (_QWORD *)qword_140369048;
  if ( *(__int64 **)qword_140369048 != &IopDeadIrps )
    __fastfail(3u);
  *v6 = &IopDeadIrps;
  v6[1] = v8;
  *v8 = v6;
  qword_140369048 = (__int64)v6;
  if ( *((_BYTE *)v4 + 35) <= *((_BYTE *)v4 + 34)
    && (v10 = v4[20]) != 0
    && (v9 = v4[19], v11 = *(void **)(v9 + 40), *(void **)(v10 + 8) == v11) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v9 + 40), 0x746C6644u);
  }
  else
  {
    v11 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v5);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v11 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v11, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObject(v11);
  }
  return result;
}
