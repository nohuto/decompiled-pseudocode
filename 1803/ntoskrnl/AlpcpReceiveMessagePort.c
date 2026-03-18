/*
 * XREFs of AlpcpReceiveMessagePort @ 0x1404CAA80
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404D0660 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     AlpcpWaitForSingleObject @ 0x1400BB220 (AlpcpWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     AlpcpQueryHeadLargeQueue @ 0x1404CB280 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x140562AB8 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpLogReceiveMessage @ 0x140749514 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x140749638 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR *a4, int a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rsi
  volatile signed __int64 *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r12d
  int v13; // eax
  volatile signed __int64 *v14; // r14
  __int64 v15; // rdx
  ULONG_PTR HeadLargeQueue; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  _KLOCK_ENTRY *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  signed __int64 BugCheckParameter4; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 result; // rax
  int v33; // ecx
  _QWORD **v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edi
  volatile signed __int64 *v37; // rdi
  __int64 v38; // r8
  __int64 v39; // r9
  struct _LIST_ENTRY *v40; // rdx
  _KTIMER *p_Timer; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  unsigned int v46; // r14d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  ULONG_PTR v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  _KTIMER *v68; // rax
  __int64 v69; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v71; // r8
  struct _KTHREAD *v72; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  v72 = CurrentThread;
  v8 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    ExAcquirePushLockSharedEx(v6 + 352, 0LL);
    v12 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v6 + 416);
        if ( (v13 & 0x40) != 0 )
        {
          v36 = -1073740032;
          goto LABEL_46;
        }
        if ( (v13 & 0x10) != 0 )
        {
          v36 = -1073741759;
          goto LABEL_46;
        }
        v14 = (volatile signed __int64 *)(v6 + 136);
        ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( !HeadLargeQueue )
        {
          HeadLargeQueue = *(_QWORD *)(v6 + 144);
          if ( HeadLargeQueue == v6 + 144 || !HeadLargeQueue )
            break;
        }
        v19 = (_KLOCK_ENTRY *)KeAbPreAcquire(HeadLargeQueue - 16, 0LL, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(HeadLargeQueue - 16), 0LL) )
        {
          if ( v19 )
            v19->AcquiredByte |= 1u;
          *(_BYTE *)(HeadLargeQueue - 32) |= 1u;
          BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HeadLargeQueue - 24), 0x10000uLL)
                             + 0x10000;
          if ( BugCheckParameter4 <= 0 )
            KeBugCheckEx(0x18u, 0LL, HeadLargeQueue, 0x27uLL, BugCheckParameter4);
LABEL_12:
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 7) == 1 )
            --*(_DWORD *)(v6 + 448);
          else
            --*(_DWORD *)(v6 + 452);
          *(_DWORD *)(HeadLargeQueue + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(HeadLargeQueue + 16) = 0LL;
          **(_QWORD **)(HeadLargeQueue + 8) = *(_QWORD *)HeadLargeQueue;
          *(_QWORD *)(*(_QWORD *)HeadLargeQueue + 8LL) = *(_QWORD *)(HeadLargeQueue + 8);
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0 )
            goto LABEL_15;
          v28 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
          LODWORD(v28) = v28 | 0x40000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 144) )
            v28 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
          v33 = v28 | 0x10000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 152) )
            v33 = v28;
          if ( (v33 & a5) != 0 )
          {
LABEL_15:
            *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
            ExAcquirePushLockExclusiveEx(v6 + 176, 0LL);
            v27 = *(_DWORD *)(HeadLargeQueue + 40);
            *(_QWORD *)(HeadLargeQueue + 16) = v6;
            *(_DWORD *)(HeadLargeQueue + 40) = v27 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
            *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v6 + 192);
            *(_QWORD *)HeadLargeQueue = v6 + 184;
            **(_QWORD **)(v6 + 192) = HeadLargeQueue;
            *(_QWORD *)(v6 + 192) = HeadLargeQueue;
            ++*(_DWORD *)(v6 + 456);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 176), v24, v25, v26);
            KeAbPostRelease(v6 + 176);
          }
          else
          {
            *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
            --*(_WORD *)(HeadLargeQueue - 30);
          }
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136), v28, v21, v22);
          KeAbPostRelease(v6 + 136);
          if ( v12 )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352), v29, v30, v31);
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          goto LABEL_24;
        }
        if ( v19 )
          KeAbPostReleaseEx(HeadLargeQueue - 16, v19);
        if ( !*(_QWORD *)(HeadLargeQueue + 96) )
        {
          AlpcpReferenceBlob(HeadLargeQueue);
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136), v47, v48, v49);
          KeAbPostRelease(v6 + 136);
          if ( v12 )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352), v50, v51, v52);
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          ExAcquirePushLockSharedEx(v6 + 352, 0LL);
          v12 = 0;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
              goto LABEL_86;
          }
          else
          {
            ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
            if ( !AlpcpQueryHeadLargeQueue(v6) )
            {
              v53 = *(_QWORD *)(v6 + 144);
              if ( v53 == v6 + 144 || !v53 )
                v53 = 0LL;
              if ( HeadLargeQueue == v53 )
                goto LABEL_12;
            }
            if ( HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
              goto LABEL_12;
            if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136), v54, v21, v22);
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
            {
LABEL_86:
              KeAbPostRelease(v6 + 352);
              AlpcpUnlockMessage(HeadLargeQueue);
              CurrentThread = v72;
              goto LABEL_2;
            }
          }
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          goto LABEL_86;
        }
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136), v20, v21, v22);
        KeAbPostRelease(v6 + 136);
        if ( v12 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352), v62, v63, v64);
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        CurrentThread = v72;
        v12 = 1;
      }
      v34 = *(_QWORD ***)(v6 + 384);
      if ( v34 != (_QWORD **)(v6 + 384) )
      {
        v55 = (ULONG_PTR)(v34 - 10);
        *v34[1] = *v34;
        (*v34)[1] = v34[1];
        --*(_DWORD *)(v6 + 464);
        AlpcpReferenceBlob((ULONG_PTR)(v34 - 10));
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136), v56, v57, v58);
        KeAbPostRelease(v6 + 136);
        if ( v12 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352), v59, v60, v61);
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        AlpcpLockForCachedReferenceBlob(v55);
        *(_WORD *)(v55 - 30) -= 2;
        *a4 = v55;
        return 0LL;
      }
      v35 = *(_QWORD *)(v6 + 360);
      if ( v35 && (*(_QWORD *)(*(_QWORD *)(v35 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136), v15, v17, v18);
        KeAbPostRelease(v6 + 136);
        v36 = 1073741872;
        goto LABEL_46;
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136), v15, v17, v18);
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_45;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v36 = 258;
LABEL_46:
        if ( v12 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352), v9, v10, v11);
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        return v36;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_45;
      if ( v12 )
      {
        v37 = (volatile signed __int64 *)(v6 + 224);
        LODWORD(CurrentThread[1].RelativeTimerBias) = a5;
        ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
        v40 = *(struct _LIST_ENTRY **)(v6 + 240);
        p_Timer = &CurrentThread[1].Timer;
        if ( v40->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
          __fastfail(3u);
        *(_QWORD *)&p_Timer->Header.Lock = v6 + 232;
        CurrentThread[1].Timer.Header.WaitListHead.Flink = v40;
        v40->Flink = (struct _LIST_ENTRY *)p_Timer;
        *(_QWORD *)(v6 + 240) = p_Timer;
        if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224), (__int64)v40, v38, v39);
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352), v42, v43, v44);
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v46 = AlpcpCompleteDeferSignalRequestAndWait(a1, &CurrentThread[1].KernelStack, v45, a2, a3);
        if ( !v46 )
        {
          CurrentThread = v72;
          HeadLargeQueue = v72[1].RelativeTimerBias;
          v72[1].RelativeTimerBias = 0LL;
          if ( !HeadLargeQueue )
            goto LABEL_2;
          goto LABEL_59;
        }
        ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
        v68 = &v72[1].Timer;
        v69 = *(_QWORD *)&v72[1].Timer.Header.Lock;
        if ( v69 )
        {
          v72[1].RelativeTimerBias = 0LL;
          Flink = v72[1].Timer.Header.WaitListHead.Flink;
          if ( *(_KTIMER **)(v69 + 8) != v68 || (_KTIMER *)Flink->Flink != v68 )
            __fastfail(3u);
          Flink->Flink = (struct _LIST_ENTRY *)v69;
          *(_QWORD *)(v69 + 8) = Flink;
          *(_QWORD *)&v68->Header.Lock = 0LL;
          if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v37, (__int64)Flink, v66, v67);
          KeAbPostRelease((ULONG_PTR)v37);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v37, v65, v66, v67);
          KeAbPostRelease((ULONG_PTR)v37);
          AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = v72[1].RelativeTimerBias;
          v72[1].RelativeTimerBias = 0LL;
          if ( HeadLargeQueue )
          {
LABEL_59:
            AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
            --*(_WORD *)(HeadLargeQueue - 30);
            *(_DWORD *)(HeadLargeQueue + 40) &= ~0x2000u;
LABEL_24:
            if ( AlpcpLogEnabled )
              AlpcpLogReceiveMessage(HeadLargeQueue);
            *a4 = HeadLargeQueue;
            return 0LL;
          }
        }
        return v46;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) == 17 )
      {
        v12 = 1;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        v12 = 1;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_45:
      v36 = -1073741823;
      goto LABEL_46;
    }
    if ( v12 )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352), v9, v10, v11);
    }
    else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    }
    KeAbPostRelease(v6 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogWaitForNewMessage(v6);
    result = AlpcpCompleteDeferSignalRequestAndWait(a1, *(_QWORD *)(v6 + 248), v71, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
