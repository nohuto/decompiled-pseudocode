/*
 * XREFs of VidSchSubmitCommand @ 0x1C006E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004A98 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0010DCC (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiSetPriorityContext @ 0x1C0010E38 (VidSchiSetPriorityContext.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011D98 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiConvertDeferredWaits @ 0x1C0012970 (VidSchiConvertDeferredWaits.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C00140F0 (VidMmFreeDeferredDmaBufferMapping.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006EEB0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007182C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C00B2F64 (VidSchiAllocateHistoryBufferStorage.c)
 */

__int64 __fastcall VidSchSubmitCommand(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  _DWORD *PoolWithTag; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  bool v13; // zf
  __int64 v14; // r15
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebp
  __int64 v24; // rdx
  void *v25; // rcx
  __int64 v26; // rcx
  const void *v27; // rbp
  KPRIORITY PriorityThread; // eax
  __int64 *v29; // rax
  __int64 v30; // rbx
  __int64 **v31; // rdx
  unsigned int v32; // ebp
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  void *v39; // rcx
  __int64 v40; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v41[20]; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int Size; // [rsp+140h] [rbp+8h]
  __int64 v43; // [rsp+158h] [rbp+20h]

  v3 = a1;
  if ( !a1 || !a2 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v37);
    return 3221225485LL;
  }
  v4 = *(_QWORD *)(a1 + 104);
  v43 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(v4 + 164) || (a1 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 160), 0, 0)) )
  {
    v36 = WdLogNewEntry5_WdWarning(a1);
    *(_QWORD *)(v36 + 24) = v4;
    *(_QWORD *)(v36 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v36);
    return 3223192064LL;
  }
  v5 = *(_QWORD *)a2;
  v40 = v5;
  if ( (v5 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(
               (struct VIDSCH_SUBMIT_DATA2 *)a2,
               (struct _VIDSCH_DEVICE *)v4,
               (struct _VIDSCH_SUBMIT_FLAGS *)&v40);
    if ( (int)result < 0 )
      return result;
  }
  else if ( (v5 & 0x40000) != 0
         && !*(_DWORD *)(v3 + 424)
         && !*(_DWORD *)(v3 + 768)
         && (v5 & 0x1000000) == 0
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
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
  v8 = *(_DWORD *)(v7 + 128) * (48 * *(_DWORD *)(v7 + 56) + ((8 * *(_DWORD *)(v7 + 56) + 175) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v7 + 56) + 93);
  if ( v8 <= 0x3A0 )
    v8 = 928;
  Size = v8;
  v9 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 1896), (_QWORD **)(v3 + 696), (_DWORD *)(v3 + 712));
  if ( v9 )
  {
    PoolWithTag = v9 - 1;
    goto LABEL_24;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x68536956u);
  if ( !PoolWithTag )
  {
    memset(v41, 0, sizeof(v41));
    v11 = *(_QWORD *)(v3 + 96);
    LODWORD(v41[4]) |= 0x10u;
    LODWORD(v41[2]) = 1;
    LODWORD(v41[6]) = *(unsigned __int16 *)(v11 + 4);
    VidSchRegisterCompletionEvent(v7, v41);
    do
    {
      v12 = VidSchiInterlockedRemoveHeadListIfExist(
              (KSPIN_LOCK *)(v7 + 1896),
              (_QWORD **)(v3 + 696),
              (_DWORD *)(v3 + 712));
      if ( v12 )
        PoolWithTag = v12 - 1;
      else
        VidSchWaitForCompletionEvent(v7, v41, 19LL);
    }
    while ( !PoolWithTag );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v7 + 1904), v41, 0LL);
LABEL_24:
    if ( !PoolWithTag )
      goto LABEL_26;
  }
  memset(PoolWithTag, 0, Size);
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  PoolWithTag[13] = 1;
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v7 + 1896), v3 + 744, (_QWORD *)PoolWithTag + 1, (_DWORD *)(v3 + 760));
LABEL_26:
  *PoolWithTag = 1953189969;
  v13 = (v40 & 0x40000) == 0;
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  PoolWithTag[13] = 2;
  PoolWithTag[16] = 0;
  if ( !v13 )
  {
    PoolWithTag[12] = 7;
LABEL_28:
    v14 = v43;
    goto LABEL_29;
  }
  if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) != 0 )
  {
    PoolWithTag[12] = 0;
    goto LABEL_28;
  }
  PoolWithTag[12] = 3;
  v17 = *(unsigned int *)(a2 + 116);
  if ( (_DWORD)v17 == -1 )
    goto LABEL_28;
  v18 = *(_DWORD *)(a2 + 440);
  v19 = ((unsigned __int16)v18 | (unsigned __int16)(v18 >> 10)) & 0x3FF;
  if ( (((unsigned __int16)v18 | (unsigned __int16)(v18 >> 10)) & 0x3FF) == 0 )
    goto LABEL_28;
  v14 = v43;
  v20 = *(_QWORD *)(v43 + 8 * v17 + 3008);
  do
  {
    v13 = !_BitScanForward(&v21, v19);
    v22 = 0xFFFFFFFFLL;
    if ( !v13 )
      v22 = v21;
    v23 = (char)v22;
    v24 = 280LL * (unsigned int)(char)v22;
    if ( *(_DWORD *)(v24 + v20 + 180) == 2 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v24, v19);
      v38[5] = v23;
      v38[3] = 281LL;
      v38[4] = 0x100000LL;
      v38[6] = *(unsigned int *)(a2 + 116);
      v38[7] = v43;
      WdLogEvent5_WdCriticalError(v38);
      VidMmFreeDeferredDmaBufferMapping(v39);
      JUMPOUT(0x1C006EA45LL);
    }
    v19 = ~(1 << v22) & (unsigned int)v19;
  }
  while ( (_DWORD)v19 );
