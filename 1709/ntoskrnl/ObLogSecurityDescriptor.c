/*
 * XREFs of ObLogSecurityDescriptor @ 0x1404BFD80
 * Callers:
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140450E0C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140483E68 (ObAssignObjectSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404845B0 (ObSetSecurityDescriptorInfo.c)
 *     EtwpAllocGuidEntry @ 0x140489654 (EtwpAllocGuidEntry.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     SeDefaultObjectMethod @ 0x1404BFB40 (SeDefaultObjectMethod.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14058E694 (IopSetDeviceSecurityDescriptor.c)
 *     ObpInitObjectTypeSD @ 0x1405C7398 (ObpInitObjectTypeSD.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C0030 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Buf1, _QWORD *a2, unsigned int a3)
{
  ULONG v4; // esi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  char *v7; // r9
  char *v8; // r11
  unsigned __int64 v9; // r8
  char *v10; // rdx
  unsigned __int64 v11; // r10
  char *v12; // rcx
  unsigned __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *PoolWithTag; // r15
  volatile signed __int64 *v16; // rbp
  _QWORD *v17; // r14
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  ULONG v23; // [rsp+80h] [rbp+8h]
  size_t Size; // [rsp+98h] [rbp+20h]

  v4 = RtlLengthSecurityDescriptor(Buf1);
  v5 = 0LL;
  v6 = v4 & 0xFFFFFFF8;
  v23 = v4;
  Size = v4;
  v7 = Buf1;
  v8 = &Buf1[v4];
  v9 = 0LL;
  v10 = &Buf1[v6];
  v11 = v6 >> 3;
  if ( Buf1 > v10 )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      ++v9;
      v5 = __ROL8__(*(_QWORD *)v7 ^ v5, 3);
      v7 += 8;
    }
    while ( v9 < v11 );
  }
  v12 = v7;
  v13 = v8 - v7;
  if ( v7 > v8 )
    v13 = 0LL;
  if ( v13 )
  {
    do
    {
      v21 = (unsigned __int8)*v12++;
      v5 = __ROL8__(v21 ^ v5, 3);
    }
    while ( v12 - v7 < v13 );
  }
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v16 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
  ExAcquirePushLockSharedEx((ULONG_PTR)v16, 0LL);
  v17 = v16 + 1;
  while ( 1 )
  {
    v18 = (_QWORD *)*v17;
    if ( (_QWORD *)*v17 != v17 )
      break;
LABEL_14:
    if ( PoolWithTag )
    {
      v22 = (_QWORD *)v18[1];
      if ( (_QWORD *)*v22 != v18 )
        __fastfail(3u);
      PoolWithTag[1] = v22;
      *PoolWithTag = v18;
      *v22 = PoolWithTag;
      v18[1] = PoolWithTag;
      if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101));
      KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = PoolWithTag + 4;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101));
    KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v4 + 40 < v4 )
      return 3221225626LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 32, 0x6353624Fu);
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a3;
    PoolWithTag[3] = v5;
    memmove(PoolWithTag + 4, Buf1, v4);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101), 0LL);
  }
  while ( 1 )
  {
    v19 = v18[3];
    if ( v19 != v5 )
    {
      if ( v19 > v5 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( v23 == RtlLengthSecurityDescriptor(v18 + 4) && !memcmp(Buf1, v18 + 4, Size) )
      break;
LABEL_12:
    v18 = (_QWORD *)*v18;
    if ( v18 == v17 )
    {
LABEL_13:
      v4 = v23;
      goto LABEL_14;
    }
  }
  if ( _InterlockedExchangeAdd64(v18 + 2, a3) <= 0 )
    __fastfail(0xEu);
  ExReleasePushLockEx((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101), 0LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *a2 = v18 + 4;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
