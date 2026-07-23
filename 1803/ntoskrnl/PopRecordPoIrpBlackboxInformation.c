/*
 * XREFs of PopRecordPoIrpBlackboxInformation @ 0x14028367C
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x14077049C (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagGetDriverName @ 0x140153A58 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 */

void PopRecordPoIrpBlackboxInformation()
{
  __int64 v0; // rsi
  int v1; // r15d
  _DWORD *v2; // rdi
  SIZE_T v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // r14
  __int64 i; // rsi
  __int64 v10; // r12
  __int64 v11; // r15
  _QWORD InputBuffer[4]; // [rsp+38h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-79h] BYREF
  wchar_t Src[64]; // [rsp+78h] [rbp-59h] BYREF

  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v0 = PopIrpList;
  v1 = 0;
  v2 = 0LL;
  v3 = 64LL;
  if ( (__int64 *)PopIrpList == &PopIrpList )
    goto LABEL_23;
  do
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
          goto LABEL_23;
        v4 = v6;
      }
      ++v1;
      if ( v3 + v4 < v3 )
        goto LABEL_23;
      v3 += v4;
    }
    v0 = *(_QWORD *)v0;
  }
  while ( (__int64 *)v0 != &PopIrpList );
  if ( !v1 )
  {
LABEL_23:
    v3 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x42424F50u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      v2[1] = 1;
      *((_QWORD *)v2 + 3) = &PopIrpThreadList;
      v8 = v2 + 10;
      *((_QWORD *)v2 + 4) = ExWorkerQueue;
      *v2 = v3;
      v2[2] = v1;
      *((_QWORD *)v2 + 2) = &PopIrpList;
      for ( i = PopIrpList; (__int64 *)i != &PopIrpList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 196) )
        {
          v8[2] = *(unsigned __int8 *)(i + 184);
          v8[3] = *(_DWORD *)(i + 188);
          v8[4] = *(_DWORD *)(i + 192);
          v10 = 24LL;
          v8[1] = (KiQueryUnbiasedInterruptTime() - *(_QWORD *)(i + 48)) / 0x2710uLL;
          if ( PopDiagGetDriverName(*(_QWORD *)(i + 32), Src) >= 0 )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( Src[v11] );
            v10 = 2 * v11 + 26;
            memmove(v8 + 5, Src, 2 * v11);
            *((_WORD *)v8 + v11 + 10) = 0;
          }
          *v8 = v10;
          v8 = (_DWORD *)((char *)v8 + v10);
        }
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
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
