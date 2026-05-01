/*
 * XREFs of CrmStateMonitorRegistrationRemove @ 0x18006A6E0
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180039818 (CrmRegisterToStateMonitor.c)
 *     CrmRegistrationCleanup @ 0x18006A9BC (CrmRegistrationCleanup.c)
 * Callees:
 *     CrmLogStateMonitorRegistrationRemove @ 0x18006A39C (CrmLogStateMonitorRegistrationRemove.c)
 *     CrmStateMonitorCleanup @ 0x18006A644 (CrmStateMonitorCleanup.c)
 */

TLG_STATUS __fastcall CrmStateMonitorRegistrationRemove(int *P, __int64 a2, __int64 a3, int a4)
{
  int v4; // r13d
  char *v5; // rdi
  int v10; // r14d
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rbp
  BOOL v15; // ebx
  __int64 v16; // rax
  TLG_STATUS result; // eax

  v4 = *P;
  v5 = (char *)(P + 2);
  v10 = 1;
  RtlAcquireSRWLockExclusive(P + 2);
  v11 = (_QWORD *)(a3 + 32);
  *((_DWORD *)v5 + 2) = GetCurrentThreadId();
  v12 = *v11;
  if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
    __fastfail(3u);
  *v13 = v12;
  v14 = P + 6;
  *(_QWORD *)(v12 + 8) = v13;
  v15 = *v14 == (_QWORD)v14;
  if ( (_QWORD *)*v14 == v14 )
  {
    if ( !a4 )
    {
      *((_DWORD *)v5 + 2) = 0;
      RtlReleaseSRWLockExclusive(v5);
      RtlAcquireSRWLockExclusive(CrmGlobals);
      LODWORD(qword_180092988) = GetCurrentThreadId();
      RtlAcquireSRWLockExclusive(v5);
      *((_DWORD *)v5 + 2) = GetCurrentThreadId();
      v15 = *v14 == (_QWORD)v14;
    }
    if ( v15 )
    {
      v16 = *P;
      if ( (int *)CrmGlobals[v16 + 2] == P )
        CrmGlobals[v16 + 2] = 0LL;
    }
    *((_DWORD *)v5 + 2) = 0;
    RtlReleaseSRWLockExclusive(v5);
    v10 = 0;
    if ( !a4 )
    {
      LODWORD(qword_180092988) = 0;
      RtlReleaseSRWLockExclusive(CrmGlobals);
    }
    if ( v15 )
    {
      CrmStateMonitorCleanup((__int64)P);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
  }
  result = CrmLogStateMonitorRegistrationRemove(v4, a2, v15);
  if ( v10 )
  {
    *((_DWORD *)v5 + 2) = 0;
    return RtlReleaseSRWLockExclusive(v5);
  }
  return result;
}
