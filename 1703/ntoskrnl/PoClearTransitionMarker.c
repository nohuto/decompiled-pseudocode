/*
 * XREFs of PoClearTransitionMarker @ 0x1405B8BC8
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     RtlComputeCrc32 @ 0x140134030 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x140159410 (ExIsSoftBoot.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlGetSetBootStatusData @ 0x1405820B0 (RtlGetSetBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140585800 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140585EE0 (RtlUnlockBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1405B8C9C (RtlInitializeBootStatusDataBlackBox.c)
 */

void PoClearTransitionMarker()
{
  char Buffer; // [rsp+40h] [rbp+8h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp+10h] BYREF

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  memset(&PopBsdPowerTransition, 0, 0x20uLL);
  BYTE8(PopBsdPowerTransition) |= 1u;
  *((_DWORD *)&::Buffer + 3) = MEMORY[0xFFFFF780000002C4];
  *(_QWORD *)&::Buffer = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)&::Buffer + 2) = RtlComputeCrc32(0, &::Buffer, 8u);
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlGetSetBootStatusData(FileHandle, 0, RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
    if ( (unsigned __int8)ExIsSoftBoot() )
    {
      Buffer = 0;
      RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemBootShutdown, &Buffer, 1u, 0LL);
    }
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
