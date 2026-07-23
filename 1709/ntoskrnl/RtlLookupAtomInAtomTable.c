/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x1404D2BA0
 * Callers:
 *     NtFindAtom @ 0x1404D2370 (NtFindAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlGetIntegerAtom @ 0x1404D2CF0 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x1404D2D94 (RtlpLockAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1404D2DE0 (RtlpHashStringToAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404D4CAC (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlLookupAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  __int64 v6; // r8
  __int64 v7; // rsi
  USHORT v8; // ax
  NTSTATUS v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
  USHORT IntegerAtom; // [rsp+98h] [rbp+20h] BYREF

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  if ( RtlGetIntegerAtom(AtomName, &IntegerAtom) )
  {
    v8 = IntegerAtom;
    if ( IntegerAtom >= 0xC000u )
    {
      v8 = 0;
      IntegerAtom = 0;
      v10 = -1073741811;
    }
    else
    {
      v10 = 0;
    }
    if ( !Atom )
      goto LABEL_18;
    goto LABEL_9;
  }
  if ( !*AtomName )
  {
    v10 = -1073741773;
    goto LABEL_18;
  }
  LOBYTE(v6) = 1;
  v10 = RtlpHashStringToAtom(AtomTable, AtomName, v6, 0LL, 0LL, v12, &v11);
  if ( v10 >= 0 )
  {
    v7 = v11;
    if ( !v11 )
    {
      v10 = -1073741772;
      goto LABEL_18;
    }
    if ( !RtlpAtomMapAtomToHandleEntry(AtomTable, *(unsigned __int16 *)(v11 + 8)) )
    {
      v10 = -1073741816;
      goto LABEL_18;
    }
    v10 = 0;
    if ( Atom )
    {
      v8 = *(_WORD *)(v7 + 10);
LABEL_9:
      *Atom = v8;
    }
  }
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v10;
}
