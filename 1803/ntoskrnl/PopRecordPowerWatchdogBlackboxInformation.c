/*
 * XREFs of PopRecordPowerWatchdogBlackboxInformation @ 0x140283900
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x14077049C (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 */

void PopRecordPowerWatchdogBlackboxInformation()
{
  KIRQL v0; // al
  __int64 v1; // r8
  unsigned int v2; // esi
  _DWORD *v3; // rbx
  KIRQL v4; // bp
  bool v5; // zf
  __int64 v6; // rdx
  SIZE_T v7; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r9
  __int64 i; // r8
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  v1 = PopWatchdogList;
  v2 = 0;
  v3 = 0LL;
  v4 = v0;
  if ( (__int64 *)PopWatchdogList == &PopWatchdogList )
    goto LABEL_13;
  do
  {
    v5 = *(_BYTE *)(v1 + 216) == 0;
    v6 = v2 + 1;
    v1 = *(_QWORD *)v1;
    if ( v5 )
      v6 = v2;
    v2 = v6;
  }
  while ( (__int64 *)v1 != &PopWatchdogList );
  if ( !(_DWORD)v6 )
  {
LABEL_13:
    v7 = 0LL;
  }
  else
  {
    v7 = 80 * v6 + 96;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x42424F50u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      *v3 = 1;
      v9 = v3 + 4;
      v3[1] = v7;
      v3[2] = v2;
      for ( i = PopWatchdogList; (__int64 *)i != &PopWatchdogList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 216) )
        {
          *v9 = *(_DWORD *)(i + 16);
          *((_QWORD *)v9 + 9) = *(_QWORD *)(i + 304);
          v9[1] = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(i + 296)) / 0x2710uLL;
          v9[2] = *(_DWORD *)(i + 224);
          v9[3] = *(_DWORD *)(i + 232);
          *((_QWORD *)v9 + 2) = *(_QWORD *)(i + 240);
          *((_QWORD *)v9 + 3) = *(_QWORD *)(i + 248);
          *((_QWORD *)v9 + 4) = *(_QWORD *)(i + 256);
          *((_QWORD *)v9 + 5) = *(_QWORD *)(i + 264);
          *((_QWORD *)v9 + 8) = i + 224;
          *((_QWORD *)v9 + 6) = *(_QWORD *)(i + 280);
          *((_QWORD *)v9 + 7) = *(_QWORD *)(i + 288);
          v9 += 20;
        }
      }
    }
  }
  KxReleaseSpinLock(&PopWatchdogLock);
  __writecr8(v4);
  if ( v7 )
  {
    memset(InputBuffer, 0, 0x20uLL);
    InputBuffer[1] = (unsigned int)v7;
    LODWORD(InputBuffer[3]) = 8;
    InputBuffer[0] = v3;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x42424F50u);
}
