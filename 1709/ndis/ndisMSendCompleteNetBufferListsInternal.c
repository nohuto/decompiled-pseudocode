/*
 * XREFs of ndisMSendCompleteNetBufferListsInternal @ 0x1C00139F0
 * Callers:
 *     ndisMFakeSendNetBufferLists @ 0x1C0013670 (ndisMFakeSendNetBufferLists.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0014014 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00156C0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0066DC0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  unsigned int v3; // r11d
  struct _NET_BUFFER_LIST *v4; // r12
  __int64 v5; // r13
  struct _NDIS_OPEN_BLOCK *v6; // r14
  struct _NDIS_OPEN_BLOCK *v7; // rdx
  struct _NET_BUFFER_LIST *v8; // r10
  _QWORD *p_Alignment; // r15
  _QWORD *v10; // r8
  struct _NET_BUFFER_LIST *v11; // rdi
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  $CD907EB97BD987F691570AC389926C95 *FirstNetBuffer; // rcx
  unsigned int v15; // r9d
  unsigned __int64 NblTracker; // rdi
  bool v17; // si
  char v18; // r15
  char v19; // r13
  __int64 v20; // r12
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  unsigned __int8 *v23; // r9
  _SLIST_HEADER *v24; // r15
  __int64 v25; // r13
  unsigned __int64 Region; // rsi
  unsigned __int8 *v27; // rcx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  KIRQL v33; // al
  char v34; // [rsp+38h] [rbp-39h] BYREF
  KIRQL v35; // [rsp+39h] [rbp-38h]
  unsigned int v36; // [rsp+3Ch] [rbp-35h]
  struct _NET_BUFFER_LIST *v37; // [rsp+40h] [rbp-31h]
  struct NDIS_PCW_CONTEXT v38; // [rsp+48h] [rbp-29h] BYREF
  __int64 v39; // [rsp+60h] [rbp-11h]
  unsigned __int8 *v40; // [rsp+68h] [rbp-9h]
  struct _NDIS_OPEN_BLOCK *v41; // [rsp+70h] [rbp-1h]
  struct _NET_BUFFER_LIST *v42; // [rsp+78h] [rbp+7h]
  struct _NET_BUFFER_LIST *v46; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v38.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v7 = 0LL;
  v8 = 0LL;
  v38.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  p_Alignment = 0LL;
  v10 = 0LL;
  v38.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  v41 = 0LL;
  v37 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v36 = 0;
  v38.CurrentCpu = -1;
  v35 = 2;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
  {
    WPP_SF_qq(68LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1, v4);
    v3 = a3;
    v7 = 0LL;
    v8 = 0LL;
    v10 = 0LL;
  }
  v11 = v4;
  if ( ((v38.DatapathEventsMask & 0x280) != 0 || (v38.DatapathCyclesMask & 0x200) != 0) && (v3 & 1) == 0 )
  {
    v33 = KfRaiseIrql(2u);
    v3 = a3;
    v7 = 0LL;
    v35 = v33;
    v8 = 0LL;
    v10 = 0LL;
  }
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (v38.DatapathEventsMask & 0x200) != 0 )
      {
        FirstNetBuffer = ($CD907EB97BD987F691570AC389926C95 *)v11->FirstNetBuffer;
        v15 = 0;
        v36 = 0;
        if ( FirstNetBuffer )
        {
          do
          {
            FirstNetBuffer = ($CD907EB97BD987F691570AC389926C95 *)FirstNetBuffer->Link.Alignment;
            ++v15;
          }
          while ( FirstNetBuffer );
          v36 = v15;
        }
      }
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)v11->SourceHandle;
      Alignment = (struct _NET_BUFFER_LIST *)v11->Link.Alignment;
      v11->Link.Alignment = 0LL;
      if ( SourceHandle == v6 )
      {
        *p_Alignment = v11;
        p_Alignment = &v11->Link.Alignment;
      }
      else if ( SourceHandle == v7 )
      {
        *v10 = v11;
        v10 = &v11->Link.Alignment;
        v46 = v11;
      }
      else
      {
        if ( !v6 )
        {
          v6 = SourceHandle;
          v37 = v11;
          v8 = v11;
          p_Alignment = &v11->Link.Alignment;
          goto LABEL_10;
        }
        if ( v7 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, v11, a3, &v38);
          v7 = v41;
          v10 = &v46->Link.Alignment;
        }
        else
        {
          v7 = SourceHandle;
          v41 = SourceHandle;
          v42 = v11;
          v10 = &v11->Link.Alignment;
          v46 = v11;
        }
      }
      v8 = v37;
LABEL_10:
      v11 = Alignment;
      if ( !Alignment )
      {
        v5 = a1;
        v3 = a3;
        break;
      }
    }
  }
  if ( ndisNblTrackerMode )
  {
    NblTracker = (unsigned __int64)v6->NblTracker;
    v17 = (v3 & 1) != 0;
    v18 = ndisNblTrackerEpoch;
    v19 = 0;
    v39 = 0LL;
    v20 = 0LL;
    LOBYTE(v46) = v17;
    v21 = 0LL;
    v34 = 0;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v8, 0LL, 0x95u, (void *)NblTracker, v3 & 1);
      v8 = v37;
      v21 = 0LL;
      v3 = a3;
    }
    v22 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v22 & 1) != 0 )
    {
      v23 = *(unsigned __int8 **)((v22 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v22 |= 2LL * (v18 & 1);
    }
    else
    {
      v23 = (unsigned __int8 *)v22;
    }
    v40 = v23;
    v24 = (_SLIST_HEADER *)v8;
    if ( !v8 )
    {
LABEL_59:
      v28 = v20 - v21;
      if ( (v22 & 1) != 0 && v28 )
      {
        if ( !v17 && !v19 )
        {
          v17 = KeGetCurrentIrql() == 2;
          LOBYTE(v46) = v17;
        }
        v5 = a1;
        v29 = v22 >> 1;
        v30 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
        v31 = 2 * (v29 & 1);
        if ( v17 )
        {
          v32 = (_QWORD *)(*(_QWORD *)(v30 + 8 * v31 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v32 += v28;
          v4 = a2;
          goto LABEL_13;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 8 * v31 + 48), v28);
      }
      else
      {
        v5 = a1;
      }
      v4 = a2;
      goto LABEL_13;
    }
    v25 = 0LL;
LABEL_45:
    Region = v24[22].Region;
    while ( 1 )
    {
      if ( v24[22].Region != Region )
      {
LABEL_55:
        if ( (Region & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Region, v25 - v20, &v46, &v34);
          v21 = v39;
          v23 = v40;
        }
        v25 = v20;
        if ( !v24 )
        {
          v17 = (char)v46;
          v19 = v34;
          v8 = v37;
          v3 = a3;
          goto LABEL_59;
        }
        goto LABEL_45;
      }
      if ( !Region && !v24[7].Region )
        v24[7].Region = ndisSourceHandleFromOwner(0LL, v7, v21);
      if ( (Region & 4) != 0 )
        goto LABEL_80;
      v27 = (unsigned __int8 *)v24[7].Region;
      if ( v27 )
      {
        v7 = (struct _NDIS_OPEN_BLOCK *)*v27;
        if ( (unsigned __int8)((_BYTE)v7 - 17) <= 1u || (_BYTE)v7 == 5 )
        {
          if ( v27 != v23 || v24[1].Region )
          {
            ++v20;
            v24[22].Region = v22;
          }
          else
          {
            ++v21;
            v24[22].Region = 24LL;
            v39 = v21;
            ++v20;
          }
          goto LABEL_54;
        }
        if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v24, (unsigned __int8)v7);
          goto LABEL_79;
        }
      }
      else if ( (unsigned __int8)byte_1C0098762 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, v24);
LABEL_79:
        v21 = v39;
        v23 = v40;
      }
LABEL_80:
      v24[22].Region = v22 | 4;
LABEL_54:
      v24 = (_SLIST_HEADER *)v24->Alignment;
      if ( !v24 )
        goto LABEL_55;
    }
  }
LABEL_13:
  if ( SLOBYTE(v38.DatapathEventsMask) < 0 )
  {
    if ( v38.CurrentCpu == -1 )
      v38.CurrentCpu = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)((char *)&v38.PcwBlock->DatapathEventReferences[14]
                + v38.CurrentCpu * ndisPcwPerCpuDataStride
                + ndisPcwOffsetToPerCpuData);
  }
  if ( (v38.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(&v38, 9u);
  v6->ProtSendNetBufferListsComplete(v6->SendCompleteNetBufferListsContext, v8, v3);
  if ( (v38.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(&v38, 9u, 0x16uLL);
  if ( v41 )
    ndisMSendCompleteNetBufferListsToOpen(v41, v42, a3, &v38);
  if ( (v38.DatapathEventsMask & 0x200) != 0 )
  {
    if ( v38.CurrentCpu == -1 )
      v38.CurrentCpu = KeGetPcr()->Prcb.Number;
    *(_QWORD *)((char *)&v38.PcwBlock->DatapathEventReferences[18]
              + v38.CurrentCpu * ndisPcwPerCpuDataStride
              + ndisPcwOffsetToPerCpuData) += v36;
  }
  if ( v35 != 2 )
    KeLowerIrql(v35);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(69LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, v5, v4);
}
