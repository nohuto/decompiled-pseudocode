/*
 * XREFs of DbgkClearProcessDebugObject @ 0x1405F1AF4
 * Callers:
 *     PspTerminateAllThreads @ 0x1404D6C7C (PspTerminateAllThreads.c)
 *     NtRemoveProcessDebug @ 0x1406AB654 (NtRemoveProcessDebug.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     DbgkpMarkProcessPeb @ 0x1406AA048 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x1406AB018 (DbgkpWakeTarget.c)
 */

__int64 __fastcall DbgkClearProcessDebugObject(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // esi
  PVOID *v7; // rcx
  PVOID **v8; // rax
  PVOID *v9; // r8
  PVOID ***v10; // r9
  PVOID *v11; // r8
  _DWORD *v12; // rcx
  __int64 v13; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
  v4 = *(_QWORD *)(BugCheckParameter1 + 1056);
  if ( v4 && (v4 == a2 || !a2) )
  {
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
    v5 = 0;
  }
  else
  {
    v4 = 0LL;
    v5 = -1073740973;
  }
  KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  if ( v5 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  if ( v4 )
  {
    p_P = &P;
    P = &P;
    ExAcquireFastMutex((PFAST_MUTEX)(v4 + 24));
    v7 = *(PVOID **)(v4 + 80);
    while ( v7 != (PVOID *)(v4 + 80) )
    {
      v8 = (PVOID **)v7;
      v7 = (PVOID *)*v7;
      if ( v8[7] == (PVOID *)BugCheckParameter1 )
      {
        v9 = *v8;
        if ( (*v8)[1] != v8 || (v10 = (PVOID ***)v8[1], *v10 != v8) )
          __fastfail(3u);
        *v10 = (PVOID **)v9;
        v9[1] = v10;
        v11 = p_P;
        if ( *p_P != &P )
          __fastfail(3u);
        v8[1] = p_P;
        *v8 = &P;
        *v11 = v8;
        p_P = (PVOID *)v8;
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v4 + 24));
    ObfDereferenceObject((PVOID)v4);
    while ( 1 )
    {
      v12 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P || (v13 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
        __fastfail(3u);
      P = *(PVOID *)P;
      *(_QWORD *)(v13 + 8) = &P;
      v12[18] = -1073740972;
      DbgkpWakeTarget(v12);
    }
  }
  return (unsigned int)v5;
}
