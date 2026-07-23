/*
 * XREFs of AlpcpReceiveMessagePort @ 0x14049EAE0
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x140464260 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     AlpcpWaitForSingleObject @ 0x14011BDFC (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpQueryHeadLargeQueue @ 0x14049F294 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1405728B8 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpLogReceiveMessage @ 0x1406DE624 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406DE748 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR *a4, int a5)
{
  __int64 v6; // rsi
  volatile signed __int64 *v8; // rbp
  int i; // r12d
  int v10; // eax
  volatile signed __int64 *v11; // r14
  ULONG_PTR HeadLargeQueue; // rdi
  PRTL_BALANCED_NODE v13; // rax
  signed __int64 BugCheckParameter4; // rax
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // ecx
  unsigned int v20; // edi
  struct _LIST_ENTRY *v21; // rdx
  _KTIMER *p_Timer; // rcx
  __int64 v23; // r8
  unsigned int v24; // r14d
  __int64 v25; // rcx
  ULONG_PTR v26; // rdi
  __int64 v27; // r8
  volatile signed __int64 *v28; // rsi
  _KTIMER *v29; // rax
  struct _LIST_ENTRY *v30; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-48h]

  v6 = *a1;
  CurrentThread = KeGetCurrentThread();
  v8 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    ExAcquirePushLockSharedEx(v6 + 352, 0LL);
    for ( i = 0; ; i = 1 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 416);
        if ( (v10 & 0x40) != 0 )
        {
          v20 = -1073740032;
          goto LABEL_46;
        }
        if ( (v10 & 0x10) != 0 )
        {
          v20 = -1073741759;
          goto LABEL_46;
        }
        v11 = (volatile signed __int64 *)(v6 + 136);
        ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( !HeadLargeQueue )
        {
          HeadLargeQueue = *(_QWORD *)(v6 + 144);
          if ( HeadLargeQueue == v6 + 144 || !HeadLargeQueue )
            break;
        }
        v13 = KeAbPreAcquire(HeadLargeQueue - 16, 0LL, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(HeadLargeQueue - 16), 0LL) )
        {
          if ( v13 )
            BYTE2(v13[1].Left) |= 1u;
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
          v18 = (*(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 144) )
            v18 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
          v19 = v18 | 0x10000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 152) )
            v19 = v18;
          if ( (v19 & a5) != 0 )
          {
LABEL_15:
            *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
            ExAcquirePushLockExclusiveEx(v6 + 176, 0LL);
            v15 = *(_DWORD *)(HeadLargeQueue + 40);
            *(_QWORD *)(HeadLargeQueue + 16) = v6;
            *(_DWORD *)(HeadLargeQueue + 40) = v15 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
            *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v6 + 192);
            *(_QWORD *)HeadLargeQueue = v6 + 184;
            **(_QWORD **)(v6 + 192) = HeadLargeQueue;
            *(_QWORD *)(v6 + 192) = HeadLargeQueue;
            ++*(_DWORD *)(v6 + 456);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 176));
            KeAbPostRelease(v6 + 176);
          }
          else
          {
            *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
            --*(_WORD *)(HeadLargeQueue - 30);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          goto LABEL_24;
        }
        if ( v13 )
          KeAbPostReleaseEx(HeadLargeQueue - 16, (unsigned __int64)v13);
        if ( !*(_QWORD *)(HeadLargeQueue + 96) )
        {
          AlpcpReferenceBlob(HeadLargeQueue);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( i )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
            KeAbPostRelease(v6 + 352);
            i = 0;
          }
          else
          {
            i = 0;
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
            KeAbPostRelease(v6 + 352);
          }
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          ExAcquirePushLockSharedEx(v6 + 352, 0LL);
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
              goto LABEL_85;
          }
          else
          {
            ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
            if ( !AlpcpQueryHeadLargeQueue(v6) )
            {
              v25 = *(_QWORD *)(v6 + 144);
              if ( v25 == v6 + 144 || !v25 )
                v25 = 0LL;
              if ( HeadLargeQueue == v25 )
                goto LABEL_12;
            }
            if ( HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
              goto LABEL_12;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
            {
LABEL_85:
              KeAbPostRelease(v6 + 352);
              AlpcpUnlockMessage(HeadLargeQueue);
              goto LABEL_2;
            }
          }
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          goto LABEL_85;
        }
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
LABEL_62:
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        i = 1;
      }
      if ( *(_QWORD *)(v6 + 384) != v6 + 384 )
      {
        v26 = *(_QWORD *)(v6 + 384) - 80LL;
        **(_QWORD **)(v26 + 88) = *(_QWORD *)(v26 + 80);
        *(_QWORD *)(*(_QWORD *)(v26 + 80) + 8LL) = *(_QWORD *)(v26 + 88);
        --*(_DWORD *)(v6 + 464);
        AlpcpReferenceBlob(v26);
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        AlpcpLockForCachedReferenceBlob(v26);
        *(_WORD *)(v26 - 30) -= 2;
        result = 0LL;
        *a4 = v26;
        return result;
      }
      v17 = *(_QWORD *)(v6 + 360);
      if ( v17 && (*(_QWORD *)(*(_QWORD *)(v17 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v20 = 1073741872;
        goto LABEL_46;
      }
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_45;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v20 = 258;
LABEL_46:
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        return v20;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_45;
      if ( i )
      {
        LODWORD(CurrentThread[1].RelativeTimerBias) = a5;
        ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
        v21 = *(struct _LIST_ENTRY **)(v6 + 240);
        p_Timer = &CurrentThread[1].Timer;
        if ( v21->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
          __fastfail(3u);
        *(_QWORD *)&p_Timer->Header.Lock = v6 + 232;
        CurrentThread[1].Timer.Header.WaitListHead.Flink = v21;
        v21->Flink = (struct _LIST_ENTRY *)p_Timer;
        *(_QWORD *)(v6 + 240) = p_Timer;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v24 = AlpcpCompleteDeferSignalRequestAndWait(a1, &CurrentThread[1].KernelStack, v23, a2, a3);
        if ( !v24 )
        {
          HeadLargeQueue = CurrentThread[1].RelativeTimerBias;
          CurrentThread[1].RelativeTimerBias = 0LL;
          if ( !HeadLargeQueue )
            goto LABEL_2;
          goto LABEL_59;
        }
        v28 = (volatile signed __int64 *)(v6 + 224);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v28, 0LL);
        v29 = &CurrentThread[1].Timer;
        if ( *(_QWORD *)&CurrentThread[1].Timer.Header.Lock )
        {
          CurrentThread[1].RelativeTimerBias = 0LL;
          v30 = *(struct _LIST_ENTRY **)&v29->Header.Lock;
          Flink = CurrentThread[1].Timer.Header.WaitListHead.Flink;
          if ( *(_KTIMER **)(*(_QWORD *)&v29->Header.Lock + 8LL) != v29 || (_KTIMER *)Flink->Flink != v29 )
            __fastfail(3u);
          Flink->Flink = v30;
          v30->Blink = Flink;
          *(_QWORD *)&v29->Header.Lock = 0LL;
          if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v28);
          KeAbPostRelease((ULONG_PTR)v28);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v28);
          KeAbPostRelease((ULONG_PTR)v28);
          AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = CurrentThread[1].RelativeTimerBias;
          CurrentThread[1].RelativeTimerBias = 0LL;
          if ( HeadLargeQueue )
          {
LABEL_59:
            AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
            --*(_WORD *)(HeadLargeQueue - 30);
            *(_DWORD *)(HeadLargeQueue + 40) &= ~0x4000u;
LABEL_24:
            if ( AlpcpLogEnabled )
              AlpcpLogReceiveMessage(HeadLargeQueue);
            *a4 = HeadLargeQueue;
            return 0LL;
          }
        }
        return v24;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) != 17 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        goto LABEL_62;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_45:
      v20 = -1073741823;
      goto LABEL_46;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
    }
    else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    }
    KeAbPostRelease(v6 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogWaitForNewMessage(v6);
    result = AlpcpCompleteDeferSignalRequestAndWait(a1, *(_QWORD *)(v6 + 248), v27, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
