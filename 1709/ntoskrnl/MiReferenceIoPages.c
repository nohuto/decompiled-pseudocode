/*
 * XREFs of MiReferenceIoPages @ 0x140118F7C
 * Callers:
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiMapContiguousMemoryLarge @ 0x14014F27C (MiMapContiguousMemoryLarge.c)
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoMappings @ 0x1408293B0 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x140119350 (MiIoSpaceIsConstant.c)
 *     MiRemoveUnmappedIoNode @ 0x140119CC4 (MiRemoveUnmappedIoNode.c)
 *     MiInitializeIoPageNodeArray @ 0x140119D94 (MiInitializeIoPageNodeArray.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiFlushCacheMdl @ 0x14022C154 (MiFlushCacheMdl.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  _KSPIN_LOCK_QUEUE *v6; // r10
  int v7; // esi
  __int64 v8; // r15
  __int64 *v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 *v11; // rax
  char *v12; // r14
  unsigned int v13; // edi
  __int64 v14; // r13
  unsigned __int64 *v15; // r12
  __int64 IsConstant; // rax
  __int64 v17; // r9
  _QWORD *v18; // rdi
  bool v19; // bp
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int16 *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  int v29; // r10d
  unsigned __int16 v30; // ax
  __int64 v31; // rdx
  _QWORD *PoolWithTag; // rax
  int v34; // eax
  int v35; // ecx
  _WORD *v36; // rcx
  unsigned __int64 v37; // rcx
  int v38; // [rsp+24h] [rbp-164h]
  __int64 v41; // [rsp+30h] [rbp-158h]
  __int64 *v42; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v43; // [rsp+50h] [rbp-138h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-130h]
  __int64 v45; // [rsp+68h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-118h] BYREF
  char v47; // [rsp+90h] [rbp-F8h] BYREF
  char v48; // [rsp+C0h] [rbp-C8h] BYREF

  v6 = 0LL;
  v7 = a1;
  v41 = a3;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v8 = -1LL;
  v38 = 0;
  v9 = &qword_1403890C8[a1];
  v10 = a2 & 0xFFFFFFFFFLL;
  v43 = (unsigned __int64 *)v9;
  v45 = a2 & 0xFFFFFFFFFLL;
  v11 = &qword_1403890D8;
  v12 = 0LL;
  v13 = 0;
  if ( a1 != 1 )
    v11 = 0LL;
  v14 = a2 & 0xFFFFFFFFFLL;
  v42 = v11;
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v10, a3);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  LockHandle.LockQueue.Next = v6;
  LockHandle.LockQueue.Lock = &SpinLock;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
  v17 = v41;
  if ( v41 )
  {
    while ( 1 )
    {
      v18 = (_QWORD *)*v9;
      v19 = 0;
      if ( v18 )
      {
        while ( 1 )
        {
          v20 = v18[5];
          if ( v10 >= v20 )
          {
            if ( v10 < v20 + 512 )
            {
              v22 = v18;
              goto LABEL_17;
            }
            v21 = (_QWORD *)v18[1];
            if ( !v21 )
            {
              v19 = 1;
              break;
            }
          }
          else
          {
            v21 = (_QWORD *)*v18;
            if ( !*v18 )
            {
              v19 = 0;
              break;
            }
          }
          v18 = v21;
        }
      }
      if ( !v42 || (v22 = (_QWORD *)MiRemoveUnmappedIoNode(v42, v10)) == 0LL )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x440uLL, 0x6F49694Du);
        v22 = PoolWithTag;
        if ( !PoolWithTag )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(CurrentIrql);
          MiDereferenceIoPages(a1, v14, v10 - v14);
          return 3221225626LL;
        }
        memset(PoolWithTag, 0, 0x440uLL);
        v22[5] = v10 & 0xFFFFFFFFFFFFFE00uLL;
        v22[6] = v22 + 8;
        MiInitializeIoPageNodeArray(v22);
      }
      RtlAvlInsertNodeEx(v43, (unsigned __int64)v18, v19, (unsigned __int64)v22);
      v17 = v41;
LABEL_17:
      if ( a6 && !*a6 )
        *a6 = v22;
      v23 = v22[5];
      v24 = v22[6];
      v25 = v23 + 512;
      v26 = (unsigned __int16 *)(v24 + 2 * (v10 - v23));
      if ( v23 == -512 || v17 + v10 <= v25 )
        v27 = 2 * (v17 + v10 - v23);
      else
        v27 = 1024LL;
      v28 = v24 + v27;
      if ( (unsigned __int64)v26 < v24 + v27 )
        break;
LABEL_36:
      if ( v38 )
      {
        v36 = (_WORD *)v22[6];
        v25 = (unsigned __int64)(v36 + 512);
        if ( v36 < v36 + 512 )
        {
          v24 = 0x3FFFLL;
          do
          {
            if ( (*v36 & 0x3FFF) == 0 )
              *v36 |= 0xC000u;
            ++v36;
          }
          while ( (unsigned __int64)v36 < v25 );
          v14 = v45;
          v17 = v41;
        }
      }
      if ( !v17 )
      {
        v13 = 0;
        goto LABEL_39;
      }
      v9 = (__int64 *)v43;
    }
    v24 = (__int64)a5;
    v29 = v38;
    while ( 1 )
    {
      v30 = *v26;
      v25 = *v26;
      if ( (*v26 & 0x3FFF) == 0x3FFF )
        break;
      v31 = (unsigned int)v25 >> 14;
      if ( (v30 & 0x3FFF) != 0 )
      {
        if ( (_DWORD)v31 == a4 )
          ++dword_140389100;
        else
          ++dword_140389104;
      }
      else
      {
        ++v22[7];
        if ( (_DWORD)v31 == a4 )
        {
          ++dword_14038910C;
        }
        else
        {
          if ( v42 && (v30 & 0xC000) == 0x4000 && !v29 )
          {
            ++dword_140389110;
            if ( !v12 )
            {
              v12 = &v47;
              v15 = (unsigned __int64 *)&v48;
            }
            *v15++ = v10;
            if ( v15 == (unsigned __int64 *)(v12 + 176) )
            {
              ++dword_140389108;
              *(_QWORD *)v12 = 0LL;
              *((_DWORD *)v12 + 2) = 131248;
              *((_QWORD *)v12 + 4) = 0LL;
              *((_QWORD *)v12 + 5) = 0x10000LL;
              v34 = MiFlushCacheMdl(1LL, v31, v24);
              v35 = v38;
              v17 = v41;
              v12 = 0LL;
              if ( v34 )
                v35 = 1;
              v38 = v35;
              v29 = v35;
            }
          }
          v24 = (__int64)a5;
          v30 = (_WORD)a4 << 14;
        }
      }
      if ( v24 )
        *(_DWORD *)v24 |= 1 << (v30 >> 14);
      v25 = 1LL;
      --v17;
      ++v10;
      v41 = v17;
      *v26++ = (v30 ^ (v30 + 1)) & 0x3FFF ^ v30;
      if ( (unsigned __int64)v26 >= v28 )
        goto LABEL_36;
    }
    v13 = -1073741670;
    if ( v10 != v14 )
      v8 = v10;
LABEL_39:
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_DWORD *)v12 + 11) = 0;
      v37 = (unsigned __int64)(unsigned int)(((char *)v15 - v12 - 48) >> 3) << 12;
      *((_DWORD *)v12 + 10) = v37;
      *((_WORD *)v12 + 4) = 8 * (((v37 + 4095) >> 12) + 6);
      *((_WORD *)v12 + 5) = 2;
      ++dword_140389108;
      MiFlushCacheMdl(v37, v25, v24);
    }
    v7 = a1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(CurrentIrql);
  if ( v8 != -1 )
    MiDereferenceIoPages(v7, v14, v8 - v14);
  return v13;
}
