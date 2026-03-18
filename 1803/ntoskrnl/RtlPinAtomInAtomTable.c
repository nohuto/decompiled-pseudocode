/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1405478A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlpLookupLowBox @ 0x1400A1320 (RtlpLookupLowBox.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlpLockAtomTable @ 0x1404B624C (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404B6ACC (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlPinAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  NTSTATUS v11; // [rsp+20h] [rbp-28h]

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v7 = -1073741816;
  v11 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v7 = 0;
    v11 = v7;
  }
  else
  {
    v8 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    if ( v8 )
    {
      if ( *(_WORD *)(v8 + 10) == Atom )
      {
        v9 = RtlpLookupLowBox((__int64)AtomTable, v8, 0);
        if ( v9 )
        {
          v11 = 0;
          *((_WORD *)v9 + 11) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v11;
}
