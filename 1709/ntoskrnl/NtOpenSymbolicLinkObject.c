/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x14056AB70
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1405D161C (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x1408540D4 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  PHANDLE v5; // rbx
  char PreviousMode; // si
  POBJECT_TYPE v7; // rdi
  unsigned __int64 CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v5 = SymbolicLinkHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)SymbolicLinkHandle >= 0x7FFFFFFF0000LL )
      SymbolicLinkHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SymbolicLinkHandle = *SymbolicLinkHandle;
  }
  v7 = ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(
             (__int64)ObjectAttributes,
             (__int64)v7,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             CurrentSilo,
             &v10);
  *v5 = v10;
  return result;
}
