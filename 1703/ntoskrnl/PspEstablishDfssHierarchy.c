/*
 * XREFs of PspEstablishDfssHierarchy @ 0x1406E14C8
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x14001C884 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x14001C9F8 (KeInsertSchedulingGroup.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     MmGetSessionObjectByProcess @ 0x140217DCC (MmGetSessionObjectByProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1404A1364 (MmGetSessionSchedulingGroupByProcess.c)
 */

LONG_PTR __fastcall PspEstablishDfssHierarchy(__int64 a1, struct _KPROCESS *a2, int a3)
{
  LONG_PTR result; // rax
  __int64 SessionSchedulingGroupByProcess; // rdi
  struct _KPROCESS *v6; // rcx
  int v7; // r8d
  void *v8; // rsi
  void *v9; // rcx

  result = (unsigned int)(a3 - 1);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(a2);
    result = MmGetSessionObjectByProcess(v6);
    v8 = (void *)result;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 1008LL) || *(_QWORD *)(a1 + 1016) == SessionSchedulingGroupByProcess )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1080);
        if ( result == a1 && *(_QWORD *)(a1 + 1008) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1112) != v8 )
        {
          KeRemoveSchedulingGroup(*(unsigned __int16 **)(a1 + 1016));
          KeInsertSchedulingGroup(
            *(_QWORD *)(a1 + 1008) + 128LL,
            *(_QWORD *)(*(_QWORD *)(a1 + 1008) + 128LL),
            SessionSchedulingGroupByProcess);
          v9 = *(void **)(a1 + 1112);
          if ( v9 )
            ObfDereferenceObject(v9);
          *(_QWORD *)(a1 + 1112) = v8;
          return ObfReferenceObject(v8);
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 1016LL) != SessionSchedulingGroupByProcess )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 1016LL) = SessionSchedulingGroupByProcess;
        result = *(_QWORD *)(a1 + 1080);
        *(_QWORD *)(result + 1112) = v8;
      }
      *(_QWORD *)(a1 + 1016) = SessionSchedulingGroupByProcess;
    }
  }
  return result;
}
