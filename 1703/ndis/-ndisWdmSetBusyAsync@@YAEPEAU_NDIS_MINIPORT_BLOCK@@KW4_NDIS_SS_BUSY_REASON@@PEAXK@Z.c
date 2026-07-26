/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D914
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0011810 (ndisSetBusyAsync.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001D998 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_qq @ 0x1C004FC94 (Template_qq.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005723C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C006CAD8 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006CC98 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006CDF4 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006E5B8 (ndisCancelDequeuedDirectOidRequests.c)
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
  unsigned __int32 v10; // r12d
  KIRQL v11; // r13
  unsigned int Value; // eax
  int LastResumeContext; // r9d
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST **v18; // [rsp+20h] [rbp-40h]
  char v19; // [rsp+40h] [rbp-20h]
  char v20; // [rsp+41h] [rbp-1Fh]
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
  v10 = 0;
  v23 = 0;
  v11 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x14) == 0 || (Value & 0x200) != 0 )
  {
    v19 = 1;
    v20 = ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, v24, (enum _NDIS_SS_BUSY_REASON)a3);
    ndisSelectiveSuspendSetResumeBusyReason(v14, 0, a3, 0);
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
      v10 = a3;
      if ( (unsigned __int8)byte_1C0092616 >= 4u )
        WPP_SF_qD(0x25u, &WPP_3059abd58ba5345e836db04510415190_Traceguids, (__int64)a1, a3);
      SelectiveSuspend->Flags.Value |= 0x40u;
      ndisScheduleWorkItemInternal((__int64)&SelectiveSuspend->IdleCancelWorkItem);
    }
    v7 = v21;
  }
  if ( (SelectiveSuspend->Flags.Value & 0x200) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
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
    if ( v10 && (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    {
      LODWORD(v18) = v10;
      Template_qq(v15, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, (__int64)v18);
    }
    if ( !v19 || !v20 )
      return 0;
  }
  return v8;
}
