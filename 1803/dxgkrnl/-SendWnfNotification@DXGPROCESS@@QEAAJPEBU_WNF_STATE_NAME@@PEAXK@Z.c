/*
 * XREFs of ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C01B7738
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C018BFD4 (-Reset@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C018C190 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::SendWnfNotification(DXGPROCESS *this, const struct _WNF_STATE_NAME *a2, void *a3)
{
  HANDLE ProcessId; // rax
  __int64 v5; // rcx
  NTSTATUS updated; // ebx
  __int64 v7; // rax
  struct _CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp+18h] BYREF

  ProcessHandle = 0LL;
  ClientId.UniqueProcess = 0LL;
  ClientId.UniqueThread = 0LL;
  if ( *((_BYTE *)this + 320) )
    ProcessId = PsGetProcessId(PsInitialSystemProcess);
  else
    ProcessId = (HANDLE)*((_QWORD *)this + 8);
  ClientId.UniqueProcess = ProcessId;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  updated = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  if ( updated >= 0 )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, a3, 4LL, 0LL, ProcessHandle, 0, 0);
    if ( updated == -1073741431 )
      updated = 0;
    ZwClose(ProcessHandle);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = ClientId.UniqueProcess;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)updated;
}
