/*
 * XREFs of MiMirrorNodeLargePages @ 0x1401571B0
 * Callers:
 *     MiMirrorGatherBrownPages @ 0x140156670 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x1401573F4 (MiMirrorReduceBlackWrites.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiMirrorAddPagesToBrownList @ 0x140156964 (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14015767C (MiMirrorOmitPagesFromCopy.c)
 */

__int64 __fastcall MiMirrorNodeLargePages(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  __int64 result; // rax
  unsigned __int64 *v6; // rbp
  int *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  unsigned int v12; // ecx
  __int64 i; // r15
  unsigned int v14; // r12d
  __int64 v15; // rdx
  _QWORD **v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rdi
  bool v19; // zf
  unsigned __int64 v20; // r14
  __int64 *v21; // [rsp+20h] [rbp-A8h]
  int *v22; // [rsp+28h] [rbp-A0h]
  __int64 v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-88h]
  unsigned __int64 v26; // [rsp+48h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-78h] BYREF
  __int64 v28; // [rsp+68h] [rbp-60h]
  unsigned __int64 v29; // [rsp+70h] [rbp-58h]
  int v31; // [rsp+D8h] [rbp+10h]
  int v32; // [rsp+E0h] [rbp+18h]
  __int64 v33; // [rsp+E8h] [rbp+20h]

  v32 = a3;
  v3 = *(_QWORD *)(a2 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1;
  result = (unsigned __int16)KeNumberNodes;
  CurrentIrql = 17;
  v29 = v3 + 1984LL * (unsigned __int16)KeNumberNodes;
  if ( v3 < v29 )
  {
    v6 = (unsigned __int64 *)(v3 + 1928);
    v26 = v3 + 1928;
    do
    {
      if ( !a3 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = v6;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v6);
        v4 = a1;
      }
      v7 = dword_1403CB6E8;
      v8 = 0LL;
      v22 = dword_1403CB6E8;
      v9 = (unsigned __int64 *)MiLargePageSizes;
      v23 = 0LL;
      v21 = MiLargePageSizes;
      v24 = 3LL;
      do
      {
        v10 = *v9;
        v11 = 0LL;
        v12 = *v7;
        v31 = *v7;
        do
        {
          for ( i = 0LL; i <= 1; ++i )
          {
            v14 = 0;
            if ( MmNumberOfChannels )
            {
              v15 = v8 + 4 * (i + v11);
              v28 = v15;
              do
              {
                v16 = *(_QWORD ***)(v3 + 8 * (v15 + v14) + 144);
                if ( v12 )
                {
                  v17 = v12;
                  v33 = v12;
                  do
                  {
                    v18 = *v16;
                    if ( *v16 != v16 )
                    {
                      do
                      {
                        if ( v32 )
                          MiMirrorOmitPagesFromCopy(v4, (__int64)(v18 + 0xB000000000LL) / 48, v10);
                        else
                          MiMirrorAddPagesToBrownList((__int64)(v18 + 0xB000000000LL) / 48, v10);
                        v18 = (_QWORD *)*v18;
                        v4 = a1;
                      }
                      while ( v18 != v16 );
                      v17 = v33;
                    }
                    v4 = a1;
                    v16 += 3;
                    v33 = --v17;
                  }
                  while ( v17 );
                  v12 = v31;
                  v15 = v28;
                }
                v4 = a1;
                ++v14;
              }
              while ( v14 < MmNumberOfChannels );
              v8 = v23;
            }
            v4 = a1;
          }
          v11 += 2LL;
        }
        while ( v11 <= 2 );
        v8 += 34LL;
        v9 = (unsigned __int64 *)(v21 + 1);
        v7 = v22 + 1;
        ++v21;
        v19 = v24-- == 1;
        ++v22;
        v23 = v8;
      }
      while ( !v19 );
      v20 = v29;
      if ( !v32 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(CurrentIrql);
      }
      a3 = v32;
      result = 1984LL;
      v4 = a1;
      v6 = (unsigned __int64 *)(v26 + 1984);
      v3 += 1984LL;
      v26 += 1984LL;
    }
    while ( v3 < v20 );
  }
  return result;
}
