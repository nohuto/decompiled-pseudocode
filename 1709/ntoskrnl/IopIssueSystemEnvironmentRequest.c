/*
 * XREFs of IopIssueSystemEnvironmentRequest @ 0x1406BCE54
 * Callers:
 *     IopIssueTrEERequest @ 0x1401FCB54 (IopIssueTrEERequest.c)
 *     IopEnumerateEnvironmentVariablesSysEnv @ 0x1406BC660 (IopEnumerateEnvironmentVariablesSysEnv.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x1406BCB60 (IopGetEnvironmentVariableSysEnv.c)
 *     IopQueryEnvironmentVariableInfoSysEnv @ 0x1406BD120 (IopQueryEnvironmentVariableInfoSysEnv.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x1406BD2D0 (IopSetEnvironmentVariableSysEnv.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140028A90 (KeExpandKernelStackAndCalloutEx.c)
 *     IoBuildDeviceIoControlRequest @ 0x140060810 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 */

__int64 __fastcall IopIssueSystemEnvironmentRequest(
        ULONG IoControlCode,
        BOOLEAN a2,
        struct _FILE_OBJECT *a3,
        struct _DEVICE_OBJECT *a4,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        _DWORD *a9)
{
  PIRP v13; // rax
  NTSTATUS v15; // eax
  unsigned int Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _QWORD Parameter[2]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+70h] [rbp-28h]
  struct _KEVENT Object; // [rsp+78h] [rbp-20h] BYREF

  KeInitializeEvent(&Object, NotificationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          a4,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          a2,
          &Object,
          &IoStatusBlock);
  if ( !v13 )
    return 3221225626LL;
  if ( a3 )
    v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
  Parameter[1] = v13;
  Parameter[0] = a4;
  v15 = KeExpandKernelStackAndCalloutEx(
          (PEXPAND_STACK_CALLOUT)IopIssueSystemEnvironmentCallout,
          Parameter,
          0x11800uLL,
          1u,
          0LL);
  Status = v15;
  if ( v15 < 0 )
  {
    if ( v15 == -1073741789 )
    {
      Status = -1073741801;
      if ( a9 )
        *a9 = 0;
    }
  }
  else
  {
    Status = v19;
    if ( v19 == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( a9 )
      *a9 = IoStatusBlock.Information;
  }
  return Status;
}
