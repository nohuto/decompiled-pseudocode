/*
 * XREFs of HmgCreate @ 0x1C0075A30
 * Callers:
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0032F44 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     GreCreateSemaphoreInternal @ 0x1C0054A38 (GreCreateSemaphoreInternal.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C006820C (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0075DC0 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     ?InitializeReferenceTracker@@YA_NXZ @ 0x1C0075E8C (-InitializeReferenceTracker@@YA_NXZ.c)
 *     ?HmgrStacksInit@@YAXXZ @ 0x1C0075EFC (-HmgrStacksInit@@YAXXZ.c)
 *     ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C00760F0 (-Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z.c)
 *     Win32CreateSection @ 0x1C0076290 (Win32CreateSection.c)
 *     GreCreateFastMutex @ 0x1C00762E4 (GreCreateFastMutex.c)
 *     bLoadProcessHandleQuota @ 0x1C007631C (bLoadProcessHandleQuota.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 HmgCreate()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  unsigned int v2; // r8d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rsi
  struct _ENTRY *v15; // rdx
  unsigned int v16; // ecx
  GdiHandleManager *v17; // rcx
  int v18; // edi
  GdiHandleManager *v19; // rax
  union _LARGE_INTEGER *v20; // rax
  void **v21; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+28h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+40h] BYREF

  gMaxGdiHandleCount = GetMaxGdiHandleCount();
  v0 = 0;
  if ( !(unsigned int)bLoadProcessHandleQuota() )
    gProcessHandleQuota = 10000;
  v1 = 0x10000LL;
  if ( gMaxGdiHandleCount < 0x10000 )
    v1 = gMaxGdiHandleCount;
  GetgvsStateWrap();
  ghsemHmgr = (PERESOURCE)GreCreateSemaphoreInternal();
  if ( !ghsemHmgr )
    return 0LL;
  memset(&laSize, 0, 0x7CuLL);
  if ( !(unsigned int)HmgInitializeLookAsideList(1u, 0xA00u, v2, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(4u, 0xD8u, v3, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(5u, (int)SURFACE::tSize + 256, v4, 0x28u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(8u, 0xD0u, v5, 0xCu) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0x10u, 0xC0u, v6, 0x60u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xAu, 0x278u, v7, 0x40u) )
    return 0LL;
  if ( !(unsigned int)HmgInitializeLookAsideList(0xBu, 0x398u, v8, 0x37u) )
    return 0LL;
  ghfmMemory = (PKGUARDED_MUTEX)GreCreateFastMutex();
  if ( !ghfmMemory )
    return 0LL;
  v29 = 1573392LL;
  if ( (int)Win32CreateSection((unsigned int)&gpHmgrSharedHandleSection, 6, v9, (unsigned int)&v29) < 0 )
    return 0LL;
  ViewSize = 0LL;
  if ( MmMapViewInSessionSpace(gpHmgrSharedHandleSection, &gpGdiSharedMemory, &ViewSize) < 0 )
    return 0LL;
  v24 = 0LL;
  v25[0] = 0LL;
  v26 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
  if ( (int)MmMapViewOfSection(
              gpHmgrSharedHandleSection,
              CurrentProcess,
              &v26,
              0LL,
              4096LL,
              v25,
              &v24,
              2,
              0x400000,
              4,
              ViewSize) < 0 )
    return 0LL;
  RegionSize = 24 * v1;
  BaseAddress = (PVOID)v26;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  BaseAddress = (PVOID)(v26 + 1572864);
  RegionSize = 528LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  gpentHmgr = (struct _ENTRY *)gpGdiSharedMemory;
  gpGdiDevCaps = (struct _DEVCAPS *)((char *)gpGdiSharedMemory + 1572864);
  gpHandleManager = GdiHandleManager::Create(v16, v15, v1);
  if ( !gpHandleManager )
    return 0LL;
  v18 = 0;
  while ( GdiHandleManager::AcquireEntryIndex(v17, (unsigned int *)&v26) )
  {
    if ( (unsigned int)++v18 >= 0xA )
    {
      v19 = gpHandleManager;
      goto LABEL_24;
    }
  }
  GdiHandleManager::Destroy(v17);
  v19 = 0LL;
  gpHandleManager = 0LL;
LABEL_24:
  if ( !v19 )
    return 0LL;
  gahStockObjects = (void **)((char *)gpGdiSharedMemory + 1573032);
  gahStockObjects96 = (void **)((char *)gpGdiSharedMemory + 1573208);
  HmgrStacksInit();
  v20 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged(8LL, 0x6C6D6847u);
  gpLockShortDelay = v20;
  if ( !v20 )
    return 0LL;
  v20->LowPart = -100000;
  gpLockShortDelay->HighPart = -1;
  gpTmpGlobal = PALLOCMEM2(0x1000uLL, 1836345415LL, 0);
  v21 = (void **)Win32AllocPoolNonPaged(8LL, 0x6D746847u);
  gpTmpGlobalFree = v21;
  if ( !gpTmpGlobal || !v21 )
    return 0LL;
  *v21 = gpTmpGlobal;
  LOBYTE(v0) = InitializeReferenceTracker();
  return v0;
}
