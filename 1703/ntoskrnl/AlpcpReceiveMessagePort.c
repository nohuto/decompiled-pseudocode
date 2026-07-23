/*
 * XREFs of AlpcpReceiveMessagePort @ 0x140522CF0
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 * Callees:
 *     AlpcpWaitForSingleObject @ 0x140024478 (AlpcpWaitForSingleObject.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14043FB60 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpQueryHeadLargeQueue @ 0x140523540 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpLogReceiveMessage @ 0x1406B28DC (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406B2A00 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, LARGE_INTEGER *a3, ULONG_PTR *a4, int a5)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rsi
  volatile signed __int64 *v8; // rbp
  int v9; // r12d
  int v10; // eax
  volatile signed __int64 *v11; // r15
  ULONG_PTR HeadLargeQueue; // rdi
  _KLOCK_ENTRY *v13; // rax
  signed __int64 BugCheckParameter4; // rax
  int v15; // eax
  __int64 result; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edi
  struct _LIST_ENTRY *v20; // rdx
  _KTIMER *p_Timer; // rcx
  __int64 v22; // r8
  unsigned int v23; // r14d
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  volatile signed __int64 *v26; // rsi
  _KTIMER *v27; // rax
  struct _LIST_ENTRY *v28; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v30; // r8
  struct _KTHREAD *v31; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  v31 = CurrentThread;
  v8 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    ExAcquirePushLockSharedEx(v6 + 352, 0LL);
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 416);
        if ( (v10 & 0x40) != 0 )
        {
          v19 = -1073740032;
          goto LABEL_48;
        }
        if ( (v10 & 0x10) != 0 )
        {
          v19 = -1073741759;
          goto LABEL_48;
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
        v13 = (_KLOCK_ENTRY *)KeAbPreAcquire(HeadLargeQueue - 16, 0LL, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(HeadLargeQueue - 16), 0LL) )
        {
          if ( v13 )
            v13->AcquiredByte |= 1u;
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
          v17 = 0;
          if ( *(_QWORD *)(HeadLargeQueue + 136) )
            v17 = 0x80000000;
          if ( *(_QWORD *)(HeadLargeQueue + 144) )
            v17 |= 0x40000000u;
          if ( *(_QWORD *)(HeadLargeQueue + 152) )
            v17 |= 0x10000000u;
          if ( (v17 & a5) != 0 )
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
          if ( v9 )
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
          KeAbPostReleaseEx(HeadLargeQueue - 16, v13);
        if ( !*(_QWORD *)(HeadLargeQueue + 96) )
        {
          AlpcpReferenceBlob(HeadLargeQueue);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( v9 )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          ExAcquirePushLockSharedEx(v6 + 352, 0LL);
          v9 = 0;
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
              v24 = *(_QWORD *)(v6 + 144);
              if ( v24 == v6 + 144 || !v24 )
                v24 = 0LL;
              if ( HeadLargeQueue == v24 )
                goto LABEL_12;
            }
            if ( HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
              goto LABEL_12;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) == 17 )
            {
LABEL_86:
              KeAbPostRelease(v6 + 352);
              AlpcpUnlockMessage(HeadLargeQueue);
              CurrentThread = v31;
              goto LABEL_2;
            }
          }
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          goto LABEL_86;
        }
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        CurrentThread = v31;
        v9 = 1;
      }
      if ( *(_QWORD *)(v6 + 384) != v6 + 384 )
      {
        v25 = *(_QWORD *)(v6 + 384) - 80LL;
        **(_QWORD **)(v25 + 88) = *(_QWORD *)(v25 + 80);
        *(_QWORD *)(*(_QWORD *)(v25 + 80) + 8LL) = *(_QWORD *)(v25 + 88);
        --*(_DWORD *)(v6 + 464);
        AlpcpReferenceBlob(v25);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        AlpcpLockForCachedReferenceBlob(v25);
        *(_WORD *)(v25 - 30) -= 2;
        *a4 = v25;
        return 0LL;
      }
      v18 = *(_QWORD *)(v6 + 360);
      if ( v18 && (*(_QWORD *)(*(_QWORD *)(v18 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v19 = 1073741872;
        goto LABEL_48;
      }
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_47;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v19 = 258;
LABEL_48:
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        return v19;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_47;
      if ( v9 )
      {
        LODWORD(CurrentThread[1].RelativeTimerBias) = a5;
        ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
        v20 = *(struct _LIST_ENTRY **)(v6 + 240);
        p_Timer = &CurrentThread[1].Timer;
        if ( v20->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
          __fastfail(3u);
        *(_QWORD *)&p_Timer->Header.Lock = v6 + 232;
        CurrentThread[1].Timer.Header.WaitListHead.Flink = v20;
        v20->Flink = (struct _LIST_ENTRY *)p_Timer;
        *(_QWORD *)(v6 + 240) = p_Timer;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v23 = AlpcpCompleteDeferSignalRequestAndWait((__int64)a1, &CurrentThread[1].StateSaveArea, v22, a2, a3);
        if ( !v23 )
        {
          CurrentThread = v31;
          HeadLargeQueue = v31[1].RelativeTimerBias;
          v31[1].RelativeTimerBias = 0LL;
          if ( !HeadLargeQueue )
            goto LABEL_2;
          goto LABEL_61;
        }
        v26 = (volatile signed __int64 *)(v6 + 224);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v26, 0LL);
        v27 = &v31[1].Timer;
        if ( *(_QWORD *)&v31[1].Timer.Header.Lock )
        {
          v31[1].RelativeTimerBias = 0LL;
          v28 = *(struct _LIST_ENTRY **)&v27->Header.Lock;
          Flink = v31[1].Timer.Header.WaitListHead.Flink;
          if ( *(_KTIMER **)(*(_QWORD *)&v27->Header.Lock + 8LL) != v27 || (_KTIMER *)Flink->Flink != v27 )
            __fastfail(3u);
          Flink->Flink = v28;
          v28->Blink = Flink;
          *(_QWORD *)&v27->Header.Lock = 0LL;
          if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v26);
          KeAbPostRelease((ULONG_PTR)v26);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v26);
          KeAbPostRelease((ULONG_PTR)v26);
          AlpcpWaitForSingleObject(&v31[1].StateSaveArea, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = v31[1].RelativeTimerBias;
          v31[1].RelativeTimerBias = 0LL;
          if ( HeadLargeQueue )
          {
LABEL_61:
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
        return v23;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) == 17 )
      {
        v9 = 1;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        v9 = 1;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_47:
      v19 = -1073741823;
      goto LABEL_48;
    }
    if ( v9 )
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
    result = AlpcpCompleteDeferSignalRequestAndWait((__int64)a1, *(void **)(v6 + 248), v30, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
