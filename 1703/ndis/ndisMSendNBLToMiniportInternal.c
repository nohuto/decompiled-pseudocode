/*
 * XREFs of ndisMSendNBLToMiniportInternal @ 0x1C0004D20
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00038F0 (NdisSendNetBufferLists.c)
 *     ?ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0004160 (-ndisCallSendHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisMSendNBLToMiniport @ 0x1C0004D00 (ndisMSendNBLToMiniport.c)
 *     ndisReplaySendNbls @ 0x1C006F0B8 (ndisReplaySendNbls.c)
 * Callees:
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ndisSetBusyAsync @ 0x1C0011810 (ndisSetBusyAsync.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0056B2C (ndisMLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C00665CC (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  struct _NET_BUFFER_LIST *v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  KIRQL v9; // di
  __int64 v10; // r14
  void (__fastcall *v11)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r15
  int v12; // edx
  _SLIST_HEADER *Alignment; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rbp
  char v16; // cl
  __int64 v17; // r15
  char v18; // bl
  unsigned int v19; // ecx
  char v20; // r8
  __int64 v21; // r14
  unsigned __int64 v22; // rdi
  void *v23; // r12
  char v24; // r13
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  char v35; // [rsp+40h] [rbp-78h]
  char v36; // [rsp+41h] [rbp-77h]
  __int64 v37; // [rsp+48h] [rbp-70h]
  void (__fastcall *v38)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+50h] [rbp-68h]
  struct NDIS_PCW_CONTEXT v39; // [rsp+58h] [rbp-60h] BYREF
  struct _NET_BUFFER_LIST *v41; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+D0h] [rbp+18h]
  unsigned int v43; // [rsp+D8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = (struct _NET_BUFFER_LIST *)a2;
  v5 = (struct _NET_BUFFER_LIST *)a2;
  v6 = a1;
  v39.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v7 = a4;
  v8 = a3;
  v9 = 2;
  v10 = *(_QWORD *)(a1 + 3784);
  v39.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v11 = *(void (__fastcall **)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))(v10 + 184);
  v38 = v11;
  v37 = v10;
  v39.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  v39.CurrentCpu = -1;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(42LL, &WPP_baff752c64773449955de141535fd9df_Traceguids, a1, a2);
  if ( *(_DWORD *)(v6 + 1836)
    || (!*(_BYTE *)(v6 + 91) || *(_WORD *)(v6 + 1820) <= 1u && !*(_BYTE *)(v6 + 1999))
    && (v7 & 2) == 0
    && (*(_DWORD *)(v6 + 120) & 0x4000) == 0
    || (ndisMLoopbackNetBufferLists(v6, (_DWORD)v5, v8, v7, (__int64)&v41), (v5 = v41) != 0LL) )
  {
    if ( a5 || !*(_QWORD *)(v6 + 4480) )
      goto LABEL_15;
    v12 = 0;
    Alignment = (_SLIST_HEADER *)v5;
    if ( v5 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        ++v12;
      }
      while ( Alignment );
    }
    if ( (unsigned __int8)ndisSetBusyAsync(v6, v12, 52, (_DWORD)v5, v8) )
    {
LABEL_15:
      if ( ndisNblTrackerMode )
      {
        v14 = *(_QWORD *)(v6 + 4104);
        v15 = 0LL;
        v16 = v7;
        v17 = 0LL;
        v18 = ndisNblTrackerEpoch;
        v19 = v16 & 1;
        v36 = 0;
        v20 = v19 & 1;
        v21 = 0LL;
        v35 = v19 & 1;
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        {
          ndisNblTrackerRecordEvent(v5, 0LL, 0x92u, (void *)v14, v19);
          v20 = v35;
        }
        v22 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v22 & 1) != 0 )
        {
          v23 = *(void **)((v22 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
          v22 ^= ((unsigned __int8)v22 ^ (unsigned __int8)(2 * v18)) & 2;
        }
        else
        {
          v23 = (void *)v22;
        }
        if ( v5 )
        {
          v24 = 0;
          do
          {
            v25 = (unsigned __int64)v5->NetBufferListInfo[26];
            do
            {
              if ( v5->NetBufferListInfo[26] != (void *)v25 )
                break;
              if ( !v25 && !v5->SourceHandle )
                v5->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, a2);
              if ( (v25 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(v5) )
              {
                v5->NetBufferListInfo[26] = (void *)(v22 | 4);
              }
              else if ( v5->SourceHandle != v23 || v5->ParentNetBufferList )
              {
                ++v15;
                v5->NetBufferListInfo[26] = (void *)v22;
              }
              else
              {
                ++v21;
                v5->NetBufferListInfo[26] = (void *)24;
                ++v15;
              }
              v5 = (struct _NET_BUFFER_LIST *)v5->Link.Alignment;
            }
            while ( v5 );
            v20 = v35;
            v26 = v17 - v15;
            if ( (v25 & 1) != 0 && v26 )
            {
              if ( !v35 && !v24 )
              {
                v24 = 1;
                v20 = KeGetCurrentIrql() == 2;
                v35 = v20;
              }
              v27 = v25;
              v28 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
              a2 = 2 * ((v27 >> 1) & 1);
              if ( v20 )
              {
                v29 = (_QWORD *)(*(_QWORD *)(v28 + 8 * a2 + 40) + (KeGetPcr()->Prcb.Number << 12));
                *v29 += v26;
              }
              else
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * a2 + 48), v26);
              }
            }
            v17 = v15;
          }
          while ( v5 );
          v5 = v41;
          v36 = v24;
          v6 = a1;
        }
        v30 = v15 - v21;
        if ( (v22 & 1) != 0 && v30 )
        {
          if ( !v20 && !v36 )
            v20 = KeGetCurrentIrql() == 2;
          v7 = v43;
          v31 = v22;
          v10 = v37;
          v32 = v22 & 0xFFFFFFFFFFFFFFF8uLL;
          v11 = v38;
          v33 = 2 * ((v31 >> 1) & 1);
          if ( v20 )
          {
            v5 = v41;
            v34 = (_QWORD *)(*(_QWORD *)(v32 + 8 * v33 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v34 += v30;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 8 * v33 + 48), v30);
            v5 = v41;
          }
        }
        else
        {
          v11 = v38;
          v10 = v37;
          v7 = v43;
        }
        v8 = v42;
        v9 = 2;
      }
      if ( SLOBYTE(v39.DatapathCyclesMask) < 0 )
      {
        if ( (v7 & 1) == 0 )
          v9 = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v39, 7u);
      }
      if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v10 + 26) & 2) != 0 )
        ndisVerifierNdisDispatch->NdisMiniportSendNetBufferListsHandler(
          *(void **)(v6 + 24),
          v5,
          v8,
          v7,
          (void *)v6,
          *(void **)(v6 + 4992),
          v11);
      else
        v11(*(void **)(v6 + 24), v5, v8, v7);
      if ( SLOBYTE(v39.DatapathCyclesMask) < 0 )
      {
        ndisPcwEndCycleCounter(&v39, 7u, 0x14uLL);
        if ( v9 != 2 )
          KeLowerIrql(v9);
      }
    }
  }
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(43LL, &WPP_baff752c64773449955de141535fd9df_Traceguids, v6, v5);
}
