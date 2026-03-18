/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C017A4E0
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C017AB0C (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C017AC6C (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
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
        unsigned __int16 a10,
        struct VMBCHANNEL__ **a11)
{
  PDEVICE_OBJECT v12; // rbx
  __int64 v15; // rdx
  struct VMBCHANNEL__ **v16; // rdi
  __int64 v17; // rcx
  int inited; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  PDEVICE_OBJECT DeviceObject; // [rsp+20h] [rbp-40h] BYREF
  PFILE_OBJECT FileObject; // [rsp+28h] [rbp-38h] BYREF
  int v27; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+38h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  __int128 v30; // [rsp+50h] [rbp-10h] BYREF
  struct VMBCHANNEL__ *v31; // [rsp+90h] [rbp+30h] BYREF

  v28 = 0LL;
  v12 = a3;
  v27 = 2135;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2135);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2135);
  v16 = a11;
  FileObject = 0LL;
  DeviceObject = 0LL;
  *a11 = 0LL;
  if ( !v12 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
    LODWORD(v12) = IoGetDeviceObjectPointer(&DestinationString, 0xC0000000, &FileObject, &DeviceObject);
    if ( (int)v12 < 0 )
      goto LABEL_22;
    v12 = DeviceObject;
  }
  LOBYTE(v15) = 1;
  LODWORD(v12) = VmbChannelAllocate(v12, v15, &v31);
  if ( (int)v12 >= 0 )
  {
    LODWORD(v12) = VmbServerChannelInitSetVmbusHandle(v31, a1);
    if ( (int)v12 >= 0 )
    {
      LODWORD(v12) = VmbChannelInitSetMaximumPacketSize(v31, 0x20000LL);
      if ( (int)v12 >= 0 )
      {
        VmbChannelSetPointer(v31, a2);
        v30 = (__int128)*a4;
        DestinationString = (struct _UNICODE_STRING)*a5;
        LODWORD(v12) = VmbServerChannelInitSetTargetInterfaceId(v31, &v30, &DestinationString);
        if ( (int)v12 >= 0 )
        {
          LODWORD(v12) = VmbChannelInitSetStateChangeCallbacks(v31, a7);
          if ( (int)v12 >= 0 )
          {
            LODWORD(v12) = VmbChannelInitSetProcessPacketCallbacks(v31, a8, a9);
            if ( (int)v12 >= 0 )
            {
              VmbServerChannelInitSetFlags(v31, 2LL);
              VmbChannelInitSetFriendlyName(v31, a6);
              inited = VmbServerChannelInitSetMmioMegabytes(v31, a10, 0LL);
              v12 = (PDEVICE_OBJECT)inited;
              if ( inited < 0 )
              {
                v20 = WdLogNewEntry5_WdAssertion(v19);
                *(_QWORD *)(v20 + 24) = v12;
                WdLogEvent5_WdAssertion(v20);
                goto LABEL_17;
              }
              LODWORD(v12) = VmbChannelEnable(v31);
              if ( (int)v12 >= 0 )
              {
                VmbChannelStart(v31);
LABEL_17:
                if ( (int)v12 >= 0 )
                {
                  *v16 = v31;
                  goto LABEL_20;
                }
              }
            }
          }
        }
      }
    }
    v21 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v21 + 24) = (int)v12;
    WdLogEvent5_WdError(v21);
    VmbChannelCleanup(v31);
  }
LABEL_20:
  if ( FileObject )
    ObfDereferenceObject(FileObject);
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v27);
  return (unsigned int)v12;
}