LABEL_29:
  *((_QWORD *)PoolWithTag + 11) = v3;
  *((_QWORD *)PoolWithTag + 13) = KeGetCurrentThread();
  v15 = v40;
  *((_QWORD *)PoolWithTag + 9) = v40;
  *((_QWORD *)PoolWithTag + 20) = *(_QWORD *)(a2 + 96);
  *((_QWORD *)PoolWithTag + 21) = *(_QWORD *)(a2 + 104);
  PoolWithTag[44] = *(_DWORD *)(a2 + 116);
  if ( (v15 & 4) != 0 )
  {
    PoolWithTag[16] = (*(_DWORD *)(v14 + 2168) >> 6) & 4;
    if ( ((*(_DWORD *)(a2 + 120) - 3) & 0xFFFFFFFD) == 0 && ((v15 & 0x400) == 0 || (v15 & 0x800) != 0) )
    {
      v16 = *(unsigned int *)(a2 + 116);
      *(_QWORD *)(a2 + 128) = ++*(_QWORD *)(v4 + 8 * v16 + 208);
    }
  }
  else if ( (v15 & 0x20) != 0 )
  {
    PoolWithTag[16] = (*(_DWORD *)(v14 + 2168) >> 7) & 4;
  }
  else
  {
    PoolWithTag[16] = 4;
  }
  memmove(PoolWithTag + 72, (const void *)a2, *(unsigned int *)(a2 + 428));
  if ( *(_QWORD *)(a2 + 24) && !*(_BYTE *)(v3 + 885) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)PoolWithTag + 39) + 4LL));
  v25 = (void *)*((_QWORD *)PoolWithTag + 47);
  if ( v25 )
    ObfReferenceObject(v25);
  v26 = *((_QWORD *)PoolWithTag + 37);
  if ( v26 && (PoolWithTag[72] & 0x8000000) != 0 && !*((_QWORD *)PoolWithTag + 41) )
    *((_QWORD *)PoolWithTag + 41) = *(_QWORD *)(v26 + 96);
  if ( (PoolWithTag[154] & 1) != 0 )
    VidSchiConvertDeferredWaits(v3);
  if ( *(_DWORD *)(a2 + 344) )
  {
    v27 = *(const void **)(a2 + 336);
    result = VidSchiAllocateHistoryBufferStorage(PoolWithTag);
    if ( (int)result < 0 )
      return result;
    memmove(*((void **)PoolWithTag + 78), v27, 8LL * *(unsigned int *)(a2 + 344));
  }
  if ( (*(_DWORD *)(v14 + 2168) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v3, PriorityThread);
  }
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  v29 = (__int64 *)(PoolWithTag + 8);
  PoolWithTag[13] = 3;
  v30 = v3 + 664;
  v31 = *(__int64 ***)(v3 + 672);
  if ( *v31 != (__int64 *)(v3 + 664) )
    __fastfail(3u);
  *v29 = v30;
  v29[1] = (__int64)v31;
  *v31 = v29;
  *(_QWORD *)(v3 + 672) = v29;
  ++*(_DWORD *)(v3 + 424);
  v32 = (*(_DWORD *)a2 >> 6) & 1;
  while ( *(_DWORD *)(v3 + 424) > v32 )
  {
    v33 = *(__int64 **)v30;
    if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 || (v34 = *v33, *(__int64 **)(*v33 + 8) != v33) )
      __fastfail(3u);
    *(_QWORD *)v30 = v34;
    *(_QWORD *)(v34 + 8) = v30;
    --*(_DWORD *)(v3 + 424);
    VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)(v33 - 4));
  }
  v35 = *(unsigned int *)(a2 + 116);
  if ( (unsigned int)v35 < *(_DWORD *)(v14 + 40) && (*(_BYTE *)a2 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v14 + 8 * v35 + 3008) + 56800LL), 2, 1);
  return 0LL;
}
