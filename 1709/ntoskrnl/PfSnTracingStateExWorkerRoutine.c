/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x14059F200
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&Mutex);
  if ( dword_140389D64 == 2 )
  {
    KeReleaseGuardedMutex(&Mutex);
  }
  else
  {
    dword_140389D64 = 1;
    while ( qword_140389D18 != &qword_140389D18 )
    {
      v2 = qword_140389D20;
      if ( *(PVOID **)qword_140389D20 != &qword_140389D18
        || (v3 = (PVOID *)*((_QWORD *)qword_140389D20 + 1), *v3 != qword_140389D20) )
      {
        __fastfail(3u);
      }
      qword_140389D20 = (PVOID)*((_QWORD *)qword_140389D20 + 1);
      *v3 = &qword_140389D18;
      ExFreePoolWithTag(v2, 0);
      --dword_140389D60;
    }
    KeReleaseGuardedMutex(&Mutex);
    if ( qword_140389D68 )
      KeSetEvent(qword_140389D68, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
