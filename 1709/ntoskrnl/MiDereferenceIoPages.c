/*
 * XREFs of MiDereferenceIoPages @ 0x140118C1C
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140009834 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiZeroAndFlushPtes @ 0x1401188A4 (MiZeroAndFlushPtes.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiMapContiguousMemoryLarge @ 0x14014F27C (MiMapContiguousMemoryLarge.c)
 *     MiMapLockedPagesInUserSpace @ 0x140448658 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // r12
  ULONG_PTR v5; // r13
  ULONG_PTR BugCheckParameter4; // r15
  void *v7; // rdi
  unsigned __int64 *i; // rbx
  __int64 *v9; // rax
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 k; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 *v16; // rbp
  ULONG_PTR v17; // rdx
  _WORD *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  ULONG_PTR v21; // rdi
  ULONG_PTR v22; // r9
  _QWORD *j; // rax
  unsigned __int64 *v24; // r10
  _WORD *v25; // rcx
  _WORD *v26; // rdx
  _QWORD *v27; // rdx
  bool v28; // r8
  int v29; // eax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  bool v32; // r8
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int64 *v37; // [rsp+30h] [rbp-78h]
  __int64 *v38; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int16 v40; // [rsp+B0h] [rbp+8h]
  _QWORD *v41; // [rsp+B8h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+C0h] [rbp+18h]
  ULONG_PTR v43; // [rsp+C8h] [rbp+20h]

  BugCheckParameter3 = a3;
  v43 = a3;
  v41 = 0LL;
  v4 = a2 & 0xFFFFFFFFFLL;
  v5 = a3;
  BugCheckParameter4 = a2 & 0xFFFFFFFFFLL;
  v7 = 0LL;
  i = (unsigned __int64 *)&qword_1403890C8[a1];
  v37 = i;
  v9 = &qword_1403890D8;
  if ( a1 != 1 )
    v9 = 0LL;
  v38 = v9;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
LABEL_5:
  for ( i = (unsigned __int64 *)*i; i; i = (unsigned __int64 *)i[1] )
  {
    v10 = i[5];
    if ( v4 < v10 )
      goto LABEL_5;
    if ( v4 < v10 + 512 )
      break;
  }
  if ( a3 )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0x1Au, 0x61948uLL, v4, BugCheckParameter3, BugCheckParameter4);
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
      v16 = i;
      v17 = (BugCheckParameter4 & 0xFFFFFFFFFLL) - v14;
      v18 = (_WORD *)(v15 + 2 * v17);
      v19 = BugCheckParameter4 + v5 > v14 + 512 ? 1024LL : 2 * (v17 + v5);
      v20 = v15 + v19;
      if ( (unsigned __int64)v18 < v15 + v19 )
        break;
LABEL_23:
      v5 = v43;
      i = (unsigned __int64 *)v11;
      if ( !v43 )
        goto LABEL_24;
    }
    v21 = v43;
LABEL_19:
    if ( (*v18 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, v4, BugCheckParameter3, BugCheckParameter4);
    v40 = (*v18 ^ (*v18 - 1)) & 0x3FFF ^ *v18;
    *v18 = v40;
    if ( (v40 & 0x3FFF) != 0 )
      goto LABEL_21;
    v22 = v16[7];
    if ( v22 == 0 || v22 > 0x200 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, (ULONG_PTR)v16, v22, BugCheckParameter4);
    v16[7] = v22 - 1;
    if ( v22 != 1 )
      goto LABEL_21;
    RtlAvlRemoveNode(v37, (__int64)v16);
    v24 = (unsigned __int64 *)v38;
    if ( v38 )
    {
      v25 = (_WORD *)v16[6];
      v26 = v25 + 512;
      while ( 1 )
      {
        if ( v25 >= v26 )
          goto LABEL_41;
        if ( (*v25 & 0xC000) == 0x4000 )
          break;
        ++v25;
      }
      _InterlockedOr(v36, 0);
      v29 = KiCacheFlushTimeStamp;
      *((_DWORD *)v16 + 14) = KiCacheFlushTimeStamp;
      if ( (__int64 *)qword_1403890E0 == &qword_1403890E0 )
        dword_1403890F0 = v29;
      v30 = (_QWORD *)qword_1403890E8;
      v31 = v16 + 3;
      if ( *(__int64 **)qword_1403890E8 != &qword_1403890E0 )
        __fastfail(3u);
      *v31 = &qword_1403890E0;
      v32 = 0;
      v16[4] = (unsigned __int64)v30;
      *v30 = v31;
      qword_1403890E8 = (__int64)(v16 + 3);
      v33 = (_QWORD *)*v24;
      if ( *v24 )
      {
        while ( 1 )
        {
          if ( v16[5] < v33[5] )
          {
            v34 = (_QWORD *)*v33;
            if ( !*v33 )
            {
              v32 = 0;
              break;
            }
          }
          else
          {
            v34 = (_QWORD *)v33[1];
            if ( !v34 )
            {
              v32 = 1;
              break;
            }
          }
          v33 = v34;
        }
      }
      RtlAvlInsertNodeEx(v24, (unsigned __int64)v33, v32, (unsigned __int64)i);
      v16 = 0LL;
      ++qword_1403890F8;
    }
LABEL_41:
    if ( !v16 )
      goto LABEL_21;
    v27 = v41;
    v28 = 0;
    if ( !v41 )
      goto LABEL_43;
    while ( 1 )
    {
      if ( v16[5] < v27[5] )
      {
        v35 = (_QWORD *)*v27;
        if ( !*v27 )
        {
          v28 = 0;
LABEL_43:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v41, (unsigned __int64)v27, v28, (unsigned __int64)i);
LABEL_21:
          ++v18;
          --v21;
          ++BugCheckParameter4;
          v43 = v21;
          if ( (unsigned __int64)v18 >= v20 )
          {
            v7 = v41;
            goto LABEL_23;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v35 = (_QWORD *)v27[1];
        if ( !v35 )
        {
          v28 = 1;
          goto LABEL_43;
        }
      }
      v27 = v35;
    }
  }
LABEL_24:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  while ( v7 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v41, (__int64)v7);
    ExFreePoolWithTag(v7, 0);
    v7 = v41;
  }
}
