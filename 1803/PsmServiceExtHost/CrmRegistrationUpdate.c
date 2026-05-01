/*
 * XREFs of CrmRegistrationUpdate @ 0x180005820
 * Callers:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorRegistrationAdd @ 0x18003991C (CrmStateMonitorRegistrationAdd.c)
 * Callees:
 *     CrmLogRegistrationUpdate @ 0x180005954 (CrmLogRegistrationUpdate.c)
 *     CrmSubscriberReadyQueueAdd @ 0x18003491C (CrmSubscriberReadyQueueAdd.c)
 *     CrmSubscriberReadyQueueRemove @ 0x180034A18 (CrmSubscriberReadyQueueRemove.c)
 *     CrmComparisonRoutineUserPresent @ 0x1800368F0 (CrmComparisonRoutineUserPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmRegistrationUpdate(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 (__fastcall *v9)(_QWORD, __int64); // rax
  int v10; // r12d
  int v11; // eax
  int v12; // ebp
  int v13; // edi
  int v14; // esi
  int v16; // eax
  int v17; // [rsp+90h] [rbp+8h]

  v17 = *((_DWORD *)a1 + 2);
  v7 = 0LL;
  v8 = 0LL;
  RtlAcquireSRWLockExclusive(a1 + 2);
  *((_DWORD *)a1 + 6) = GetCurrentThreadId();
  v9 = *(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 16);
  v10 = *(_DWORD *)(a2 + 24);
  if ( v9 == CrmComparisonRoutineUserPresent )
    v11 = CrmComparisonRoutineUserPresent(0LL, a4);
  else
    v11 = v9(0LL, a4);
  v12 = v11;
  if ( v11 == v10 )
  {
    v13 = *((_DWORD *)a1 + 9);
    v14 = v13;
  }
  else
  {
    *(_DWORD *)(a2 + 24) = v11;
    v13 = *((_DWORD *)a1 + 9);
    v14 = v13 + 1;
    if ( !v11 )
      v14 = v13 - 1;
    *((_DWORD *)a1 + 9) = v14;
    if ( v14 == *((_DWORD *)a1 + 8) || v13 == *((_DWORD *)a1 + 8) )
    {
      v8 = a1[7];
      v7 = MEMORY[0x7FFE0008];
      v16 = *((_DWORD *)a1 + 8);
      a1[7] = MEMORY[0x7FFE0008];
      if ( v14 == v16 )
      {
        CrmSubscriberReadyQueueAdd(*a1);
        v16 = *((_DWORD *)a1 + 8);
      }
      if ( v13 == v16 )
        CrmSubscriberReadyQueueRemove(*a1, 1LL);
    }
  }
  *((_DWORD *)a1 + 6) = 0;
  RtlReleaseSRWLockExclusive(a1 + 2);
  return CrmLogRegistrationUpdate(v17, a3, v10, v12, v13, v14, v8, v7, 0);
}
