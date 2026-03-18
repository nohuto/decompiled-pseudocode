/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x1405ED510
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140570C40 (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  unsigned int *v4; // r14
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  int SystemFirmwareTableInformation; // ecx
  int v8; // edi
  unsigned int v10; // edi
  unsigned int *PoolWithTag; // rax
  struct _KTHREAD *v12; // rax
  SIZE_T v13; // r15
  _QWORD *v14; // rbx
  unsigned __int16 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rdi
  unsigned int Length; // [rsp+28h] [rbp-A0h]
  unsigned int NumberOfBytes; // [rsp+38h] [rbp-90h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+3Ch] [rbp-8Ch]
  volatile void *Address; // [rsp+40h] [rbp-88h]
  volatile void *v24; // [rsp+48h] [rbp-80h]
  PVOID BaseAddress; // [rsp+50h] [rbp-78h]
  SIZE_T v26; // [rsp+58h] [rbp-70h]
  unsigned int Src[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v28; // [rsp+80h] [rbp-48h]

  v4 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  v26 = 0LL;
  if ( a2 < 0x20 )
  {
    v8 = -1073741811;
    goto LABEL_11;
  }
  NumberOfBytes_4 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v24 = *(volatile void **)(a1 + 16);
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
    v28 = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Src, 0, 0x14u, &NumberOfBytes);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v8 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v8 = -1073741701;
      goto LABEL_11;
    }
    v10 = NumberOfBytes;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54425057u);
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
    v8 = ExpGetSystemFirmwareTableInformation(PoolWithTag, 0, v10, &NumberOfBytes);
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
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
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
  v13 = NumberOfBytes_4;
  if ( (NumberOfBytes_4 & 1) == 0 )
  {
    v14 = ExpPlatformBinaryTableInformation;
    if ( *((_BYTE *)ExpPlatformBinaryTableInformation + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryTableInformation + 65) != 1
      || (v15 = *((_WORD *)ExpPlatformBinaryTableInformation + 33), (v15 & 1) != 0)
      || (v16 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryTableInformation + 10) != 1 )
    {
      v8 = -1073741701;
      goto LABEL_50;
    }
    v17 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    if ( (unsigned int)v17 > Length || v15 > NumberOfBytes_4 )
    {
      v8 = -1073741789;
      *(_DWORD *)(a1 + 24) = v17;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v14 + 33);
      goto LABEL_50;
    }
    v26 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    v18 = (void *)MmMapIoSpaceEx(v16, v17, 2u);
    BaseAddress = v18;
    if ( !v18 )
    {
      v8 = -1073741670;
      goto LABEL_50;
    }
    *(_QWORD *)a1 = v14[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v18, *((unsigned int *)v14 + 13));
    if ( *((_WORD *)v14 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v24, v13, 2u);
      memmove((void *)v24, (char *)v14 + 68, *((unsigned __int16 *)v14 + 33));
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
    MmUnmapIoSpace(BaseAddress, v26);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v8;
}
