/*
 * XREFs of IoReferenceIoAttributionFromThread @ 0x140020D8C
 * Callers:
 *     CcAsyncCopyRead @ 0x140020890 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x14007AB90 (CcCopyReadEx.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140129D90 (MiCheckAndUpdateIoAttribution.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x140020DF8 (IopReferenceIoAttributionFromProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x14006AD64 (PsGetWorkOnBehalfThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
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
