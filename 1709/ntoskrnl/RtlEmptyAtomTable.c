/*
 * XREFs of RtlEmptyAtomTable @ 0x1407213C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1404D2D94 (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x14057CD84 (RtlpFreeAtom.c)
 *     RtlpFreeHandleForAtom @ 0x14057CDB4 (RtlpFreeHandleForAtom.c)
 */

NTSTATUS __stdcall RtlEmptyAtomTable(PRTL_ATOM_TABLE AtomTable, BOOLEAN DeletePinned)
{
  unsigned int v5; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r15
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v5 = 0;
  for ( i = AtomTable->Buckets; v5 < AtomTable->NumberOfBuckets; ++v5 )
  {
    v7 = (__int64 *)i++;
    while ( 1 )
    {
      v12 = *v7;
      if ( !*v7 )
        break;
      if ( DeletePinned || (*(_BYTE *)(v12 + 38) & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTable, v8);
        v9 = (__int64 *)(v12 + 16);
        while ( (__int64 *)*v9 != v9 )
        {
          v10 = *v9;
          if ( *(__int64 **)(*v9 + 8) != v9 || (v11 = *(_QWORD *)v10, *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10) )
            __fastfail(3u);
          *v9 = v11;
          *(_QWORD *)(v11 + 8) = v9;
          RtlpFreeAtom(v10);
        }
        RtlpFreeAtom(v12);
      }
      else
      {
        v7 = (__int64 *)*v7;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return 0;
}
