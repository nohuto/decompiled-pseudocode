/*
 * XREFs of MiDereferenceIoPages @ 0x140124B9C
 * Callers:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122D2C (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 *i; // rbx
  ULONG_PTR v5; // r12
  __int64 *v6; // rax
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v8; // r13
  void *v9; // rdi
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 k; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  ULONG_PTR v16; // rdx
  unsigned __int64 *v17; // rsi
  _WORD *v18; // r15
  unsigned __int64 v19; // r13
  ULONG_PTR v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r10
  _WORD *v23; // rcx
  _WORD *v24; // rdx
  _QWORD *v25; // rdx
  bool v26; // r8
  _QWORD *j; // rax
  int v28; // eax
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  bool v31; // r8
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  signed __int32 v35[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 *v36; // [rsp+30h] [rbp-78h]
  __int64 *v37; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int16 v39; // [rsp+B0h] [rbp+8h]
  _QWORD *v40; // [rsp+B8h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+18h]
  ULONG_PTR v42; // [rsp+C8h] [rbp+20h]

  BugCheckParameter3 = a3;
  v42 = a3;
  v40 = 0LL;
  i = (unsigned __int64 *)&qword_14036CE08[a1];
  v5 = a2 & 0xFFFFFFFFFLL;
  v36 = i;
  v6 = &qword_14036CE18;
  BugCheckParameter4 = a2 & 0xFFFFFFFFFLL;
  if ( a1 != 1 )
    v6 = 0LL;
  v37 = v6;
  v8 = a3;
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14036CE00, &LockHandle);
LABEL_5:
  for ( i = (unsigned __int64 *)*i; i; i = (unsigned __int64 *)i[1] )
  {
    v10 = i[5];
    if ( v5 < v10 )
      goto LABEL_5;
    if ( v5 < v10 + 512 )
      break;
  }
  if ( a3 )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0x1Au, 0x61948uLL, v5, BugCheckParameter3, BugCheckParameter4);
      v11 = i[1];
      v12 = (unsigned __int64)i;
      if ( v11 )
      {
        for ( j = *(_QWORD **)v11; j; j = (_QWORD *)*j )
          v11 = (unsigned __int64)j;
      }
      else
      {
        for ( k = i[2]; ; k = *(_QWORD *)(v11 + 16) )
        {
          v11 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v11 || *(_QWORD *)v11 == v12 )
            break;
          v12 = v11;
        }
      }
      v14 = i[5];
      v15 = i[6];
      v16 = (BugCheckParameter4 & 0xFFFFFFFFFLL) - v14;
      v17 = i;
      v18 = (_WORD *)(v15 + 2 * v16);
      v19 = v8 + BugCheckParameter4 > v14 + 512 ? v15 + 1024 : v15 + 2 * (v16 + v8);
      if ( (unsigned __int64)v18 < v19 )
        break;
LABEL_25:
      v8 = v42;
      i = (unsigned __int64 *)v11;
      if ( !v42 )
        goto LABEL_26;
    }
    v20 = v42;
LABEL_19:
    if ( (*v18 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, v5, BugCheckParameter3, BugCheckParameter4);
    v39 = (*v18 ^ (*v18 - 1)) & 0x3FFF ^ *v18;
    *v18 = v39;
    if ( (v39 & 0x3FFF) != 0 )
      goto LABEL_23;
    v21 = v17[7];
    if ( v21 == 0 || v21 > 0x200 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, (ULONG_PTR)v17, v17[7], BugCheckParameter4);
    v17[7] = v21 - 1;
    if ( v21 != 1 )
      goto LABEL_23;
    RtlAvlRemoveNode(v36, (__int64)v17);
    v22 = (unsigned __int64 *)v37;
    if ( v37 )
    {
      v23 = (_WORD *)v17[6];
      v24 = v23 + 512;
      while ( 1 )
      {
        if ( v23 >= v24 )
          goto LABEL_36;
        if ( (*v23 & 0xC000) == 0x4000 )
          break;
        ++v23;
      }
      _InterlockedOr(v35, 0);
      v28 = KiCacheFlushTimeStamp;
      *((_DWORD *)v17 + 14) = KiCacheFlushTimeStamp;
      if ( (__int64 *)qword_14036CE20 == &qword_14036CE20 )
        dword_14036CE30 = v28;
      v29 = (_QWORD *)qword_14036CE28;
      v30 = v17 + 3;
      if ( *(__int64 **)qword_14036CE28 != &qword_14036CE20 )
        __fastfail(3u);
      *v30 = &qword_14036CE20;
      v31 = 0;
      v17[4] = (unsigned __int64)v29;
      *v29 = v30;
      qword_14036CE28 = (__int64)(v17 + 3);
      v32 = (_QWORD *)*v22;
      if ( *v22 )
      {
        while ( 1 )
        {
          if ( v17[5] < v32[5] )
          {
            v34 = (_QWORD *)*v32;
            if ( !*v32 )
            {
              v31 = 0;
              break;
            }
          }
          else
          {
            v34 = (_QWORD *)v32[1];
            if ( !v34 )
            {
              v31 = 1;
              break;
            }
          }
          v32 = v34;
        }
      }
      RtlAvlInsertNodeEx(v22, (unsigned __int64)v32, v31, (unsigned __int64)i);
      v17 = 0LL;
      ++qword_14036CE38;
    }
LABEL_36:
    if ( !v17 )
      goto LABEL_23;
    v25 = v40;
    v26 = 0;
    if ( !v40 )
      goto LABEL_38;
    while ( 1 )
    {
      if ( v17[5] < v25[5] )
      {
        v33 = (_QWORD *)*v25;
        if ( !*v25 )
        {
          v26 = 0;
LABEL_38:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v40, (unsigned __int64)v25, v26, (unsigned __int64)i);
LABEL_23:
          ++v18;
          --v20;
          ++BugCheckParameter4;
          v42 = v20;
          if ( (unsigned __int64)v18 >= v19 )
          {
            v9 = v40;
            goto LABEL_25;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v33 = (_QWORD *)v25[1];
        if ( !v33 )
        {
          v26 = 1;
          goto LABEL_38;
        }
      }
      v25 = v33;
    }
  }
LABEL_26:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  while ( v9 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v40, (__int64)v9);
    ExFreePoolWithTag(v9, 0);
    v9 = v40;
  }
}
