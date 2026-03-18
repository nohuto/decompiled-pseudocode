/*
 * XREFs of NtOpenSection @ 0x140558700
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // r8
  POBJECT_TYPE v8; // rbx
  unsigned __int64 CurrentSilo; // rax
  __int64 v10; // r8
  NTSTATUS result; // eax
  void *v12; // [rsp+40h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SectionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SectionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = MmSectionObjectType;
  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v10) = PreviousMode;
  result = ObOpenObjectByNameEx(ObjectAttributes, v8, v10, 0LL, DesiredAccess, 0LL, CurrentSilo, &v12);
  *SectionHandle = v12;
  return result;
}
