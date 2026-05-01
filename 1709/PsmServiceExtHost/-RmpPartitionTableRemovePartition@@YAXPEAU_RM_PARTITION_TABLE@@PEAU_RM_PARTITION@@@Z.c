/*
 * XREFs of ?RmpPartitionTableRemovePartition@@YAXPEAU_RM_PARTITION_TABLE@@PEAU_RM_PARTITION@@@Z @ 0x18003A144
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180020790 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPartitionTableRemovePartition(struct _RM_PARTITION_TABLE *a1, HANDLE *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
  NtClose(a2[4]);
  a2[4] = 0LL;
  *((_DWORD *)a2 + 56) |= 3u;
  v4 = a2 + 1;
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  v4[1] = 0LL;
  --*((_DWORD *)a1 + 19);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  RtlWakeAllConditionVariable((char *)a1 + 32);
}
