/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x1404DD564
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x140489898 (AlpcpAvailableBufferSize.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpValidateMessage @ 0x1404CF278 (AlpcpValidateMessage.c)
 *     AlpcpAllocateMessage @ 0x1404DCA4C (AlpcpAllocateMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpSetOwnerPortMessage @ 0x1404DDF58 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1404DFF2C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageMainQueue @ 0x1404E0288 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140747A28 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x140749578 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140749734 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 a2, __m256i *a3, char a4)
{
  int v7; // ecx
  __int64 result; // rax
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  unsigned __int64 v20; // rax
  size_t v21; // rdx
  __int64 v22; // rcx
  signed __int64 *v23; // r14
  __int64 v24; // r13
  _QWORD *v25; // rax
  signed __int64 *v26; // r14
  ULONG_PTR v27; // rax
  struct _KTHREAD *v28; // rcx
  ULONG_PTR v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 *v40; // rcx
  int v41; // [rsp+20h] [rbp-98h]
  ULONG_PTR v42; // [rsp+28h] [rbp-90h] BYREF
  ULONG_PTR v43; // [rsp+30h] [rbp-88h]
  _QWORD *v44; // [rsp+38h] [rbp-80h]
  _QWORD *v45; // [rsp+40h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  __int128 v48; // [rsp+58h] [rbp-60h] BYREF
  __int128 v49; // [rsp+68h] [rbp-50h]
  __int64 v50; // [rsp+78h] [rbp-40h]

  v42 = 0LL;
  if ( a4 )
  {
    AlpcpProbeAndCaptureMessageHeader(a3, &v48, 0LL);
  }
  else
  {
    v48 = *(_OWORD *)a3->m256i_i8;
    v49 = *(_OWORD *)&a3->m256i_u64[2];
    v50 = a3[1].m256i_i64[0];
  }
  if ( DWORD2(v49) )
    return AlpcpSendMessage(a2, a3, 0LL, a4);
  v7 = *(_DWORD *)(a1 + 416);
  if ( (v7 & 0x2000) == 0 || (v7 & 6) != 4 || (v7 & 0x38) != 0 || WORD3(v48) )
    return AlpcpSendMessage(a2, a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v48) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  result = AlpcpValidateMessage((unsigned __int16 *)&v48, 1);
  if ( (int)result >= 0 )
  {
    v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v42 = (ULONG_PTR)v9;
    if ( v9 )
    {
      AlpcpLockForCachedReferenceBlob((ULONG_PTR)v9);
      --*((_WORD *)v9 - 15);
      v10 = v9[66] & 0x7FFFFFFF;
      memset(v9, 0, 0x118uLL);
      v9[66] = v10;
      do
        v11 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v11 );
      v12 = v42;
      *(_DWORD *)(v42 + 272) = v11;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v12);
    }
    else
    {
      result = AlpcpAllocateMessage((char **)&v42, 0LL, 0);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = v42;
    *(_OWORD *)(v42 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    *(_DWORD *)(v13 + 240) = v48;
    *(_WORD *)(v13 + 244) = 8193;
    if ( a4 )
    {
      v14 = AlpcpAvailableBufferSize(v13);
      if ( v15 > v14 )
      {
        v19 = AlpcpCaptureMessageData(v13, v15, &a3[1].m256i_u64[1]);
        v41 = v19;
      }
      else
      {
        memmove((void *)(v13 + 280), &a3[1].m256i_u64[1], v15);
        v19 = 0;
        v41 = 0;
      }
    }
    else
    {
      v20 = AlpcpAvailableBufferSize(v13);
      if ( v21 <= v20 )
      {
        memmove((void *)(v13 + 280), &a3[1].m256i_u64[1], v21);
        v41 = 0;
        goto LABEL_26;
      }
      v19 = AlpcpCaptureMessageData(v22, v21, &a3[1].m256i_u64[1]);
      v41 = v19;
    }
    if ( v19 < 0 )
    {
LABEL_57:
      if ( v13 )
        AlpcpUnlockMessage(v13, v16, v17, v18);
      return (unsigned int)v19;
    }
LABEL_26:
    v45 = *(_QWORD **)(a1 + 16);
    v23 = v45 - 2;
    BugCheckParameter2 = (ULONG_PTR)(v45 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v45 - 2), 0LL);
    v24 = *(_QWORD *)(a1 + 424);
    v25 = *(_QWORD **)(a1 + 432);
    v44 = v25;
    if ( v24 && v25 )
    {
      v26 = v25 + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v25 + 44), 0LL);
      if ( (v44[52] & 0x20) != 0 )
        goto LABEL_29;
      *(_QWORD *)(v13 + 120) = v44[7];
      if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v26);
      KeAbPostRelease((ULONG_PTR)v26);
      v26 = (signed __int64 *)(v24 + 352);
      ExAcquirePushLockSharedEx(v24 + 352, 0LL);
      if ( (*(_DWORD *)(v24 + 416) & 0x20) != 0 )
      {
LABEL_29:
        v41 = -1073741769;
      }
      else
      {
        v27 = v42;
        v43 = v42 - 48;
        *(_WORD *)(v43 + 18) += 3;
        v28 = CurrentThread;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v27);
        v29 = v42;
        *(_QWORD *)(v42 + 32) = v28;
        AlpcpSetOwnerPortMessage(v29, a1, 0LL);
        v33 = v45;
        *(_QWORD *)(v29 + 184) = v45;
        *(_QWORD *)(v29 + 192) = *v33;
        *(_QWORD *)(a2 + 8) = v29;
        if ( AlpcpLogEnabled )
        {
          AlpcpLogSendMessage(v29);
          if ( AlpcpLogEnabled )
            AlpcpLogWaitForReply(v29);
        }
        v34 = 0LL;
        v44 = 0LL;
        if ( *(_QWORD *)(v24 + 232) != v24 + 232 )
        {
          ExAcquirePushLockExclusiveEx(v24 + 224, 0LL);
          v38 = *(_QWORD **)(v24 + 232);
          v45 = v38;
          if ( v38 != (_QWORD *)(v24 + 232) )
          {
            v44 = v38 - 222;
            v44[221] = v29;
            ++*(_WORD *)(v43 + 18);
            *(_DWORD *)(v29 + 40) |= 0x2000u;
            AlpcpInsertMessagePendingQueue(v24, v29);
            v39 = v45;
            v35 = *v45;
            v40 = (__int64 *)v45[1];
            if ( *(_QWORD **)(*v45 + 8LL) != v45 || (_QWORD *)*v40 != v45 )
              __fastfail(3u);
            *v40 = v35;
            *(_QWORD *)(v35 + 8) = v40;
            *v39 = 0LL;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v24 + 224), v35, v36, v37);
          KeAbPostRelease(v24 + 224);
          v29 = v42;
          v34 = v44;
        }
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 40) = 0LL;
        if ( v34 )
        {
          *(_QWORD *)(a2 + 24) = v34;
        }
        else
        {
          AlpcpInsertMessageMainQueue(v24, v29);
          if ( (*(_DWORD *)(v24 + 416) & 0x200) != 0 )
          {
            ObfReferenceObject((PVOID)v24);
            *(_QWORD *)(a2 + 32) = v24;
            *(_BYTE *)(a2 + 58) = 0;
          }
        }
        AlpcpUnlockMessage(v29, v30, v31, v32);
      }
      if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v26);
      KeAbPostRelease((ULONG_PTR)v26);
      v23 = (signed __int64 *)BugCheckParameter2;
    }
    else
    {
      v41 = -1073741769;
    }
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    v13 = v42;
    v19 = v41;
    if ( v41 >= 0 )
      return (unsigned int)v19;
    goto LABEL_57;
  }
  return result;
}
