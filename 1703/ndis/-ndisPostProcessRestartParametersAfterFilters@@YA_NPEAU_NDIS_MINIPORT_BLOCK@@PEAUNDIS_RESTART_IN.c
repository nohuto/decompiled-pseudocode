/*
 * XREFs of ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016CA4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00B5BD0 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisEnumerateFilterInstances @ 0x1C00B5CAC (ndisEnumerateFilterInstances.c)
 */

char __fastcall ndisPostProcessRestartParametersAfterFilters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_RESTART_INFORMATION *a2)
{
  Rtl::KArray<unsigned char> *p_FilterInstanceBuffer; // rsi
  unsigned int m_numElements; // ecx
  unsigned int MtuSize; // eax
  KIRQL v8; // bp
  unsigned int SupportedOidListLength; // ecx
  unsigned int *v10; // rcx
  unsigned int *SupportedOidList; // rcx
  char v12; // [rsp+58h] [rbp+10h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  p_FilterInstanceBuffer = &a2->FilterInstanceBuffer;
  ndisEnumerateFilterInstances(a1, &a2->FilterInstanceBuffer);
  m_numElements = a2->FilterInstanceBuffer.m_numElements;
  if ( m_numElements )
  {
    if ( !p_FilterInstanceBuffer->m_numElements )
      __fastfail(0xBAD0FFu);
    a2->ProtocolParameters.FilterModuleNameBuffer = p_FilterInstanceBuffer->_p;
    a2->ProtocolParameters.FilterModuleNameBufferLength = m_numElements;
  }
  ndisIfQueryBindingMiniportIfIndex((_DWORD)a1, (_DWORD)a2 + 168, (_DWORD)a2 + 176, (unsigned int)&v12, (__int64)&v13);
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
    a1->MiniportThread = KeGetCurrentThread();
    SupportedOidListLength = a1->TopFilterRestartAttributes.SupportedOidListLength;
    a1->LockDbg = 3868304;
    if ( a2->General.SupportedOidListLength != SupportedOidListLength )
    {
      SupportedOidList = a1->TopFilterRestartAttributes.SupportedOidList;
      if ( SupportedOidList )
      {
        ExFreePoolWithTag(SupportedOidList, 0);
        a1->TopFilterRestartAttributes.SupportedOidListLength = 0;
      }
    }
    if ( a2->General.SupportedOidListLength && !a1->TopFilterRestartAttributes.SupportedOidListLength )
      a1->TopFilterRestartAttributes.SupportedOidList = (unsigned int *)ExAllocatePoolWithTag(
                                                                          NonPagedPoolNx,
                                                                          a2->General.SupportedOidListLength,
                                                                          0x6D61444Eu);
    v10 = a1->TopFilterRestartAttributes.SupportedOidList;
    if ( v10 )
    {
      memmove(v10, a2->General.SupportedOidList, a2->General.SupportedOidListLength);
      a1->TopFilterRestartAttributes.SupportedOidListLength = a2->General.SupportedOidListLength;
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v8);
  }
  return 1;
}
