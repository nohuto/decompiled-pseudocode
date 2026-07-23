/*
 * XREFs of EtwInitializeSiloState @ 0x1405C7308
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140005C00 (ExFreeCacheAwareRundownProtection.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140088870 (KeQueryMaximumProcessorCountEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140422A10 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpInitializeAutoLoggers @ 0x1405B059C (EtwpInitializeAutoLoggers.c)
 */

__int64 __fastcall EtwInitializeSiloState(__int64 a1)
{
  unsigned int v2; // esi
  char *PoolWithTag; // rax
  char *v4; // rdi
  SIZE_T v5; // rbx
  PVOID v6; // rax
  _WORD *v7; // r15
  _QWORD *v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebp
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char *v16; // r8
  unsigned int i; // r9d
  PEX_RUNDOWN_REF_CACHE_AWARE *v19; // rbx
  __int64 v20; // rsi
  void *v21; // rcx

  v2 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x13F8uLL, 0x61777445u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x13F8uLL);
    *(_QWORD *)v4 = PsGetServerSiloGlobals(a1);
    v5 = (unsigned __int64)KeQueryMaximumProcessorCountEx(0xFFFFu) << 10;
    v6 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v5, 0x61777445u);
    *((_QWORD *)v4 + 638) = v6;
    if ( v6 )
    {
      memset(v6, 0, v5);
      v7 = v4 + 5016;
      *((_WORD *)v4 + 2508) = 3;
      v8 = v4 + 1432;
      v9 = 64LL;
      do
      {
        v8[6] = 0LL;
        v10 = v8;
        v11 = 3LL;
        do
        {
          v10[1] = v10;
          *v10 = v10;
          v10 += 2;
          --v11;
        }
        while ( v11 );
        v8 += 7;
        --v9;
      }
      while ( v9 );
      v12 = 0;
      while ( 1 )
      {
        *(_QWORD *)&v4[8 * v12 + 920] = 1LL;
        CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
        *(_QWORD *)&v4[8 * v12 + 408] = CacheAwareRundownProtection;
        if ( !CacheAwareRundownProtection )
          break;
        if ( ++v12 >= 0x40 )
        {
          *((_QWORD *)v4 + 48) = v4;
          *((_QWORD *)v4 + 49) = 0LL;
          *((GUID *)v4 + 2) = SecurityProviderGuid;
          *((_QWORD *)PsGetServerSiloGlobals(a1) + 108) = v4;
          if ( PsIsHostSilo(a1) )
          {
            EtwpHostSiloState = (__int64)v4;
            qword_14033FB20 = (__int64)(v4 + 920);
          }
          v14 = PsAttachSiloToCurrentThread(a1);
          EtwpInitializeAutoLoggers();
          PsDetachSiloFromCurrentThread(v14);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 392), 0LL);
          v16 = v4 + 124;
          *((_QWORD *)v4 + 50) = KeGetCurrentThread();
          for ( i = 0; i < 8; ++i )
          {
            if ( *v7 )
            {
              *((_WORD *)v16 + 1) = *v7;
              *((_DWORD *)v16 - 1) = 1;
              *v16 = -1;
              *(_QWORD *)(v16 + 12) = -1LL;
              *(_QWORD *)(v16 + 20) = 0LL;
              *((_DWORD *)v16 + 1) = 64;
              v4[5032] |= 1 << i;
            }
            ++v7;
            v16 += 32;
          }
          *((_QWORD *)v4 + 50) = 0LL;
          ExReleasePushLockEx((ULONG_PTR)(v4 + 392), 0LL);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          *((_QWORD *)v4 + 633) = 0LL;
          *((_QWORD *)v4 + 631) = 0LL;
          *((_QWORD *)v4 + 632) = 0LL;
          return v2;
        }
      }
      if ( v12 )
      {
        v19 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 408);
        v20 = v12;
        do
        {
          ExFreeCacheAwareRundownProtection(*v19++);
          --v20;
        }
        while ( v20 );
      }
    }
    v21 = (void *)*((_QWORD *)v4 + 638);
    v2 = -1073741801;
    if ( v21 )
      ExFreePoolWithTag(v21, 0x61777445u);
    ExFreePoolWithTag(v4, 0x61777445u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
