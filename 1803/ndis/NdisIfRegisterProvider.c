/*
 * XREFs of NdisIfRegisterProvider @ 0x1C0015140
 * Callers:
 *     ndisIfInitialize @ 0x1C011CAC0 (ndisIfInitialize.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ndisInitializeNsi @ 0x1C00B5974 (ndisInitializeNsi.c)
 */

NDIS_STATUS __stdcall NdisIfRegisterProvider(
        PNDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics,
        NDIS_HANDLE IfProviderContext,
        PNDIS_HANDLE pNdisIfProviderHandle)
{
  NDIS_STATUS v6; // ebx
  unsigned __int16 v7; // bp
  char *PoolWithTag; // rax
  char *v9; // r14
  KIRQL v10; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v12; // rcx

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(21LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, IfProviderContext);
  v6 = 0;
  if ( !ndisNsiInitialized
    && pNdisIfProviderHandle != &ndisIfProviderHandle
    && pNdisIfProviderHandle != &ndisIfLoopbackProviderHandle )
  {
    ndisInitializeNsi();
  }
  if ( !ProviderCharacteristics )
    goto LABEL_20;
  if ( ProviderCharacteristics->Header.Revision != 1 )
  {
    v6 = -1073741637;
    goto LABEL_14;
  }
  if ( ProviderCharacteristics->Header.Size >= 0x28u )
  {
    *pNdisIfProviderHandle = 0LL;
    v7 = ProviderCharacteristics->Header.Size + 48;
    if ( v7 >= 0x58u
      && (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6669444Eu), (v9 = PoolWithTag) != 0LL) )
    {
      memset(PoolWithTag, 0, v7);
      *(_WORD *)v9 = -29183;
      *((_WORD *)v9 + 1) = v7;
      *((_QWORD *)v9 + 4) = v9 + 24;
      *((_QWORD *)v9 + 3) = v9 + 24;
      *((_QWORD *)v9 + 5) = IfProviderContext;
      memmove(v9 + 48, ProviderCharacteristics, ProviderCharacteristics->Header.Size);
      v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfProviderListLock);
      Flink = ndisIfProviderList.Flink;
      v12 = (_LIST_ENTRY *)(v9 + 8);
      if ( ndisIfProviderList.Flink->Blink != &ndisIfProviderList )
        __fastfail(3u);
      v12->Flink = ndisIfProviderList.Flink;
      *((_QWORD *)v9 + 2) = &ndisIfProviderList;
      Flink->Blink = v12;
      ndisIfProviderList.Flink = (_LIST_ENTRY *)(v9 + 8);
      KeReleaseSpinLock(&ndisIfProviderListLock, v10);
      *pNdisIfProviderHandle = v9;
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
LABEL_20:
    v6 = -1073741811;
  }
LABEL_14:
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqd(22LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, IfProviderContext, pNdisIfProviderHandle, v6);
  return v6;
}
