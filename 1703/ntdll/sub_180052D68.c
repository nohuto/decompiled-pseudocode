/*
 * XREFs of sub_180052D68 @ 0x180052D68
 * Callers:
 *     RtlCreateUserThread @ 0x180052D00 (RtlCreateUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D5120 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x1800A6A10 (ZwCreateThreadEx.c)
 */

NTSTATUS __fastcall sub_180052D68(
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
  result = ZwCreateThreadEx(
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
      ZwClose(ThreadHandle);
    if ( a11 )
      *a11 = v20;
    return 0;
  }
  return result;
}
