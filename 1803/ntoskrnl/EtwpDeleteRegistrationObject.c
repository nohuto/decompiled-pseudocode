/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x140590460
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeRundownQueueEx @ 0x14013E1A4 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x14058DCDC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140590B80 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x140590C14 (EtwpRundownNotifications.c)
 *     EtwpQueueReply @ 0x1405C30D4 (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  _QWORD *v1; // r15
  _QWORD *v3; // r14
  struct _KTHREAD *v4; // rax
  __int64 v5; // r9
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v12; // ax
  volatile __int64 *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rcx
  __int64 **v22; // rax
  char v23; // al
  void *v24; // rbp
  __int64 v25; // rax
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rcx
  volatile signed __int32 **v29; // rbx

  v1 = (_QWORD *)BugCheckParameter2[4];
  v3 = (_QWORD *)BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
    v21 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v22 = (__int64 **)BugCheckParameter2[1], *v22 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v22 = v21;
    v21[1] = (__int64)v22;
    v23 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v23 & 2) != 0 && (v23 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock, v18, v19, v20);
    KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
  }
  else
  {
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 48), 0LL);
      v3[49] = KeGetCurrentThread();
    }
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 48), 0LL);
    v1[49] = KeGetCurrentThread();
    v6 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v7 = (__int64 **)BugCheckParameter2[1], *v7 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    v6[1] = (__int64)v7;
    v8 = BugCheckParameter2[2];
    if ( *(__int64 **)(v8 + 8) != BugCheckParameter2 + 2
      || (v9 = (__int64 *)BugCheckParameter2[3], (__int64 *)*v9 != BugCheckParameter2 + 2) )
    {
      __fastfail(3u);
    }
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v1[49] = 0LL;
    ExReleasePushLockEx((ULONG_PTR)(v1 + 48), 0LL, v8, v5);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v3 )
    {
      v3[49] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v3 + 48), 0LL, v10, v11);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v12 = *((_WORD *)BugCheckParameter2 + 49);
  if ( (v12 & 2) != 0 )
  {
    v13 = BugCheckParameter2 + 6;
    v14 = 4LL;
    do
    {
      v15 = _InterlockedExchange64(v13, 0LL);
      if ( v15 )
      {
        v28 = *(_QWORD *)(v15 + 32);
        if ( (*(_BYTE *)(v28 + 98) & 0x40) == 0 )
          EtwpQueueReply(*(PRKQUEUE *)(v28 + 48));
        EtwpReleaseQueueEntry((char *)v15, 2);
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v12 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v12, 0LL);
    v24 = (void *)BugCheckParameter2[6];
    v25 = KeRundownQueueEx((__int64)v24, 1);
    v26 = (volatile signed __int32 *)v25;
    if ( v25 )
    {
      v27 = (volatile signed __int32 *)v25;
      do
      {
        v29 = (volatile signed __int32 **)v27;
        v27 = *(volatile signed __int32 **)v27;
        EtwpUnreferenceDataBlock(v29[2]);
        ExFreePoolWithTag(v29, 0);
      }
      while ( v26 != v27 );
    }
    ExFreePoolWithTag(v24, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v3 )
    return EtwpUnreferenceGuidEntry(v3);
  return result;
}
