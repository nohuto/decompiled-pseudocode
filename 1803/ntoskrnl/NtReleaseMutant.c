/*
 * XREFs of NtReleaseMutant @ 0x1405BC830
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  PVOID v6; // rsi
  LONG v7; // r15d
  __int64 v9; // rcx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ReleaseCount && PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ReleaseCount < 0x7FFFFFFF0000LL )
      v9 = (__int64)ReleaseCount;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  v5 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = Object;
    v7 = KeReleaseMutant((PRKMUTANT)Object, 1, 0, 0);
    ObfDereferenceObject(v6);
    if ( ReleaseCount )
      *ReleaseCount = v7;
  }
  return v5;
}
