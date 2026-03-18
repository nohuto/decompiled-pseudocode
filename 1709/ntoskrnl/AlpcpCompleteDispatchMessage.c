/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1404A1000
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x1404633D0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchCloseMessage @ 0x1404651EC (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x140467354 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1404A0B50 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x14006AE00 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011DF30 (AlpcpQueueIoCompletionPort.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpDestroyBlob @ 0x14049DF24 (AlpcpDestroyBlob.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404A17F0 (AlpcpCaptureMessageDataSafe.c)
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 *     AlpcpReadMessageData @ 0x1404A25E0 (AlpcpReadMessageData.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14056F258 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageDirectQueue @ 0x140578EF8 (AlpcpInsertMessageDirectQueue.c)
 *     PsChargeProcessWakeCounter @ 0x140599290 (PsChargeProcessWakeCounter.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406DD418 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1406DD678 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpFreeBitmap @ 0x1406DD8A8 (AlpcpFreeBitmap.c)
 *     AlpcpInsertCompletionListEntry @ 0x1406DDE70 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpLogReceiveMessage @ 0x1406DE624 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x1406DE688 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406DE844 (AlpcpLogWaitForReply.c)
 */

char __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // rdi
  int v4; // ecx
  __int64 v5; // rbx
  int v6; // esi
  int v7; // r12d
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  BOOL v12; // r13d
  void *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rsi
  int v16; // r13d
  __int64 v17; // rsi
  int v18; // eax
  char v19; // r14
  char v20; // cl
  int v21; // esi
  signed __int64 v22; // rcx
  char result; // al
  volatile signed __int64 *v24; // r14
  __int64 v25; // rsi
  unsigned int v26; // edx
  int v27; // ecx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  void *v31; // rdi
  __int64 v32; // rcx
  int v33; // r9d
  unsigned int v34; // r8d
  int v35; // edx
  int v36; // ecx
  unsigned int v37; // r10d
  int v38; // r8d
  __int64 v39; // rdx
  unsigned int v40; // r8d
  unsigned int CompletionBuffer; // eax
  __int64 v42; // r14
  __int16 v43; // cx
  __int16 v44; // ax
  __int16 v45; // ax
  __int64 v46; // rdx
  int v47; // edx
  int inserted; // eax
  char v49; // r8
  unsigned int v50; // edx
  int v51; // ecx
  _DWORD *BugCheckParameter4; // [rsp+20h] [rbp-88h]
  unsigned int v53; // [rsp+40h] [rbp-68h]
  unsigned int v54; // [rsp+44h] [rbp-64h]
  unsigned int v55; // [rsp+48h] [rbp-60h]
  __int64 v56; // [rsp+50h] [rbp-58h]
  char v57; // [rsp+B0h] [rbp+8h]
  char v58; // [rsp+B8h] [rbp+10h]
  int v59; // [rsp+C0h] [rbp+18h]
  unsigned int v60; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v57 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4 & 4;
  v7 = v4 & 0x20000;
  v56 = v5;
  v8 = v4 & 0x800000;
  v59 = v6;
  v9 = *(unsigned int *)(*(_QWORD *)a1 + 256LL);
  v10 = 1LL;
  if ( (v9 & 0x400000) != 0 )
    v11 = 2;
  else
    v11 = (v9 & 0x200000) != 0;
  v12 = v7 || v8;
  if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v13 = *(void **)(v1 + 24);
    if ( ((unsigned __int8)v13 & 1) == 0 && v13 )
    {
      if ( v12 || v11 || (AlpcpWakePolicyDefault & 1) == 0 )
      {
        if ( PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)(v1 + 24)) )
          v14 = PspChargeProcessWakeCounter(v13, 1, 1, 0LL);
        else
          v14 = 0LL;
        *(_QWORD *)(v3 + 208) = v14;
      }
      if ( KeHeteroSystem
        && v12
        && ((*((_DWORD *)&KeGetCurrentThread()->0 + 1) & 3) == 0
         || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x1C0) == 0xC0
         || (KeGetCurrentThread()->ThreadFlags2 & 3) == 3) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v13);
      }
    }
    v5 = v56;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1, v3);
    ++*(_WORD *)(v3 - 30);
    AlpcpInsertMessageDirectQueue(v1, v3, v9, v10);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 40) &= ~0x10000u;
    *(_QWORD *)(v3 + 160) = 0LL;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 - 16));
    KeAbPostRelease(v5 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v7 && !v6 )
    {
      result = KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0);
      v32 = *(_QWORD *)(a1 + 40);
      if ( (v32 & 1) != 0 )
        result = ObfDereferenceObject((PVOID)(v32 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v15 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v15 == v15 )
      goto LABEL_16;
    v24 = (volatile signed __int64 *)(v1 + 224);
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    if ( (_QWORD *)*v15 == v15 )
    {
      if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
      KeAbPostRelease(v1 + 224);
LABEL_16:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v58 = 1;
        v16 = 0;
      }
      else
      {
        v16 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
        v58 = 0;
      }
      v17 = *(_QWORD *)(v1 + 360);
      if ( v17 )
      {
        v33 = *(_DWORD *)(v1 + 416);
        if ( (v33 & 0x10000) != 0 )
        {
          v34 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(v3 + 144) )
            v34 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
          v35 = v34 | 0x10000000;
          if ( !*(_QWORD *)(v3 + 152) )
            v35 = v34;
          if ( *(_QWORD *)(v3 + 168) )
            v35 |= 0x2000000u;
          v36 = *(_DWORD *)(v17 + 148);
          if ( (~v36 & v35) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v36 & 0x20000000) != 0) )
          {
            v37 = *(unsigned __int16 *)(v3 + 242);
            v54 = v37;
            if ( v36 )
            {
              v38 = 4;
              if ( (v33 & 0x800) == 0 )
                v38 = 8;
              v39 = (unsigned int)(v38 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
              v40 = v39 ? v38 - v39 : 0;
              v60 = v40;
              v37 += v40 + *(_DWORD *)(v17 + 152);
              v54 = v37;
            }
            else
            {
              v60 = 0;
            }
            v53 = 0;
            if ( (v33 & 0x800) != 0 )
            {
              v37 -= 16;
              v53 = 0x80000000;
              v54 = v37;
            }
            CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v37);
            v55 = CompletionBuffer;
            if ( CompletionBuffer != -1 )
            {
              v42 = *(_QWORD *)(v17 + 120) + CompletionBuffer;
              if ( v53 == 0x80000000 )
              {
                v43 = *(_WORD *)(v3 + 240);
                *(_WORD *)v42 = v43;
                *(_WORD *)(v42 + 2) = v43 + 24;
                v44 = *(_WORD *)(v3 + 246);
                if ( v44 )
                  v45 = v44 - 16;
                else
                  v45 = 0;
                *(_WORD *)(v42 + 6) = v45;
                *(_WORD *)(v42 + 4) = *(_WORD *)(v3 + 244) | 0x1000;
                *(_DWORD *)(v42 + 8) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(v42 + 12) = *(_DWORD *)(v3 + 256);
                *(_DWORD *)(v42 + 16) = *(_DWORD *)(v3 + 264);
                *(_DWORD *)(v42 + 20) = *(_DWORD *)(v3 + 272);
                *(_DWORD *)(v42 + 20) = *(_DWORD *)(v3 + 272);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v42 + 4) &= 0xC00Fu;
                v46 = v42 + 24;
              }
              else
              {
                *(_OWORD *)v42 = *(_OWORD *)(v3 + 240);
                *(_OWORD *)(v42 + 16) = *(_OWORD *)(v3 + 256);
                *(_QWORD *)(v42 + 32) = *(_QWORD *)(v3 + 272);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v42 + 4) &= 0xC00Fu;
                v46 = v42 + 40;
              }
              if ( *(_QWORD *)(v3 + 176) )
                AlpcpGetDataFromUserVaSafe(v3, v46);
              else
                AlpcpReadMessageData(v3, v46);
              v47 = *(_DWORD *)(v17 + 148);
              if ( v47 )
              {
                BugCheckParameter4 = (_DWORD *)(v42 + *(unsigned __int16 *)(v42 + 2) + v60);
                *BugCheckParameter4 = v47;
                BugCheckParameter4[1] = 0;
                AlpcpExposeAttributes(v1, v53, v3, *(_DWORD *)(v17 + 148), BugCheckParameter4);
              }
              inserted = AlpcpInsertCompletionListEntry(v1, v55);
              if ( inserted )
              {
                v19 = 1;
                v57 = 1;
                *(_DWORD *)(*(_QWORD *)(v17 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
                *(_DWORD *)(*(_QWORD *)(v17 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
                if ( v58 && (inserted & 2) == 0 )
                {
                  v49 = v58;
                  if ( HIWORD(*(_QWORD *)(*(_QWORD *)(v17 + 80) + 64LL))
                     + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v17 + 144) )
                    v49 = 0;
                  v58 = v49;
                }
                if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
                  goto LABEL_171;
                v50 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                if ( !*(_QWORD *)(v3 + 144) )
                  v50 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                v51 = v50 | 0x10000000;
                if ( !*(_QWORD *)(v3 + 152) )
                  v51 = v50;
                if ( v51 )
                {
LABEL_171:
                  *(_WORD *)(v3 + 244) |= 0x2000u;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  *(_WORD *)(v3 + 244) &= ~0x2000u;
                }
LABEL_26:
                if ( AlpcpLogEnabled )
                  AlpcpLogSendMessage(v3);
                if ( v19 && AlpcpLogEnabled )
                  AlpcpLogReceiveMessage(v3);
                if ( v7 && AlpcpLogEnabled )
                  AlpcpLogWaitForReply(v3);
                *(_DWORD *)(v3 + 40) &= ~0x10000u;
                if ( AlpcpMessageLogEnabled )
                  AlpcpEnterStateChangeEventMessageLog(v3);
                v20 = *(_BYTE *)(v3 - 32);
                v21 = 0;
                if ( (v20 & 1) != 0 )
                {
                  v21 = 0x10000 - *(__int16 *)(v3 - 30);
                  *(_WORD *)(v3 - 30) = 0;
                  *(_BYTE *)(v3 - 32) = v20 & 0xFE;
                }
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
                KeAbPostRelease(v3 - 16);
                if ( v21 > 0 )
                {
                  v22 = -v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v21);
                  if ( v22 <= 0 )
                  {
                    if ( v22 )
                      KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v22);
                    AlpcpDestroyBlob(v3);
                  }
                }
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v56 - 16), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v56 - 16));
                KeAbPostRelease(v56 - 16);
                if ( v16 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  result = KeAbPostRelease(v1 + 352);
                  if ( v7 || v59 )
                  {
                    *(_BYTE *)(a1 + 58) = 0;
                    return result;
                  }
                  KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1, 1);
                }
                else
                {
                  if ( v58 )
                  {
                    if ( v7 || v59 )
                    {
                      result = v57;
                      *(_BYTE *)(a1 + 59) = v57;
                      *(_BYTE *)(a1 + 58) = 1;
                    }
                    else
                    {
                      AlpcpQueueIoCompletionPort((__int64 *)v1, v57, 1, 0);
                      result = ObfDereferenceObject((PVOID)v1);
                      *(_QWORD *)(a1 + 32) = 0LL;
                    }
                    return result;
                  }
                  v31 = *(void **)(v1 + 368);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  KeAbPostRelease(v1 + 352);
                  if ( v31 )
                    ExNotifyCallback(v31, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                }
                result = ObfDereferenceObject((PVOID)v1);
                *(_QWORD *)(a1 + 32) = 0LL;
                return result;
              }
              AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v55 >> 6, (v54 + 63) >> 6);
            }
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 144) )
        AlpcpExposeViewAttributeInSenderContext((PVOID)v1, v3);
      ++*(_WORD *)(v3 - 30);
      ExAcquirePushLockExclusiveEx(v1 + 136, 0LL);
      v18 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v18 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      *(_QWORD *)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 136));
      KeAbPostRelease(v1 + 136);
      v19 = 0;
      goto LABEL_26;
    }
    v25 = *v15 - 1776LL;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1, v3);
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_99;
    v26 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v26 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v27 = v26 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v27 = v26;
    if ( (v27 & *(_DWORD *)(v25 + 1768)) != 0 )
    {
LABEL_99:
      *(_WORD *)(v3 + 244) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      AlpcpInsertMessagePendingQueue(v1, v3);
    }
    else
    {
      *(_WORD *)(v3 + 244) &= ~0x2000u;
    }
    *(_QWORD *)(v25 + 1768) = v3;
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x4000u;
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v3);
    v28 = (_QWORD *)(v25 + 1776);
    v29 = *(_QWORD *)(v25 + 1776);
    if ( *(_QWORD *)(v29 + 8) != v25 + 1776 || (v30 = *(_QWORD **)(v25 + 1784), (_QWORD *)*v30 != v28) )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    *v28 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x10000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v56 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v56 - 16));
    KeAbPostRelease(v56 - 16);
    if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v7 || v59 )
      *(_QWORD *)(a1 + 24) = v25;
    else
      return KeReleaseSemaphoreEx(v25 + 1608, 1, 1);
  }
  return result;
}
