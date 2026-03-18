/*
 * XREFs of EtwpCreateUmReplyObject @ 0x14043FEB4
 * Callers:
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 * Callees:
 *     KeInitializeQueue @ 0x140024C20 (KeInitializeQueue.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x140480DC8 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, __int64 a2, volatile signed __int16 **a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int v8; // r9d
  int inserted; // ebx
  __int64 v10; // rax
  __int64 v12; // [rsp+50h] [rbp-58h] BYREF
  int v13; // [rsp+58h] [rbp-50h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+70h] [rbp-38h]
  __int128 v17; // [rsp+78h] [rbp-30h]
  volatile signed __int16 *Object; // [rsp+C8h] [rbp+20h]

  v14 = 0LL;
  v15 = 0LL;
  v13 = 48;
  v16 = 64;
  v17 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    LOBYTE(v8) = 1;
    inserted = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)&v13, v8);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      memset((void *)Object, 0, 0x70uLL);
      *((_WORD *)Object + 49) = 4;
      *((_QWORD *)Object + 6) = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      *((_QWORD *)Object + 4) = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
      v10 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)Object = EtwpReplyListHead;
      *((_QWORD *)Object + 1) = &EtwpReplyListHead;
      *(_QWORD *)(v10 + 8) = Object;
      EtwpReplyListHead = (__int64)Object;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      *((_QWORD *)Object + 3) = Object + 8;
      *((_QWORD *)Object + 2) = Object + 8;
      _InterlockedOr16(Object + 49, 0x80u);
      inserted = ObInsertObjectEx((PVOID)Object, 0LL, 0, (__int64)&v12, a2);
      if ( inserted >= 0 )
        *a3 = Object;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
