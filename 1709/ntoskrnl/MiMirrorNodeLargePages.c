/*
 * XREFs of MiMirrorNodeLargePages @ 0x140232DD4
 * Callers:
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
 */

unsigned __int64 *__fastcall MiMirrorNodeLargePages(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v4; // ebx
  unsigned __int64 *result; // rax
  unsigned __int64 *v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r11
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD **v17; // rbx
  _QWORD *v18; // r14
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r10
  char v21; // r9
  volatile signed __int32 *v22; // r8
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // [rsp+20h] [rbp-98h]
  __int64 v26; // [rsp+28h] [rbp-90h]
  __int64 *v27; // [rsp+30h] [rbp-88h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp-80h]
  __int64 v29; // [rsp+40h] [rbp-78h]
  unsigned __int64 v30; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+C0h] [rbp+8h]
  __int64 v35; // [rsp+D8h] [rbp+20h]

  v3 = qword_14038A0D0;
  v4 = a2;
  result = (unsigned __int64 *)(unsigned __int16)KeNumberNodes;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = 17;
  v30 = qword_14038A0D0 + 8256LL * (unsigned __int16)KeNumberNodes;
  if ( qword_14038A0D0 >= v30 )
    return result;
  result = (unsigned __int64 *)(qword_14038A0D0 + 8200);
  v29 = qword_14038A0D0 + 8200;
  do
  {
    if ( !v4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = result;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)result);
    }
    v6 = (unsigned __int64 *)MiLargePageSizes;
    v7 = 0LL;
    v27 = MiLargePageSizes;
    do
    {
      v8 = *v6;
      v9 = 0LL;
      v32 = *v6;
      v26 = 2LL;
      do
      {
        v10 = 0LL;
        v11 = 2LL;
        v35 = 0LL;
        v25 = 2LL;
        do
        {
          v12 = 0;
          if ( !MmNumberOfChannels )
            goto LABEL_39;
          do
          {
            v13 = 1;
            if ( (_DWORD)v7 == 2 )
              v13 = dword_140388550;
            v14 = 0;
            if ( v13 )
            {
              v15 = v12;
              while ( 1 )
              {
                v16 = (_DWORD)v7 == 2
                    ? 16 * (v15 + 4 * (v10 + 2 * v9)) + v14 + 59LL
                    : v15 + 4 * (v10 + 2 * (v9 + 2 * v7)) + 27;
                v17 = (_QWORD **)(v3 + 16 * v16);
                v18 = *v17;
                if ( *v17 != v17 )
                  break;
LABEL_36:
                if ( ++v14 >= v13 )
                  goto LABEL_37;
              }
              while ( 2 )
              {
                v19 = v8;
                v20 = (__int64)(v18 + 0xB000000000LL) / 48;
                v21 = v20 & 0x1F;
                v22 = (volatile signed __int32 *)stru_140388B68.Buffer + (v20 >> 5);
                if ( (v20 & 0x1F) + v8 > 0x20 )
                {
                  if ( (v20 & 0x1F) != 0 )
                  {
                    _InterlockedAnd(v22, ~(((1 << (32 - (v20 & 0x1F))) - 1) << v21));
                    v19 = v8 - (32 - (unsigned int)(v20 & 0x1F));
                    ++v22;
                  }
                  if ( v19 >= 0x20 )
                  {
                    v24 = v19 >> 5;
                    v19 += -32LL * (v19 >> 5);
                    do
                    {
                      *v22++ = 0;
                      --v24;
                    }
                    while ( v24 );
                  }
                  if ( v19 )
                  {
                    v23 = (1 << v19) - 1;
                    goto LABEL_28;
                  }
                }
                else
                {
                  if ( v8 == 32 )
                  {
                    *v22 = 0;
                    goto LABEL_29;
                  }
                  v23 = ((1 << v8) - 1) << v21;
LABEL_28:
                  _InterlockedAnd(v22, ~v23);
                }
LABEL_29:
                if ( !a2 )
                {
                  RtlSetBitsEx((__int64)&stru_140388B58, (__int64)(v18 + 0xB000000000LL) / 48, v8);
                  goto LABEL_33;
                }
                if ( *(_QWORD *)(a3 + 24) )
                {
                  RtlClearBitsEx((__int64)&stru_140388B58, (__int64)(v18 + 0xB000000000LL) / 48, v8);
LABEL_33:
                  v8 = v32;
                }
                v18 = (_QWORD *)*v18;
                if ( v18 == v17 )
                {
                  v10 = v35;
                  v15 = v12;
                  goto LABEL_36;
                }
                continue;
              }
            }
LABEL_37:
            ++v12;
          }
          while ( v12 < MmNumberOfChannels );
          v11 = v25;
LABEL_39:
          ++v10;
          --v11;
          v35 = v10;
          v25 = v11;
        }
        while ( v11 );
        ++v9;
        --v26;
      }
      while ( v26 );
      v7 = (unsigned int)(v7 + 1);
      v6 = (unsigned __int64 *)++v27;
    }
    while ( (unsigned int)v7 < 3 );
    v4 = a2;
    if ( !a2 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
    }
    result = (unsigned __int64 *)(v29 + 8256);
    v3 += 8256LL;
    v29 += 8256LL;
  }
  while ( v3 < v30 );
  return result;
}
