/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x140491B40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140492018 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x1404920B0 (EtwpRundownNotifications.c)
 *     EtwpReleaseQueueEntry @ 0x1404EFCEC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404EFD38 (EtwpUnreferenceDataBlock.c)
 *     EtwpQueueReply @ 0x140744924 (EtwpQueueReply.c)
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
  unsigned __int16 v9; // ax
  volatile __int64 *v10; // rdi
  __int64 v11; // rbp
  _QWORD *v12; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rdx
  __int64 **v16; // rax
  __int64 v17; // rcx
  void *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx

  v1 = BugCheckParameter2[4];
  v3 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
    v15 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v16 = (__int64 **)BugCheckParameter2[1], *v16 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
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
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v6 = (__int64 **)BugCheckParameter2[1], *v6 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    v5[1] = (__int64)v6;
    v7 = BugCheckParameter2[2];
    if ( *(__int64 **)(v7 + 8) != BugCheckParameter2 + 2
      || (v8 = (__int64 **)BugCheckParameter2[3], *v8 != BugCheckParameter2 + 2) )
    {
      __fastfail(3u);
    }
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v1 + 392) = 0LL;
    ExReleasePushLockEx(v1 + 384, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      *(_QWORD *)(v3 + 392) = 0LL;
      ExReleasePushLockEx(v3 + 384, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
        v17 = v12[4];
        if ( (*(_BYTE *)(v17 + 98) & 0x40) == 0 )
          EtwpQueueReply(*(PRKQUEUE *)(v17 + 48));
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
    v18 = (void *)BugCheckParameter2[6];
    v19 = KeRundownQueueEx((__int64)v18, 1);
    v20 = (_QWORD *)v19;
    if ( v19 )
    {
      v21 = (_QWORD *)v19;
      do
      {
        v22 = v21;
        v21 = (_QWORD *)*v21;
        EtwpUnreferenceDataBlock(v22[2]);
        ExFreePoolWithTag(v22, 0);
      }
      while ( v20 != v21 );
    }
    ExFreePoolWithTag(v18, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v3 )
    return EtwpUnreferenceGuidEntry(v3);
  return result;
}
