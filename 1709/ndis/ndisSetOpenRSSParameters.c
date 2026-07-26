/*
 * XREFs of ndisSetOpenRSSParameters @ 0x1C001CD14
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00C4530 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001CBE8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCalculateRssParametersSize @ 0x1C001CF9C (ndisCalculateRssParametersSize.c)
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

unsigned __int8 __fastcall ndisSetOpenRSSParameters(_NDIS_OPEN_BLOCK *a1, __int64 a2, int *a3)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  unsigned int v6; // r14d
  _BYTE *v7; // rbx
  unsigned int v8; // eax
  unsigned __int8 v9; // cl
  unsigned __int16 v10; // dx
  int v11; // eax
  int v12; // edi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rdx
  unsigned int v14; // ecx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v15; // r14
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *PoolWithTag; // rax
  unsigned __int8 *v17; // rax
  KSPIN_LOCK *p_Lock; // r12
  KIRQL v19; // dl
  __int64 Oid; // r14
  unsigned __int8 v21; // r14
  __int64 v23; // rcx
  _NDIS_OPEN_BLOCK *v24; // r9
  __int64 v25; // rcx
  _NDIS_OPEN_BLOCK *v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int16 v29; // r12
  unsigned __int16 IndirectionTableSize; // ax
  unsigned __int16 HashSecretKeySize; // cx
  unsigned __int64 v32; // rcx
  int v33; // eax
  int v34; // ecx
  KSPIN_LOCK *v35; // rcx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rbx
  unsigned __int8 v37; // r8
  int v38; // r9d
  bool v39; // al
  bool v40; // r8
  __int16 v41; // dx
  __int16 v42; // dx
  unsigned __int16 v43; // r9
  unsigned __int8 v44; // r12
  int v45; // ecx
  int v46; // eax
  unsigned __int16 v47; // ax
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v49; // r15d
  _NDIS_RECEIVE_SCALE_PARAMETERS *v50; // rax
  int v51; // ebx
  int v52; // [rsp+20h] [rbp-88h]
  unsigned int Size; // [rsp+50h] [rbp-58h] BYREF
  int Size_4; // [rsp+54h] [rbp-54h]
  int v55; // [rsp+58h] [rbp-50h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v57; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v58; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v60; // [rsp+C8h] [rbp+20h]

  MiniportHandle = a1->MiniportHandle;
  Size = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(157LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportHandle, a1, a2);
  v6 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 56) = 0;
  if ( v6 < 0x1C )
  {
    *(_DWORD *)(a2 + 56) = 28;
    v12 = -1073676268;
    if ( (unsigned __int8)byte_1C0098752 < 2u )
      goto LABEL_35;
    v23 = 158LL;
    v24 = a1;
LABEL_33:
    WPP_SF_qqd(v23, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportHandle, v24, -1073676268);
    goto LABEL_35;
  }
  v7 = *(_BYTE **)(a2 + 40);
  v8 = 40;
  v9 = v7[1];
  if ( v9 >= 2u )
  {
    v10 = *((_WORD *)v7 + 1);
    if ( v10 < 0x28u )
    {
      if ( (unsigned __int8)byte_1C0098752 < 2u )
      {
LABEL_40:
        v12 = -1073676268;
        goto LABEL_35;
      }
      v27 = 159LL;
LABEL_39:
      WPP_SF_qq(v27, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportHandle, a2);
      goto LABEL_40;
    }
    if ( v9 >= 3u )
    {
      v8 = 44;
      if ( v10 < 0x2Cu )
      {
        if ( (unsigned __int8)byte_1C0098752 < 2u )
          goto LABEL_40;
        v27 = 160LL;
        goto LABEL_39;
      }
    }
    if ( v6 < v8 )
    {
      *(_DWORD *)(a2 + 56) = v8;
      v12 = -1073676268;
      if ( (unsigned __int8)byte_1C0098752 < 2u )
        goto LABEL_35;
      v23 = 161LL;
      v24 = (_NDIS_OPEN_BLOCK *)a2;
      goto LABEL_33;
    }
  }
  v11 = ndisCalculateRssParametersSize(*(_QWORD *)(a2 + 40), &Size);
  v12 = v11;
  if ( v11 )
  {
    if ( (unsigned __int8)byte_1C0098752 < 2u )
      goto LABEL_35;
    v25 = 162LL;
    v52 = v11;
    v26 = (_NDIS_OPEN_BLOCK *)a2;
  }
  else
  {
    NdisRSSParameters = a1->NdisRSSParameters;
    if ( !NdisRSSParameters && ((v7[4] & 0x10) != 0 || !(unsigned __int8)*((_DWORD *)v7 + 2)) )
      goto LABEL_35;
    if ( *((_WORD *)v7 + 6) > 0x200u )
    {
      if ( (unsigned __int8)byte_1C0098752 < 2u )
      {
LABEL_51:
        v12 = -1073676267;
        goto LABEL_35;
      }
      v28 = 163LL;
LABEL_50:
      WPP_SF_qq(v28, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportHandle, a1);
      goto LABEL_51;
    }
    if ( *((_WORD *)v7 + 10) != 40 && (v7[4] & 0x10) == 0 && (unsigned __int8)*((_DWORD *)v7 + 2) )
    {
      if ( (unsigned __int8)byte_1C0098752 < 2u )
        goto LABEL_51;
      v28 = 164LL;
      goto LABEL_50;
    }
    v14 = Size;
    if ( !Size && (v7[4] & 0x10) != 0 )
    {
      v14 = *((unsigned __int16 *)v7 + 1);
      Size = v14;
    }
    v12 = 0;
    if ( v6 >= v14 )
    {
      v15 = 0LL;
      if ( NdisRSSParameters )
        v15 = NdisRSSParameters;
      if ( !MiniportHandle->RssParametersBuffer
        && (PoolWithTag = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePoolWithTag(
                                                                   NonPagedPoolNxCacheAligned,
                                                                   0x728uLL,
                                                                   0x7372444Eu),
            (MiniportHandle->RssParametersBuffer = PoolWithTag) == 0LL)
        || !a1->RssParametersBuffer
        && (v17 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu),
            (a1->RssParametersBuffer = v17) == 0LL) )
      {
        v12 = -1073741670;
        goto LABEL_35;
      }
      p_Lock = &MiniportHandle->Lock;
      v19 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
      MiniportHandle->MiniportThread = KeGetCurrentThread();
      NewIrql = v19;
      MiniportHandle->LockDbg = 2305669;
      if ( v15 )
      {
        v57 = v7[1];
        if ( v15->Header.Revision == v57 )
        {
          if ( (unsigned __int8)*((_DWORD *)v7 + 2) )
          {
            v29 = *((_WORD *)v7 + 2);
            if ( (v29 & 0x10) == 0 )
            {
              IndirectionTableSize = v15->IndirectionTableSize;
              if ( IndirectionTableSize == *((_WORD *)v7 + 6) )
              {
                if ( !memcmp(
                        &v15->Header.Type + v15->IndirectionTableOffset,
                        &v7[*((unsigned int *)v7 + 4)],
                        IndirectionTableSize) )
                {
                  HashSecretKeySize = v15->HashSecretKeySize;
                  if ( HashSecretKeySize == *((_WORD *)v7 + 10)
                    && v15->BaseCpuNumber == *((_WORD *)v7 + 3)
                    && v15->Flags == v29
                    && !memcmp(
                          &v15->Header.Type + v15->HashSecretKeyOffset,
                          &v7[*((unsigned int *)v7 + 6)],
                          HashSecretKeySize) )
                  {
                    v32 = *(_QWORD *)&v15->Header.Type - *(_QWORD *)v7;
                    if ( *(_QWORD *)&v15->Header.Type == *(_QWORD *)v7 )
                      v32 = v15->HashInformation - (unsigned __int64)*((unsigned int *)v7 + 2);
                    if ( !v32 )
                    {
                      if ( v57 < 2u
                        || (v33 = *((_DWORD *)v7 + 8), v15->NumberOfProcessorMasks == v33)
                        && (v34 = *((_DWORD *)v7 + 9), v15->ProcessorMasksEntrySize == v34)
                        && !memcmp(
                              &v15->Header.Type + v15->ProcessorMasksOffset,
                              &v7[*((unsigned int *)v7 + 7)],
                              (unsigned int)(v34 * v33))
                        && (v57 < 3u
                         || v15->DefaultProcessorNumber.Group == *((_WORD *)v7 + 20)
                         && v15->DefaultProcessorNumber.Number == v7[42]) )
                      {
                        MiniportHandle->MiniportThread = 0LL;
                        v35 = &MiniportHandle->Lock;
                        MiniportHandle->LockDbg = 0;
                        v19 = NewIrql;
LABEL_82:
                        KeReleaseSpinLock(v35, v19);
                        goto LABEL_35;
                      }
                    }
                  }
                }
                v19 = NewIrql;
              }
            }
            p_Lock = &MiniportHandle->Lock;
          }
        }
      }
      if ( Size <= 0x394 )
      {
        Oid = (__int64)MiniportHandle->RssParametersBuffer->Oid;
        memmove((void *)Oid, v7, Size);
        if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
        {
          RssParametersBuffer = MiniportHandle->RssParametersBuffer;
          v37 = *(_BYTE *)(Oid + 1);
          v38 = (unsigned __int8)*(_DWORD *)(Oid + 8);
          v58 = RssParametersBuffer->Combined[1];
          Size_4 = *(_DWORD *)(Oid + 8);
          v39 = v58 == v37;
          v60 = v37;
          v40 = 0;
          v41 = *(_WORD *)(Oid + 4);
          if ( (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == v38 )
            v40 = v39;
          v55 = v38;
          v42 = v41 & 0x10;
          v43 = *(_WORD *)(Oid + 12);
          if ( *(_WORD *)&RssParametersBuffer->Combined[12] != v43 )
            goto LABEL_91;
          v44 = 0;
          if ( (*(_WORD *)&RssParametersBuffer->Combined[4] & 0x10) == v42 )
            v44 = v40;
          if ( memcmp(
                 &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]],
                 (const void *)(Oid + *(unsigned int *)(Oid + 16)),
                 v43) )
          {
LABEL_91:
            v44 = 0;
          }
          if ( v58 >= 2u && v60 >= 2u )
          {
            v45 = *(_DWORD *)(Oid + 32);
            if ( *(_DWORD *)&RssParametersBuffer->Combined[32] != v45
              || (v46 = *(_DWORD *)(Oid + 36), *(_DWORD *)&RssParametersBuffer->Combined[36] != v46)
              || memcmp(
                   &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[28]],
                   (const void *)(Oid + *(unsigned int *)(Oid + 28)),
                   (unsigned int)(v45 * v46)) )
            {
              v44 = 0;
            }
            if ( v58 >= 3u
              && v60 >= 3u
              && (*(_WORD *)&RssParametersBuffer->Combined[40] != *(_WORD *)(Oid + 40)
               || RssParametersBuffer->Combined[42] != *(_BYTE *)(Oid + 42)) )
            {
              v44 = 0;
            }
          }
          v47 = *(_WORD *)(Oid + 20);
          if ( *(_WORD *)&RssParametersBuffer->Combined[20] != v47
            || memcmp(
                 &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
                 (const void *)(Oid + *(unsigned int *)(Oid + 24)),
                 v47) )
          {
            v44 = 0;
          }
          OpenQueue = MiniportHandle->OpenQueue;
          v49 = Size_4 & 0xFFFF00;
          while ( OpenQueue )
          {
            v50 = OpenQueue->NdisRSSParameters;
            if ( v50 && OpenQueue != a1 )
              v49 |= v50->HashInformation & 0xFFFF00;
            OpenQueue = OpenQueue->MiniportNextOpen;
          }
          *(_DWORD *)(Oid + 8) = v49 | v55;
          v51 = *(_DWORD *)&RssParametersBuffer->Combined[8];
          MiniportHandle->MiniportThread = 0LL;
          MiniportHandle->LockDbg = 0;
          KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
          v21 = 0;
          if ( v49 == (v51 & 0xFFFF00) )
            v21 = v44;
          if ( v21 == 1 )
            goto LABEL_36;
        }
        else
        {
          MiniportHandle->MiniportThread = 0LL;
          v21 = 0;
          MiniportHandle->LockDbg = 0;
          KeReleaseSpinLock(p_Lock, NewIrql);
        }
        *(_DWORD *)(a2 + 88) |= 0x800u;
        MiniportHandle->SetInfoBuf = *(void **)(a2 + 40);
        MiniportHandle->SetInfoBufLen = *(_WORD *)(a2 + 48);
        *(_QWORD *)(a2 + 40) = MiniportHandle->RssParametersBuffer->Oid;
        *(_DWORD *)(a2 + 48) = Size;
        goto LABEL_27;
      }
      MiniportHandle->MiniportThread = 0LL;
      v12 = -1073676268;
      MiniportHandle->LockDbg = 0;
      v35 = p_Lock;
      goto LABEL_82;
    }
    *(_DWORD *)(a2 + 56) = v14;
    v12 = -1073676268;
    if ( (unsigned __int8)byte_1C0098752 < 2u )
      goto LABEL_35;
    v25 = 165LL;
    v52 = -1073676268;
    v26 = a1;
  }
  WPP_SF_qqd(v25, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportHandle, v26, v52);
LABEL_35:
  v21 = 1;
LABEL_36:
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a2 + 48);
LABEL_27:
  *a3 = v12;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqDD(166LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportHandle, a1, v21, v12);
  if ( v12 && (dword_1C0099FC4 & 4) != 0 )
    McTemplateK0jqxqqq(
      MiniportHandle->IfIndex,
      (unsigned int)&SetOpenRSSCapsFailed,
      (_DWORD)MiniportHandle + 4032,
      (_DWORD)MiniportHandle + 4032,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v12,
      139,
      (char)a1);
  return v21;
}
