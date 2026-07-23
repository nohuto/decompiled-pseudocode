/*
 * XREFs of NtCreateThreadEx @ 0x140541434
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspCreateThread @ 0x1405410D4 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x14054168C (PspDeleteCreateProcessContext.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
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
  _BYTE v19[8]; // [rsp+70h] [rbp-748h] BYREF
  SIZE_T v20; // [rsp+78h] [rbp-740h]
  SIZE_T v21; // [rsp+80h] [rbp-738h]
  SIZE_T v22; // [rsp+88h] [rbp-730h]
  _BYTE v23[64]; // [rsp+90h] [rbp-728h] BYREF
  __int64 v24[60]; // [rsp+D0h] [rbp-6E8h] BYREF
  _QWORD v25[154]; // [rsp+2B0h] [rbp-508h] BYREF

  memset(v23, 0, sizeof(v23));
  memset(v25, 0, sizeof(v25));
  if ( (CreateFlags & 0xFFFFFFC0) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v18 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v18 = *(_QWORD *)v18;
  }
  v19[0] = 0;
  v21 = StackSize;
  v22 = MaximumStackSize;
  v20 = ZeroBits;
  memset(v24, 0, 0x1D8uLL);
  if ( !AttributeList
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v15, 1LL, v24),
        result >= 0) )
  {
    v25[6] = 0x1F800010000BLL;
    v25[31] = PspUserThreadStart;
    v25[16] = StartRoutine;
    v25[17] = Argument;
    *(_DWORD *)((char *)&v25[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v25[7] + 6) = 2818131;
    WORD1(v25[8]) = 43;
    LOWORD(v25[7]) = 51;
    LOWORD(v25[32]) = 639;
    LODWORD(v25[35]) = 8064;
    Thread = PspCreateThread(
               (__int64)ThreadHandle,
               DesiredAccess,
               (__int64)ObjectAttributes,
               (ULONG_PTR)ProcessHandle,
               0LL,
               (__int64)v24,
               v24[2],
               v25,
               (__int64)v23,
               CreateFlags,
               (__int64)StartRoutine,
               (__int64)Argument,
               (__int64)v19);
    PspDeleteCreateProcessContext(v24);
    return Thread;
  }
  return result;
}
