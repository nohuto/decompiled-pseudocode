/*
 * XREFs of ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C017A33C
 * Callers:
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017A738 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C017A908 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C017ADD0 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

__int64 __fastcall CreateClientVmBusChannel(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a6,
        void (*a7)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a8)(struct VMBCHANNEL__ *, unsigned int),
        struct VMBCHANNEL__ **a9)
{
  __int64 v13; // rcx
  int inited; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct VMBCHANNEL__ *v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+28h] [rbp-20h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h]
  void (*v22)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int); // [rsp+38h] [rbp-10h]

  v21 = 0LL;
  v22 = a7;
  v20 = 2135;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2135);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2135);
  *a9 = 0LL;
  v19 = 0LL;
  inited = VmbChannelAllocate(a2, 0LL, &v19);
  if ( inited < 0 )
    goto LABEL_8;
  VmbChannelInitSetMaximumPacketSize(v19, 0x20000LL);
  VmbClientChannelInitSetRingBufferPageCount(v19, 256LL, 256LL);
  VmbChannelInitSetStateChangeCallbacks(v19, a6);
  VmbChannelInitSetProcessPacketCallbacks(v19, v22, 0LL);
  VmbChannelSetPointer(v19, a1);
  inited = VmbClientChannelInitSetTargetPnp(v19, a3, a4, 0LL);
  if ( inited < 0
    || (VmbChannelSetIncomingProcessingAtPassive(v19, 0LL),
        VmbChannelInitSetFriendlyName(v19, a5),
        inited = VmbChannelEnable(v19),
        inited < 0) )
  {
LABEL_8:
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = inited;
    WdLogEvent5_WdError(v15);
    DestroyVmBusChannel(v19);
  }
  else
  {
    VmbChannelStart(v19);
    *a9 = v19;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v20);
  return (unsigned int)inited;
}
