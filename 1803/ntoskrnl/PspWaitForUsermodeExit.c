/*
 * XREFs of PspWaitForUsermodeExit @ 0x14077D264
 * Callers:
 *     PspShutdownCsrProcess @ 0x140779724 (PspShutdownCsrProcess.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x14077C6B0 (PspWaitOnAllProcessesJobCallback.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x1404E8150 (PsGetNextProcessThread.c)
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
      ObfReferenceObjectWithTag(NextProcessThread, 0x65547350u);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      goto LABEL_1;
    }
  }
  return 0LL;
}
