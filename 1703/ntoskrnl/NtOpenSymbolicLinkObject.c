/*
 * XREFs of NtOpenSymbolicLinkObject @ 0x140435CE0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1405A74A8 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x14082144C (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenSymbolicLinkObject(
        PHANDLE SymbolicLinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r14d
  PHANDLE v5; // rbx
  unsigned __int8 v6; // si
  int v7; // edi
  unsigned __int64 CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v10; // [rsp+40h] [rbp-28h] BYREF

  v3 = (int)ObjectAttributes;
  v5 = SymbolicLinkHandle;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( v6 )
  {
    if ( (unsigned __int64)SymbolicLinkHandle >= 0x7FFFFFFF0000LL )
      SymbolicLinkHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *SymbolicLinkHandle = *SymbolicLinkHandle;
  }
  v7 = (int)ObpSymbolicLinkObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(v3, v7, v6, 0, DesiredAccess, 0LL, CurrentSilo, (__int64)&v10);
  *v5 = v10;
  return result;
}
