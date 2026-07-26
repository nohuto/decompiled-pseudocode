/*
 * XREFs of ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C007C8EC
 * Callers:
 *     ndisOidPreRSSv2Parameters @ 0x1C007D020 (ndisOidPreRSSv2Parameters.c)
 * Callees:
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007B33C (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007C748 (-ndisSetMiniportRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
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
  int v9; // esi
  int v10; // edx
  unsigned __int8 *PoolWithTag; // rax
  KIRQL v12; // al
  bool v13; // zf
  _DWORD *InformationBuffer; // r13
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // r12
  int v16; // r15d
  bool v17; // dl
  bool v18; // r8
  unsigned int v19; // edx
  bool v20; // di
  struct _NDIS_VPORT_BLOCK *VPortBlockForRequest; // rax
  unsigned __int8 v22; // r8
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v24; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  __int64 v27; // [rsp+20h] [rbp-68h]
  KIRQL v28; // [rsp+90h] [rbp+8h]
  int v29; // [rsp+98h] [rbp+10h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0x23u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, MiniportHandle, a1, a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v7 = 1;
  v8 = ndisSetMiniportRSSv2ParametersHelper(MiniportHandle, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
    {
      LODWORD(v27) = v8;
      WPP_SF_qqd(0x24u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, MiniportHandle, a2, v27);
    }
    v10 = v9;
    goto LABEL_35;
  }
  if ( !a1->RssParametersBuffer )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu);
    a1->RssParametersBuffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      v10 = -1073741670;
LABEL_35:
      a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
      goto LABEL_36;
    }
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  v13 = MiniportHandle->CombinedNdisRSSParameters == 0LL;
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  MiniportHandle->LockDbg = 4131853;
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v28 = v12;
  if ( v13 )
  {
    v7 = 0;
  }
  else
  {
    RssParametersBuffer = MiniportHandle->RssParametersBuffer;
    v16 = InformationBuffer[2];
    v29 = (unsigned __int8)v16;
    v17 = (RssParametersBuffer->Combined[4] & 0x10) == 0
       && (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8];
    v18 = 0;
    v13 = v17 == (InformationBuffer[1] & 1);
    v19 = InformationBuffer[3];
    if ( v13 )
      v18 = (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)v16;
    if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[20] != v19 )
      goto LABEL_22;
    v20 = 0;
    if ( *(unsigned __int16 *)&RssParametersBuffer->Combined[12] >> 2 == InformationBuffer[6] )
      v20 = v18;
    if ( memcmp(
           &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
           (char *)InformationBuffer + (unsigned int)InformationBuffer[4],
           v19) )
    {
LABEL_22:
      v20 = 0;
    }
    VPortBlockForRequest = ndisGetVPortBlockForRequest(MiniportHandle, a2);
    v22 = 0;
    if ( InformationBuffer[5] == VPortBlockForRequest->VPortParams.NumQueuePairs )
      v22 = v20;
    OpenQueue = MiniportHandle->OpenQueue;
    v24 = v16 & 0xFFFF00;
    while ( OpenQueue )
    {
      NdisRSSParameters = OpenQueue->NdisRSSParameters;
      if ( NdisRSSParameters && OpenQueue != a1 )
        v24 |= NdisRSSParameters->HashInformation & 0xFFFF00;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    InformationBuffer[2] = v29 | v24;
    v7 = 0;
    v13 = v24 == (*(_DWORD *)&RssParametersBuffer->Combined[8] & 0xFFFF00);
    v4 = a3;
    if ( v13 )
      v7 = v22;
    v12 = v28;
  }
  MiniportHandle->MiniportThread = 0LL;
  MiniportHandle->LockDbg = 0;
  KeReleaseSpinLock(&MiniportHandle->Lock, v12);
  v10 = 0;
  if ( v7 )
    goto LABEL_35;
LABEL_36:
  *v4 = v9;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v27) = v7;
    WPP_SF_qqDD(0x25u, &WPP_4fecf6d36e163aabb9bd41260a763457_Traceguids, MiniportHandle, a1, v27, v10);
  }
  if ( v9 && (dword_1C009AF04 & 4) != 0 )
    McTemplateK0jqxqqq(
      MiniportHandle->IfIndex,
      &SetOpenRSSCapsFailed,
      &MiniportHandle->InterfaceGuid,
      (__int64)&MiniportHandle->InterfaceGuid,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v9,
      131,
      (char)a1);
  return v7;
}
