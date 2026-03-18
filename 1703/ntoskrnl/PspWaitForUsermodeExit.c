/*
 * XREFs of PspWaitForUsermodeExit @ 0x1406E2DE4
 * Callers:
 *     PspShutdownCsrProcess @ 0x1406DF114 (PspShutdownCsrProcess.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x1406E2290 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x14047F100 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspWaitForUsermodeExit(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = NextProcessThread )
  {
    NextProcessThread = PsGetNextProcessThread(a1, i);
    v4 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 && !*((_BYTE *)NextProcessThread + 4) )
    {
      ObfReferenceObject(NextProcessThread);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v4);
      goto LABEL_1;
    }
  }
  return 0LL;
}
