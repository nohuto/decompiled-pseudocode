/*
 * XREFs of InitializeGraphicsInfrastructure @ 0x1C006AB0C
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     DlpLoadDxgkrnl @ 0x1C006AD04 (DlpLoadDxgkrnl.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 InitializeGraphicsInfrastructure()
{
  int Dxgkrnl; // eax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rbx
  IRP *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  IRP *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-41h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+80h] [rbp-29h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  int v27; // [rsp+C0h] [rbp+17h]
  _BYTE v28[40]; // [rsp+C8h] [rbp+1Fh] BYREF
  int InputBuffer; // [rsp+110h] [rbp+67h] BYREF
  int v30; // [rsp+118h] [rbp+6Fh] BYREF

  Dxgkrnl = DlpLoadDxgkrnl();
  v3 = Dxgkrnl;
  if ( (int)(Dxgkrnl + 0x80000000) >= 0 && Dxgkrnl != -1073741554 )
  {
    v20 = WdLogNewEntry5_WdError(0x80000000LL, v1, v2);
    *(_QWORD *)(v20 + 24) = v3;
    goto LABEL_17;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  gDxgkInterface.LowPart = 1771504;
  v4 = IoBuildDeviceIoControlRequest(
         0x23E057u,
         gpDxgkDeviceObject,
         &gDxgkInterface,
         0x7F0u,
         &gDxgkInterface,
         0x7F0u,
         1u,
         &Event,
         &IoStatusBlock);
  if ( v4 )
  {
    LODWORD(v3) = IofCallDriver(gpDxgkDeviceObject, v4);
    if ( (_DWORD)v3 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      LODWORD(v3) = IoStatusBlock.Status;
    }
    if ( (int)v3 >= 0 )
    {
      KeResetEvent(&Event);
      InputBuffer = 1;
      v11 = IoBuildDeviceIoControlRequest(
              0x23E067u,
              gpDxgkDeviceObject,
              &InputBuffer,
              4u,
              0LL,
              0,
              1u,
              &Event,
              &IoStatusBlock);
      if ( v11 && IofCallDriver(gpDxgkDeviceObject, v11) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
      if ( PsGetProcessWin32Process(CurrentProcess) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v22);
      }
      v30 = 0;
      QueryTable.QueryRoutine = 0LL;
      v26 = 0LL;
      v27 = 0;
      QueryTable.Name = L"DisableLddmSpriteTearDown";
      QueryTable.EntryContext = &gbDisableLddmSpriteTearDown;
      QueryTable.DefaultData = &v30;
      gdwDirectDrawContext = 4;
      QueryTable.Flags = 288;
      QueryTable.DefaultType = 67108868;
      QueryTable.DefaultLength = 4;
      memset(v28, 0, sizeof(v28));
      RtlQueryRegistryValues(2u, L"GraphicsDrivers", &QueryTable, 0LL, 0LL);
LABEL_12:
      if ( (int)v3 >= 0 )
        return (unsigned int)v3;
      goto LABEL_19;
    }
    v20 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v20 + 24) = (int)v3;
LABEL_17:
    WdLogEvent5_WdError(v20);
    goto LABEL_12;
  }
  LODWORD(v3) = -1073741670;
  v21 = WdLogNewEntry5_WdError(v6, v5, v7);
  *(_QWORD *)(v21 + 24) = -1073741670LL;
  WdLogEvent5_WdError(v21);
LABEL_19:
  memset(&gDxgkInterface, 0, 0x7F0uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return (unsigned int)v3;
}
