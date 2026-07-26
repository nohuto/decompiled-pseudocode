/*
 * XREFs of ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001ACAC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BFA90 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisEnumerateFilterInstances @ 0x1C00BFC5C (ndisEnumerateFilterInstances.c)
 */

char __fastcall ndisPostProcessRestartParametersAfterFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  Rtl::KArray<unsigned char,1> *p_FilterInstanceBuffer; // rsi
  unsigned int m_numElements; // ecx
  unsigned int MtuSize; // eax
  KIRQL v8; // bp
  unsigned int SupportedOidListLength; // r8d
  SIZE_T v10; // rdx
  unsigned int *v11; // rcx
  unsigned int *SupportedOidList; // rcx
  char v13; // [rsp+58h] [rbp+10h] BYREF
  char v14; // [rsp+60h] [rbp+18h] BYREF

  p_FilterInstanceBuffer = &a2->FilterInstanceBuffer;
  ndisEnumerateFilterInstances(a1, &a2->FilterInstanceBuffer);
  m_numElements = a2->FilterInstanceBuffer.m_numElements;
  if ( m_numElements )
  {
    if ( !p_FilterInstanceBuffer->m_numElements )
      __fastfail(5u);
    a2->ProtocolParameters.FilterModuleNameBuffer = p_FilterInstanceBuffer->_p;
    a2->ProtocolParameters.FilterModuleNameBufferLength = m_numElements;
  }
  ndisIfQueryBindingMiniportIfIndex((_DWORD)a1, (_DWORD)a2 + 168, (_DWORD)a2 + 176, (unsigned int)&v13, (__int64)&v14);
  if ( a2->Attributes.Oid )
  {
    a2->General.MacOptions |= a2->MiniportMacOptionsToPreserve;
    a1->TopFilterRestartAttributes.AccessType = a2->General.AccessType;
    a1->TopFilterRestartAttributes.ConnectionType = a2->General.ConnectionType;
    a1->TopFilterRestartAttributes.ContextBackFillSize = a2->General.ContextBackFillSize;
    a1->TopFilterRestartAttributes.DataBackFillSize = a2->General.DataBackFillSize;
    a1->TopFilterRestartAttributes.Header = a2->General.Header;
    a1->TopFilterRestartAttributes.LookaheadSize = a2->General.LookaheadSize;
    a1->TopFilterRestartAttributes.MacOptions = a2->General.MacOptions;
    a1->TopFilterRestartAttributes.MaxMulticastListSize = a2->General.MaxMulticastListSize;
    MtuSize = a2->General.MtuSize;
    a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
    a1->TopFilterRestartAttributes.MtuSize = MtuSize;
    *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = *(_OWORD *)&a2->RssCaps.Header.Type;
    *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = *(_DWORD *)&a2->RssCaps.NumberOfIndirectionTableEntries;
    a1->TopFilterRestartAttributes.SupportedPacketFilters = a2->General.SupportedPacketFilters;
    a1->TopFilterRestartAttributes.SupportedStatistics = a2->General.SupportedStatistics;
    a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = a2->General.MaxXmitLinkSpeed;
    a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = a2->General.MaxRcvLinkSpeed;
    v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    SupportedOidListLength = a1->TopFilterRestartAttributes.SupportedOidListLength;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 3868311;
    v10 = a2->General.SupportedOidListLength;
    if ( (_DWORD)v10 != SupportedOidListLength )
    {
      SupportedOidList = a1->TopFilterRestartAttributes.SupportedOidList;
      if ( SupportedOidList )
      {
        ExFreePoolWithTag(SupportedOidList, 0);
        a1->TopFilterRestartAttributes.SupportedOidListLength = 0;
        v10 = a2->General.SupportedOidListLength;
        SupportedOidListLength = 0;
      }
    }
    if ( (_DWORD)v10 && !SupportedOidListLength )
      a1->TopFilterRestartAttributes.SupportedOidList = (unsigned int *)ExAllocatePoolWithTag(
                                                                          NonPagedPoolNx,
                                                                          v10,
                                                                          0x6D61444Eu);
    v11 = a1->TopFilterRestartAttributes.SupportedOidList;
    if ( v11 )
    {
      memmove(v11, a2->General.SupportedOidList, a2->General.SupportedOidListLength);
      a1->TopFilterRestartAttributes.SupportedOidListLength = a2->General.SupportedOidListLength;
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v8);
  }
  return 1;
}
