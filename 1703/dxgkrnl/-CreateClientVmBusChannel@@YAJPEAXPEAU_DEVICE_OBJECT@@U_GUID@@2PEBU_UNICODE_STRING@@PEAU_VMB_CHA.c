/*
 * XREFs of ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0026200
 * Callers:
 *     ?CreateVmBusChannel@GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002711C (-CreateVmBusChannel@GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C002A128 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  int inited; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct VMBCHANNEL__ *v20; // [rsp+20h] [rbp-18h] BYREF
  void (*v21)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int); // [rsp+28h] [rbp-10h]

  v21 = a7;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 2135);
  *a9 = 0LL;
  v20 = 0LL;
  inited = VmbChannelAllocate(a2, 0LL, &v20);
  if ( inited < 0 )
    goto LABEL_8;
  VmbChannelInitSetMaximumPacketSize(v20, 0x10000LL);
  VmbClientChannelInitSetRingBufferPageCount(v20, 256LL, 256LL);
  VmbChannelInitSetStateChangeCallbacks(v20, a6);
  VmbChannelInitSetProcessPacketCallbacks(v20, v21, 0LL);
  VmbChannelSetPointer(v20, a1);
  inited = VmbClientChannelInitSetTargetPnp(v20, a3, a4, 0LL);
  if ( inited < 0
    || (LOBYTE(v13) = 1,
        VmbChannelSetIncomingProcessingAtPassive(v20, v13),
        VmbChannelInitSetFriendlyName(v20, a5),
        inited = VmbChannelEnable(v20),
        inited < 0) )
  {
LABEL_8:
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = inited;
    WdLogEvent5_WdError(v18);
    DestroyVmBusChannel(v20);
  }
  else
  {
    VmbChannelStart(v20);
    *a9 = v20;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 2135);
  return (unsigned int)inited;
}
