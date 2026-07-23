/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x140249DD0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140249C30 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopDiagGetDriverName @ 0x140244E00 (PopDiagGetDriverName.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  __int64 v0; // rsi
  int v1; // r15d
  _DWORD *v2; // rbx
  SIZE_T v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  SIZE_T v7; // rcx
  __int64 v8; // rax
  SIZE_T v9; // rdx
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // r14
  __int64 i; // rsi
  __int64 v13; // r12
  __int64 v14; // r15
  _QWORD InputBuffer[4]; // [rsp+38h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-79h] BYREF
  wchar_t Src[64]; // [rsp+78h] [rbp-59h] BYREF

  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v0 = PopIrpList;
  v1 = 0;
  v2 = 0LL;
  v3 = 64LL;
  while ( (__int64 *)v0 != &PopIrpList )
  {
    if ( *(_BYTE *)(v0 + 196) )
    {
      v4 = 24LL;
      if ( PopDiagGetDriverName(*(_QWORD *)(v0 + 32), Src) >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Src[v5] );
        v6 = 2 * v5 + 26;
        if ( v6 < 0x18 )
          goto LABEL_16;
        v4 = v6;
      }
      v7 = v3 + v4;
      v8 = -1LL;
      ++v1;
      v9 = v3;
      if ( v3 + v4 >= v3 )
        v8 = v3 + v4;
      v3 = v8;
      if ( v7 < v9 )
      {
LABEL_16:
        v3 = 0LL;
        goto LABEL_25;
      }
    }
    v0 = *(_QWORD *)v0;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x42424F50u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    v2[1] = 1;
    *((_QWORD *)v2 + 3) = &PopIrpThreadList;
    v11 = v2 + 10;
    *((_QWORD *)v2 + 4) = ExWorkerQueue;
    *v2 = v3;
    v2[2] = v1;
    *((_QWORD *)v2 + 2) = &PopIrpList;
    if ( v1 )
    {
      for ( i = PopIrpList; (__int64 *)i != &PopIrpList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 196) )
        {
          v11[2] = *(unsigned __int8 *)(i + 184);
          v13 = 24LL;
          v11[3] = *(_DWORD *)(i + 188);
          v11[4] = *(_DWORD *)(i + 192);
          v11[1] = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(i + 48)) / 0x2710uLL;
          if ( PopDiagGetDriverName(*(_QWORD *)(i + 32), Src) >= 0 )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( Src[v14] );
            v13 = 2 * v14 + 26;
            memmove(v11 + 5, Src, 2 * v14);
            *((_WORD *)v11 + v14 + 10) = 0;
          }
          *v11 = v13;
          v11 = (_DWORD *)((char *)v11 + v13);
        }
      }
    }
  }
LABEL_25:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v3 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    InputBuffer[1] = (unsigned int)v3;
    LODWORD(InputBuffer[3]) = 4;
    InputBuffer[0] = v2;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42424F50u);
}
