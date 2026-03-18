/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0026380
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z @ 0x1C0026E74 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESS@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C0026FC0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall CreateServerVmBusChannel(
        __int64 a1,
        void *a2,
        struct _DEVICE_OBJECT *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        const struct _UNICODE_STRING *a6,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a7,
        void (*a8)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a9)(struct VMBCHANNEL__ *, unsigned int),
        struct VMBCHANNEL__ **a10)
{
  PDEVICE_OBJECT v11; // rbx
  void *v12; // r15
  struct VMBCHANNEL__ **v14; // rdi
  PFILE_OBJECT v15; // rcx
  NTSTATUS DeviceObjectPointer; // ebx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+20h] [rbp-30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+28h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  __int128 v25; // [rsp+40h] [rbp-10h] BYREF
  struct VMBCHANNEL__ *v26; // [rsp+80h] [rbp+30h] BYREF

  v11 = a3;
  v12 = a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 2135);
  v14 = a10;
  FileObject = 0LL;
  DeviceObject = 0LL;
  *a10 = 0LL;
  if ( !v11 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)&::DeviceObject.Queue.Wcb.NumberOfChannels);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_18;
    v11 = DeviceObject;
  }
  LOBYTE(a2) = 1;
  DeviceObjectPointer = VmbChannelAllocate(v11, a2, &v26);
  if ( DeviceObjectPointer >= 0 )
  {
    DeviceObjectPointer = VmbServerChannelInitSetVmbusHandle(v26, a1);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_15;
    DeviceObjectPointer = VmbChannelInitSetMaximumPacketSize(v26, 0x10000LL);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_15;
    VmbChannelSetPointer(v26, v12);
    v25 = (__int128)*a4;
    DestinationString = (struct _UNICODE_STRING)*a5;
    DeviceObjectPointer = VmbServerChannelInitSetTargetInterfaceId(v26, &v25, &DestinationString);
    if ( DeviceObjectPointer < 0
      || (DeviceObjectPointer = VmbChannelInitSetStateChangeCallbacks(v26, a7), DeviceObjectPointer < 0)
      || (DeviceObjectPointer = VmbChannelInitSetProcessPacketCallbacks(v26, a8, a9), DeviceObjectPointer < 0)
      || (VmbServerChannelInitSetFlags(v26, 2LL),
          VmbChannelInitSetFriendlyName(v26, a6),
          DeviceObjectPointer = VmbChannelEnable(v26),
          DeviceObjectPointer < 0) )
    {
LABEL_15:
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = DeviceObjectPointer;
      WdLogEvent5_WdError(v20);
      VmbChannelCleanup(v26);
    }
    else
    {
      VmbChannelStart(v26);
      *v14 = v26;
    }
  }
  v15 = FileObject;
  if ( FileObject )
    ObfDereferenceObject(FileObject);
LABEL_18:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v15, &EventProfilerExit, v17, 2135);
  return (unsigned int)DeviceObjectPointer;
}
