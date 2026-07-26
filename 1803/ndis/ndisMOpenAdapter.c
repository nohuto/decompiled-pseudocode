/*
 * XREFs of ndisMOpenAdapter @ 0x1C01048C0
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     XRemoveBindingFromLists @ 0x1C0013930 (XRemoveBindingFromLists.c)
 *     ethAllocateOpenMulticastBuffer @ 0x1C001AE8C (ethAllocateOpenMulticastBuffer.c)
 *     XNoteFilterOpenAdapter @ 0x1C001AF34 (XNoteFilterOpenAdapter.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001AFA4 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001AFD0 (ndisSetupNdis6OpenHandlers.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001B848 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     WPP_SF_qqZddZ @ 0x1C005F650 (WPP_SF_qqZddZ.c)
 *     ndisDeQueueOpenOnMiniport @ 0x1C0103054 (ndisDeQueueOpenOnMiniport.c)
 *     ndisDeQueueOpenOnProtocol @ 0x1C0103198 (ndisDeQueueOpenOnProtocol.c)
 *     ndisSetOpenToTranslationMode @ 0x1C010E49C (ndisSetOpenToTranslationMode.c)
 */

void __fastcall ndisMOpenAdapter(int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbp
  __int64 *v5; // r15
  char v6; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rcx
  KIRQL v17; // dl
  unsigned __int8 v18; // r15
  int v19; // eax
  int OpenMulticastBuffer; // eax
  int v21; // eax
  char v22; // r12
  _QWORD *PoolWithTag; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  char v30; // [rsp+80h] [rbp+8h]
  char v31; // [rsp+88h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = 0LL;
  v30 = 0;
  v5 = 0LL;
  v31 = 0;
  v6 = 0;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qqq(0x29u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v3, a3, a2);
  if ( !ndisReferenceMiniport(a3) )
  {
    *a1 = -1073676286;
    goto LABEL_42;
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
        goto LABEL_82;
      }
      memset(PoolWithTag, 0, 0xC0uLL);
      *(_QWORD *)(a3 + 1848) = v4;
      v31 = 1;
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
LABEL_55:
      v24 = *(_QWORD *)(a3 + 3784);
      if ( *(_BYTE *)(a3 + 32) >= 6u )
      {
        *(_QWORD *)(a2 + 1136) = *(_QWORD *)(v24 + 552);
        *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 504LL);
        v25 = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 200LL);
      }
      else
      {
        *(_QWORD *)(a2 + 1032) = *(_QWORD *)(v24 + 288);
        *(_QWORD *)(a2 + 1024) = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 248LL);
        v25 = *(_QWORD *)(*(_QWORD *)(a3 + 3784) + 296LL);
      }
      *(_QWORD *)(a2 + 296) = v25;
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
    goto LABEL_55;
