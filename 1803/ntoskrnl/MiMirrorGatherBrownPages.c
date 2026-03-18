/*
 * XREFs of MiMirrorGatherBrownPages @ 0x140156670
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140003B48 (MiIsDecayPfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiMirrorAddPagesToBrownList @ 0x140156964 (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorNodeLargePages @ 0x1401571B0 (MiMirrorNodeLargePages.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiMirrorGatherBrownPages(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v4; // esi
  __int64 v5; // r14
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // r13
  ULONG_PTR *v10; // rdi
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // r15
  int v15; // eax
  __int64 *v16; // rdi
  __int64 i; // rbx
  __int64 j; // rbx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+18h]

  v4 = a3;
  v5 = a1;
  v22 = 0;
  v7 = 0;
  v8 = a3;
  v9 = 16LL;
  if ( a3 <= 4LL )
  {
    while ( 1 )
    {
      v10 = (ULONG_PTR *)*(&MiSystemPartition + v8 + 519);
      if ( v8 <= 1 )
        v10 = (ULONG_PTR *)(*(&MiSystemPartition + v8 + 264) + 40LL * v7);
      if ( v8 == 2 )
        break;
      if ( v8 != 3 )
        goto LABEL_10;
      if ( *v10 != qword_1403CFCB0 )
      {
        v11 = a4 + 106LL;
        goto LABEL_9;
      }
LABEL_36:
      ++v4;
      if ( ++v8 > 4 )
        goto LABEL_37;
    }
    v11 = a4 + 74LL;
LABEL_9:
    v10 = &MiSystemPartition + 4 * v11 + a4;
LABEL_10:
    KeAcquireInStackQueuedSpinLock(v10 + 4, &LockHandle);
    if ( *v10 )
    {
      v12 = v10[2];
      do
      {
        v13 = (_QWORD *)(48 * v12 - 0x58000000000LL);
        if ( !(unsigned int)MiIsPfnFileOnly((__int64)v13) )
        {
          if ( v8 == 2 && MiIsDecayPfn(v12) )
          {
            v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v13 + 2);
            if ( v14 != v12 )
            {
              do
              {
                MiMirrorAddPagesToBrownList(v14, 1LL);
                v14 = *(_QWORD *)(48 * v14 - 0x58000000000LL) & 0xFFFFFFFFFLL;
              }
              while ( v14 != v12 );
              v13 = (_QWORD *)(48 * v12 - 0x58000000000LL);
            }
          }
          else
          {
            MiMirrorAddPagesToBrownList(v12, 1LL);
          }
        }
        v12 = *v13 & 0xFFFFFFFFFLL;
      }
      while ( v12 != 0xFFFFFFFFFLL );
      v7 = v22;
      v9 = 16LL;
      v5 = a1;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v8 > 1 )
    {
      if ( v8 == 2 )
      {
        ++a4;
        v15 = v4 - 1;
        if ( a4 == 8 )
          v15 = v4;
        v4 = v15;
        v8 = (a4 == 8) + 1LL;
        if ( a4 == 8 )
          a4 = 0;
      }
      else if ( v8 == 3 && ++a4 != 16 )
      {
        --v4;
        v8 = 2LL;
      }
    }
    else
    {
      v22 = ++v7;
      if ( v7 >= dword_1403CB6DC )
      {
        v7 = 0;
        v22 = 0;
        if ( v8 == 1 )
          MiMirrorNodeLargePages(v5, &MiSystemPartition, 0LL);
      }
      else
      {
        --v4;
        --v8;
      }
    }
    goto LABEL_36;
  }
LABEL_37:
  KeAcquireInStackQueuedSpinLock(&qword_1403CFC60, &LockHandle);
  v16 = (__int64 *)&unk_1403CEA10;
  do
  {
    for ( i = *v16; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
      MiMirrorAddPagesToBrownList(i, 1LL);
    v16 += 5;
    --v9;
  }
  while ( v9 );
  for ( j = qword_1403CE9D0; j != 0xFFFFFFFFFLL; j = *(_QWORD *)(48 * j - 0x58000000000LL) & 0xFFFFFFFFFLL )
    MiMirrorAddPagesToBrownList(j, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
