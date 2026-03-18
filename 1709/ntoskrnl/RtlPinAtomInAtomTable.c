/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1405850E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x1400A6468 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1404D2D94 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404D4CAC (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlPinAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 *v6; // rax
  NTSTATUS v8; // [rsp+20h] [rbp-28h]

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v4 = -1073741816;
  v8 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
    v8 = v4;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v6 = RtlpLookupLowBox((__int64)AtomTable, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *((_WORD *)v6 + 11) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v8;
}
