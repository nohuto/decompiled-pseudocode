/*
 * XREFs of SeDefaultObjectMethod @ 0x14050E3A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        _QWORD *a1,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        PGENERIC_MAPPING a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  int v10; // edx
  int v11; // edx
  int v12; // esi
  unsigned int v13; // ecx
  __int64 v15; // rbx
  char v16; // di
  unsigned int v17; // edi
  _QWORD *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v22; // ecx
  volatile signed __int64 *v23; // rbp
  signed __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, a3, a4, (__int64)a6, a7, a8);
  v10 = a2 - 1;
  if ( !v10 )
    return ObQuerySecurityDescriptorInfo((__int64)a1, a3, a4, a5);
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    if ( a4 )
    {
      v12 = ObLogSecurityDescriptor(a4);
      if ( v12 >= 0 )
      {
        ExFreePoolWithTag(a4, 0);
        if ( v27 )
          *(a1 - 1) = v27 + 15;
        else
          *(a1 - 1) = 0LL;
      }
      return (unsigned int)v12;
    }
    else
    {
      v13 = 0;
      *(a1 - 1) = 0LL;
    }
    return v13;
  }
  else
  {
    v15 = *(_QWORD *)&a6->GenericRead;
    v16 = *(_QWORD *)&a6->GenericRead;
    *(_QWORD *)&a6->GenericRead = 0LL;
    v17 = (v16 & 0xF) + 1;
    v18 = (_QWORD *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw(v18 + 2);
    v19 = v18[2];
    while ( v19 - v17 > 0 )
    {
      v20 = v19;
      v19 = _InterlockedCompareExchange64(v18 + 2, v19 - v17, v19);
      if ( v20 == v19 )
        return 0LL;
    }
    if ( v19 != v17 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v22 = v18[3] % 0x101uLL;
    --CurrentThread->KernelApcDisable;
    v23 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * v22);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v23, 0LL);
    v24 = _InterlockedExchangeAdd64(v18 + 2, -v17) - v17;
    if ( v24 > 0 )
    {
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return 0LL;
    }
    if ( v24 )
      __fastfail(0xEu);
    v25 = *v18;
    v26 = (_QWORD *)v18[1];
    if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v26 != v18 )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag(v18, 0);
    return 0LL;
  }
}
