/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x140137A70
 * Callers:
 *     CcCopyReadEx @ 0x14011D5C0 (CcCopyReadEx.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1401379B4 (MiCheckAndUpdateIoAttribution.c)
 *     CcAsyncCopyRead @ 0x1401392C0 (CcAsyncCopyRead.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x140060460 (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140137ADC (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(struct _KTHREAD *a1, __int64 a2)
{
  _KPROCESS **WorkOnBehalfThread; // rax
  _KPROCESS **v5; // rbx
  _KPROCESS *Process; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  WorkOnBehalfThread = (_KPROCESS **)PsGetWorkOnBehalfThread(a1, &v9);
  v5 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    Process = WorkOnBehalfThread[68];
  else
    Process = a1->Process;
  v7 = IopReferenceIoAttributionFromProcess(Process, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDelete(v5);
  return v7;
}
