/*
 * XREFs of NtCreateThreadEx @ 0x1404B9CEC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x1404B9F44 (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x1404BA110 (PspBuildCreateProcessContext.c)
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
  __int64 v15; // rdx
  NTSTATUS result; // eax
  NTSTATUS Thread; // ebx
  __int64 v18; // rcx
  __int64 v19[4]; // [rsp+70h] [rbp-758h] BYREF
  __int64 v20[8]; // [rsp+90h] [rbp-738h] BYREF
  __int64 v21[62]; // [rsp+D0h] [rbp-6F8h] BYREF
  __int64 v22[154]; // [rsp+2C0h] [rbp-508h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(v22, 0, sizeof(v22));
  if ( (CreateFlags & 0xFFFFFFC0) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v18 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v18 = *(_QWORD *)v18;
  }
  LOBYTE(v19[0]) = 0;
  v19[2] = StackSize;
  v19[3] = MaximumStackSize;
  v19[1] = ZeroBits;
  memset(v21, 0, 0x1E8uLL);
  if ( !AttributeList
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v15, 1LL, v21),
        result >= 0) )
  {
    v22[6] = 0x1F800010000BLL;
    v22[31] = PspUserThreadStart;
    v22[16] = (__int64)StartRoutine;
    v22[17] = (__int64)Argument;
    *(_DWORD *)((char *)&v22[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v22[7] + 6) = 2818131;
    WORD1(v22[8]) = 43;
    LOWORD(v22[7]) = 51;
    LOWORD(v22[32]) = 639;
    LODWORD(v22[35]) = 8064;
    Thread = PspCreateThread(
               (__int64)ThreadHandle,
               DesiredAccess,
               (__int64)ObjectAttributes,
               (ULONG_PTR)ProcessHandle,
               0LL,
               (__int64)v21,
               v21[2],
               (__int64)v22,
               (__int64)v20,
               CreateFlags,
               (__int64)StartRoutine,
               (__int64)Argument,
               (__int64)v19);
    PspDeleteCreateProcessContext(v21);
    return Thread;
  }
  return result;
}
