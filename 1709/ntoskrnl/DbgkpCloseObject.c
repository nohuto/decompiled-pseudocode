/*
 * XREFs of DbgkpCloseObject @ 0x1406A9D70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x140596078 (PsTerminateProcess.c)
 *     DbgkpMarkProcessPeb @ 0x1406AA048 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x1406AB018 (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _FAST_MUTEX *v4; // rbx
  _QWORD *v6; // rsi
  char v7; // bl
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax
  ULONG_PTR v10; // rdi
  _DWORD *v11; // rcx
  char v12; // [rsp+58h] [rbp+20h]

  if ( a4 <= 1 )
  {
    v4 = (struct _FAST_MUTEX *)(a2 + 24);
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v6 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 88) = a2 + 80;
    *(_QWORD *)(a2 + 80) = a2 + 80;
    KeReleaseGuardedMutex(v4);
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v7 = (v12 ^ *(_BYTE *)(a2 + 96)) & 2 ^ v12;
    for ( i = 0LL; ; i = (_QWORD *)v10 )
    {
      NextProcess = PsGetNextProcess(i);
      v10 = NextProcess;
      if ( !NextProcess )
        break;
      if ( *(_QWORD *)(NextProcess + 1056) == a2 )
      {
        v7 &= ~1u;
        ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
        if ( *(_QWORD *)(v10 + 1056) == a2 )
        {
          *(_QWORD *)(v10 + 1056) = 0LL;
          v7 |= 1u;
        }
        KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
        if ( (v7 & 1) != 0 )
        {
          DbgkpMarkProcessPeb(v10);
          if ( (v7 & 2) != 0 )
            PsTerminateProcess(v10, 0xC0000354);
          ObfDereferenceObject((PVOID)a2);
        }
      }
    }
    while ( v6 != (_QWORD *)(a2 + 80) )
    {
      v11 = v6;
      v6 = (_QWORD *)*v6;
      v11[18] = -1073740972;
      DbgkpWakeTarget(v11);
    }
  }
}
