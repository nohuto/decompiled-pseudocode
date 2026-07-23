/*
 * XREFs of NtOpenSession @ 0x1405E228C
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x1406F37E4 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // cl
  NTSTATUS result; // eax
  __int64 v7; // r8
  void *v8; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SessionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SessionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)MmSessionObjectType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             &v8);
  *SessionHandle = v8;
  return result;
}
