/*
 * XREFs of ndisMOpenAdapter @ 0x1C01033B8
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 * Callees:
 *     XRemoveBindingFromLists @ 0x1C0002104 (XRemoveBindingFromLists.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ethAllocateOpenMulticastBuffer @ 0x1C000F508 (ethAllocateOpenMulticastBuffer.c)
 *     XNoteFilterOpenAdapter @ 0x1C000F5B0 (XNoteFilterOpenAdapter.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C000F750 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C000F77C (ndisSetupNdis6OpenHandlers.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0010048 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     WPP_SF_qqZddZ @ 0x1C005EBA4 (WPP_SF_qqZddZ.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C00FF4DC (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C00FF620 (ndisDeQueueOpenOnProtocol.c)
 *     ndisSetOpenToTranslationMode @ 0x1C010C50C (ndisSetOpenToTranslationMode.c)
 */

void __fastcall ndisMOpenAdapter(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbp
  __int64 v5; // r15
  char v6; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // cl
  __int64 v13; // rcx
  KIRQL v14; // dl
  unsigned __int8 v15; // r15
  int OpenMulticastBuffer; // eax
  char v17; // r12
  _QWORD *PoolWithTag; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  char v25; // [rsp+80h] [rbp+8h]
  char v26; // [rsp+88h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = 0LL;
  v25 = 0;
  v5 = 0LL;
  v26 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qqq(0x26u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v3, a3, a2);
  if ( !ndisReferenceMiniport(a3) )
  {
    *a1 = -1073676286;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v3 + 56) < 6u )
  {
    v4 = *(_QWORD **)(a3 + 1848);
    if ( !v4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x6D66444Eu);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *a1 = -1073741670;
        goto LABEL_83;
      }
      memset(PoolWithTag, 0, 0xC0uLL);
      *(_QWORD *)(a3 + 1848) = v4;
      v26 = 1;
    }
    *(_QWORD *)a2 = v4;
  }
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a2 + 264) = *(unsigned __int16 *)(a3 + 592);
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 232));
  ndisMReferenceOpen(a2, 1u);
  if ( *(_BYTE *)(a3 + 32) < 6u )
  {
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 200LL);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 1808);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 216LL);
  }
  *(_DWORD *)(a2 + 704) = *(unsigned __int8 *)(v3 + 56);
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 56LL) < 6u )
  {
    *(_QWORD *)(a2 + 112) = ndisMSendPacketCompleteToOpen;
    *(_QWORD *)(a2 + 776) = *(_QWORD *)(v3 + 240);
    *(_QWORD *)(a2 + 120) = *(_QWORD *)(v3 + 248);
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(v3 + 264);
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(v3 + 272);
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(v3 + 256);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(v3 + 280);
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(v3 + 152);
    *(_QWORD *)(a2 + 784) = ndisCompleteOidRequestToRequest;
  }
  else
  {
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_QWORD *)(a2 + 784) = ndisInvokeOidRequestComplete;
    *(_QWORD *)(a2 + 136) = ndisFakeMiniportCancelSendPackets;
  }
  *(_QWORD *)(a2 + 584) = *(_QWORD *)(v3 + 776);
  *(_QWORD *)(a2 + 592) = *(_QWORD *)(v3 + 784);
  *(_QWORD *)(a2 + 600) = *(_QWORD *)(v3 + 792);
  *(_QWORD *)(a2 + 608) = *(_QWORD *)(v3 + 800);
  *(_QWORD *)(a2 + 616) = *(_QWORD *)(v3 + 808);
  *(_QWORD *)(a2 + 624) = *(_QWORD *)(v3 + 816);
  *(_QWORD *)(a2 + 632) = *(_QWORD *)(v3 + 824);
  *(_QWORD *)(a2 + 640) = *(_QWORD *)(v3 + 832);
  *(_QWORD *)(a2 + 648) = *(_QWORD *)(v3 + 840);
  *(_QWORD *)(a2 + 656) = *(_QWORD *)(v3 + 848);
  *(_QWORD *)(a2 + 664) = *(_QWORD *)(v3 + 856);
  *(_QWORD *)(a2 + 672) = *(_QWORD *)(v3 + 864);
  *(_QWORD *)(a2 + 208) = *(_QWORD *)(v3 + 160);
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(v3 + 168);
  *(_QWORD *)(a2 + 176) = ndisMReset;
  *(_QWORD *)(a2 + 528) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 184) = ndisLegacyRequest;
  *(_QWORD *)(a2 + 192) = ndisMOidRequest;
  *(_QWORD *)(a2 + 824) = ndisMDirectOidRequest;
  *(_QWORD *)(a2 + 104) = ndisMTransferData;
  *(_QWORD *)(a2 + 8) = a2;
  if ( *(_DWORD *)(a3 + 464) == 3 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) == 0 )
      *(_QWORD *)(a2 + 96) = ndisMWanSend;
  }
  else
  {
    *(_QWORD *)(a2 + 96) = ndisMSend;
  }
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a3 + 624);
  if ( *(_DWORD *)(a3 + 464) == 3 )
  {
    if ( (*(_DWORD *)(a3 + 120) & 0x20000) != 0 )
    {
LABEL_56:
      v19 = *(_QWORD *)(a3 + 3784);
      if ( *(_BYTE *)(a3 + 32) >= 6u )
      {
        *(_QWORD *)(a2 + 1136) = *(_QWORD *)(v19 + 552);
        *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 504LL);
        v20 = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 200LL);
      }
      else
      {
        *(_QWORD *)(a2 + 1032) = *(_QWORD *)(v19 + 288);
        *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 248LL);
        v20 = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 296LL);
      }
      *(_QWORD *)(a2 + 296) = v20;
      *(_QWORD *)(a2 + 1096) = a2 + 1088;
      *(_QWORD *)(a2 + 1088) = a2 + 1088;
      *(_QWORD *)(a2 + 1112) = a2 + 1104;
      *(_QWORD *)(a2 + 1104) = a2 + 1104;
      if ( !*(_QWORD *)(a2 + 96) && !*(_QWORD *)(a2 + 168) )
      {
        *(_QWORD *)(a2 + 96) = ndisMRejectSend;
        *(_QWORD *)(a2 + 168) = ndisMRejectSendPackets;
      }
      goto LABEL_13;
    }
    *(_QWORD *)(a2 + 96) = ndisMWanSend;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x20000) != 0 )
    goto LABEL_56;
