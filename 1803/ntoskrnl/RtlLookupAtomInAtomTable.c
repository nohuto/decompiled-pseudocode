/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x1404B6050
 * Callers:
 *     NtFindAtom @ 0x1404B5ED0 (NtFindAtom.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlGetIntegerAtom @ 0x1404B61A0 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x1404B624C (RtlpLockAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1404B6290 (RtlpHashStringToAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404B6ACC (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlLookupAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  USHORT v10; // ax
  NTSTATUS v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp-28h] BYREF
  USHORT IntegerAtom; // [rsp+98h] [rbp+20h] BYREF

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  if ( RtlGetIntegerAtom(AtomName, &IntegerAtom) )
  {
    v10 = IntegerAtom;
    if ( IntegerAtom >= 0xC000u )
    {
      v10 = 0;
      IntegerAtom = 0;
      v12 = -1073741811;
    }
    else
    {
      v12 = 0;
    }
    if ( !Atom )
      goto LABEL_18;
    goto LABEL_9;
  }
  if ( !*AtomName )
  {
    v12 = -1073741773;
    goto LABEL_18;
  }
  LOBYTE(v7) = 1;
  v12 = RtlpHashStringToAtom(AtomTable, AtomName, v7, 0LL, 0LL, v14, &v13);
  if ( v12 >= 0 )
  {
    v9 = v13;
    if ( !v13 )
    {
      v12 = -1073741772;
      goto LABEL_18;
    }
    if ( !RtlpAtomMapAtomToHandleEntry(AtomTable, *(unsigned __int16 *)(v13 + 8)) )
    {
      v12 = -1073741816;
      goto LABEL_18;
    }
    v12 = 0;
    if ( Atom )
    {
      v10 = *(_WORD *)(v9 + 10);
LABEL_9:
      *Atom = v10;
    }
  }
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock, v6, v7, v8);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v12;
}
