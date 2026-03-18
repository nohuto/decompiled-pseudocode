/*
 * XREFs of RtlEmptyAtomTable @ 0x140784AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlpLockAtomTable @ 0x1404B624C (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x1404EAF6C (RtlpFreeAtom.c)
 *     RtlpFreeHandleForAtom @ 0x140547F54 (RtlpFreeHandleForAtom.c)
 */

NTSTATUS __stdcall RtlEmptyAtomTable(PRTL_ATOM_TABLE AtomTable, BOOLEAN DeletePinned)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v8; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r15
  __int64 *v10; // rsi
  __int64 v11; // rdx
  _QWORD **v12; // r14
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbx

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v8 = 0;
  for ( i = AtomTable->Buckets; v8 < AtomTable->NumberOfBuckets; ++v8 )
  {
    v10 = (__int64 *)i++;
    while ( 1 )
    {
      v15 = *v10;
      if ( !*v10 )
        break;
      if ( DeletePinned || (*(_BYTE *)(v15 + 38) & 1) == 0 )
      {
        v11 = *v10;
        *v10 = *(_QWORD *)v15;
        *(_QWORD *)v15 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTable, v11);
        v12 = (_QWORD **)(v15 + 16);
        while ( 1 )
        {
          v13 = *v12;
          if ( *v12 == v12 )
            break;
          if ( (_QWORD **)v13[1] != v12 || (v14 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
            __fastfail(3u);
          *v12 = v14;
          v14[1] = v12;
          RtlpFreeAtom((__int64)v13);
        }
        RtlpFreeAtom(v15);
      }
      else
      {
        v10 = (__int64 *)*v10;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return 0;
}
