/*
 * XREFs of WmipReceiveNotifications @ 0x14011FCA4
 * Callers:
 *     WmipIoControl @ 0x140579E20 (WmipIoControl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     WmipCompleteGuidIrpWithError @ 0x1400DEA70 (WmipCompleteGuidIrpWithError.c)
 *     WmipClearIrpObjectList @ 0x140108C68 (WmipClearIrpObjectList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     WmipCopyFromEventQueues @ 0x14057A6A8 (WmipCopyFromEventQueues.c)
 */

__int64 __fastcall WmipReceiveNotifications(unsigned int *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v5; // r12d
  _DWORD *v6; // r14
  int v7; // r13d
  PVOID *PoolWithTag; // rdi
  int v9; // r8d
  __int64 v10; // rsi
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  PVOID *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  char v20; // r15
  __int64 v21; // rdx
  unsigned int v22; // r8d
  _QWORD *v23; // rcx
  __int64 *v24; // rcx
  __int64 **v25; // rax
  __int64 v26; // rax
  bool v27; // r14
  PVOID *v28; // rbx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ebx
  unsigned int *v33; // rax
  __int64 *v34; // r15
  __int64 v35; // r13
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v37; // [rsp+44h] [rbp-BCh]
  unsigned int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h]
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int *v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[256]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *a1;
  v5 = *a2;
  v6 = a1;
  v43 = a2;
  v7 = 1;
  v37 = -1073741811;
  if ( (unsigned int)v3 > 0x10 )
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 16 * v3, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = (PVOID *)P;
  }
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v9 = 0;
  LOBYTE(v41) = 0;
  v10 = 0LL;
  v39 = 0;
  v38 = 0;
  LOBYTE(v7) = 0;
  LOBYTE(v11) = 0;
  LODWORD(v42) = v7;
  v12 = 0;
  v36 = v11;
  v40 = 0;
  if ( (_DWORD)v3 )
  {
    v13 = 0LL;
    v44 = 0LL;
    while ( 1 )
    {
      v37 = ObReferenceObjectByHandle(*(HANDLE *)((char *)v6 + v13 + 8), 4u, WmipGuidObjectType, 1, &Object, 0LL);
      if ( v37 < 0 )
        break;
      v14 = Object;
      v15 = 0;
      if ( (_DWORD)v10 )
      {
        v16 = PoolWithTag;
        while ( Object != *v16 )
        {
          ++v15;
          v16 += 2;
          if ( v15 >= (unsigned int)v10 )
            goto LABEL_10;
        }
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        LOBYTE(v11) = v36;
        v9 = v39;
        v12 = v40;
      }
      else
      {
LABEL_10:
        v11 = (unsigned __int8)v36;
        if ( *((_QWORD *)Object + 9) )
          v11 = 1;
        v17 = 2LL * (unsigned int)v10;
        v10 = (unsigned int)(v10 + 1);
        v36 = v11;
        PoolWithTag[v17] = Object;
        if ( *((_QWORD *)v14 + 12) )
        {
          v7 = (unsigned __int8)v7;
          if ( v14[29] )
            v7 = 1;
          LODWORD(v42) = v7;
        }
        if ( *((_QWORD *)v14 + 16) )
        {
          v30 = (unsigned __int8)v41;
          if ( v14[37] )
            v30 = 1;
          v41 = v30;
        }
        v9 = ((v14[29] + 7) & 0xFFFFFFF8) + v39;
        v18 = v14[37] + 7;
        v39 = v9;
        v12 = (v18 & 0xFFFFFFF8) + v40;
        v40 = v12;
      }
      v13 = v44 + 8;
      ++v38;
      v44 += 8LL;
      if ( v38 >= (unsigned int)v3 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v19 = v12 + v9;
    v38 = v12 + v9;
    if ( (_BYTE)v11 == 1 && (_DWORD)v10 )
    {
      v34 = (__int64 *)PoolWithTag;
      v35 = (unsigned int)v10;
      do
      {
        if ( *(_QWORD *)(*v34 + 72) )
          WmipCompleteGuidIrpWithError(*v34);
        v34 += 2;
        --v35;
      }
      while ( v35 );
      v19 = v38;
      LOBYTE(v7) = v42;
    }
    v20 = v41;
    if ( (unsigned __int8)v41 | (unsigned __int8)v7 )
    {
      if ( v19 > v5 )
      {
        v33 = v43;
        *v6 = 56;
        v6[11] = 32;
        v6[12] = v19;
        *v33 = 56;
      }
      else
      {
        v31 = 0LL;
        v32 = v5;
        v42 = 0LL;
        if ( (_BYTE)v7 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v36, (__int64)&v42, 1);
          LODWORD(v6) = v36 + (_DWORD)v6;
          v31 = v42;
          v32 = v5 - v36;
        }
        if ( v20 )
        {
          WmipCopyFromEventQueues((_DWORD)PoolWithTag, v10, (_DWORD)v6, v12, (__int64)&v36, (__int64)&v42, 0);
          v32 -= v36;
          v31 = v42;
        }
        if ( v31 )
          *(_DWORD *)(v31 + 12) = 0;
        *v43 = v5 - v32;
      }
    }
    else
    {
      v21 = a3 + 120;
      v22 = 0;
      *(_QWORD *)(a3 + 128) = a3 + 120;
      for ( *(_QWORD *)(a3 + 120) = a3 + 120; v22 < (unsigned int)v10; *(_QWORD *)(a3 + 128) = v24 )
      {
        v23 = PoolWithTag[2 * v22];
        v23[9] = a3;
        v24 = v23 + 10;
        v25 = *(__int64 ***)(a3 + 128);
        if ( *v25 != (__int64 *)v21 )
          __fastfail(3u);
        *v24 = v21;
        ++v22;
        v24[1] = (__int64)v25;
        *v25 = v24;
      }
      v26 = *(_QWORD *)(a3 + 184);
      v37 = 259;
      v27 = 0;
      *(_BYTE *)(v26 + 3) |= 1u;
      KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)WmipNotificationIrpCancel);
      if ( *(_BYTE *)(a3 + 68) )
      {
        WmipClearIrpObjectList(a3);
        v37 = -1073741536;
        v27 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( v27 )
      {
        *(_QWORD *)(a3 + 56) = 0LL;
        *(_DWORD *)(a3 + 48) = -1073741536;
        IofCompleteRequest((PIRP)a3, 0);
      }
      *v43 = 0;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v10 )
  {
    v28 = PoolWithTag;
    do
    {
      ObfDereferenceObjectWithTag(*v28, 0x746C6644u);
      v28 += 2;
      --v10;
    }
    while ( v10 );
  }
  if ( PoolWithTag != (PVOID *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v37;
}
