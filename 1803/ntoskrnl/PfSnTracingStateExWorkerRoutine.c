/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x140584AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&stru_1403CD868);
  if ( dword_1403CD8A4 == 2 )
  {
    KeReleaseGuardedMutex(&stru_1403CD868);
  }
  else
  {
    dword_1403CD8A4 = 1;
    while ( qword_1403CD858 != &qword_1403CD858 )
    {
      v2 = qword_1403CD860;
      if ( *(PVOID **)qword_1403CD860 != &qword_1403CD858
        || (v3 = (PVOID *)*((_QWORD *)qword_1403CD860 + 1), *v3 != qword_1403CD860) )
      {
        __fastfail(3u);
      }
      qword_1403CD860 = (PVOID)*((_QWORD *)qword_1403CD860 + 1);
      *v3 = &qword_1403CD858;
      ExFreePoolWithTag(v2, 0);
      --dword_1403CD8A0;
    }
    KeReleaseGuardedMutex(&stru_1403CD868);
    if ( qword_1403CD8A8 )
      KeSetEvent(qword_1403CD8A8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
