/*
 * XREFs of VidSchSubmitCommand @ 0x1C006A5F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0003F40 (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x1C00042A0 (VidSchiUpdatePresentParameters.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006410 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSetPriorityContext @ 0x1C000FE48 (VidSchiSetPriorityContext.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0011600 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiConvertDeferredWaits @ 0x1C0011F70 (VidSchiConvertDeferredWaits.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001236C (VidSchiPropagatePresentHistoryToken.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C0012FD0 (VidMmFreeDeferredDmaBufferMapping.c)
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C004FCEC (VidSchRegisterCompletionEvent.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C00AA658 (VidSchiAllocateHistoryBufferStorage.c)
 */

__int64 __fastcall VidSchSubmitCommand(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r13
  int v6; // esi
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // ebx
  __int64 *v18; // rax
  __int64 *PoolWithTag; // rbx
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // r15d
  __int64 v31; // rdx
  void *v32; // rcx
  __int64 v33; // rcx
  const void *v34; // rsi
  KPRIORITY PriorityThread; // eax
  __int64 ***v36; // rax
  __int64 **v37; // rbx
  __int64 **v38; // rdx
  unsigned int v39; // esi
  __int64 *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  void *v46; // rcx
  _QWORD v47[20]; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int Size; // [rsp+140h] [rbp+8h]
  __int64 v49; // [rsp+158h] [rbp+20h]

  v3 = a1;
  if ( !a1 || !a2 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v44);
    return 3221225485LL;
  }
  v4 = *(_QWORD *)(a1 + 104);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(v4 + 164) || (a1 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 160), 0, 0)) )
  {
    v43 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v43 + 24) = v4;
    *(_QWORD *)(v43 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v43);
    return 3223192064LL;
  }
  v6 = *(_QWORD *)a2;
  v49 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x20) != 0 )
  {
    v7 = *(_DWORD *)(v4 + 464);
    if ( (v6 & 0x40) != 0 )
    {
      v8 = v6 & 0xFFFFFF7F;
      if ( v7 == -1 )
      {
        v6 = v8 | 0x1000;
        LODWORD(v49) = v6;
        *(_DWORD *)(v4 + 464) = *(_DWORD *)(a2 + 116);
      }
      else
      {
        if ( v7 != *(_DWORD *)(a2 + 116) )
        {
          v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, a2);
          v9[3] = v5;
          v9[4] = v4;
          v9[5] = *(unsigned int *)(a2 + 116);
          v9[6] = *(unsigned int *)(v4 + 464);
          WdLogEvent5_WdAssertion(v9);
          return 3221225485LL;
        }
        v6 = v8 | 0x2000;
        LODWORD(v49) = v6;
      }
    }
    else
    {
      if ( v7 == -1 )
      {
        v6 |= 0x7000u;
        LODWORD(v49) = v6;
      }
      else if ( v7 == *(_DWORD *)(a2 + 116) )
      {
        v6 |= 0x4000u;
        LODWORD(v49) = v6;
      }
      else
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, a2);
        v11[3] = v5;
        v11[4] = v4;
        v11[5] = *(unsigned int *)(a2 + 116);
        v11[6] = *(unsigned int *)(v4 + 464);
        WdLogEvent5_WdAssertion(v11);
      }
      *(_DWORD *)(v4 + 464) = -1;
    }
    if ( (v6 & 4) != 0 )
    {
      v14 = VidSchiSetFlipDevice(
              (struct _VIDSCH_GLOBAL *)v5,
              *(_DWORD *)(a2 + 116),
              (_QWORD *)v4,
              *(_DWORD *)(a2 + 120),
              9u,
              (*(_DWORD *)a2 & 0x20000000) != 0);
      if ( v14 < 0 )
      {
        v15 = WdLogNewEntry5_WdWarning(v13, v12);
        WdLogEvent5_WdWarning(v15);
        return (unsigned int)v14;
      }
      VidSchiUpdatePresentParameters(v5, a2);
    }
  }
  else if ( (v6 & 0x40000) != 0
         && !*(_DWORD *)(v3 + 424)
         && !*(_DWORD *)(v3 + 792)
         && (*(_QWORD *)a2 & 0x1000000) == 0
         && (*(_DWORD *)(a2 + 4) & 1) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      *(PKSPIN_LOCK *)(a2 + 96),
      *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(a2 + 104),
      0,
      0,
      0,
      0,
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 24),
      a2);
    return 0LL;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  v17 = *(_DWORD *)(v16 + 128) * (48 * *(_DWORD *)(v16 + 56) + ((8 * *(_DWORD *)(v16 + 56) + 167) & 0xFFFFFFF8))
      + 8 * (*(_DWORD *)(v16 + 56) + 89);
  if ( v17 <= 0x370 )
    v17 = 880;
  Size = v17;
  v18 = VidSchiInterlockedRemoveHeadListIfExist(
          (KSPIN_LOCK *)(v16 + 1888),
          (__int64 **)(v3 + 720),
          (_DWORD *)(v3 + 736));
  if ( v18 )
  {
    PoolWithTag = v18 - 1;
    goto LABEL_39;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v17, 0x68536956u);
  if ( !PoolWithTag )
  {
    memset(v47, 0, sizeof(v47));
    v20 = *(_QWORD *)(v3 + 96);
    LODWORD(v47[4]) |= 0x10u;
    LODWORD(v47[2]) = 1;
    LODWORD(v47[6]) = *(unsigned __int16 *)(v20 + 4);
    VidSchRegisterCompletionEvent(v16, (__int64)v47);
    do
    {
      v21 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v16 + 1888),
              (__int64 **)(v3 + 720),
              (_DWORD *)(v3 + 736));
      if ( v21 )
        PoolWithTag = v21 - 1;
      else
        VidSchWaitForCompletionEvent(v16, (__int64)v47, 19LL);
    }
    while ( !PoolWithTag );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v16 + 1896), v47, 0LL);
