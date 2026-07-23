/*
 * XREFs of MiMirrorNodeLargePages @ 0x14013A564
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400AECC0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 */

unsigned __int64 *__fastcall MiMirrorNodeLargePages(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v4; // r11d
  unsigned __int64 *result; // rax
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r13
  __int64 i; // r12
  __int64 j; // r15
  unsigned int v11; // r14d
  __int64 v12; // rcx
  _QWORD **v13; // rdi
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r10
  char v17; // r9
  volatile signed __int32 *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v21; // r9
  __int64 v22; // [rsp+20h] [rbp-88h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  unsigned __int64 v26; // [rsp+40h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v28; // [rsp+B0h] [rbp+8h]
  __int64 v31; // [rsp+C8h] [rbp+20h]

  v3 = qword_140380230;
  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (unsigned __int64 *)(unsigned __int16)KeNumberNodes;
  CurrentIrql = 17;
  v26 = qword_140380230 + 2184LL * (unsigned __int16)KeNumberNodes;
  if ( qword_140380230 >= v26 )
    return result;
  result = (unsigned __int64 *)(qword_140380230 + 2176);
  v24 = qword_140380230 + 2176;
  do
  {
    if ( !v4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = result;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)result);
      v4 = a2;
    }
    v6 = (unsigned __int64 *)MiLargePageSizes;
    v7 = 0LL;
    v28 = MiLargePageSizes;
    v31 = 0LL;
    v22 = 3LL;
    do
    {
      v8 = *v6;
      for ( i = 0LL; i <= 1; ++i )
      {
        for ( j = 0LL; j <= 1; ++j )
        {
          v11 = 0;
          if ( !MmNumberOfChannels )
            continue;
          v12 = j + 2 * (v7 + i);
          v25 = v12;
          do
          {
            v13 = (_QWORD **)(v3 + 16 * (v11 + 4 * v12 + 3));
            v14 = *v13;
            if ( *v13 == v13 )
              goto LABEL_19;
            do
            {
              v15 = v8;
              v16 = (__int64)(v14 + 0xB000000000LL) / 48;
              v17 = v16 & 0x1F;
              v18 = (volatile signed __int32 *)stru_14036C970.Buffer + (v16 >> 5);
              if ( (v16 & 0x1F) + v8 > 0x20 )
              {
                if ( (v16 & 0x1F) != 0 )
                {
                  _InterlockedAnd(v18, ~(((1 << (32 - (v16 & 0x1F))) - 1) << v17));
                  v15 = v8 - (32 - (unsigned int)(v16 & 0x1F));
                  ++v18;
                }
                if ( v15 >= 0x20 )
                {
                  v21 = v15 >> 5;
                  v15 += -32LL * (v15 >> 5);
                  do
                  {
                    *v18++ = 0;
                    --v21;
                  }
                  while ( v21 );
                }
                if ( v15 )
                {
                  v19 = (1 << v15) - 1;
                  goto LABEL_14;
                }
              }
              else
              {
                if ( v8 != 32 )
                {
                  v19 = ((1 << v8) - 1) << v17;
LABEL_14:
                  _InterlockedAnd(v18, ~v19);
                  goto LABEL_15;
                }
                *v18 = 0;
              }
LABEL_15:
              if ( v4 )
              {
                if ( !*(_QWORD *)(a3 + 24) )
                  goto LABEL_17;
                RtlClearBitsEx((__int64)&stru_14036C960, (__int64)(v14 + 0xB000000000LL) / 48, v8);
              }
              else
              {
                RtlSetBitsEx((__int64)&stru_14036C960, (__int64)(v14 + 0xB000000000LL) / 48, v8);
              }
              v4 = a2;
LABEL_17:
              v14 = (_QWORD *)*v14;
            }
            while ( v14 != v13 );
            v12 = v25;
LABEL_19:
            ++v11;
          }
          while ( v11 < MmNumberOfChannels );
          v7 = v31;
        }
      }
      v6 = (unsigned __int64 *)(v28 + 1);
      v7 += 2LL;
      v20 = v22-- == 1;
      ++v28;
      v31 = v7;
    }
    while ( !v20 );
    if ( !v4 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      v4 = a2;
    }
    result = (unsigned __int64 *)(v24 + 2184);
    v3 += 2184LL;
    v24 += 2184LL;
  }
  while ( v3 < v26 );
  return result;
}
