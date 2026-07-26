/*
 * XREFs of ndisIfSetInterfaceState @ 0x1C00194BC
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C0014630 (ndisMSetGeneralAttributes.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisUpdateOperationalStatus @ 0x1C0019E64 (ndisUpdateOperationalStatus.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisPnPPortActivation @ 0x1C003FA74 (ndisPnPPortActivation.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0049360 (ndisOidPreSetPortAuthentication.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015968 (-NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0019784 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D8D4 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIsDefaultPortStateOperational @ 0x1C0022D9C (ndisIsDefaultPortStateOperational.c)
 */

char __fastcall ndisIfSetInterfaceState(const struct _TlgProvider_t *a1, char a2, KIRQL a3)
{
  unsigned int AnnotationFunc_high; // ebx
  _NET_IF_OPER_STATUS AnnotationFunc; // esi
  char v7; // bp
  _NDIS_IF_BLOCK *RegHandle; // rsi
  KIRQL v9; // bl
  _NET_IF_OPER_STATUS v10; // ecx
  _NET_IF_OPER_STATUS ifOperStatus; // edx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // r12d
  KIRQL v13; // cl
  KIRQL v14; // bl

  AnnotationFunc_high = HIDWORD(a1[63].AnnotationFunc);
  AnnotationFunc = (_NET_IF_OPER_STATUS)a1[63].AnnotationFunc;
  HIDWORD(a1[63].AnnotationFunc) = 0;
  v7 = 0;
  if ( LODWORD(a1[35].KeywordAny) == 1 )
    goto LABEL_4;
  if ( LODWORD(a1[7].RegHandle) != 1 )
  {
    HIDWORD(a1[63].AnnotationFunc) = 2;
LABEL_4:
    LODWORD(a1[63].AnnotationFunc) = 2;
    goto LABEL_5;
  }
  if ( (unsigned __int8)ndisIsDefaultPortStateOperational() )
  {
    if ( (unsigned int)(LODWORD(a1[35].KeywordAny) - 5) <= 1 )
    {
      HIDWORD(a1[63].AnnotationFunc) |= 4u;
      LODWORD(a1[63].AnnotationFunc) = 5;
    }
    else
    {
      a1[63].AnnotationFunc = (void (__fastcall *)())1;
      if ( (AnnotationFunc_high & 8) != 0 )
        HIDWORD(a1[63].AnnotationFunc) = 0x1000000;
    }
  }
  else
  {
    HIDWORD(a1[63].AnnotationFunc) |= 1u;
    LODWORD(a1[63].AnnotationFunc) = 2;
  }
LABEL_5:
  if ( LODWORD(a1[63].AnnotationFunc) != AnnotationFunc || HIDWORD(a1[63].AnnotationFunc) != AnnotationFunc_high )
    NdisTraceLoggingDeviceStatusChange(a1);
  RegHandle = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( LOBYTE(a1[63].KeywordAll) )
  {
    RegHandle = (_NDIS_IF_BLOCK *)a1[63].RegHandle;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RegHandle->MpRefCountTracker);
    ++RegHandle->MiniportLinkReference;
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v9);
  if ( RegHandle )
  {
    v10 = (_NET_IF_OPER_STATUS)a1[63].AnnotationFunc;
    ifOperStatus = RegHandle->ifOperStatus;
    MediaConnectState = RegHandle->MediaConnectState;
    RegHandle->ifOperStatus = v10;
    RegHandle->ifAdminStatus = HIDWORD(a1[63].CallbackContext);
    RegHandle->MediaConnectState = a1[7].RegHandle;
    RegHandle->MediaDuplexState = (_NET_IF_MEDIA_DUPLEX_STATE)a1[7].EnableCallback;
    RegHandle->RcvLinkSpeed = a1[12].RegHandle;
    RegHandle->XmitLinkSpeed = a1[12].KeywordAll;
    RegHandle->ifOperStatusFlags = HIDWORD(a1[63].AnnotationFunc);
    if ( ifOperStatus == v10 || (v7 = 1, !a2) )
    {
      v13 = a3;
    }
    else
    {
      a1[8].ProviderMetadataPtr = 0LL;
      a1[29].LevelPlus1 = 0;
      KeReleaseSpinLock(&a1[1].RegHandle, a3);
      ndisNsiScheduleIfBlockRodChangeNotification(RegHandle, &RegHandle->ifOperStatus, 8LL, 536LL);
      v13 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
      a1[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
      a1[29].LevelPlus1 = 2244013;
    }
    if ( MediaConnectState != RegHandle->MediaConnectState && a2 )
    {
      a1[8].ProviderMetadataPtr = 0LL;
      a1[29].LevelPlus1 = 0;
      KeReleaseSpinLock(&a1[1].RegHandle, v13);
      ndisNsiScheduleIfBlockRodChangeNotification(RegHandle, &RegHandle->MediaConnectState, 4LL, 644LL);
      KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
      a1[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
      a1[29].LevelPlus1 = 2244026;
    }
    v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
    IFBLOCK_DEREFERENCE_MINIPORT_LINK((struct _NDIS_IF_BLOCK *)a1[63].RegHandle, MPIFREF_SETISTATE);
    KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v14);
  }
  return v7;
}
