/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1404CD0A0
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1404CCD20 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchCloseMessage @ 0x1404DB6F0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404DDDF4 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140060450 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400845E0 (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpReadMessageData @ 0x1404CBF1C (AlpcpReadMessageData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1404CD870 (AlpcpCaptureMessageDataSafe.c)
 *     PspChargeProcessWakeCounter @ 0x1404CE250 (PspChargeProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpDestroyBlob @ 0x1404CF370 (AlpcpDestroyBlob.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1404DFF2C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageDirectQueue @ 0x140561C14 (AlpcpInsertMessageDirectQueue.c)
 *     PsChargeProcessWakeCounter @ 0x14057FFB0 (PsChargeProcessWakeCounter.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140748138 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpAllocateCompletionBuffer @ 0x140748398 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpFreeBitmap @ 0x1407485C8 (AlpcpFreeBitmap.c)
 *     AlpcpInsertCompletionListEntry @ 0x1407486A4 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpLogReceiveMessage @ 0x140749514 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140749578 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140749734 (AlpcpLogWaitForReply.c)
 */

char __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v3; // rdi
  int v4; // ecx
  int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // r15d
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  BOOL v12; // r13d
  void *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  char v23; // cl
  int v24; // ebp
  signed __int64 v25; // rcx
  char result; // al
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r13
  _QWORD *v32; // rbp
  unsigned int v33; // edx
  int v34; // ecx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r9
  void *v41; // rdi
  __int64 v42; // rcx
  unsigned int v43; // r8d
  int v44; // edx
  int v45; // ecx
  unsigned int v46; // r10d
  int v47; // r9d
  int v48; // edx
  __int64 v49; // r8
  unsigned int v50; // edx
  unsigned int v51; // ecx
  unsigned int CompletionBuffer; // eax
  __int64 v53; // r8
  __int16 v54; // cx
  __int16 v55; // ax
  __int16 v56; // dx
  __int16 v57; // ax
  char *v58; // rdx
  int v59; // r8d
  int inserted; // eax
  char v61; // r8
  int v62; // ecx
  _DWORD *BugCheckParameter4; // [rsp+20h] [rbp-98h]
  unsigned int v64; // [rsp+40h] [rbp-78h]
  int v65; // [rsp+44h] [rbp-74h]
  unsigned int v66; // [rsp+48h] [rbp-70h]
  unsigned int v67; // [rsp+4Ch] [rbp-6Ch]
  __int64 v68; // [rsp+58h] [rbp-60h]
  __int64 v69; // [rsp+60h] [rbp-58h]
  char v70; // [rsp+C0h] [rbp+8h]
  char v71; // [rsp+C8h] [rbp+10h]
  unsigned int v72; // [rsp+D0h] [rbp+18h]
  int v73; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v70 = 0;
  v5 = v4 & 4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1LL;
  v8 = v4 & 0x20000;
  v68 = v6;
  v9 = v4 & 0x800000;
  v10 = *(unsigned int *)(*(_QWORD *)a1 + 256LL);
  if ( (v10 & 0x400000) != 0 )
    v11 = 2;
  else
    v11 = (v10 & 0x200000) != 0;
  v12 = v8 || v9;
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
         || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x380) == 0x180
         || (KeGetCurrentThread()->ThreadFlags2 & 3) == 3) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v13);
      }
    }
    v6 = v68;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
    ++*(_WORD *)(v3 - 30);
    AlpcpInsertMessageDirectQueue(v1, v3, v10, v7);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    *(_QWORD *)(v3 + 160) = 0LL;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 - 16));
    KeAbPostRelease(v6 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v8 && !v5 )
    {
      result = KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0);
      v42 = *(_QWORD *)(a1 + 40);
      if ( (v42 & 1) != 0 )
        result = ObfDereferenceObject((PVOID)(v42 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v15 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v15 == v15 )
      goto LABEL_16;
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    v31 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 == v15 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224), v28, v29, v30);
      KeAbPostRelease(v1 + 224);
