/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x14045ED80
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(void *a1)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&Mutex);
  if ( dword_14036E024 == 2 )
  {
    KeReleaseGuardedMutex(&Mutex);
  }
  else
  {
    dword_14036E024 = 1;
    while ( qword_14036DFD8 != &qword_14036DFD8 )
    {
      v2 = qword_14036DFE0;
      v3 = (PVOID *)*((_QWORD *)qword_14036DFE0 + 1);
      if ( *(PVOID **)qword_14036DFE0 != &qword_14036DFD8 || *v3 != qword_14036DFE0 )
        __fastfail(3u);
      qword_14036DFE0 = (PVOID)*((_QWORD *)qword_14036DFE0 + 1);
      *v3 = &qword_14036DFD8;
      ExFreePoolWithTag(v2, 0);
      --dword_14036E020;
    }
    KeReleaseGuardedMutex(&Mutex);
    if ( qword_14036E028 )
      KeSetEvent(qword_14036E028, 0, 0);
  }
  ExFreePoolWithTag(a1, 0);
}
