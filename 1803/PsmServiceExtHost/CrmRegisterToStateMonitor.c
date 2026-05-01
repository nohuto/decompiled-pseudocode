/*
 * XREFs of CrmRegisterToStateMonitor @ 0x180039818
 * Callers:
 *     CrmRegistrationStart @ 0x1800396FC (CrmRegistrationStart.c)
 * Callees:
 *     CrmStateMonitorStart @ 0x180039514 (CrmStateMonitorStart.c)
 *     CrmStateMonitorRegistrationAdd @ 0x18003991C (CrmStateMonitorRegistrationAdd.c)
 *     CrmStateMonitorInitialize @ 0x1800399D0 (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x180039A80 (CrmStateMonitorSizeGet.c)
 *     CrmStateMonitorCleanup @ 0x18006A644 (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorRegistrationRemove @ 0x18006A6E0 (CrmStateMonitorRegistrationRemove.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // edi
  unsigned int v11; // eax
  int *Heap; // rax
  int *v13; // rbx

  v4 = a3;
  RtlAcquireSRWLockShared(CrmGlobals);
  v6 = CrmGlobals[v4 + 2];
  v7 = v4;
  if ( v6 )
  {
    v8 = 1;
    CrmStateMonitorRegistrationAdd(v6, a1, a2);
  }
  else
  {
    v8 = 0;
  }
  RtlReleaseSRWLockShared(CrmGlobals);
  if ( v8 )
  {
    return 0;
  }
  else
  {
    v11 = CrmStateMonitorSizeGet((unsigned int)v4);
    Heap = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    v13 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    CrmStateMonitorInitialize(Heap, (unsigned int)v4);
    v9 = CrmStateMonitorStart(v13, a1, a2);
    if ( v9 >= 0 )
    {
      RtlAcquireSRWLockExclusive(CrmGlobals);
      LODWORD(qword_180092988) = GetCurrentThreadId();
      if ( !CrmGlobals[v7 + 2] )
      {
        CrmGlobals[v7 + 2] = (__int64)v13;
        LODWORD(qword_180092988) = 0;
        RtlReleaseSRWLockExclusive(CrmGlobals);
        return (unsigned int)v9;
      }
      CrmStateMonitorRegistrationRemove(v13);
      v13 = 0LL;
      CrmStateMonitorRegistrationAdd(CrmGlobals[v7 + 2], a1, a2);
      LODWORD(qword_180092988) = 0;
      RtlReleaseSRWLockExclusive(CrmGlobals);
      v9 = 0;
    }
    if ( v13 )
    {
      CrmStateMonitorCleanup(v13);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
    }
  }
  return (unsigned int)v9;
}
