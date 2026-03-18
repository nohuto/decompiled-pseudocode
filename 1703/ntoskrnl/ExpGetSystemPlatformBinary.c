/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x1405D2774
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14055C888 (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  _QWORD *v3; // rdi
  unsigned int *v4; // r15
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v7; // r14
  int SystemFirmwareTableInformation; // ecx
  int v9; // edi
  unsigned int v11; // edi
  unsigned int *PoolWithTag; // rax
  struct _KTHREAD *v13; // rax
  SIZE_T v14; // r12
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rbx
  __int64 v19; // rcx
  unsigned int Length; // [rsp+28h] [rbp-A0h]
  unsigned int NumberOfBytes; // [rsp+38h] [rbp-90h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+3Ch] [rbp-8Ch]
  __int64 v24; // [rsp+40h] [rbp-88h]
  volatile void *Address; // [rsp+48h] [rbp-80h]
  volatile void *v26; // [rsp+50h] [rbp-78h]
  PVOID BaseAddress; // [rsp+58h] [rbp-70h]
  SIZE_T v28; // [rsp+60h] [rbp-68h]
  unsigned int Src[2]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v30; // [rsp+88h] [rbp-40h]

  v3 = (_QWORD *)a1;
  v24 = a1;
  v4 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  v28 = 0LL;
  if ( a2 < 0x20 )
  {
    v9 = -1073741811;
    goto LABEL_11;
  }
  NumberOfBytes_4 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v26 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v5 = 1;
  v7 = (unsigned int *)ExpPlatformBinaryTableInformation;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v9 = -1073741637;
    goto LABEL_11;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v5 = 0;
    if ( Length || NumberOfBytes_4 )
    {
      v9 = -1073741811;
      goto LABEL_11;
    }
    Src[0] = 1094930505;
    Src[1] = 1;
    v30 = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Src, 0, 0x14u, &NumberOfBytes);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v9 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v9 = -1073741701;
      goto LABEL_11;
    }
    v11 = NumberOfBytes;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x54425057u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_11;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v11 - 16;
    v9 = ExpGetSystemFirmwareTableInformation(PoolWithTag, 0, v11, &NumberOfBytes);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v9 = -1073741637;
        goto LABEL_11;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v4;
      v4 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
    v7 = (unsigned int *)ExpPlatformBinaryTableInformation;
    v3 = (_QWORD *)v24;
  }
  v14 = NumberOfBytes_4;
  if ( (NumberOfBytes_4 & 1) == 0 )
  {
    if ( *((_BYTE *)v7 + 64) != 1
      || *((_BYTE *)v7 + 65) != 1
      || (v15 = *((_WORD *)v7 + 33), (v15 & 1) != 0)
      || (v16 = *((_QWORD *)v7 + 7)) == 0
      || v7[10] != 1 )
    {
      v9 = -1073741701;
      goto LABEL_50;
    }
    v17 = v7[13];
    if ( (unsigned int)v17 > Length || v15 > NumberOfBytes_4 )
    {
      v9 = -1073741789;
      v19 = v24;
      *(_DWORD *)(v24 + 24) = v17;
      *(_DWORD *)(v19 + 28) = *((unsigned __int16 *)v7 + 33);
      goto LABEL_50;
    }
    v28 = v7[13];
    v18 = (void *)MmMapIoSpaceEx(v16, v17, 2u);
    BaseAddress = v18;
    if ( !v18 )
    {
      v9 = -1073741670;
      goto LABEL_50;
    }
    *v3 = *((_QWORD *)v7 + 7);
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v18, v7[13]);
    if ( *((_WORD *)v7 + 33) )
    {
      if ( a3 )
        ProbeForWrite(v26, v14, 2u);
      memmove((void *)v26, v7 + 17, *((unsigned __int16 *)v7 + 33));
    }
    v9 = 0;
    v5 = 1;
LABEL_11:
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_50;
  }
  v9 = -1073741811;
LABEL_50:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_12:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, v28);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v9;
}
