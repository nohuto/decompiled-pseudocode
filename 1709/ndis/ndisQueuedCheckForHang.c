/*
 * XREFs of ndisQueuedCheckForHang @ 0x1C00198D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C00392CC (--1AutoAcquireMiniportSpinLock@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ndisMResetMiniportInternal @ 0x1C0060C64 (ndisMResetMiniportInternal.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0071374 (ndisSetBusyAsync.c)
 *     ndisMInvokeCheckForHang @ 0x1C00C219C (ndisMInvokeCheckForHang.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // bp
  unsigned __int8 v3; // si
  int v4; // esi
  unsigned int WSyncFlags; // ecx
  KIRQL v6; // r15
  unsigned int PnPFlags; // r8d
  signed int v8; // r9d
  unsigned __int8 MajorNdisVersion; // cl
  ULONG v10; // esi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  __int64 v12; // rbx
  KIRQL v13; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v15; // bp
  __int64 v16; // rcx
  unsigned __int8 v17; // r10
  unsigned __int8 v18; // dl
  unsigned int v19; // ebx
  KIRQL v20; // dl
  KIRQL v21; // bl
  KIRQL m_oldIrql; // dl
  unsigned __int16 CFHangXTicks; // ax
  NDIS_REFCOUNT_HANDLE__ *v24; // rbx
  unsigned int v25; // r9d
  char v26; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  AutoAcquireMiniportSpinLock v28; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v2 = 1;
  if ( a1->SelectiveSuspend && !(unsigned __int8)ndisSetBusyAsync((_DWORD)a1, 1, 49, 0, 0) )
  {
    v2 = 0;
    goto LABEL_13;
  }
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
  if ( v3 )
  {
LABEL_55:
    ndisMResetMiniportInternal(a1);
    goto LABEL_13;
  }
  if ( (a1->Flags & 0x1000) != 0 )
    goto LABEL_13;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 )
    {
      Interval.QuadPart = -2500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v28.m_miniport = a1;
    v28.m_oldIrql = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    a1->LockDbg = 65278;
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 1) == 0 )
    {
      AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock(&v28);
      goto LABEL_13;
    }
    if ( (WSyncFlags & 2) == 0 )
      break;
    m_oldIrql = v28.m_oldIrql;
    if ( v28.m_oldIrql == 254 )
    {
      a1->LockThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      goto LABEL_51;
    }
    if ( v28.m_oldIrql != 255 )
    {
      a1->LockThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, m_oldIrql);
LABEL_51:
      v28.m_oldIrql = -1;
    }
    if ( ++v4 >= 2 )
    {
      if ( (unsigned __int8)byte_1C0098758 >= 3u )
        WPP_SF_qq(23LL, &WPP_89199a78c9ed372c807b20ed02a65825_Traceguids, a1, a1->PendingOidRequest);
      goto LABEL_55;
    }
  }
  CFHangXTicks = a1->CFHangXTicks;
  if ( CFHangXTicks )
    a1->CFHangXTicks = CFHangXTicks - 1;
  else
    a1->WSyncFlags = WSyncFlags | 2;
  if ( v28.m_oldIrql == 254 )
  {
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
  else if ( v28.m_oldIrql != 255 )
  {
    v20 = v28.m_oldIrql;
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v20);
  }
LABEL_13:
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( v2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 658034;
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
LABEL_19:
            if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu )
              v10 = 4000;
            a1->PnPFlags = PnPFlags & 0xDFFFFFFF;
            v12 = -10000LL * v8;
            KeClearEvent(&a1->CFHCompletedEvent);
            KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v12, 0, v10, &a1->WakeUpDpcTimer.Dpc);
          }
        }
        else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx
               && DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx )
        {
          goto LABEL_19;
        }
      }
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v6);
  }
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(25LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  v13 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v15 = v13;
  if ( RefCountTracker )
  {
    if ( *((_BYTE *)RefCountTracker + 1) )
    {
      if ( *((_BYTE *)RefCountTracker + 1) == 1 )
      {
        v24 = RefCountTracker + 1330;
        v25 = *((_DWORD *)RefCountTracker + 1344);
        if ( v25 >> 17 < 0x3FFE && (unsigned __int16)v25 >> 1 == (v25 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)RefCountTracker + 95);
          *((_DWORD *)v24 + 14) &= 0x10001u;
        }
        else
        {
          if ( (v25 & 0xFFFE) == 0 && (v25 & 1) == 0 )
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
        while ( 1 )
        {
          if ( *(_BYTE *)(v16 + 2LL * v18) == 83 )
          {
            v26 = *(_BYTE *)(v16 + 2LL * v18 + 1);
            if ( v26 )
              break;
          }
          if ( ++v18 >= v17 )
            goto LABEL_33;
        }
        *(_BYTE *)(v16 + 2LL * v18 + 1) = v26 - 1;
      }
      else
      {
LABEL_33:
        if ( !_bittestandreset((signed __int32 *)RefCountTracker + 6, 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
      }
    }
  }
  v19 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v19;
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_qD(14LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&a1->Ref.SpinLock, v15);
  if ( !v19 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(26LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
}
