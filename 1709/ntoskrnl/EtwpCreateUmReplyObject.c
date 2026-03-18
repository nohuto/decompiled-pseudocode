/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1407441E8
 * Callers:
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x14011C630 (KeInitializeQueue.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x140491F18 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rax
  PVOID v12; // rdi
  __int64 v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-50h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  int v19; // [rsp+70h] [rbp-38h]
  __int128 v20; // [rsp+78h] [rbp-30h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v16 = 48;
  v19 = 64;
  v20 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (__int64)&v16, 1, v14, 112, 0, 0, &Object, 0LL);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v9 = Object;
      memset(Object, 0, 0x70uLL);
      *((_WORD *)v9 + 49) = 4;
      *((_QWORD *)v9 + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)v9 + 4) = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
      v10 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)v9 = EtwpReplyListHead;
      *((_QWORD *)v9 + 1) = &EtwpReplyListHead;
      *(_QWORD *)(v10 + 8) = v9;
      EtwpReplyListHead = (__int64)v9;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v11 = (char *)Object + 16;
      *((_QWORD *)Object + 3) = (char *)Object + 16;
      *v11 = v11;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x80u);
      v12 = Object;
      inserted = ObInsertObjectEx(Object, 0LL, 0x804u, 1, 0, (PVOID *)&v15, a2);
      if ( inserted >= 0 )
        *a3 = v12;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
