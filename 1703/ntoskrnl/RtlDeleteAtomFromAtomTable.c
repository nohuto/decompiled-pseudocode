/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x140431280
 * Callers:
 *     NtDeleteAtom @ 0x140431230 (NtDeleteAtom.c)
 * Callees:
 *     RtlpDereferenceAtom @ 0x140018718 (RtlpDereferenceAtom.c)
 *     RtlpLookupLowBox @ 0x14008B754 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1404FA734 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404FA8D4 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(AtomTable, Atom & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v7 = RtlpLookupLowBox((__int64)AtomTable, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*(_BYTE *)(v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, (__int64 *)v7, (__int64)AtomTable);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v4;
}
