/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1405C3160
 * Callers:
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x1400BB9B0 (KeInitializeQueue.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     EtwpReferenceGuidEntry @ 0x1405908C8 (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, _QWORD *a2, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int inserted; // ebx
  PVOID v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  char v14; // al
  _QWORD *v15; // rax
  PVOID v16; // rdi
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+58h] [rbp-50h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 v22; // [rsp+68h] [rbp-40h]
  int v23; // [rsp+70h] [rbp-38h]
  __int128 v24; // [rsp+78h] [rbp-30h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v20 = 48;
  v23 = 64;
  v24 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    inserted = ObCreateObjectEx(0, EtwpRegistrationObjectType, (int)&v20, 1u, v18, 112, 0, 0, &Object, 0LL);
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
      v13 = EtwpReplyListHead;
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      *(_QWORD *)v9 = EtwpReplyListHead;
      *((_QWORD *)v9 + 1) = &EtwpReplyListHead;
      *(_QWORD *)(v13 + 8) = v9;
      EtwpReplyListHead = (__int64)v9;
      v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock, v10, v11, v12);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      v15 = (char *)Object + 16;
      *((_QWORD *)Object + 3) = (char *)Object + 16;
      *v15 = v15;
      _InterlockedOr16((volatile signed __int16 *)v9 + 49, 0x80u);
      v16 = Object;
      inserted = ObInsertObjectEx(Object, 0LL, 2052LL, 1, 0, (__int64)&v19, a2);
      if ( inserted >= 0 )
        *a3 = v16;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
