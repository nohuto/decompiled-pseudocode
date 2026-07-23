/*
 * XREFs of NtCreateThreadEx @ 0x14053EC18
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspCreateThread @ 0x140492B18 (PspCreateThread.c)
 *     PspBuildCreateProcessContext @ 0x14053D9A0 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x14053EE70 (PspDeleteCreateProcessContext.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  NTSTATUS result; // eax
  NTSTATUS Thread; // ebx
  __int64 v17; // rcx
  __int64 v18[4]; // [rsp+70h] [rbp-758h] BYREF
  __int64 v19[8]; // [rsp+90h] [rbp-738h] BYREF
  __int64 v20[62]; // [rsp+D0h] [rbp-6F8h] BYREF
  __int64 v21[154]; // [rsp+2C0h] [rbp-508h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v21, 0, sizeof(v21));
  if ( (CreateFlags & 0xFFFFFFC0) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v17 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  LOBYTE(v18[0]) = 0;
  v18[2] = StackSize;
  v18[3] = MaximumStackSize;
  v18[1] = ZeroBits;
  memset(v20, 0, 0x1E8uLL);
  if ( !AttributeList
    || (result = PspBuildCreateProcessContext(
                   (__int64 *)AttributeList,
                   KeGetCurrentThread()->PreviousMode,
                   1,
                   (__int64)v20),
        result >= 0) )
  {
    v21[6] = 0x1F800010000BLL;
    v21[31] = PspUserThreadStart;
    v21[16] = (__int64)StartRoutine;
    v21[17] = (__int64)Argument;
    *(_DWORD *)((char *)&v21[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v21[7] + 6) = 2818131;
    WORD1(v21[8]) = 43;
    LOWORD(v21[7]) = 51;
    LOWORD(v21[32]) = 639;
    LODWORD(v21[35]) = 8064;
    Thread = PspCreateThread(
               (__int64)ThreadHandle,
               DesiredAccess,
               (__int64)ObjectAttributes,
               (ULONG_PTR)ProcessHandle,
               0LL,
               (__int64)v20,
               v20[2],
               (__int64)v21,
               (__int64)v19,
               CreateFlags,
               (__int64)StartRoutine,
               (__int64)Argument,
               (__int64)v18);
    PspDeleteCreateProcessContext(v20);
    return Thread;
  }
  return result;
}
