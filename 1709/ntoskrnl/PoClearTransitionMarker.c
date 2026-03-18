/*
 * XREFs of PoClearTransitionMarker @ 0x1405ABF50
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     RtlComputeCrc32 @ 0x140113980 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x1401346F0 (ExIsSoftBoot.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpSystemBootStatusRequest @ 0x1405AC0A4 (RtlpSystemBootStatusRequest.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1405AC0FC (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlUnlockBootStatusData @ 0x1405AC670 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1405ACB30 (RtlLockBootStatusData.c)
 */

void PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  int v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v2; // [rsp+28h] [rbp-30h]
  int v3; // [rsp+30h] [rbp-28h]
  int v4; // [rsp+38h] [rbp-20h]
  char *v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+48h] [rbp-10h]
  char v7; // [rsp+60h] [rbp+8h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp+10h] BYREF

  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v1 = 7;
  v2 = &PopBsdPowerTransition;
  v0 = 1;
  v3 = 32;
  if ( ExIsSoftBoot() )
  {
    v7 = 0;
    v5 = &v7;
    v0 = 2;
    v4 = 5;
    v6 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  memset(&PopBsdPowerTransition, 0, 0x20uLL);
  BYTE8(PopBsdPowerTransition) |= 1u;
  BYTE11(PopBsdPowerTransition) |= 0xC0u;
  *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
  RtlpSystemBootStatusRequest(32LL, &v1, v0);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
