/*
 * XREFs of NtOpenSession @ 0x14058334C
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x140578C50 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // cl
  NTSTATUS result; // eax
  __int64 v7; // r8
  void *v8; // [rsp+48h] [rbp-20h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SessionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)SessionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(v3, (int)MmSessionObjectType, PreviousMode, 0, DesiredAccess, 0LL, (__int64)&v8);
  *SessionHandle = v8;
  return result;
}
