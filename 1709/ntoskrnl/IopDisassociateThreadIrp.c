/*
 * XREFs of IopDisassociateThreadIrp @ 0x1401F4EDC
 * Callers:
 *     IoCancelThreadIo @ 0x1404D68F8 (IoCancelThreadIo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     IoAllocateErrorLogEntry @ 0x140130E30 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1401310B0 (IoWriteErrorLogEntry.c)
 */

LONG_PTR IopDisassociateThreadIrp()
{
  unsigned __int8 CurrentIrql; // si
  char *p_SystemCallNumber; // rdi
  LONG_PTR result; // rax
  KIRQL v3; // al
  __int64 v4; // rbx
  KIRQL v5; // bp
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rbx
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  p_SystemCallNumber = (char *)&KeGetCurrentThread()[1].SystemCallNumber;
  if ( *(char **)p_SystemCallNumber == p_SystemCallNumber )
    goto LABEL_2;
  v3 = KeAcquireQueuedSpinLock(0xBuLL);
  v4 = *(_QWORD *)p_SystemCallNumber;
  v5 = v3;
  if ( *(char *)(*(_QWORD *)p_SystemCallNumber + 35LL) == *(char *)(*(_QWORD *)p_SystemCallNumber + 34LL) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v3);
LABEL_2:
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag(*(PVOID *)(v4 + 120), 0x746C6644u);
  v6 = *(_QWORD **)p_SystemCallNumber;
  if ( *(char **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber
    || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)p_SystemCallNumber = v7;
  *(_QWORD *)(v7 + 8) = p_SystemCallNumber;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)v4 = v4;
  v8 = (_QWORD *)qword_140385088;
  if ( *(__int64 **)qword_140385088 != &IopDeadIrps )
    __fastfail(3u);
  *v6 = &IopDeadIrps;
  v6[1] = v8;
  *v8 = v6;
  qword_140385088 = (__int64)v6;
  if ( *(_BYTE *)(v4 + 35) <= *(_BYTE *)(v4 + 34)
    && (v9 = *(_QWORD *)(v4 + 160)) != 0
    && (v10 = *(_QWORD *)(v4 + 152), v11 = *(void **)(v10 + 40), *(void **)(v9 + 8) == v11) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v10 + 40), 0x746C6644u);
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
