/*
 * XREFs of ndisQueuedCheckForHang @ 0x1C0008280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ??1AutoAcquireMiniportSpinLock@@QEAA@XZ @ 0x1C003A708 (--1AutoAcquireMiniportSpinLock@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ndisMResetMiniportInternal @ 0x1C0061680 (ndisMResetMiniportInternal.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisClearBusy @ 0x1C0070730 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0071BD4 (ndisSetBusyAsync.c)
 *     ndisMInvokeCheckForHang @ 0x1C00AC0C4 (ndisMInvokeCheckForHang.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // bp
  unsigned __int8 v3; // si
  int v4; // esi
  unsigned int WSyncFlags; // eax
  unsigned __int16 CFHangXTicks; // cx
  KIRQL m_oldIrql; // dl
  __int64 v8; // r9
  KIRQL v9; // r15
  unsigned int PnPFlags; // r8d
  signed int v11; // r9d
  unsigned __int8 MajorNdisVersion; // cl
  ULONG v13; // esi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  bool v15; // zf
  __int64 v16; // rbx
  KIRQL v17; // al
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // r8
  KIRQL v19; // bp
  __int64 v20; // rcx
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // dl
  unsigned int v23; // ebx
  __int64 v24; // r9
  KIRQL v25; // bl
  KIRQL v26; // dl
  NDIS_REFCOUNT_HANDLE__ *v27; // rbx
  unsigned int v28; // edx
  int v29; // ecx
  char v30; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  AutoAcquireMiniportSpinLock v32; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v2 = 1;
  if ( a1->SelectiveSuspend && !(unsigned __int8)ndisSetBusyAsync((_DWORD)a1, 1, 49, 0, 0) )
  {
    v2 = 0;
    goto LABEL_19;
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    v25 = KfRaiseIrql(2u);
    v3 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
    if ( v25 != 2 )
      KeLowerIrql(v25);
  }
  else
  {
    v3 = ndisMInvokeCheckForHang(a1);
  }
  if ( a1->SelectiveSuspend )
    ndisClearBusy(a1, 1LL, 49LL);
  if ( !v3 )
  {
    if ( (a1->Flags & 0x1000) != 0 )
      goto LABEL_19;
    v4 = 0;
    while ( 1 )
    {
      if ( v4 )
      {
        Interval.QuadPart = -2500000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v32.m_miniport = a1;
      v32.m_oldIrql = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->LockThread = KeGetCurrentThread();
      a1->LockDbg = 65278;
      WSyncFlags = a1->WSyncFlags;
      if ( (WSyncFlags & 1) == 0 )
      {
        AutoAcquireMiniportSpinLock::~AutoAcquireMiniportSpinLock(&v32);
        goto LABEL_19;
      }
      if ( (WSyncFlags & 2) == 0 )
      {
        CFHangXTicks = a1->CFHangXTicks;
        if ( CFHangXTicks )
          a1->CFHangXTicks = CFHangXTicks - 1;
        else
          a1->WSyncFlags = WSyncFlags | 2;
        if ( v32.m_oldIrql == 254 )
        {
          a1->LockThread = 0LL;
          a1->LockDbg = 0;
          KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        }
        else if ( v32.m_oldIrql != 255 )
        {
          m_oldIrql = v32.m_oldIrql;
          a1->LockThread = 0LL;
          a1->LockDbg = 0;
          KeReleaseSpinLock(&a1->Lock, m_oldIrql);
        }
        goto LABEL_19;
      }
      v26 = v32.m_oldIrql;
      if ( v32.m_oldIrql == 254 )
        break;
      if ( v32.m_oldIrql != 255 )
      {
        a1->LockThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v26);
LABEL_58:
        v32.m_oldIrql = -1;
      }
      if ( ++v4 >= 2 )
      {
        if ( (unsigned __int8)byte_1C0099618 >= 3u )
          WPP_SF_qq(23LL, &WPP_a220dbba1db53d57c8c40116951fe210_Traceguids, a1, a1->PendingOidRequest);
        goto LABEL_62;
      }
    }
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_58;
  }
LABEL_62:
  ndisMResetMiniportInternal(a1);
LABEL_19:
  KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
  if ( !v2 )
    goto LABEL_32;
  v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 658034;
  if ( (a1->Flags & 0x80000000) == 0 )
  {
    PnPFlags = a1->PnPFlags;
    if ( (PnPFlags & 0x20080000) == 0 )
    {
      v11 = 1000 * a1->CheckForHangSeconds;
      MajorNdisVersion = a1->MajorNdisVersion;
      v13 = v11 / 5;
      DriverHandle = a1->DriverHandle;
      if ( MajorNdisVersion < 6u )
      {
        if ( DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
        {
          v15 = DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler == 0LL;
LABEL_25:
          if ( !v15 )
          {
            if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x1Eu )
              v13 = 4000;
            a1->PnPFlags = PnPFlags & 0xDFFFFFFF;
            v16 = -10000LL * v11;
            KeClearEvent(&a1->CFHCompletedEvent);
            KeSetCoalescableTimer(&a1->WakeUpDpcTimer.Timer, (LARGE_INTEGER)v16, 0, v13, &a1->WakeUpDpcTimer.Dpc);
          }
        }
      }
      else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx )
      {
        v15 = DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx == 0LL;
        goto LABEL_25;
      }
    }
  }
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v9);
LABEL_32:
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(25LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, v8);
  v17 = KeAcquireSpinLockRaiseToDpc(&a1->Ref.SpinLock);
  RefCountTracker = a1->RefCountTracker;
  v19 = v17;
  if ( RefCountTracker )
  {
    if ( (unsigned __int64)RefCountTracker - 2 <= 1 )
    {
      RefCountTracker = 0LL;
    }
    else if ( RefCountTracker == (NDIS_REFCOUNT_HANDLE__ *)1 )
    {
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    }
    if ( RefCountTracker )
    {
      if ( *((_BYTE *)RefCountTracker + 2) <= 0x53u )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)RefCountTracker, 0x53uLL);
      if ( *((_BYTE *)RefCountTracker + 1) )
      {
        if ( *((_BYTE *)RefCountTracker + 1) == 1 )
        {
          v27 = RefCountTracker + 1330;
          v28 = *((_DWORD *)RefCountTracker + 1344);
          v29 = (unsigned __int16)v28 >> 1;
          if ( v28 >> 17 < 0x3FFE && v29 == (v28 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)RefCountTracker + 95);
            *((_DWORD *)v27 + 14) &= 0x10001u;
          }
          else
          {
            if ( v29 == 0 && (v28 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 1330), 0);
          }
        }
      }
      else
      {
        v20 = *((_QWORD *)RefCountTracker + 1);
        if ( v20 && (v21 = *((_BYTE *)RefCountTracker + 3), v22 = 0, v21) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v20 + 2LL * v22) == 83 )
            {
              v30 = *(_BYTE *)(v20 + 2LL * v22 + 1);
              if ( v30 )
                break;
            }
            if ( ++v22 >= v21 )
              goto LABEL_44;
          }
          *(_BYTE *)(v20 + 2LL * v22 + 1) = v30 - 1;
        }
        else
        {
LABEL_44:
          if ( !_bittestandreset((signed __int32 *)RefCountTracker + 6, 0x13u) )
            ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)RefCountTracker, 0x53uLL);
        }
      }
    }
  }
  v23 = a1->Ref.ReferenceCount - 1;
  a1->Ref.ReferenceCount = v23;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(14LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, a1->Ref.ReferenceCount);
  KeReleaseSpinLock(&a1->Ref.SpinLock, v19);
  if ( !v23 )
  {
    RemoveReadyEvent = a1->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_q(26LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, v24);
}
