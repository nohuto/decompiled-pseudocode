/*
 * XREFs of NtCreateMutant @ 0x1404ECB2C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutant @ 0x1400B4730 (KeInitializeMutant.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // di
  __int64 v9; // r8
  NTSTATUS inserted; // ecx
  __int64 v12; // [rsp+20h] [rbp-48h]
  PRKMUTANT Mutant; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)MutantHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)MutantHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExMutantObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v12,
               56,
               0,
               0,
               &Mutant,
               0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutant(Mutant, InitialOwner);
    inserted = ObInsertObjectEx(Mutant, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v14);
    LODWORD(Mutant) = inserted;
    if ( inserted >= 0 )
      *MutantHandle = (HANDLE)v14;
  }
  return inserted;
}
