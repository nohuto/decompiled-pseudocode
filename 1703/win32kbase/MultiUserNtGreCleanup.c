/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C0067BC4
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C002A0F4 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00331B0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C005845C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     Win32FreePagedLookasideList @ 0x1C0068030 (Win32FreePagedLookasideList.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C006820C (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C00687B0 (DrvNotifySessionStateChange.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0068804 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0068A88 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0068AD4 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C00FDDB8 (--1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  __int64 v2; // rdx
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rbx
  __int64 *MAPPER_SignatureTable; // rbx
  __int64 v11; // rax
  struct _ENTRY *v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // rbx
  void *v20; // rcx
  __int64 *v21; // rbx
  __int64 *v22; // rbx
  struct tagREMOTE_CONTEXT *v23; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v24; // rbx
  __int64 v25; // rsi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v26; // rdi
  struct tagStackTraceEntry **v27; // rcx
  struct GdiHandleManager *v28; // rcx
  void * near **v29; // rbx
  __int64 v30; // rdi
  unsigned int v32; // edx
  unsigned int i; // ebx
  unsigned int v34; // edx
  unsigned int j; // ebx
  struct _ENTRY *v36; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v2 = 0LL;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  v4 = 0;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      LODWORD(v2) = GdiHandleManager::GetNextEntryIndex(v1, v2, &v36);
      if ( !(_DWORD)v2 )
        break;
      v1 = v36;
      if ( (unsigned __int8)(*((_BYTE *)v36 + 14) - 1) <= 0x1Du )
      {
        *((_DWORD *)v36 + 2) = v3 ^ (*((_DWORD *)v36 + 2) ^ v3) & 1;
        ++v4;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, 0LL, v6);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v4;
  }
  if ( (int)IsGdiMultiUserFontCleanupSupported(v1, v2) >= 0 )
    GdiMultiUserFontCleanup();
  if ( gpHandleManager )
    NtGdiCloseProcess(v3, 2LL);
  if ( (int)IsGetgpfsTableSupported() >= 0 )
  {
    v8 = (__int64 *)GetgpfsTable();
    if ( *v8 )
    {
      Win32FreePool(*v8);
      *v8 = 0LL;
    }
  }
  if ( (int)IsGetgpfmffTableSupported() >= 0 )
  {
    v9 = (__int64 *)GetgpfmffTable();
    if ( *v9 )
    {
      Win32FreePool(*v9);
      *v9 = 0LL;
    }
  }
  if ( (int)IsGetMAPPER_SignatureTableSupported() >= 0 )
  {
    MAPPER_SignatureTable = (__int64 *)GetMAPPER_SignatureTable();
    if ( *MAPPER_SignatureTable )
    {
      Win32FreePool(*MAPPER_SignatureTable);
      *MAPPER_SignatureTable = 0LL;
    }
  }
  if ( (int)IsGetgpwszFamilyDefaultFontsSupported() >= 0 )
  {
    v11 = GetgpwszFamilyDefaultFonts(&v36);
    v12 = v36;
    v13 = 0LL;
    v14 = v11;
    if ( v36 )
    {
      do
      {
        v15 = *(_QWORD *)(v14 + 8 * v13);
        if ( v15 )
        {
          Win32FreePool(v15);
          *(_QWORD *)(v14 + 8 * v13) = 0LL;
          v12 = v36;
        }
        ++v13;
      }
      while ( v13 < (unsigned __int64)v12 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool(LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( (int)IsMultiUserGreDeleteScriptsSupported() >= 0 )
    MultiUserGreDeleteScripts();
  v16 = (__int64 *)&unk_1C018E6A8;
  v17 = 8LL;
  do
  {
    v18 = *v16;
    if ( *v16 )
    {
      PopThreadGuardedObject((_QWORD *)(v18 - 32));
      Win32FreePool(v18 - 32);
    }
    v16 += 4;
    --v17;
  }
  while ( v17 );
  if ( gpCachedEngbrush )
    Win32FreePool((__int64)gpCachedEngbrush);
  if ( gpCachedDbrush )
    Win32FreePool((__int64)gpCachedDbrush);
  if ( gpRGBXlate )
  {
    Win32FreePool((__int64)gpRGBXlate);
    gpRGBXlate = 0LL;
  }
  if ( (int)IsGetgpDefITableSupported() >= 0 )
  {
    v19 = (__int64 *)GetgpDefITable();
    if ( *v19 )
    {
      Win32FreePool(*v19);
      *v19 = 0LL;
    }
  }
  v20 = (void *)*((_QWORD *)gpSfmState + 3);
  if ( v20 )
    ZwClose(v20);
  if ( g_pTokenManager )
  {
    CTokenManager::`scalar deleting destructor'(g_pTokenManager);
    g_pTokenManager = 0LL;
  }
  if ( (int)IsGetgpRedirDevSupported() >= 0 )
  {
    v21 = (__int64 *)GetgpRedirDev();
    if ( *v21 )
    {
      Win32FreePool(*v21);
      *v21 = 0LL;
    }
  }
  if ( (int)IsGetgpBmpDevSupported() >= 0 )
  {
    v22 = (__int64 *)GetgpBmpDev();
    if ( *v22 )
    {
      Win32FreePool(*v22);
      *v22 = 0LL;
    }
  }
  MultiUserGreCleanupDrivers();
  DrvCleanupGraphicsDeviceList(gpLocalGraphicsDeviceList);
  gpLocalGraphicsDeviceList = 0LL;
  DrvCleanupGraphicsDeviceList(gpRemoteGraphicsDeviceList);
  gpRemoteGraphicsDeviceList = 0LL;
  gpGraphicsDeviceList = 0LL;
  if ( qword_1C018C328 )
  {
    Win32FreePool((__int64)qword_1C018C328);
    qword_1C018C328 = 0LL;
  }
  v23 = qword_1C018C338;
  if ( qword_1C018C338 )
  {
    Win32FreePool((__int64)qword_1C018C338);
    qword_1C018C338 = 0LL;
  }
  GreCleanupRemoteAdapterContext(v23);
  DrvNotifySessionStateChange(1LL);
  if ( gpLockShortDelay )
  {
    Win32FreePool((__int64)gpLockShortDelay);
    gpLockShortDelay = 0LL;
  }
  if ( gpTmpGlobal )
  {
    Win32FreePool((__int64)gpTmpGlobal);
    gpTmpGlobal = 0LL;
  }
  if ( gpTmpGlobalFree )
  {
    Win32FreePool((__int64)gpTmpGlobalFree);
    gpTmpGlobalFree = 0LL;
  }
  if ( gpReferenceTracker )
  {
    v24 = &qword_1C0189408;
    v25 = 3LL;
    do
    {
      v26 = *v24;
      if ( *v24 )
      {
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(*v24);
        ExFreePoolWithTag(v26, 0);
      }
      v24 += 2;
      --v25;
    }
    while ( v25 );
    ExFreePoolWithTag(gpReferenceTracker, 0);
  }
  if ( gpAdapterLuids )
  {
    Win32FreePool((__int64)gpAdapterLuids);
    gpAdapterLuids = 0LL;
  }
  if ( gpDevicesPerLuid )
  {
    Win32FreePool((__int64)gpDevicesPerLuid);
    gpDevicesPerLuid = 0LL;
  }
  if ( (int)IsMultiUserCleanupPathAllocSupported() >= 0 )
    MultiUserCleanupPathAlloc();
  MultiUserGreCleanupEngResources();
  if ( ghfmMemory )
    Win32FreePool((__int64)ghfmMemory);
  v27 = gpentHmgrStacks;
  ghfmMemory = 0LL;
  if ( gpentHmgrStacks )
  {
    v32 = gMaxGdiHandleCount;
    for ( i = 0; i < v32; ++i )
    {
      if ( v27[i] )
      {
        Win32FreePool((__int64)v27[i]);
        v27 = gpentHmgrStacks;
        v32 = gMaxGdiHandleCount;
      }
    }
    Win32FreePool((__int64)v27);
  }
  v28 = gpentHmgrAltStacks;
  if ( gpentHmgrAltStacks )
  {
    v34 = gMaxGdiHandleCount;
    for ( j = 0; j < v34; ++j )
    {
      if ( *((_QWORD *)v28 + j) )
      {
        Win32FreePool(*((_QWORD *)v28 + j));
        v34 = gMaxGdiHandleCount;
        v28 = gpentHmgrAltStacks;
      }
    }
    Win32FreePool((__int64)v28);
  }
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v28);
    gpHandleManager = 0LL;
  }
  if ( gpGdiSharedMemory )
  {
    MmUnmapViewInSessionSpace(gpGdiSharedMemory);
    gpGdiSharedMemory = 0LL;
  }
  if ( gpHmgrSharedHandleSection )
  {
    ObfDereferenceObject(gpHmgrSharedHandleSection);
    gpHmgrSharedHandleSection = 0LL;
  }
  v29 = &pHmgLookAsideList;
  v30 = 31LL;
  do
  {
    if ( *v29 )
    {
      Win32FreePagedLookasideList();
      *v29 = 0LL;
    }
    ++v29;
    --v30;
  }
  while ( v30 );
  if ( (int)IsvNetworkedFontFileCleanupSupported() >= 0 )
    vNetworkedFontFileCleanup();
  if ( (int)IsvTrustedFontFileTableCleanupSupported() >= 0 )
    vTrustedFontFileTableCleanup();
  return 1LL;
}
