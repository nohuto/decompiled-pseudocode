/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x1C0014530
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C001441C (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C002E840 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C000629C (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006328 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000648C (RaidAdapterAcquireInterruptLock.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C0014390 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0014744 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001489C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00151E4 (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v4; // rsi
  __int64 result; // rax
  int v7; // edi
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // r12
  unsigned __int8 v10; // r13
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 i; // rdi
  __int64 UnitAtDirql; // rbp
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  _QWORD *v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  KIRQL v22; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v25[96]; // [rsp+50h] [rbp-98h] BYREF
  int v26; // [rsp+F0h] [rbp+8h]

  v4 = a3;
  memset(v25, 0, sizeof(v25));
  result = RaidBusEnumeratorGetUnit(a1, a2, v25);
  if ( (int)result >= 0 )
  {
    if ( (int)RaidBusEnumeratorGetLunListFromTarget(a1, a2, v25, v4) < 0 )
    {
      v7 = RaidBusEnumeratorProbeLunZero(a1, a2);
      memset(v4, 0, 0xFFuLL);
      if ( v7 >= 0 )
        *v4 = 0x101010101010101LL;
    }
    RaidBusEnumeratorReleaseUnit(a1, v25);
    v26 = a2;
    v8 = 0;
    v9 = BYTE1(a2);
    v10 = a2;
    do
    {
      BYTE2(v26) = v8;
      v11 = *(_QWORD *)a1;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql )
      {
        v21 = *(_QWORD *)a1;
        if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v11 + 672) )
        {
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v21, v26);
        }
        else
        {
          v22 = RaidAdapterAcquireInterruptLock(v21);
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v11, v26);
          RaidAdapterReleaseInterruptLock(v11, v22);
        }
      }
      else
      {
        v13 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 112), &LockHandle);
        v14 = *(__int64 **)(v11 + 120);
        for ( i = v11 + 120; v14 != (__int64 *)i; v14 = (__int64 *)*v14 )
        {
          v13 = (__int64)(v14 - 6);
          if ( ((unsigned __int8)BYTE2(*((_DWORD *)v14 + 10)) | ((((unsigned __int8)*((_DWORD *)v14 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v14 + 10))) << 8)) == (v8 | ((v9 | (v10 << 8)) << 8)) )
            break;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        UnitAtDirql = 0LL;
        if ( v14 != (__int64 *)i )
          UnitAtDirql = v13;
        v4 = a3;
      }
      if ( UnitAtDirql )
        goto LABEL_20;
      v17 = *(_QWORD *)a1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)a1 + 192LL), &v24);
      v18 = (_QWORD *)(v17 + 200);
      v19 = (_QWORD *)*v18;
      if ( (_QWORD *)*v18 == v18 )
        goto LABEL_15;
      do
      {
        v20 = v19 - 6;
        if ( ((unsigned __int8)BYTE2(*((_DWORD *)v19 + 10)) | ((((unsigned __int8)*((_DWORD *)v19 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v19 + 10))) << 8)) == (v8 | ((v9 | (v10 << 8)) << 8)) )
          break;
        v19 = (_QWORD *)*v19;
      }
      while ( v19 != v18 );
      if ( v19 == v18 )
LABEL_15:
        v20 = 0LL;
      KeReleaseInStackQueuedSpinLock(&v24);
      if ( v20 )
LABEL_20:
        *((_BYTE *)v4 + v8) = 1;
      ++v8;
    }
    while ( v8 != 0xFF );
    return 0LL;
  }
  return result;
}
