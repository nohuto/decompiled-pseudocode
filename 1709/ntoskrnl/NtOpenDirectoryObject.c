/*
 * XREFs of NtOpenDirectoryObject @ 0x14056EB14
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 */

NTSTATUS __stdcall NtOpenDirectoryObject(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // si
  __int64 v7; // r8
  POBJECT_TYPE v8; // rbx
  unsigned __int64 CurrentSilo; // rax
  NTSTATUS result; // eax
  void *v11; // [rsp+40h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)FileHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)FileHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObpDirectoryObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(
             (__int64)ObjectAttributes,
             (__int64)v8,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             CurrentSilo,
             &v11);
  *FileHandle = v11;
  return result;
}
