/*
 * XREFs of NtReleaseMutant @ 0x1405211C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int v5; // edi
  PVOID v6; // rsi
  LONG v7; // r14d
  __int64 v9; // rcx
  PVOID Object; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v11; // [rsp+A8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ReleaseCount && PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ReleaseCount < 0x7FFFFFFF0000LL )
      v9 = (__int64)ReleaseCount;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  v5 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  v6 = Object;
  v11 = Object;
  if ( v5 >= 0 )
  {
    v7 = KeReleaseMutant((PRKMUTANT)Object, 1, 0, 0);
    ObfDereferenceObject(v6);
    if ( ReleaseCount )
      *ReleaseCount = v7;
  }
  return v5;
}
