/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C0008250
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisUpdateOperationalStatus @ 0x1C0004FD4 (ndisUpdateOperationalStatus.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisMSetGeneralAttributes @ 0x1C00115A0 (ndisMSetGeneralAttributes.c)
 *     ndisPnPPortActivation @ 0x1C003C5AC (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0046740 (ndisOidPreSetPortAuthentication.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C01058B0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012D70 (-NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D998 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIsDefaultPortStateOperational @ 0x1C001E5FC (ndisIsDefaultPortStateOperational.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

char __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, char a2, KIRQL a3)
{
  unsigned int OperStatusFlags; // ebx
  _NET_IF_OPER_STATUS OperStatus; // esi
  _NDIS_IF_BLOCK *IfBlock; // rsi
  KIRQL v9; // bl
  _NET_IF_OPER_STATUS v10; // ecx
  _NET_IF_OPER_STATUS ifOperStatus; // edx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // ebp
  KIRQL v13; // al
  _NDIS_IF_BLOCK *v14; // rdi
  KIRQL v15; // si
  ULONG_PTR MpRefCountTracker; // r8
  __int64 v17; // rcx
  unsigned __int8 v20; // r10
  unsigned __int8 v21; // dl
  ULONG_PTR v22; // rbx
  unsigned int v23; // edx
  char v24; // al
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  char v27; // [rsp+50h] [rbp+8h]

  OperStatusFlags = a1->OperStatusFlags;
  OperStatus = a1->OperStatus;
  v27 = 0;
  a1->OperStatusFlags = 0;
  if ( a1->State == NdisMiniportHalted )
    goto LABEL_4;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
  {
    a1->OperStatusFlags = 2;
LABEL_4:
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_5;
  }
  if ( (unsigned __int8)ndisIsDefaultPortStateOperational() )
  {
    if ( (unsigned int)(a1->State - 5) <= 1 )
    {
      a1->OperStatusFlags |= 4u;
      a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    }
    else
    {
      *(_QWORD *)&a1->OperStatus = 1LL;
      if ( (OperStatusFlags & 8) != 0 )
        a1->OperStatusFlags = 0x1000000;
    }
  }
  else
  {
    a1->OperStatusFlags |= 1u;
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
  }
LABEL_5:
  if ( a1->OperStatus != OperStatus || a1->OperStatusFlags != OperStatusFlags )
    NdisTraceLoggingDeviceStatusChange(a1);
  IfBlock = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( a1->IfBlockAvailable )
  {
    IfBlock = a1->IfBlock;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker);
    ++IfBlock->MiniportLinkReference;
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v9);
  if ( IfBlock )
  {
    v10 = a1->OperStatus;
    ifOperStatus = IfBlock->ifOperStatus;
    MediaConnectState = IfBlock->MediaConnectState;
    IfBlock->ifOperStatus = v10;
    IfBlock->ifAdminStatus = a1->AdminStatus;
    IfBlock->MediaConnectState = a1->MediaConnectState;
    IfBlock->MediaDuplexState = a1->MediaDuplexState;
    IfBlock->RcvLinkSpeed = a1->RcvLinkSpeed;
    IfBlock->XmitLinkSpeed = a1->XmitLinkSpeed;
    IfBlock->ifOperStatusFlags = a1->OperStatusFlags;
    if ( ifOperStatus != v10 )
    {
      v27 = 1;
      if ( a2 )
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, a3);
        ndisNsiScheduleIfBlockRodChangeNotification(IfBlock, &IfBlock->ifOperStatus, 8LL, 536LL);
        a3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 2244082;
      }
    }
    if ( MediaConnectState != IfBlock->MediaConnectState && a2 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, a3);
      ndisNsiScheduleIfBlockRodChangeNotification(IfBlock, &IfBlock->MediaConnectState, 4LL, 644LL);
      KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      a1->LockDbg = 2244095;
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    v14 = a1->IfBlock;
    v15 = v13;
    MpRefCountTracker = (ULONG_PTR)v14->MpRefCountTracker;
    if ( MpRefCountTracker )
    {
      if ( *(_BYTE *)(MpRefCountTracker + 1) )
      {
        if ( *(_BYTE *)(MpRefCountTracker + 1) == 1 )
        {
          v22 = MpRefCountTracker + 648;
          v23 = *(_DWORD *)(MpRefCountTracker + 704);
          if ( v23 >> 17 < 0x3FFE && (unsigned __int16)v23 >> 1 == (v23 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 648));
            *(_DWORD *)(v22 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v23 & 0xFFFE) == 0 && (v23 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 0xAuLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 648), 0);
          }
        }
      }
      else
      {
        v17 = *(_QWORD *)(MpRefCountTracker + 8);
        if ( v17 && (v20 = *(_BYTE *)(MpRefCountTracker + 3), v21 = 0, v20) )
        {
          while ( 1 )
          {
            if ( *(_BYTE *)(v17 + 2LL * v21) == 10 )
            {
              v24 = *(_BYTE *)(v17 + 2LL * v21 + 1);
              if ( v24 )
                break;
            }
            if ( ++v21 >= v20 )
              goto LABEL_15;
          }
          *(_BYTE *)(v17 + 2LL * v21 + 1) = v24 - 1;
        }
        else
        {
LABEL_15:
          if ( !_bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 0xAu) )
            ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 0xAuLL);
        }
      }
    }
    if ( v14->MiniportLinkReference-- == 1 )
    {
      Miniport = v14->Miniport;
      if ( Miniport )
      {
        IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
        if ( IfBlockPointerRefZeroEvent )
          KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
      }
    }
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v15);
  }
  return v27;
}
