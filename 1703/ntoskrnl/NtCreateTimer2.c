/*
 * XREFs of NtCreateTimer2 @ 0x14055DBA0
 * Callers:
 *     NtCreateIRTimer @ 0x140586670 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 *     KeInitializeTimer2 @ 0x14012A690 (KeInitializeTimer2.c)
 *     PsInsertVirtualizedTimer @ 0x14012AA9C (PsInsertVirtualizedTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14045BCD8 (ExpCheckIRTimerAccess.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS inserted; // ecx
  _QWORD *v10; // rbx
  _QWORD *v11; // r8
  _KPROCESS *Process; // rcx
  NTSTATUS result; // eax
  __int64 v14; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h] BYREF
  NTSTATUS v17; // [rsp+88h] [rbp+20h] BYREF

  if ( Attributes != 8 && Attributes != 2 )
    return -1073741582;
  if ( ObjectAttributes )
    return -1073741583;
  if ( Reserved1 && Attributes != 2 )
    return -1073741584;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)TimerHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    if ( Reserved1 )
    {
      if ( ((unsigned __int8)Reserved1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Reserved1 + 4 > 0x7FFFFFFF0000LL || (char *)Reserved1 + 4 < Reserved1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v17 = *(_DWORD *)Reserved1;
    }
  }
  else if ( Reserved1 )
  {
    v17 = *(_DWORD *)Reserved1;
  }
  if ( Attributes != 2 || (result = ExpCheckIRTimerAccess(v17, PreviousMode), result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0, PreviousMode, v14, 200, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v10 = Object;
      if ( Attributes == 2 )
        KeInitializeIRTimer((__int64)Object, 0LL, 0LL, (unsigned __int8 *)&v17, 2);
      else
        KeInitializeTimer2((__int64)Object, 0LL, 0LL, Attributes);
      v10[17] = 0LL;
      *((_BYTE *)v10 + 176) |= 8u;
      v11 = v10 + 19;
      v10[19] = 0LL;
      *((_DWORD *)v10 + 48) = Attributes;
      if ( PreviousMode )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v10 = Object;
        if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
          PsInsertVirtualizedTimer((__int64)Process, (__int64)Object + 160, 0, 0, v11);
      }
      inserted = ObInsertObjectEx(v10, 0LL, DesiredAccess, 0, 0, 0LL, &v16);
      v17 = inserted;
      if ( inserted >= 0 )
        *TimerHandle = (HANDLE)v16;
    }
    return inserted;
  }
  return result;
}
