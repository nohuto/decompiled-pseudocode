/*
 * XREFs of NtExtendSection @ 0x1406B646C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v5; // rcx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v8; // [rsp+60h] [rbp+18h]
  LARGE_INTEGER v9; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)NewMaximumSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewMaximumSize < 0x7FFFFFFF0000LL )
      v5 = (__int64)NewMaximumSize;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 7) = *(_BYTE *)(v5 + 7);
    v9 = *NewMaximumSize;
  }
  else
  {
    v9 = *NewMaximumSize;
  }
  result = ObReferenceObjectByHandle(SectionHandle, 0x10u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v8 = MmExtendSection((__int64)Object, &v9, 0);
    ObfDereferenceObject(Object);
    *NewMaximumSize = v9;
    return v8;
  }
  return result;
}
