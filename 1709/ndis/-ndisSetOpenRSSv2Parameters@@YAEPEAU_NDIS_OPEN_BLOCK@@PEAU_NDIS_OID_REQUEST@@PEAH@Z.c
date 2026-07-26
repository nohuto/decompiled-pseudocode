/*
 * XREFs of ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007B9F4
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C007C0D0 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007A4EC (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007B854 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

unsigned __int8 __fastcall ndisSetOpenRSSv2Parameters(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int *v4; // r15
  unsigned __int8 v7; // di
  int v8; // eax
  int v9; // ebp
  unsigned __int8 *PoolWithTag; // rax
  KIRQL v11; // al
  void *v12; // r11
  _DWORD *InformationBuffer; // r13
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // r12
  int v15; // r15d
  char v16; // dl
  bool v17; // r8
  bool v18; // zf
  unsigned int v19; // edx
  bool v20; // di
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rax
  unsigned __int8 v22; // dl
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v24; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  __int64 v27; // [rsp+20h] [rbp-68h]
  KIRQL v28; // [rsp+90h] [rbp+8h]
  int v29; // [rsp+98h] [rbp+10h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0x20u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, MiniportHandle, a1, a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v7 = 1;
  v8 = ndisSetMiniportRSSv2ParametersHelper(MiniportHandle, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
    {
      LODWORD(v27) = v8;
      WPP_SF_qqd(0x21u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, MiniportHandle, a2, v27);
    }
    goto LABEL_32;
  }
  if ( !a1->RssParametersBuffer )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu);
    a1->RssParametersBuffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
LABEL_32:
      a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
      goto LABEL_33;
    }
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  v12 = 0LL;
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  MiniportHandle->LockDbg = 4131823;
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v28 = v11;
  if ( MiniportHandle->CombinedNdisRSSParameters )
  {
    RssParametersBuffer = MiniportHandle->RssParametersBuffer;
    v15 = InformationBuffer[2];
    v29 = (unsigned __int8)v15;
    if ( (RssParametersBuffer->Combined[4] & 0x10) != 0
      || (v16 = 1, !(unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8]) )
    {
      v16 = 0;
    }
    v17 = 0;
    v18 = v16 == (InformationBuffer[1] & 1);
    v19 = InformationBuffer[3];
    if ( v18 )
      v17 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)v15;
    if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[20] != v19 )
      goto LABEL_20;
    v20 = 0;
    if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[12] >> 2 == InformationBuffer[6] )
      v20 = v17;
    if ( memcmp(
           &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
           (char *)InformationBuffer + (unsigned int)InformationBuffer[4],
           v19) )
    {
LABEL_20:
      v20 = 0;
    }
    VPortBlockForRequest = ndisGetVPortBlockForRequest(MiniportHandle, a2);
    v22 = (unsigned __int8)v12;
    if ( InformationBuffer[5] == VPortBlockForRequest->VPortParams.NumQueuePairs )
      v22 = v20;
    OpenQueue = MiniportHandle->OpenQueue;
    v24 = v15 & 0xFFFF00;
    while ( OpenQueue )
    {
      NdisRSSParameters = OpenQueue->NdisRSSParameters;
      if ( NdisRSSParameters && OpenQueue != a1 )
        v24 |= NdisRSSParameters->HashInformation & 0xFFFF00;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    v7 = v22;
    InformationBuffer[2] = v29 | v24;
    v18 = v24 == (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00);
    v11 = v28;
    v4 = a3;
    if ( !v18 )
      v7 = (unsigned __int8)v12;
  }
  else
  {
    v7 = 0;
  }
  MiniportHandle->MiniportThread = v12;
  MiniportHandle->LockDbg = (unsigned int)v12;
  KeReleaseSpinLock(&MiniportHandle->Lock, v11);
  if ( v7 )
    goto LABEL_32;
LABEL_33:
  *v4 = v9;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v27) = v7;
    WPP_SF_qqDD(0x22u, &WPP_f2ba63df2d4e3a1d5681283389008951_Traceguids, MiniportHandle, a1, v27, v9);
  }
  if ( v9 && (dword_1C0099FC4 & 4) != 0 )
    McTemplateK0jqxqqq(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v9,
      101,
      (char)a1);
  return v7;
}
