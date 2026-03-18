/*
 * XREFs of NtExtendSection @ 0x1405821C8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  NTSTATUS v8; // [rsp+60h] [rbp+18h]
  LARGE_INTEGER v9; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)NewMaximumSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewMaximumSize < 0x7FFFFFFF0000LL )
      v6 = (__int64)NewMaximumSize;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
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
