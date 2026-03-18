/*
 * XREFs of RtlPinAtomInAtomTable @ 0x14044D7C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x14008B754 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1404FA734 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404FA8D4 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlPinAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  NTSTATUS v8; // [rsp+20h] [rbp-28h]

  if ( !(unsigned __int8)RtlpLockAtomTable() )
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
    v5 = RtlpAtomMapAtomToHandleEntry(AtomTable, Atom & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v6 = RtlpLookupLowBox((__int64)AtomTable, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *(_WORD *)(v6 + 22) |= 1u;
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
