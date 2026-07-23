/*
 * XREFs of PopRecordPepWorkorderBlackboxInformation @ 0x1402834BC
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x14077049C (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 */

void PopRecordPepWorkorderBlackboxInformation()
{
  __int64 v0; // rsi
  _DWORD *v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 *i; // r9
  __int64 *v5; // rax
  SIZE_T v6; // rdi
  _DWORD *PoolWithTag; // rax
  unsigned __int64 v8; // kr00_8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v0) = 0;
  v1 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
  v5 = (__int64 *)PopWorkOrderList;
  if ( (__int64 *)PopWorkOrderList == &PopWorkOrderList )
    goto LABEL_13;
  do
  {
    v5 = (__int64 *)*v5;
    v0 = (unsigned int)(v0 + 1);
  }
  while ( v5 != &PopWorkOrderList );
  if ( !(_DWORD)v0 )
  {
LABEL_13:
    v6 = 0LL;
  }
  else
  {
    v6 = 48 * v0 + 64;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x42424F50u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 48 * v0 + 64);
      *v1 = 1;
      v3 = (__int64)(v1 + 4);
      v1[1] = v6;
      v1[2] = v0;
      for ( i = (__int64 *)PopWorkOrderList; i != &PopWorkOrderList; v3 += 48LL )
      {
        v8 = MEMORY[0xFFFFF78000000008] - i[20];
        *(_QWORD *)(v3 + 8) = i;
        v2 = v8 / 0x2710;
        *(_DWORD *)v3 = v8 / 0x2710;
        *(_QWORD *)(v3 + 16) = i[18];
        v9 = i[19];
        *(_QWORD *)(v3 + 24) = v9;
        if ( v9 )
        {
          *(_DWORD *)(v3 + 32) = *(_DWORD *)v9;
          if ( v9 != -8 )
          {
            v10 = *(_QWORD *)(v9 + 8);
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 64);
              if ( v11 )
                *(_QWORD *)(v3 + 40) = *(_QWORD *)(v11 + 96);
            }
          }
        }
        i = (__int64 *)*i;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock, v2, v3, (__int64)i);
  KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
  if ( v6 )
  {
    memset(InputBuffer, 0, 0x20uLL);
    InputBuffer[1] = (unsigned int)v6;
    LODWORD(InputBuffer[3]) = 7;
    InputBuffer[0] = v1;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42424F50u);
}
