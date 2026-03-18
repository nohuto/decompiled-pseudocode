/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x140552930
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140632728 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x1408C612C (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v5; // rbx
  unsigned __int8 v6; // si
  POBJECT_TYPE v7; // rdi
  unsigned __int64 CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v5 = SymbolicLinkHandle;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( v6 )
  {
    if ( (unsigned __int64)SymbolicLinkHandle >= 0x7FFFFFFF0000LL )
      SymbolicLinkHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SymbolicLinkHandle = *SymbolicLinkHandle;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(ObjectAttributes, v7, v6, 0LL, DesiredAccess, 0LL, CurrentSilo, &v10);
  *v5 = v10;
  return result;
}