LABEL_13:
  v10 = *(_QWORD *)(a3 + 3784);
  if ( *(_BYTE *)(a3 + 32) < 6u )
    v11 = *(_QWORD *)(v10 + 296);
  else
    v11 = *(_QWORD *)(v10 + 200);
  *(_QWORD *)(a2 + 296) = v11;
  ndisSetupNdis6OpenHandlers(a2, v3, a3);
  if ( *(_BYTE *)(a3 + 32) < 6u || (v12 = 1, *(_BYTE *)(*(_QWORD *)(a2 + 24) + 56LL) >= 6u) )
    v12 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 24) + 56LL) < 6u && *(_BYTE *)(a3 + 1993) || v12 )
  {
    ndisSetOpenToTranslationMode(a2);
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
    *(_QWORD *)(a2 + 800) = v21;
    if ( !v21 )
    {
      *a1 = -1073676281;
      goto LABEL_42;
    }
    *v21 = a3;
    *(_QWORD *)(*(_QWORD *)(a2 + 800) + 8LL) = ndisQueuedStatusUnbindAdapter;
  }
  *(_QWORD *)(a2 + 576) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 560) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 568) = *(_QWORD *)(a2 + 296);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qq(0x69u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a3, a2);
  v13 = *(unsigned int *)(a3 + 1520);
  if ( (((_DWORD)v13 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v13 == 3 )
  {
    if ( (unsigned __int8)byte_1C009874D >= 4u )
      WPP_SF_qq(0x6Au, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a3, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
      McTemplateK0jqxq(
        v13,
        &OpenFailedMiniportNotStarted,
        (const GUID *)(a3 + 4032),
        a3 + 4032,
        *(_DWORD *)(a3 + 4080),
        *(_QWORD *)(a3 + 4048),
        a2);
  }
  else
  {
    *(_QWORD *)(a2 + 392) = *(_QWORD *)(a3 + 56);
    ++*(_WORD *)(a3 + 1820);
    *(_QWORD *)(a3 + 56) = a2;
    ndisUpdateCheckForLoopbackFlag(a3);
    LOBYTE(v5) = 1;
  }
  if ( (unsigned __int8)byte_1C009874D >= 4u )
  {
    LODWORD(v22) = (unsigned __int8)v5;
    WPP_SF_qqd(0x6Bu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a3, a2, v22);
  }
  if ( (_BYTE)v5 )
  {
    v6 = 1;
    if ( (unsigned __int8)byte_1C009874D >= 4u )
      WPP_SF_qq(0x2Au, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a2, v3);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 32));
    if ( *(_BYTE *)(v3 + 42) )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      *(_QWORD *)(a2 + 400) = *(_QWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 24) = a2;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 32), v14);
    if ( (unsigned __int8)byte_1C009874D >= 4u )
    {
      LODWORD(v22) = v15;
      WPP_SF_qqd(0x2Bu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a2, v3, v22);
    }
    if ( !v15 )
    {
      *a1 = -1073676281;
LABEL_79:
      ndisDeQueueOpenOnMiniport(a2, a3);
      v17 = v25;
LABEL_80:
      if ( v17 )
        ndisDeQueueOpenOnProtocol(a2, v3);
      goto LABEL_83;
    }
    v5 = *(_QWORD *)(a3 + 400);
    v25 = 1;
    if ( v5 )
      XNoteFilterOpenAdapter(v5, a2);
    if ( !*(_DWORD *)(a3 + 464) )
    {
      OpenMulticastBuffer = ethAllocateOpenMulticastBuffer(v5, a2);
      *a1 = OpenMulticastBuffer;
      if ( OpenMulticastBuffer )
      {
        *a1 = -1073676281;
LABEL_76:
        if ( v5 )
          XRemoveBindingFromLists(v5, a2);
        goto LABEL_79;
      }
    }
    if ( *(_BYTE *)(v3 + 56) < 6u && v26 )
    {
      v4[10] = ndisMTransferData;
      v4[11] = ndisMReset;
      v4[12] = *(_QWORD *)(a2 + 184);
      v4[9] = *(_QWORD *)(a2 + 96);
    }
    *a1 = 0;
    if ( (unsigned __int8)byte_1C0098750 >= 4u )
    {
      LODWORD(v24) = *(unsigned __int8 *)(v3 + 57);
      LODWORD(v23) = *(unsigned __int8 *)(v3 + 56);
      WPP_SF_qqZddZ(
        *(unsigned __int8 *)(v3 + 57),
        *(unsigned __int8 *)(v3 + 56),
        a3,
        a2,
        v3 + 72,
        v23,
        v24,
        *(_QWORD *)(a3 + 3880));
    }
LABEL_42:
    v17 = v6;
    v25 = v6;
    if ( !*a1 )
      goto LABEL_43;
    if ( !v6 )
      goto LABEL_80;
    goto LABEL_76;
  }
  *a1 = -1073676281;
LABEL_83:
  ndisDereferenceMiniport(a3, 0x2Eu);
LABEL_43:
  if ( (unsigned __int8)byte_1C009874D >= 4u )
  {
    LODWORD(v23) = *a1;
    WPP_SF_qqqL(0x28u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v3, a3, a2, v23);
  }
}
