/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x140547970
 * Callers:
 *     NtDeleteAtom @ 0x140547850 (NtDeleteAtom.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlpLookupLowBox @ 0x1400A1320 (RtlpLookupLowBox.c)
 *     RtlpDereferenceAtom @ 0x1400A13A8 (RtlpDereferenceAtom.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlpLockAtomTable @ 0x1404B624C (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404B6ACC (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  __int64 v4; // r8
  __int64 v5; // r9
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdx

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v6 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v6 = 0;
  }
  else
  {
    v7 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    v8 = v7;
    if ( v7 )
    {
      if ( *(_WORD *)(v7 + 10) == Atom )
      {
        v9 = RtlpLookupLowBox((__int64)AtomTable, v7, 1);
        if ( v9 )
        {
          v6 = 0;
          if ( (*((_BYTE *)v9 + 22) & 1) != 0 )
            v6 = 1073741849;
          else
            RtlpDereferenceAtom(v8, v9, (__int64)AtomTable);
        }
      }
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v10) = v10 & 6;
  if ( (_BYTE)v10 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock, v10, v4, v5);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v6;
}
