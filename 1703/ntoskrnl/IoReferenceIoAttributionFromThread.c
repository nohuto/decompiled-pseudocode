/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x140023A10
 * Callers:
 *     CcAsyncCopyRead @ 0x140023470 (CcAsyncCopyRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140023948 (MiCheckAndUpdateIoAttribution.c)
 *     CcScheduleReadAheadEx @ 0x14004D5C0 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x14009D6C0 (CcCopyReadEx.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x140023A7C (IopReferenceIoAttributionFromProcess.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetWorkOnBehalfThread @ 0x1400E7974 (PsGetWorkOnBehalfThread.c)
 */

__int64 __fastcall IoReferenceIoAttributionFromThread(__int64 a1, __int64 a2)
{
  __int64 WorkOnBehalfThread; // rax
  void *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v9; // [rsp+40h] [rbp+18h] BYREF

  WorkOnBehalfThread = PsGetWorkOnBehalfThread(a1, &v9);
  v5 = (void *)WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
    v6 = *(_QWORD *)(WorkOnBehalfThread + 544);
  else
    v6 = *(_QWORD *)(a1 + 544);
  v7 = IopReferenceIoAttributionFromProcess(v6, 0LL, a2);
  if ( v9 )
    ObDereferenceObjectDeferDelete(v5);
  return v7;
}
