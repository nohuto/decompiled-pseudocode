/*
 * XREFs of MultiUserNtGreCleanup @ 0x1C0074DF0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0036614 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C004E4E0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006DB88 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     FreeThreadBufferWithTag @ 0x1C0070280 (FreeThreadBufferWithTag.c)
 *     Win32FreePagedLookasideList @ 0x1C0075AA0 (Win32FreePagedLookasideList.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C008FC7C (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 *     DrvNotifySessionStateChange @ 0x1C0095B00 (DrvNotifySessionStateChange.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0097ECC (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00980AC (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C009A304 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?Destroy@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C009BDB8 (-Destroy@-$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     GreDeleteFastMutex @ 0x1C009C210 (GreDeleteFastMutex.c)
 *     ?Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z @ 0x1C00FE3C8 (-Destroy@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAXPEAV123@@Z.c)
 */

__int64 MultiUserNtGreCleanup()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int i; // edx
  unsigned int NextEntryIndex; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbx
  __int64 *MAPPER_SignatureTable; // rbx
  __int64 v12; // rax
  struct _ENTRY *v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 *v19; // rbx
  void *v20; // rcx
  __int64 *v21; // rbx
  __int64 *v22; // rbx
  struct tagREMOTE_CONTEXT *v23; // rcx
  PVOID *v24; // rbx
  __int64 v25; // rdi
  struct GdiHandleManager *v26; // rcx
  unsigned int j; // ebx
  struct tagStackTraceEntry *v28; // rcx
  unsigned int k; // ebx
  struct tagAltStackTraceEntry *v30; // rcx
  void * near **v31; // rbx
  __int64 v32; // rdi
  struct _ENTRY *v34; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  gbGreSessionCleanup = 1;
  v2 = 0;
  v3 = CurrentProcessId & 0xFFFFFFFC;
  if ( gpHandleManager )
  {
    for ( i = 0; ; i = NextEntryIndex )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, i, &v34);
      if ( !NextEntryIndex )
        break;
      LOBYTE(v1) = *((_BYTE *)v34 + 14) - 1;
      if ( (unsigned __int8)v1 <= 0x1Du )
      {
        v1 = (GdiHandleManager *)(v3 | *((_DWORD *)v34 + 2) & 1);
        *((_DWORD *)v34 + 2) = (_DWORD)v1;
        ++v2;
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1, v6, v7);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) = v2;
  }
  if ( (int)IsGdiMultiUserFontCleanupSupported() >= 0 )
    GdiMultiUserFontCleanup();
  if ( gpHandleManager )
    NtGdiCloseProcess(v3, 2LL);
  if ( (int)IsGetgpfsTableSupported() >= 0 )
  {
    v9 = (__int64 *)GetgpfsTable();
    if ( *v9 )
    {
      Win32FreePool(*v9);
      *v9 = 0LL;
    }
  }
  if ( (int)IsGetgpfmffTableSupported() >= 0 )
  {
    v10 = (__int64 *)GetgpfmffTable();
    if ( *v10 )
    {
      Win32FreePool(*v10);
      *v10 = 0LL;
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
    v12 = GetgpwszFamilyDefaultFonts(&v34);
    v13 = v34;
    v14 = 0LL;
    v15 = v12;
    if ( v34 )
    {
      do
      {
        v16 = *(_QWORD *)(v15 + 8 * v14);
        if ( v16 )
        {
          Win32FreePool(v16);
          *(_QWORD *)(v15 + 8 * v14) = 0LL;
          v13 = v34;
        }
        ++v14;
      }
      while ( v14 < (unsigned __int64)v13 );
    }
  }
  if ( LastNlsTableBuffer )
  {
    Win32FreePool(LastNlsTableBuffer);
    LastNlsTableBuffer = 0LL;
  }
  if ( (int)IsMultiUserGreDeleteScriptsSupported() >= 0 )
    MultiUserGreDeleteScripts();
  v17 = (__int64 *)&unk_1C0193568;
  v18 = 8LL;
  do
  {
    if ( *v17 )
      FreeThreadBufferWithTag(*v17);
    v17 += 4;
    --v18;
  }
  while ( v18 );
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
  if ( qword_1C0191058 )
  {
    Win32FreePool((__int64)qword_1C0191058);
    qword_1C0191058 = 0LL;
  }
  v23 = (struct tagREMOTE_CONTEXT *)qword_1C0191068;
  if ( qword_1C0191068 )
  {
    Win32FreePool(qword_1C0191068);
    qword_1C0191068 = 0LL;
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
    v24 = (PVOID *)&qword_1C018DF68;
    v25 = 3LL;
    do
    {
      if ( *v24 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::Destroy(*v24);
      v24 += 2;
      --v25;
    }
    while ( v25 );
    ExFreePoolWithTag(gpReferenceTracker, 0);
  }
  if ( g_pIsolatedSurfaceLookaside )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)g_pIsolatedSurfaceLookaside);
    ExFreePoolWithTag(g_pIsolatedSurfaceLookaside, 0x35306847u);
    g_pIsolatedSurfaceLookaside = 0LL;
  }
  if ( gpTypeIsolation )
  {
    if ( *gpTypeIsolation )
      NSInstrumentation::CTypeIsolation<163840,640>::Destroy(*gpTypeIsolation);
    Win32FreePool((__int64)gpTypeIsolation);
    gpTypeIsolation = 0LL;
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
  GreDeleteFastMutex(ghfmMemory);
  ghfmMemory = 0LL;
  if ( gpentHmgrStacks )
  {
    for ( j = 0; j < gMaxGdiHandleCount; ++j )
    {
      v28 = gpentHmgrStacks[j];
      if ( v28 )
        Win32FreePool((__int64)v28);
    }
    Win32FreePool((__int64)gpentHmgrStacks);
  }
  if ( gpentHmgrAltStacks )
  {
    for ( k = 0; k < gMaxGdiHandleCount; ++k )
    {
      v30 = gpentHmgrAltStacks[k];
      if ( v30 )
        Win32FreePool((__int64)v30);
    }
    Win32FreePool((__int64)gpentHmgrAltStacks);
  }
  if ( gpHandleManager )
  {
    GdiHandleManager::Destroy(v26);
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
  v31 = &pHmgLookAsideList;
  v32 = 31LL;
  do
  {
    if ( *v31 )
    {
      Win32FreePagedLookasideList();
      *v31 = 0LL;
    }
    ++v31;
    --v32;
  }
  while ( v32 );
  if ( (int)IsvNetworkedFontFileCleanupSupported() >= 0 )
    vNetworkedFontFileCleanup();
  if ( (int)IsvTrustedFontFileTableCleanupSupported() >= 0 )
    vTrustedFontFileTableCleanup();
  return 1LL;
}
