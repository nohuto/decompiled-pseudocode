/*
 * XREFs of PoClearTransitionMarker @ 0x1406230BC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x140171830 (ExIsSoftBoot.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlUnlockBootStatusData @ 0x14060F250 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140611E5C (RtlpSystemBootStatusRequest.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1406231C4 (RtlInitializeBootStatusDataBlackBox.c)
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
  BYTE8(PopBsdPowerTransition) = 1;
  *((_DWORD *)&Buffer + 3) = MEMORY[0xFFFFF780000002C4];
  BYTE11(PopBsdPowerTransition) |= 0xC0u;
  dword_1403A7E4C = BYTE11(PopBsdPowerTransition) >> 6;
  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
  RtlpSystemBootStatusRequest(0x20u, (__int64)&v1, v0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