LABEL_13:
  v10 = *(_QWORD *)(a3 + 3784);
  if ( *(_BYTE *)(a3 + 32) < 6u )
    v11 = *(_QWORD *)(v10 + 296);
  else
    v11 = *(_QWORD *)(v10 + 200);
  *(_QWORD *)(a2 + 296) = v11;
  ndisSetupNdis6OpenHandlers(a2, v3, a3);
  v14 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(a3 + 32) >= 6u && (v15 = 1, *(_BYTE *)(v14 + 56) < 6u) || (v15 = 0, *(_BYTE *)(v14 + 56) < 6u))
    && *(_BYTE *)(a3 + 1993)
    || v15 )
  {
    ndisSetOpenToTranslationMode(a2);
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6977444Eu);
    *(_QWORD *)(a2 + 800) = v26;
    if ( !v26 )
    {
      v21 = -1073676281;
      *a1 = -1073676281;
      goto LABEL_41;
    }
    *v26 = a3;
    *(_QWORD *)(*(_QWORD *)(a2 + 800) + 8LL) = ndisQueuedStatusUnbindAdapter;
  }
  *(_QWORD *)(a2 + 576) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 560) = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 568) = *(_QWORD *)(a2 + 296);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qq(0x6Cu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a3, a2);
  v16 = *(unsigned int *)(a3 + 1520);
  if ( (((_DWORD)v16 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v16 == 3 )
  {
    if ( (unsigned __int8)byte_1C009960D >= 4u )
      WPP_SF_qq(0x6Du, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a3, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x200) != 0 )
      McTemplateK0jqxq(
        v16,
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
  if ( (unsigned __int8)byte_1C009960D >= 4u )
  {
    LODWORD(v27) = (unsigned __int8)v5;
    WPP_SF_qqd(0x6Eu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a3, a2, v27);
  }
  if ( (_BYTE)v5 )
  {
    v6 = 1;
    if ( (unsigned __int8)byte_1C009960D >= 4u )
      WPP_SF_qq(0x2Au, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a2, v3);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 32));
    if ( *(_BYTE *)(v3 + 42) )
    {
      v18 = 0;
    }
    else
    {
      v18 = 1;
      *(_QWORD *)(a2 + 400) = *(_QWORD *)(v3 + 24);
      *(_QWORD *)(v3 + 24) = a2;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 32), v17);
    if ( (unsigned __int8)byte_1C009960D >= 4u )
    {
      LODWORD(v27) = v18;
      WPP_SF_qqd(0x2Bu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a2, v3, v27);
    }
    if ( !v18 )
    {
      *a1 = -1073676281;
LABEL_78:
      ndisDeQueueOpenOnMiniport(a2, a3);
      v22 = v30;
LABEL_79:
      if ( v22 )
        ndisDeQueueOpenOnProtocol(a2, v3);
      goto LABEL_82;
    }
    v5 = *(__int64 **)(a3 + 400);
    v19 = *(_DWORD *)(a3 + 464);
    v30 = 1;
    if ( v5 )
    {
      XNoteFilterOpenAdapter((__int64)v5, a2);
      v19 = *(_DWORD *)(a3 + 464);
    }
    if ( !v19 )
    {
      OpenMulticastBuffer = ethAllocateOpenMulticastBuffer((__int64)v5, a2);
      *a1 = OpenMulticastBuffer;
      if ( OpenMulticastBuffer )
      {
        *a1 = -1073676281;
LABEL_75:
        if ( v5 )
          XRemoveBindingFromLists(v5, a2);
        goto LABEL_78;
      }
    }
    if ( *(_BYTE *)(v3 + 56) < 6u && v31 )
    {
      v4[10] = ndisMTransferData;
      v4[11] = ndisMReset;
      v4[12] = *(_QWORD *)(a2 + 184);
      v4[9] = *(_QWORD *)(a2 + 96);
    }
    *a1 = 0;
    v21 = 0;
    if ( (unsigned __int8)byte_1C0099610 >= 4u )
    {
      LODWORD(v29) = *(unsigned __int8 *)(v3 + 57);
      LODWORD(v28) = *(unsigned __int8 *)(v3 + 56);
      WPP_SF_qqZddZ(
        *(unsigned __int8 *)(v3 + 57),
        *(unsigned __int8 *)(v3 + 56),
        a3,
        a2,
        v3 + 72,
        v28,
        v29,
        *(_QWORD *)(a3 + 3880));
      v21 = *a1;
    }
LABEL_41:
    v30 = v6;
    v22 = v6;
    if ( !v21 )
      goto LABEL_42;
    if ( !v6 )
      goto LABEL_79;
    goto LABEL_75;
  }
  *a1 = -1073676281;
LABEL_82:
  ndisDereferenceMiniport(a3, 0x2Eu, v12, v13);
LABEL_42:
  if ( (unsigned __int8)byte_1C009960D >= 4u )
  {
    LODWORD(v28) = *a1;
    WPP_SF_qqqL(0x2Bu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v3, a3, a2, v28);
  }
}
