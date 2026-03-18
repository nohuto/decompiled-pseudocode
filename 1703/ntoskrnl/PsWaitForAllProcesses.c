/*
 * XREFs of PsWaitForAllProcesses @ 0x1406E2AF4
 * Callers:
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     SmIsCompressionProcess @ 0x14001E628 (SmIsCompressionProcess.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 */

char PsWaitForAllProcesses()
{
  unsigned int v0; // ebp
  LARGE_INTEGER v1; // rbx
  _QWORD *i; // rcx
  void *v3; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v5; // rsi
  NTSTATUS v7; // edi
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -100000LL;
  v0 = 0;
  v1.QuadPart = -100000LL;
  while ( 1 )
  {
    for ( i = 0LL; ; i = v5 )
    {
      NextProcess = PsGetNextProcess(i);
      v5 = (_QWORD *)NextProcess;
      if ( !NextProcess )
        return 1;
      if ( (PEPROCESS)NextProcess != PsInitialSystemProcess
        && (PVOID)NextProcess != PsIdleProcess
        && (*(_DWORD *)(NextProcess + 772) & 4) != 0
        && !SmIsCompressionProcess((PVOID)NextProcess)
        && v5[131] )
      {
        break;
      }
    }
    ObfReferenceObject(v3);
    ObfDereferenceObjectWithTag(v5, 0x6E457350u);
    v7 = KeWaitForSingleObject(v5, Executive, 0, 0, &Timeout);
    ObfDereferenceObject(v5);
    if ( v7 == 258 )
    {
      v1.QuadPart *= 2LL;
      ++v0;
      Timeout = v1;
      if ( v0 > 0xD )
        break;
    }
  }
  return 0;
}
