/*
 * XREFs of MiReferenceIoPages @ 0x140124F3C
 * Callers:
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoMappings @ 0x14080384C (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x1401253AC (MiIoSpaceIsConstant.c)
 *     MiRemoveUnmappedIoNode @ 0x140125440 (MiRemoveUnmappedIoNode.c)
 *     MiInitializeIoPageNodeArray @ 0x140125510 (MiInitializeIoPageNodeArray.c)
 *     MiFlushCacheMdl @ 0x14013DF6C (MiFlushCacheMdl.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiReferenceIoPages(int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  int v6; // esi
  _KSPIN_LOCK_QUEUE *v7; // r9
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
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int16 *v26; // rbp
  unsigned __int64 v27; // rdi
  int v28; // r10d
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v33; // rcx
  int v34; // eax
  int v35; // ecx
  _WORD *v36; // rcx
  int v37; // [rsp+24h] [rbp-164h]
  __int64 v40; // [rsp+30h] [rbp-158h]
  __int64 *v41; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v42; // [rsp+50h] [rbp-138h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-130h]
  __int64 v44; // [rsp+68h] [rbp-120h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-118h] BYREF
  char v46; // [rsp+90h] [rbp-F8h] BYREF
  char v47; // [rsp+C0h] [rbp-C8h] BYREF

  v6 = a1;
  v7 = 0LL;
  v40 = a3;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v8 = -1LL;
  v37 = 0;
  v9 = &qword_14036CE08[a1];
  v10 = a2 & 0xFFFFFFFFFLL;
  v42 = (unsigned __int64 *)v9;
  v44 = a2 & 0xFFFFFFFFFLL;
  v11 = &qword_14036CE18;
  v12 = 0LL;
  v13 = 0;
  if ( a1 != 1 )
    v11 = 0LL;
  v14 = a2 & 0xFFFFFFFFFLL;
  v41 = v11;
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v10, a3, a3, 0LL);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  LockHandle.LockQueue.Next = v7;
  LockHandle.LockQueue.Lock = &qword_14036CE00;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_14036CE00);
  v17 = v40;
  if ( v40 )
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
      if ( !v41 || (v22 = (_QWORD *)MiRemoveUnmappedIoNode(v41, v10)) == 0LL )
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
      RtlAvlInsertNodeEx(v42, (unsigned __int64)v18, v19, (unsigned __int64)v22);
      v17 = v40;
LABEL_17:
      if ( a6 && !*a6 )
        *a6 = v22;
      v23 = v22[5];
      v24 = v22[6];
      v25 = v23 + 512;
      v26 = (unsigned __int16 *)(v24 + 2 * (v10 - v23));
      if ( v23 == -512 || v17 + v10 <= v25 )
        v27 = v24 + 2 * (v17 + v10 - v23);
      else
        v27 = v24 + 1024;
      if ( (unsigned __int64)v26 < v27 )
        break;
LABEL_34:
      if ( v37 )
      {
        v36 = (_WORD *)v22[6];
        v24 = (unsigned __int64)(v36 + 512);
        if ( v36 < v36 + 512 )
        {
          v25 = 0x3FFFLL;
          do
          {
            if ( (*v36 & 0x3FFF) == 0 )
              *v36 |= 0xC000u;
            ++v36;
          }
          while ( (unsigned __int64)v36 < v24 );
          v14 = v44;
          v17 = v40;
        }
      }
      if ( !v17 )
      {
        v13 = 0;
        goto LABEL_37;
      }
      v9 = (__int64 *)v42;
    }
    v25 = (unsigned __int64)a5;
    v28 = v37;
    while ( 1 )
    {
      v29 = *v26;
      v24 = *v26;
      if ( (*v26 & 0x3FFF) == 0x3FFF )
        break;
      v30 = (unsigned int)v24 >> 14;
      if ( (v29 & 0x3FFF) != 0 )
      {
        if ( (_DWORD)v30 == a4 )
          ++dword_14036CE40;
        else
          ++dword_14036CE44;
      }
      else
      {
        ++v22[7];
        if ( (_DWORD)v30 == a4 )
        {
          ++dword_14036CE4C;
        }
        else
        {
          if ( v41 && (v29 & 0xC000) == 0x4000 && !v28 )
          {
            ++dword_14036CE50;
            if ( !v12 )
            {
              v12 = &v46;
              v15 = (unsigned __int64 *)&v47;
            }
            *v15++ = v10;
            if ( v15 == (unsigned __int64 *)(v12 + 176) )
            {
              ++dword_14036CE48;
              *(_QWORD *)v12 = 0LL;
              *((_DWORD *)v12 + 2) = 131248;
              *((_QWORD *)v12 + 4) = 0LL;
              *((_QWORD *)v12 + 5) = 0x10000LL;
              v34 = MiFlushCacheMdl(1LL, v30, v25);
              v35 = v37;
              v17 = v40;
              v12 = 0LL;
              if ( v34 )
                v35 = 1;
              v37 = v35;
              v28 = v35;
            }
          }
          v25 = (unsigned __int64)a5;
          v29 = (_WORD)a4 << 14;
        }
      }
      if ( v25 )
        *(_DWORD *)v25 |= 1 << (v29 >> 14);
      v24 = 1LL;
      --v17;
      ++v10;
      v40 = v17;
      *v26++ = (v29 ^ (v29 + 1)) & 0x3FFF ^ v29;
      if ( (unsigned __int64)v26 >= v27 )
        goto LABEL_34;
    }
    v13 = -1073741670;
    if ( v10 != v14 )
      v8 = v10;
LABEL_37:
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_DWORD *)v12 + 11) = 0;
      v33 = (unsigned __int64)(unsigned int)(((char *)v15 - v12 - 48) >> 3) << 12;
      *((_DWORD *)v12 + 10) = v33;
      *((_WORD *)v12 + 4) = 8 * (((v33 + 4095) >> 12) + 6);
      *((_WORD *)v12 + 5) = 2;
      ++dword_14036CE48;
      MiFlushCacheMdl(v33, v24, v25);
    }
    v6 = a1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(CurrentIrql);
  if ( v8 != -1 )
    MiDereferenceIoPages(v6, v14, v8 - v14);
  return v13;
}
