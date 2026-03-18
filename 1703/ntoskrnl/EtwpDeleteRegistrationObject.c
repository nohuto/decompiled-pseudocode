/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x140480960
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x140011290 (KeRundownQueueEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpQueueReply @ 0x140429088 (EtwpQueueReply.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14048253C (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x1404825D0 (EtwpRundownNotifications.c)
 *     EtwpReleaseQueueEntry @ 0x140553D7C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r15
  ULONG_PTR v3; // r14
  struct _KTHREAD *v4; // rax
  __int64 *v5; // rcx
  __int64 **v6; // rax
  __int64 v7; // r8
  __int64 **v8; // rdx
  unsigned __int16 v9; // cx
  volatile __int64 *v10; // rbx
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rdx
  __int64 **v16; // rax
  void *v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int128 v22; // xmm0
  struct _KQUEUE *v23; // rcx
  _QWORD *v24; // rbx
  unsigned int v25[14]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v26; // [rsp+68h] [rbp-30h]

  v1 = BugCheckParameter2[4];
  v3 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
    v15 = (__int64 *)*BugCheckParameter2;
    v16 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v16 != BugCheckParameter2 )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = (__int64)v16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
    KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
  }
  else
  {
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v3 + 384, 0LL);
      *(_QWORD *)(v3 + 392) = KeGetCurrentThread();
    }
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 384, 0LL);
    *(_QWORD *)(v1 + 392) = KeGetCurrentThread();
    v5 = (__int64 *)*BugCheckParameter2;
    v6 = (__int64 **)BugCheckParameter2[1];
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 || *v6 != BugCheckParameter2 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = (__int64)v6;
    v7 = BugCheckParameter2[2];
    v8 = (__int64 **)BugCheckParameter2[3];
    if ( *(__int64 **)(v7 + 8) != BugCheckParameter2 + 2 || *v8 != BugCheckParameter2 + 2 )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v1 + 392) = 0LL;
    ExReleasePushLockEx(v1 + 384, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      *(_QWORD *)(v3 + 392) = 0LL;
      ExReleasePushLockEx(v3 + 384, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v9 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v9 & 2) != 0 )
  {
    v10 = BugCheckParameter2 + 6;
    v11 = 4LL;
    do
    {
      v12 = (_QWORD *)_InterlockedExchange64(v10, 0LL);
      if ( v12 )
      {
        v21 = v12[4];
        if ( (*(_BYTE *)(v21 + 98) & 0x40) == 0 )
        {
          v22 = *(_OWORD *)(v1 + 24);
          v23 = *(struct _KQUEUE **)(v21 + 48);
          v25[1] = 72;
          v26 = v22;
          v25[0] = 1;
          EtwpQueueReply(v23, v25);
        }
        EtwpReleaseQueueEntry(v12);
      }
      ++v10;
      --v11;
    }
    while ( v11 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v9 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v9, 0LL);
    v17 = (void *)BugCheckParameter2[6];
    v18 = KeRundownQueueEx((__int64)v17, 1);
    v19 = (_QWORD *)v18;
    if ( v18 )
    {
      v20 = (_QWORD *)v18;
      do
      {
        v24 = v20;
        v20 = (_QWORD *)*v20;
        EtwpUnreferenceDataBlock(v24[2]);
        ExFreePoolWithTag(v24, 0);
      }
      while ( v19 != v20 );
    }
    ExFreePoolWithTag(v17, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v3 )
    return EtwpUnreferenceGuidEntry(v3);
  return result;
}
