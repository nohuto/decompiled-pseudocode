/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EFAC
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0071374 (ndisSetBusyAsync.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C0022FEC (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     McTemplateK0qq @ 0x1C004E838 (McTemplateK0qq.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005638C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C006E0F8 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006E314 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006E470 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006FC78 (ndisCancelDequeuedDirectOidRequests.c)
 */

char __fastcall ndisWdmSetBusyAsync(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned __int32 a3,
        void *a4,
        unsigned int a5)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  struct _NET_BUFFER_LIST *v7; // rdi
  char v8; // si
  unsigned int Arg1; // r12d
  __int64 v11; // r9
  KIRQL v12; // r13
  unsigned int Value; // eax
  int LastResumeContext; // r9d
  _DWORD *v15; // rcx
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rax
  char v19; // [rsp+40h] [rbp-20h]
  unsigned __int8 v20; // [rsp+41h] [rbp-1Fh]
  struct _NET_BUFFER_LIST *v21; // [rsp+48h] [rbp-18h] BYREF
  struct _LIST_ENTRY v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v23; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+48h]
  void *v25; // [rsp+B8h] [rbp+58h]

  v25 = a4;
  v24 = a2;
  SelectiveSuspend = a1->SelectiveSuspend;
  v22.Blink = &v22;
  v7 = 0LL;
  v8 = 1;
  v22.Flink = &v22;
  v20 = 1;
  v21 = 0LL;
  Arg1 = 0;
  v23 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x14) == 0 || (Value & 0x200) != 0 )
  {
    v19 = 1;
    v20 = ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, v24, (enum _NDIS_SS_BUSY_REASON)a3, v11);
    ndisSelectiveSuspendSetResumeBusyReason(v15, 0, a3, 0);
  }
  else
  {
    v19 = 0;
    ndisPendWorkOnSetBusyAsyncLocked(
      SelectiveSuspend,
      (enum _NDIS_SS_BUSY_REASON)a3,
      (unsigned int *)v25,
      a5,
      &v21,
      &v22,
      &v23);
    if ( v23 && (SelectiveSuspend->Flags.Value & 0xC0) == 0 )
    {
      if ( a3 == 50 )
        LastResumeContext = SelectiveSuspend->LastResumeContext;
      else
        LastResumeContext = 0;
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 1, a3, LastResumeContext);
      Arg1 = a3;
      if ( (unsigned __int8)byte_1C0098756 >= 4u )
        WPP_SF_qD(0x25u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)a1, a3);
      SelectiveSuspend->Flags.Value |= 0x40u;
      ndisScheduleWorkItemInternal((__int64)&SelectiveSuspend->IdleCancelWorkItem);
    }
    v7 = v21;
  }
  if ( (SelectiveSuspend->Flags.Value & 0x200) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v12);
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v12);
    if ( v7 )
    {
      Alignment = v7;
      do
      {
        Alignment->Status = -1071448052;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal((__int64)a1, v7, 0, 0);
    }
    if ( v22.Flink != &v22 )
      ndisCancelDequeuedDirectOidRequests(a1, &v22);
    if ( Arg1 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0qq(v16, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, Arg1);
    if ( !v19 || !v20 )
      return 0;
  }
  return v8;
}
