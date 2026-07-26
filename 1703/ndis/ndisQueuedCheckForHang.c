/*
 * XREFs of ndisQueuedCheckForHang @ 0x1C000FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetBusyAsync @ 0x1C0011810 (ndisSetBusyAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C24 (ndisMResetMiniportInternal.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 *     ndisMInvokeCheckForHang @ 0x1C00A6334 (ndisMInvokeCheckForHang.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // r14
  unsigned __int8 v3; // bp
  KIRQL v4; // r12
  unsigned int WSyncFlags; // eax
  KIRQL v6; // r14
  unsigned int PnPFlags; // r8d
  signed int v8; // r9d
  unsigned __int8 MajorNdisVersion; // cl
  ULONG v10; // esi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  __int64 v12; // rbx
  KIRQL v13; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v15; // bp
  __int64 v16; // rax
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // dl
  unsigned int v19; // ebx
  unsigned __int16 CFHangXTicks; // cx
  KIRQL v21; // bl
  NDIS_REFCOUNT_HANDLE__ *v22; // rbx
  unsigned int v23; // r9d
  struct _KEVENT *RemoveReadyEvent; // rcx

  v2 = 1;
  if ( !a1->SelectiveSuspend || (unsigned __int8)ndisSetBusyAsync((_DWORD)a1, 1, 49, 0, 0) )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      v21 = KfRaiseIrql(2u);
      v3 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
      if ( v21 != 2 )
        KeLowerIrql(v21);
    }
    else
    {
      v3 = ndisMInvokeCheckForHang(a1);
    }
    if ( a1->SelectiveSuspend )
      ndisClearBusy(a1, 1LL, 49LL);
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 657936;
    if ( !v3 && (a1->Flags & 0x1000) == 0 )
    {
      WSyncFlags = a1->WSyncFlags;
      if ( (WSyncFlags & 1) != 0 )
      {
        if ( (WSyncFlags & 2) != 0 )
        {
          v3 = 1;
          if ( (unsigned __int8)byte_1C0092618 >= 3u )
            WPP_SF_qq(23LL, &WPP_8a5864e380f63192cebb74f600d7ef38_Traceguids, a1, a1->PendingOidRequest);
        }
        else
        {
          CFHangXTicks = a1->CFHangXTicks;
          if ( CFHangXTicks )
            a1->CFHangXTicks = CFHangXTicks - 1;
          else
            a1->WSyncFlags = WSyncFlags | 2;
        }
      }
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v4);
    if ( v3 )
      ndisMResetMiniportInternal(a1);
  }
  else
  {
    v2 = 0;
  }
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( v2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 658000;
    if ( (a1->Flags & 0x80000000) == 0 )
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x20080000) == 0 )
      {
        v8 = 1000 * a1->CheckForHangSeconds;
        MajorNdisVersion = a1->MajorNdisVersion;
        v10 = v8 / 5;
        DriverHandle = a1->DriverHandle;
        if ( MajorNdisVersion < 6u )
        {
          if ( DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler
            && DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
          {
            goto LABEL_17;
          }
        }
        else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx
               && DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx )
        {
LABEL_17:
          if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu )
            v10 = 4000;
          a1->PnPFlags = PnPFlags & 0xDFFFFFFF;
          v12 = -10000LL * v8;
          KeClearEvent(&a1->CFHCompletedEvent);
          KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v12, 0, v10, &a1->WakeUpDpcTimer.Dpc);
        }
      }
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v6);
  }
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(25LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
  v13 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v15 = v13;
  if ( RefCountTracker )
  {
    if ( *((_BYTE *)RefCountTracker + 1) )
    {
      if ( *((_BYTE *)RefCountTracker + 1) == 1 )
      {
        v22 = RefCountTracker + 1330;
        v23 = *((_DWORD *)RefCountTracker + 1344);
        if ( v23 >> 17 < 0x3FFE && (unsigned __int16)v23 >> 1 == (v23 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)RefCountTracker + 95);
          *((_DWORD *)v22 + 14) &= 0x10001u;
        }
        else
        {
          if ( (v23 & 0xFFFE) == 0 && (v23 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 1330), 0);
        }
      }
    }
    else
    {
      v16 = *((_QWORD *)RefCountTracker + 1);
      if ( v16 && (v17 = *((_BYTE *)RefCountTracker + 3), v18 = 0, v17) )
      {
        while ( *(_BYTE *)(v16 + 2LL * v18) != 83 || !*(_BYTE *)(v16 + 2LL * v18 + 1) )
        {
          if ( ++v18 >= v17 )
            goto LABEL_31;
        }
        --*(_BYTE *)(v16 + 2LL * v18 + 1);
      }
      else
      {
LABEL_31:
        if ( !_bittestandreset((signed __int32 *)RefCountTracker + 6, 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
      }
    }
  }
  v19 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v19;
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_qD(14LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&a1->Ref.SpinLock, v15);
  if ( !v19 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(26LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
}
