/*
 * XREFs of ACPIProcessorContainerStartDeviceWorker @ 0x1C0056030
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIProcessorContainerStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rbx
  _QWORD *v4; // rdi
  unsigned __int8 MinorFunction; // si
  KIRQL v6; // r8
  __int64 i; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  char v13; // r8
  const char *v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = (_QWORD *)DeviceExtension;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = v4[93]; ; i = *(_QWORD *)(i + 744) )
    {
      if ( !i )
      {
        v8 = (_QWORD *)qword_1C00769D8;
        v9 = v4 + 23;
        if ( *(__int64 **)qword_1C00769D8 != &AcpiProcessorContainerRootList )
          __fastfail(3u);
        *v9 = &AcpiProcessorContainerRootList;
        v4[24] = v8;
        *v8 = v9;
        qword_1C00769D8 = (__int64)(v4 + 23);
        goto LABEL_12;
      }
      if ( (*(_QWORD *)(i + 952) & 0x8000000000LL) != 0 )
        break;
    }
    v10 = i + 200;
    v11 = v4 + 23;
    v12 = *(_QWORD **)(v10 + 8);
    if ( *v12 != v10 )
      __fastfail(3u);
    *v11 = v10;
    v4[24] = v12;
    *v12 = v11;
    *(_QWORD *)(v10 + 8) = v11;
LABEL_12:
    ++AcpiProcessorContainerCount;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  v3->IoStatus.Status = 0;
  v3->IoStatus.Information = 0LL;
  IofCompleteRequest(v3, 0);
  v13 = 0;
  v14 = byte_1C0066CD0;
  v15 = byte_1C0066CD0;
  if ( v4 )
  {
    v16 = v4[1];
    v13 = (char)v4;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v14 = (const char *)v4[70];
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = (const char *)v4[71];
    }
  }
  v17 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v17 = 26LL;
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0xBu,
           (__int64)&WPP_6f0d390373d639d0c7f89ba738144938_Traceguids,
           (char)v3,
           ACPIDispatchPnpTableNames[v17],
           0,
           v13,
           v14,
           v15);
}
