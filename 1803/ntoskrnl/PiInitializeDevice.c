/*
 * XREFs of PiInitializeDevice @ 0x14073B304
 * Callers:
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x140147B9C (PpDevNodeInsertIntoTree.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PnpUnicodeStringToWstrFree @ 0x140509650 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140509688 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PnpSetPlugPlayEvent @ 0x1405CB15C (PnpSetPlugPlayEvent.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1405CC244 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1405DC3A8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PipAllocateDeviceNode @ 0x1405DC620 (PipAllocateDeviceNode.c)
 *     PnpConcatenateUnicodeStrings @ 0x1405F5438 (PnpConcatenateUnicodeStrings.c)
 *     PnpAllocateDeviceInstancePath @ 0x14064F2B0 (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14072C984 (PiDevCfgGetFailedInstallProblemStatus.c)
 */

__int64 __fastcall PiInitializeDevice(PCUNICODE_STRING SourceString)
{
  WCHAR *PoolWithTag; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v4; // rax
  int DeviceInstancePath; // edi
  __int16 *v6; // rbx
  unsigned __int16 Length; // r15
  NTSTATUS v8; // eax
  PDEVICE_OBJECT v9; // r14
  int DeviceNode; // eax
  char *v11; // rsi
  __int16 v12; // ax
  int FailedInstallProblemStatus; // r8d
  int v14; // edx
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v20; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-30h] BYREF
  __int16 *v23; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v27; // [rsp+C8h] [rbp+48h]
  int v28; // [rsp+D0h] [rbp+50h] BYREF
  int v29; // [rsp+D8h] [rbp+58h] BYREF

  P = 0LL;
  PoolWithTag = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  PpDevNodeLockTree(1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v27 = 1;
  v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)SourceString, 0x43706E50u);
  DeviceObject = v4;
  if ( !v4 )
  {
    DeviceInstancePath = PnpUnicodeStringToWstr(&v23, 0LL, &SourceString->Length);
    if ( DeviceInstancePath < 0 )
      goto LABEL_40;
    DeviceInstancePath = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( DeviceInstancePath < 0 )
      goto LABEL_40;
    v6 = v23;
    DeviceInstancePath = CmOpenDeviceRegKey(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)v23,
                           0x10u,
                           0,
                           983103,
                           0,
                           (__int64)&Handle,
                           0LL);
    if ( DeviceInstancePath < 0 )
      goto LABEL_40;
    *(_DWORD *)&DestinationString.Length = 0;
    v28 = 512;
    DestinationString.Buffer = 0LL;
    Length = 0;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_40;
    }
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v6,
                (__int64)Handle,
                5,
                (__int64)&v29,
                (__int64)PoolWithTag,
                (__int64)&v28,
                0) >= 0
      && v29 == 1
      && v28 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
      {
        Length = DestinationString.Length;
      }
      else
      {
        *(_DWORD *)&DestinationString.Length = 0;
        Length = 0;
        DestinationString.Buffer = 0LL;
      }
    }
    v8 = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
    v9 = DeviceObject;
    DeviceInstancePath = v8;
    if ( v8 < 0 )
      goto LABEL_37;
    DeviceObject->Flags |= 0x1000u;
    DeviceNode = PipAllocateDeviceNode((__int64)v9, (void **)&v24);
    v11 = (char *)v24;
    DeviceInstancePath = DeviceNode;
    if ( !v24 )
    {
      if ( DeviceNode == -1073740946 )
        DeviceInstancePath = -1073741670;
LABEL_36:
      if ( DeviceInstancePath >= 0 )
        goto LABEL_39;
      goto LABEL_37;
    }
    PipSetDevNodeFlags(v24, 17);
    PipSetDevNodeState((__int64)v11, 770);
    v20 = 0;
    v28 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v6,
                (__int64)Handle,
                11,
                (__int64)&v29,
                (__int64)&v20,
                (__int64)&v28,
                0) >= 0 )
    {
      if ( v29 == 4 && v28 == 4 )
      {
        v12 = v20;
      }
      else
      {
        v12 = 0;
        v20 = 0;
      }
      if ( (v12 & 0x20) != 0 )
      {
        FailedInstallProblemStatus = 0;
        v14 = 18;
LABEL_29:
        PipSetDevNodeProblem((__int64)v11, v14, FailedInstallProblemStatus);
        goto LABEL_30;
      }
      if ( (v12 & 0x2000) != 0 )
      {
        FailedInstallProblemStatus = 0;
        v14 = 16;
        goto LABEL_29;
      }
      if ( (v12 & 0x40) != 0 )
      {
        FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus((__int64)v6, (__int64)Handle);
        v14 = 28;
        goto LABEL_29;
      }
    }
LABEL_30:
    DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v11, (unsigned int)SourceString->Length + 2);
    if ( DeviceInstancePath >= 0 )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 40), SourceString);
      if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v11 + 56), &DestinationString) < 0 )
      {
        *((_DWORD *)v11 + 14) = 0;
        *((_QWORD *)v11 + 8) = 0LL;
      }
      DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v11 + 4), (__int64)(v11 + 40));
      if ( DeviceInstancePath >= 0 )
      {
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v11);
        ObfReferenceObject(v9);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v15 = (_QWORD *)v24;
        v27 = 0;
        PnpQueryAndSaveDeviceNodeCapabilities(v24);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, v15[6], 1);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v17, v15[6], 14);
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, *(_QWORD *)(IopRootDeviceNode + 48), 15);
        PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *((_QWORD **)v11 + 4));
        v6 = v23;
        v9 = DeviceObject;
        goto LABEL_36;
      }
    }
LABEL_37:
    if ( v9 )
      IoDeleteDevice(v9);
LABEL_39:
    if ( !v27 )
      goto LABEL_41;
    goto LABEL_40;
  }
  ObfDereferenceObjectWithTag(v4, 0x43706E50u);
  DeviceInstancePath = 0;
LABEL_40:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v6 = v23;
LABEL_41:
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( v6 )
    PnpUnicodeStringToWstrFree(v6, (__int64)SourceString);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInstancePath;
}
