/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x140651BE4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14058A1CC (ExpGetSystemFirmwareTableInformation.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  void *v4; // r14
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  int SystemFirmwareTableInformation; // ecx
  int v8; // edi
  unsigned int v10; // edi
  _DWORD *PoolWithTag; // rax
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  SIZE_T v16; // r15
  _QWORD *v17; // rbx
  unsigned __int16 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  void *v21; // rdi
  unsigned __int16 v22; // ax
  unsigned int Length; // [rsp+28h] [rbp-A0h]
  unsigned int NumberOfBytes; // [rsp+38h] [rbp-90h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+3Ch] [rbp-8Ch]
  volatile void *Address; // [rsp+40h] [rbp-88h]
  volatile void *v28; // [rsp+48h] [rbp-80h]
  PVOID BaseAddress; // [rsp+50h] [rbp-78h]
  SIZE_T v30; // [rsp+58h] [rbp-70h]
  _DWORD Src[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v32; // [rsp+80h] [rbp-48h]

  v4 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  v30 = 0LL;
  if ( a2 < 0x20 )
  {
    v8 = -1073741811;
    goto LABEL_11;
  }
  NumberOfBytes_4 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v28 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v5 = 1;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v8 = -1073741637;
    goto LABEL_11;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = 0;
    if ( Length || NumberOfBytes_4 )
    {
      v8 = -1073741811;
      goto LABEL_11;
    }
    Src[0] = 1094930505;
    Src[1] = 1;
    v32 = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)Src, 0, 0x14u, &NumberOfBytes);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v8 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v8 = -1073741701;
      goto LABEL_11;
    }
    v10 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54425057u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_11;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v10 - 16;
    v8 = ExpGetSystemFirmwareTableInformation((char *)PoolWithTag, 0, v10, &NumberOfBytes);
    if ( v8 < 0 )
      goto LABEL_11;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock, v13, v14, v15);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v8 = -1073741637;
        goto LABEL_11;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v4;
      v4 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
  }
  v16 = NumberOfBytes_4;
  if ( (NumberOfBytes_4 & 1) == 0 )
  {
    v17 = ExpPlatformBinaryTableInformation;
    if ( *((_BYTE *)ExpPlatformBinaryTableInformation + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryTableInformation + 65) != 1
      || (v18 = *((_WORD *)ExpPlatformBinaryTableInformation + 33), (v18 & 1) != 0)
      || (v19 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryTableInformation + 10) != 1 )
    {
      v8 = -1073741701;
      goto LABEL_50;
    }
    v20 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    if ( (unsigned int)v20 > Length || v18 > NumberOfBytes_4 )
    {
      v8 = -1073741789;
      *(_DWORD *)(a1 + 24) = v20;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v17 + 33);
      goto LABEL_50;
    }
    v30 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    v21 = (void *)MmMapIoSpaceEx(v19, v20, 2u);
    BaseAddress = v21;
    if ( !v21 )
    {
      v8 = -1073741670;
      goto LABEL_50;
    }
    *(_QWORD *)a1 = v17[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v21, *((unsigned int *)v17 + 13));
    v22 = *((_WORD *)v17 + 33);
    if ( v22 )
    {
      if ( a3 )
      {
        ProbeForWrite(v28, v16, 2u);
        v22 = *((_WORD *)v17 + 33);
      }
      memmove((void *)v28, (char *)v17 + 68, v22);
    }
    v8 = 0;
    v5 = 1;
LABEL_11:
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_50;
  }
  v8 = -1073741811;
LABEL_50:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_12:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, v30);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v8;
}