LABEL_16:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v71 = 1;
        v65 = 0;
      }
      else
      {
        v71 = 0;
        v65 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v16 = *(_QWORD *)(v1 + 360);
      if ( v16 && (*(_DWORD *)(v1 + 416) & 0x10000) != 0 )
      {
        v43 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v3 + 144) )
          v43 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
        v44 = v43 | 0x10000000;
        if ( !*(_QWORD *)(v3 + 152) )
          v44 = v43;
        if ( *(_QWORD *)(v3 + 168) )
          v44 |= 0x2000000u;
        v45 = *(_DWORD *)(v16 + 148);
        if ( (~v45 & v44) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v45 & 0x20000000) != 0) )
        {
          v46 = *(unsigned __int16 *)(v3 + 242);
          v47 = *(_DWORD *)(v1 + 416) & 0x800;
          v73 = v47;
          if ( v45 )
          {
            v48 = 4;
            if ( !v47 )
              v48 = 8;
            v49 = (unsigned int)(v48 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
            v50 = v49 ? v48 - v49 : 0;
            v72 = v50;
            v46 += v50 + *(_DWORD *)(v16 + 152);
          }
          else
          {
            v72 = 0;
            v73 = *(_DWORD *)(v1 + 416) & 0x800;
          }
          v51 = v46 - 16;
          if ( !v47 )
            v51 = v46;
          v67 = v51;
          v66 = v47 != 0 ? 0x80000000 : 0;
          CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v51);
          v64 = CompletionBuffer;
          if ( CompletionBuffer != -1 )
          {
            v53 = *(_QWORD *)(v16 + 120) + CompletionBuffer;
            v69 = v53;
            if ( v73 )
            {
              v54 = *(_WORD *)(v3 + 240);
              v55 = 0;
              *(_WORD *)v53 = v54;
              *(_WORD *)(v53 + 2) = v54 + 24;
              v56 = *(_WORD *)(v3 + 246);
              if ( v56 )
                v55 = v56 - 16;
              *(_WORD *)(v53 + 6) = v55;
              v57 = *(_WORD *)(v3 + 244) | 0x1000;
              *(_WORD *)(v53 + 4) = v57;
              *(_DWORD *)(v53 + 8) = *(_DWORD *)(v3 + 248);
              *(_DWORD *)(v53 + 12) = *(_DWORD *)(v3 + 256);
              *(_DWORD *)(v53 + 16) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(v53 + 20) = *(_DWORD *)(v3 + 272);
              *(_DWORD *)(v53 + 20) = *(_DWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v53 + 4) = v57 & 0xC00F;
              v58 = (char *)(v53 + 24);
            }
            else
            {
              *(_OWORD *)v53 = *(_OWORD *)(v3 + 240);
              *(_OWORD *)(v53 + 16) = *(_OWORD *)(v3 + 256);
              *(_QWORD *)(v53 + 32) = *(_QWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v53 + 4) &= 0xC00Fu;
              v58 = (char *)(v53 + 40);
            }
            if ( *(_QWORD *)(v3 + 176) )
              AlpcpGetDataFromUserVaSafe(v3, v58);
            else
              AlpcpReadMessageData(v3, v58);
            v59 = *(_DWORD *)(v16 + 148);
            if ( v59 )
            {
              BugCheckParameter4 = (_DWORD *)(v69 + *(unsigned __int16 *)(v69 + 2) + v72);
              *BugCheckParameter4 = v59;
              BugCheckParameter4[1] = 0;
              AlpcpExposeAttributes(v1, v66, v3, *(_DWORD *)(v16 + 148), BugCheckParameter4);
            }
            inserted = AlpcpInsertCompletionListEntry(v1, v64);
            if ( inserted )
            {
              v70 = 1;
              *(_DWORD *)(*(_QWORD *)(v16 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(*(_QWORD *)(v16 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
              if ( v71 && (inserted & 2) == 0 )
              {
                v61 = v71;
                if ( HIWORD(*(_QWORD *)(*(_QWORD *)(v16 + 80) + 64LL))
                   + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v16 + 144) )
                  v61 = 0;
                v71 = v61;
              }
              if ( (*(_DWORD *)(v3 + 40) & 0x200) != 0 )
              {
                v22 = *(unsigned __int16 *)(v3 + 244);
                v21 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                LODWORD(v21) = v21 | 0x40000000;
                if ( !*(_QWORD *)(v3 + 144) )
                  v21 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                v62 = v21 | 0x10000000;
                if ( !*(_QWORD *)(v3 + 152) )
                  v62 = v21;
                if ( v62 )
                {
                  *(_WORD *)(v3 + 244) = v22 | 0x2000;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  LOWORD(v22) = v22 & 0xDFFF;
                  *(_WORD *)(v3 + 244) = v22;
                }
              }
              else
              {
                *(_WORD *)(v3 + 244) |= 0x2000u;
                ++*(_WORD *)(v3 - 30);
                AlpcpInsertMessagePendingQueue(v1, v3);
              }
LABEL_26:
              if ( AlpcpLogEnabled )
                AlpcpLogSendMessage(v3);
              if ( v70 && AlpcpLogEnabled )
                AlpcpLogReceiveMessage(v3);
              if ( v8 && AlpcpLogEnabled )
                AlpcpLogWaitForReply(v3);
              *(_DWORD *)(v3 + 40) &= ~0x8000u;
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v3, v21, v22, 0LL);
              v23 = *(_BYTE *)(v3 - 32);
              if ( (v23 & 1) != 0
                && (v24 = 0x10000 - *(__int16 *)(v3 - 30),
                    *(_BYTE *)(v3 - 32) = v23 & 0xFE,
                    *(_WORD *)(v3 - 30) = 0,
                    v24 > 0)
                && (v25 = -v24 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v24), v25 <= 0) )
              {
                if ( v25 )
                  KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v25);
                AlpcpDestroyBlob(v3, 1LL, v22, 0LL);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16), v21, v22, 0LL);
                KeAbPostRelease(v3 - 16);
              }
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v68 - 16), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v68 - 16));
              result = KeAbPostRelease(v68 - 16);
              if ( v65 )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                result = KeAbPostRelease(v1 + 352);
                if ( v8 || v5 )
                {
                  *(_BYTE *)(a1 + 58) = 0;
                  return result;
                }
                KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1, 1, v27, 0);
              }
              else
              {
                if ( v71 )
                {
                  if ( v8 || v5 )
                  {
                    *(_BYTE *)(a1 + 58) = 1;
                    *(_BYTE *)(a1 + 59) = v70;
                  }
                  else
                  {
                    AlpcpQueueIoCompletionPort((_QWORD *)v1, v70, 1, 0);
                    result = ObfDereferenceObject((PVOID)v1);
                    *(_QWORD *)(a1 + 32) = 0LL;
                  }
                  return result;
                }
                v41 = *(void **)(v1 + 368);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                KeAbPostRelease(v1 + 352);
                if ( v41 )
                  ExNotifyCallback(v41, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
              }
              result = ObfDereferenceObject((PVOID)v1);
              *(_QWORD *)(a1 + 32) = 0LL;
              return result;
            }
            AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v64 >> 6, (v67 + 63) >> 6);
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 144) )
        AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
      ++*(_WORD *)(v3 - 30);
      ExAcquirePushLockExclusiveEx(v1 + 136, 0LL);
      v20 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v20 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      *(_QWORD *)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 136), v17, v18, v19);
      KeAbPostRelease(v1 + 136);
      goto LABEL_26;
    }
    v32 = v31 - 222;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_99;
    v33 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v33 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v34 = v33 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v34 = v33;
    if ( (v34 & (_DWORD)v32[221]) != 0 )
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
    v32[221] = v3;
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x2000u;
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v3);
    v35 = *v31;
    if ( *(_QWORD **)(*v31 + 8LL) != v31 || (v36 = (_QWORD *)v31[1], (_QWORD *)*v36 != v31) )
      __fastfail(3u);
    *v36 = v35;
    *(_QWORD *)(v35 + 8) = v36;
    *v31 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v68 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v68 - 16));
    KeAbPostRelease(v68 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224), v37, v38, v39);
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v8 || v5 )
      *(_QWORD *)(a1 + 24) = v32;
    else
      return KeReleaseSemaphoreEx((__int64)(v32 + 201), 1, 1, v40, 2);
  }
  return result;
}
