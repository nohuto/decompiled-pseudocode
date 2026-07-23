/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1800645D8
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     RtlCreateUserThread @ 0x180064570 (RtlCreateUserThread.c)
 *     RtlWow64SuspendThread @ 0x18008F2D0 (RtlWow64SuspendThread.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800CFE20 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8CB0 (RtlSetProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtCreateThreadEx @ 0x1800A17F0 (NtCreateThreadEx.c)
 */

NTSTATUS __fastcall RtlpCreateUserThreadEx(
        HANDLE ProcessHandle,
        void *a2,
        int a3,
        unsigned int a4,
        SIZE_T MaximumStackSize,
        SIZE_T StackSize,
        int a7,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        HANDLE *a10,
        _OWORD *a11)
{
  SIZE_T ZeroBits; // rsi
  char v13; // r9
  int v14; // edx
  char v15; // al
  int v16; // r8d
  ULONG CreateFlags; // ecx
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+B0h] [rbp-50h] BYREF

  ZeroBits = a4;
  v13 = a3;
  v20 = 0uLL;
  if ( (a3 & 0xFFFFFFE8) != 0 )
    return -1073741811;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a2;
  AttributeList.Attributes[0].Attribute = 65539LL;
  v14 = a3 & 1 | 2;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.TotalLength = 40LL;
  v15 = a3;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  v16 = v14 | 4;
  if ( (v15 & 4) == 0 )
    v16 = v14;
  AttributeList.Attributes[0].Value = (ULONG_PTR)&v20;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  CreateFlags = v16 | 0x10;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  if ( (v13 & 0x10) == 0 )
    CreateFlags = v16;
  result = NtCreateThreadEx(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             ProcessHandle,
             StartRoutine,
             Argument,
             CreateFlags,
             ZeroBits,
             StackSize,
             MaximumStackSize,
             &AttributeList);
  if ( result >= 0 )
  {
    if ( a10 )
      *a10 = ThreadHandle;
    else
      NtClose(ThreadHandle);
    if ( a11 )
      *a11 = v20;
    return 0;
  }
  return result;
}
