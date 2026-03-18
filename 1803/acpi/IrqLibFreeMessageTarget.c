/*
 * XREFs of IrqLibFreeMessageTarget @ 0x1C008D070
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C0056D90 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0056E18 (IrqLibReleaseArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0057F50 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C008E4A0 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C008E574 (ProcessorIdtEntryToGsiv.c)
 */

LONG __fastcall IrqLibFreeMessageTarget(PVOID Owner, unsigned int a2, __int64 a3)
{
  LONG result; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  _BYTE v9[20]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-14h]
  ULONGLONG End; // [rsp+68h] [rbp+20h] BYREF

  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
  {
    IrqLibAcquireArbiterLock(1);
    if ( (int)ProcessorIdtEntryToGsiv(a2, a3, v7, &End) >= 0 )
    {
      v8 = End;
      if ( (int)ProcessorGetDeviceIdtAssignment(Owner, (unsigned int)End, 0LL, v9) >= 0 )
      {
        ProcessorDeleteDeviceIdtAssignment(Owner, v8, v10, 0);
        RtlDeleteRange(RangeList, v8, v8, Owner);
      }
    }
    return IrqLibReleaseArbiterLock();
  }
  return result;
}
