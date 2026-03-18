/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x140525120
 * Callers:
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchCloseMessage @ 0x1404745FC (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140524DE0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x1400402CC (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ExNotifyCallback @ 0x14006EEC0 (ExNotifyCallback.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1400E7A10 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     AlpcpInsertMessageDirectQueue @ 0x140440774 (AlpcpInsertMessageDirectQueue.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140470D0C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpReadMessageData @ 0x14047C750 (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpDestroyBlob @ 0x14047EE40 (AlpcpDestroyBlob.c)
 *     PsChargeProcessWakeCounter @ 0x1404C80E0 (PsChargeProcessWakeCounter.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140526170 (AlpcpCaptureMessageDataSafe.c)
 *     PspChargeProcessWakeCounter @ 0x1405263E0 (PspChargeProcessWakeCounter.c)
 *     AlpcpAllocateCompletionBuffer @ 0x14056A590 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpFreeBitmap @ 0x14056A820 (AlpcpFreeBitmap.c)
 *     AlpcpInsertCompletionListEntry @ 0x14056A87C (AlpcpInsertCompletionListEntry.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14056AA6C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x1406B2940 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1406B2AFC (AlpcpLogWaitForReply.c)
 */

int __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // r15
  ULONG_PTR v3; // rdi
  int v4; // ecx
  __int64 v5; // rbx
  int v6; // ebp
  int v7; // r12d
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  BOOL v11; // esi
  __int64 v12; // rbx
  int v13; // ebp
  int v14; // r13d
  __int64 v15; // rax
  _QWORD *v16; // rsi
  int v17; // r13d
  __int64 v18; // rsi
  int v19; // eax
  char v20; // al
  char v21; // cl
  int v22; // esi
  signed __int64 BugCheckParameter4; // rcx
  int result; // eax
  __int64 v25; // r9
  int v26; // r8d
  int v27; // r9d
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // r10d
  int v31; // r9d
  __int64 v32; // rdx
  unsigned int v33; // r9d
  unsigned int CompletionBuffer; // eax
  __int64 v35; // rbp
  char *v36; // rdx
  int v37; // ecx
  _DWORD *v38; // r9
  int inserted; // eax
  volatile signed __int64 *v40; // r13
  __int64 v41; // rsi
  unsigned int v42; // edx
  int v43; // ecx
  _QWORD *v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // r9
  void *v48; // rdi
  unsigned int v49; // edx
  int v50; // ecx
  __int64 v51; // rcx
  __int16 v52; // cx
  __int16 v53; // ax
  __int16 v54; // ax
  int v55; // [rsp+40h] [rbp-68h]
  unsigned int v56; // [rsp+44h] [rbp-64h]
  unsigned int v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+50h] [rbp-58h]
  char v59; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v60; // [rsp+B8h] [rbp+10h]
  int v61; // [rsp+C0h] [rbp+18h]
  unsigned int v62; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v60 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4 & 4;
  v7 = v4 & 0x20000;
  v58 = v5;
  v8 = v4 & 0x800000;
  v61 = v6;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 256LL);
  if ( (v9 & 0x400000) != 0 )
    v10 = 2;
  else
    v10 = (v9 & 0x200000) != 0;
  v11 = v7 || v8;
  if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v12 = *(_QWORD *)(v1 + 24);
    if ( (v12 & 1) == 0 && v12 && (v11 || v10 || (AlpcpWakePolicyDefault & 1) == 0) )
    {
      v13 = 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v13 = 3;
      }
      else if ( (AlpcpWakePolicyDefault & 1) != 0 )
      {
        v13 = 3;
        if ( (AlpcpWakePolicyDefault & 2) != 0 )
          v13 = -2147483645;
      }
      v14 = *(_DWORD *)(v3 + 264);
      if ( PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)(v1 + 24)) )
        v15 = PspChargeProcessWakeCounter(v12, v13, 2, v14, 1, 1, 0LL);
      else
        v15 = 0LL;
      *(_QWORD *)(v3 + 208) = v15;
      if ( v11
        && ((*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0xC0) == 0x80
         || (*((_DWORD *)&KeGetCurrentThread()->0 + 1) & 4) != 0) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v12, 0, 6, *(_DWORD *)(v3 + 264));
      }
      v6 = v61;
    }
    v5 = v58;
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
    AlpcpInsertMessageDirectQueue(v1, v3);
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
      v51 = *(_QWORD *)(a1 + 40);
      if ( (v51 & 1) != 0 )
        result = ObfDereferenceObject((PVOID)(v51 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v16 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v16 == v16 )
      goto LABEL_22;
    v40 = (volatile signed __int64 *)(v1 + 224);
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    if ( (_QWORD *)*v16 == v16 )
    {
      if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
      KeAbPostRelease(v1 + 224);
LABEL_22:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v59 = 1;
        v17 = 0;
      }
      else
      {
        v17 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
        v59 = 0;
      }
      v18 = *(_QWORD *)(v1 + 360);
      if ( v18 )
      {
        v26 = *(_DWORD *)(v1 + 416);
        if ( (v26 & 0x10000) != 0 )
        {
          v27 = *(_DWORD *)(v18 + 148);
          v28 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(v3 + 144) )
            v28 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
          v29 = v28 | 0x10000000;
          if ( !*(_QWORD *)(v3 + 152) )
            v29 = v28;
          if ( (v29 & ~v27) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v27 & 0x20000000) != 0) )
          {
            v30 = *(unsigned __int16 *)(v3 + 242);
            v56 = v30;
            if ( v27 )
            {
              v31 = 8;
              if ( (v26 & 0x800) != 0 )
                v31 = 4;
              v32 = (unsigned int)(v31 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
              v33 = v32 ? v31 - v32 : 0;
              v62 = v33;
              v30 += v33 + *(_DWORD *)(v18 + 152);
              v56 = v30;
            }
            else
            {
              v62 = 0;
            }
            v55 = 0;
            if ( (v26 & 0x800) != 0 )
            {
              v30 -= 16;
              v55 = 0x80000000;
              v56 = v30;
            }
            CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v30);
            v57 = CompletionBuffer;
            if ( CompletionBuffer != -1 )
            {
              v35 = *(_QWORD *)(v18 + 120) + CompletionBuffer;
              if ( v55 == 0x80000000 )
              {
                v52 = *(_WORD *)(v3 + 240);
                *(_WORD *)v35 = v52;
                *(_WORD *)(v35 + 2) = v52 + 24;
                v53 = *(_WORD *)(v3 + 246);
                if ( v53 )
                  v54 = v53 - 16;
                else
                  v54 = 0;
                *(_WORD *)(v35 + 6) = v54;
                *(_WORD *)(v35 + 4) = *(_WORD *)(v3 + 244) | 0x1000;
                *(_DWORD *)(v35 + 8) = *(_DWORD *)(v3 + 248);
                *(_DWORD *)(v35 + 12) = *(_DWORD *)(v3 + 256);
                *(_DWORD *)(v35 + 16) = *(_DWORD *)(v3 + 264);
                *(_DWORD *)(v35 + 20) = *(_DWORD *)(v3 + 272);
                *(_DWORD *)(v35 + 20) = *(_DWORD *)(v3 + 272);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v35 + 4) &= 0xC00Fu;
                v36 = (char *)(v35 + 24);
              }
              else
              {
                *(_OWORD *)v35 = *(_OWORD *)(v3 + 240);
                *(_OWORD *)(v35 + 16) = *(_OWORD *)(v3 + 256);
                *(_QWORD *)(v35 + 32) = *(_QWORD *)(v3 + 272);
                if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                  *(_WORD *)(v35 + 4) &= 0xC00Fu;
                v36 = (char *)(v35 + 40);
              }
              if ( *(_QWORD *)(v3 + 176) )
                AlpcpGetDataFromUserVaSafe(v3, v36);
              else
                AlpcpReadMessageData(v3, v36);
              v37 = *(_DWORD *)(v18 + 148);
              if ( v37 )
              {
                v38 = (_DWORD *)(v35 + *(unsigned __int16 *)(v35 + 2) + v62);
                *v38 = v37;
                v38[1] = 0;
                AlpcpExposeAttributes(v1, v55, v3, (__int64)v38);
              }
              inserted = AlpcpInsertCompletionListEntry(v1, v57);
              if ( inserted )
              {
                v60 = 1;
                *(_DWORD *)(*(_QWORD *)(v18 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
                *(_DWORD *)(*(_QWORD *)(v18 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
                if ( v59
                  && (inserted & 2) == 0
                  && HIWORD(*(_QWORD *)(*(_QWORD *)(v18 + 80) + 64LL))
                   + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v18 + 144) )
                {
                  v59 = 0;
                }
                if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
                  goto LABEL_89;
                v49 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                if ( !*(_QWORD *)(v3 + 144) )
                  v49 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                v50 = v49 | 0x10000000;
                if ( !*(_QWORD *)(v3 + 152) )
                  v50 = v49;
                if ( v50 )
                {
LABEL_89:
                  *(_WORD *)(v3 + 244) |= 0x2000u;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  *(_WORD *)(v3 + 244) &= ~0x2000u;
                }
LABEL_32:
                v20 = AlpcpLogEnabled;
                if ( AlpcpLogEnabled )
                {
                  AlpcpLogSendMessage(v3);
                  v20 = AlpcpLogEnabled;
                }
                if ( v7 && v20 )
                  AlpcpLogWaitForReply(v3);
                *(_DWORD *)(v3 + 40) &= ~0x10000u;
                if ( AlpcpMessageLogEnabled )
                  AlpcpEnterStateChangeEventMessageLog(v3);
                v21 = *(_BYTE *)(v3 - 32);
                v22 = 0;
                if ( (v21 & 1) != 0 )
                {
                  v22 = 0x10000 - *(__int16 *)(v3 - 30);
                  *(_WORD *)(v3 - 30) = 0;
                  *(_BYTE *)(v3 - 32) = v21 & 0xFE;
                }
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
                KeAbPostRelease(v3 - 16);
                if ( v22 > 0 )
                {
                  BugCheckParameter4 = -v22 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v22);
                  if ( BugCheckParameter4 <= 0 )
                  {
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, BugCheckParameter4);
                    AlpcpDestroyBlob(v3);
                  }
                }
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
                KeAbPostRelease(v58 - 16);
                if ( v17 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  result = KeAbPostRelease(v1 + 352);
                  if ( v7 || v61 )
                  {
                    *(_BYTE *)(a1 + 58) = 0;
                    return result;
                  }
                  KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1, 1, v25, 0);
                }
                else
                {
                  if ( v59 )
                  {
                    if ( v7 || v61 )
                    {
                      result = v60;
                      *(_BYTE *)(a1 + 59) = v60;
                      *(_BYTE *)(a1 + 58) = 1;
                    }
                    else
                    {
                      AlpcpQueueIoCompletionPort(v1, v60, 1, 0);
                      result = ObfDereferenceObject((PVOID)v1);
                      *(_QWORD *)(a1 + 32) = 0LL;
                    }
                    return result;
                  }
                  v48 = *(void **)(v1 + 368);
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                  KeAbPostRelease(v1 + 352);
                  if ( v48 )
                    ExNotifyCallback(v48, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
                }
                result = ObfDereferenceObject((PVOID)v1);
                *(_QWORD *)(a1 + 32) = 0LL;
                return result;
              }
              AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v57 >> 6, (v56 + 63) >> 6);
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
      v19 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v19 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      *(_QWORD *)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 136));
      KeAbPostRelease(v1 + 136);
      goto LABEL_32;
    }
    v41 = *v16 - 1768LL;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1, v3);
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_133;
    v42 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v42 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v43 = v42 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v43 = v42;
    if ( (v43 & *(_DWORD *)(v41 + 1760)) != 0 )
    {
LABEL_133:
      *(_WORD *)(v3 + 244) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      AlpcpInsertMessagePendingQueue(v1, v3);
    }
    else
    {
      *(_WORD *)(v3 + 244) &= ~0x2000u;
    }
    *(_QWORD *)(v41 + 1760) = v3;
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x4000u;
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v3);
    v44 = (_QWORD *)(v41 + 1768);
    v45 = *(_QWORD *)(v41 + 1768);
    v46 = *(_QWORD **)(v41 + 1776);
    if ( *(_QWORD *)(v45 + 8) != v41 + 1768 || (_QWORD *)*v46 != v44 )
      __fastfail(3u);
    *v46 = v45;
    *(_QWORD *)(v45 + 8) = v46;
    *v44 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x10000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
    KeAbPostRelease(v58 - 16);
    if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v7 || v6 )
      *(_QWORD *)(a1 + 24) = v41;
    else
      return KeReleaseSemaphoreEx(v41 + 1608, 1, 1, v47, 2);
  }
  return result;
}
