/*
 * XREFs of NtCreateTimer2 @ 0x1404EB824
 * Callers:
 *     NtCreateIRTimer @ 0x1405F2CC8 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1400B2730 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x14059C904 (ExpCheckIRTimerAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  NTSTATUS result; // eax
  char PreviousMode; // di
  __int64 v9; // rcx
  NTSTATUS inserted; // ecx
  _QWORD *v11; // rdi
  __int64 v12; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+20h] BYREF

  if ( Attributes != 2 && Attributes != 8 )
    return -1073741582;
  if ( ObjectAttributes )
    return -1073741583;
  if ( Reserved1 && Attributes != 2 )
    return -1073741584;
  v15 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)TimerHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    if ( Reserved1 )
    {
      if ( ((unsigned __int8)Reserved1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Reserved1 + 4 > 0x7FFFFFFF0000LL || (char *)Reserved1 + 4 < Reserved1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v15 = *(_DWORD *)Reserved1;
    }
  }
  else if ( Reserved1 )
  {
    v15 = *(_DWORD *)Reserved1;
  }
  if ( Attributes != 2
    || (LOBYTE(Reserved1) = PreviousMode, result = ExpCheckIRTimerAccess(v15, Reserved1), result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0LL, PreviousMode, v12, 168, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v11 = Object;
      if ( Attributes == 2 )
        KeInitializeIRTimer((__int64)Object, 0LL, 0LL, (unsigned __int8 *)&v15, 2);
      else
        KeInitializeTimer2((__int64)Object);
      v11[17] = 0LL;
      *((_DWORD *)v11 + 40) = Attributes;
      inserted = ObInsertObjectEx(v11, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v14);
      v15 = inserted;
      if ( inserted >= 0 )
        *TimerHandle = (HANDLE)v14;
    }
    return inserted;
  }
  return result;
}