LABEL_39:
    if ( !PoolWithTag )
      goto LABEL_41;
  }
  memset(PoolWithTag, 0, Size);
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PoolWithTag + 13) = 1;
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v16 + 1888), v3 + 768, PoolWithTag + 1, (_DWORD *)(v3 + 784));
LABEL_41:
  *(_DWORD *)PoolWithTag = 1953189969;
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PoolWithTag + 13) = 2;
  *((_DWORD *)PoolWithTag + 16) = 0;
  if ( (v6 & 0x40000) != 0 )
  {
    *((_DWORD *)PoolWithTag + 12) = 7;
  }
  else if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)PoolWithTag + 12) = 0;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 12) = 3;
    v23 = *(unsigned int *)(a2 + 116);
    if ( (_DWORD)v23 != -1 )
    {
      v24 = *(unsigned __int8 *)(a2 + 433);
      v25 = v24 | (unsigned int)(unsigned __int8)*(_DWORD *)(a2 + 432);
      if ( v24 | (unsigned __int8)*(_DWORD *)(a2 + 432) )
      {
        v26 = *(_QWORD *)(v5 + 8 * v23 + 2992);
        do
        {
          v27 = !_BitScanForward(&v28, v25);
          v29 = 0xFFFFFFFFLL;
          if ( !v27 )
            v29 = v28;
          v30 = (char)v29;
          v31 = 272LL * (unsigned int)(char)v29;
          if ( *(_DWORD *)(v31 + v26 + 156) == 2 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v31, v25);
            v45[5] = v30;
            v45[3] = 281LL;
            v45[4] = 0x100000LL;
            v45[6] = *(unsigned int *)(a2 + 116);
            v45[7] = v5;
            WdLogEvent5_WdCriticalError(v45);
            VidMmFreeDeferredDmaBufferMapping(v46);
            JUMPOUT(0x1C006AD32LL);
          }
          v25 = ~(1 << v29) & (unsigned int)v25;
        }
        while ( (_DWORD)v25 );
      }
    }
  }
  PoolWithTag[11] = v3;
  PoolWithTag[12] = (__int64)KeGetCurrentThread();
  PoolWithTag[9] = v49;
  PoolWithTag[17] = *(_QWORD *)(a2 + 96);
  PoolWithTag[18] = *(_QWORD *)(a2 + 104);
  *((_DWORD *)PoolWithTag + 38) = *(_DWORD *)(a2 + 116);
  if ( (v6 & 4) != 0 )
  {
    *((_DWORD *)PoolWithTag + 16) = (*(_DWORD *)(v5 + 2152) >> 7) & 4;
    if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) == 0 && ((v6 & 0x400) == 0 || (v6 & 0x800) != 0) )
    {
      v22 = *(unsigned int *)(a2 + 116);
      *(_QWORD *)(a2 + 128) = ++*(_QWORD *)(v4 + 8 * v22 + 208);
    }
  }
  else if ( (v6 & 0x20) != 0 )
  {
    *((_DWORD *)PoolWithTag + 16) = (*(_DWORD *)(v5 + 2152) >> 8) & 4;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 16) = 4;
  }
  memmove(PoolWithTag + 33, (const void *)a2, *(unsigned int *)(a2 + 420));
  if ( *(_QWORD *)(a2 + 24) && !*(_BYTE *)(v3 + 909) )
    _InterlockedIncrement((volatile signed __int32 *)(PoolWithTag[36] + 4));
  v32 = (void *)PoolWithTag[44];
  if ( v32 )
    ObfReferenceObject(v32);
  v33 = PoolWithTag[34];
  if ( v33 && (PoolWithTag[33] & 0x8000000) != 0 && !PoolWithTag[38] )
    PoolWithTag[38] = *(_QWORD *)(v33 + 96);
  if ( (PoolWithTag[74] & 1) != 0 )
    VidSchiConvertDeferredWaits(v3);
  if ( *(_DWORD *)(a2 + 344) )
  {
    v34 = *(const void **)(a2 + 336);
    result = VidSchiAllocateHistoryBufferStorage(PoolWithTag);
    if ( (int)result < 0 )
      return result;
    memmove((void *)PoolWithTag[75], v34, 8LL * *(unsigned int *)(a2 + 344));
  }
  if ( (*(_DWORD *)(v5 + 2152) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v3, PriorityThread);
  }
  PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
  v36 = (__int64 ***)(PoolWithTag + 4);
  *((_DWORD *)PoolWithTag + 13) = 3;
  v37 = (__int64 **)(v3 + 688);
  v38 = *(__int64 ***)(v3 + 696);
  if ( *v38 != (__int64 *)(v3 + 688) )
    __fastfail(3u);
  *v36 = v37;
  v36[1] = v38;
  *v38 = (__int64 *)v36;
  *(_QWORD *)(v3 + 696) = v36;
  ++*(_DWORD *)(v3 + 424);
  v39 = (*(_DWORD *)a2 >> 6) & 1;
  while ( *(_DWORD *)(v3 + 424) > v39 )
  {
    v40 = *v37;
    v41 = **v37;
    if ( (__int64 **)(*v37)[1] != v37 || *(__int64 **)(v41 + 8) != v40 )
      __fastfail(3u);
    *v37 = (__int64 *)v41;
    *(_QWORD *)(v41 + 8) = v37;
    --*(_DWORD *)(v3 + 424);
    VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)(v40 - 4));
  }
  v42 = *(unsigned int *)(a2 + 116);
  if ( (unsigned int)v42 < *(_DWORD *)(v5 + 40) && (*(_BYTE *)a2 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v42 + 2992) + 46928LL), 2, 1);
  return 0LL;
}
