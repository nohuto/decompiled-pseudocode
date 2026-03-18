/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 *     GdiProcessCallout @ 0x1C007B5C0 (GdiProcessCallout.c)
 * Callees:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C001EB10 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C001F3A4 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     HmgNextOwned @ 0x1C004DEA0 (HmgNextOwned.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgSetLock @ 0x1C0061E84 (HmgSetLock.c)
 *     ?vCleanupBrushes@@YAXK@Z @ 0x1C0062D00 (-vCleanupBrushes@@YAXK@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00683A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vRemoveRefPalettes@@YAXK@Z @ 0x1C006EC4C (-vRemoveRefPalettes@@YAXK@Z.c)
 *     bDeletePalette @ 0x1C006ECD0 (bDeletePalette.c)
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0085738 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C008F8E8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0099CDC (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00AA480 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C00F0408 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     EngDeleteDriverObj @ 0x1C00FCED0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00FCFE0 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // r15d
  __int64 CurrentProcessWin32Process; // rax
  int v8; // esi
  int i; // ecx
  char v10; // al
  int Owned; // r14d
  __int64 v12[7]; // [rsp+20h] [rbp-38h] BYREF
  HDRVOBJ hdo; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = 1;
  if ( (_DWORD)a2 == 1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
    if ( CurrentProcessWin32Process
      && (*(_DWORD *)(CurrentProcessWin32Process + 292) & 1) == 0
      && !*(_DWORD *)(CurrentProcessWin32Process + 64) )
    {
      return 1LL;
    }
  }
  else if ( (_DWORD)a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    if ( (int)IsCleanupHLSURFSupported() >= 0 )
      CleanupHLSURF(2LL);
  }
  vCleanupDCs(v4, a2, a3);
  if ( v3 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  }
  else if ( v3 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0xAu);
  }
  if ( (int)IsvCleanupFontsSupported() >= 0 )
    vCleanupFonts(v4);
  if ( v3 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  }
  else if ( v3 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0x10u);
  }
  vCleanupBrushes(v4);
  DxLddmCleanupAtProcessDestroy(v4);
  if ( (int)IsvCleanupUMWindowlessSpriteSupported() >= 0 )
    vCleanupUMWindowlessSprite(v4);
  if ( v3 == 2 )
  {
    vReleaseCurrentpMapProcForSurfaces(2LL);
    SURFACE::pdibDefault = 0LL;
    ppalDefault = 0LL;
    ppalMono = 0LL;
    hpalMono = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(5u);
  }
  else if ( v3 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(5u);
  }
  vCleanupSurfaces(v4, v3);
  if ( gGarbageCollectionPendingCount )
    vGarbageCollectObjects();
  if ( v3 == 2 )
  {
    hrgnDefault = 0LL;
    prgnDefault = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(4u);
  }
  else if ( v3 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(4u);
  }
  vCleanupRegions(v4);
  if ( v3 == 2 )
  {
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(9u);
  }
  else if ( v3 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  vCleanupLCSPs(v4);
  if ( v3 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( (int)IsvCleanupMetaTypeSupported() >= 0 )
      vCleanupMetaType(v4);
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    if ( (int)IsGetgpniFontsDirectoryAndScratchSupported() >= 0 )
    {
      GetgpniFontsDirectoryAndScratch(&hdo, &v14, v12);
      if ( *(_QWORD *)hdo )
        Win32FreePool(*(_QWORD *)hdo);
      if ( *v14 )
        Win32FreePool(*v14);
      if ( v12[0] )
        Win32FreePool(v12[0]);
    }
    UmfdSessionUninitialize();
  }
  else if ( v3 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    if ( (int)IsvCleanupPrivateFontsSupported() >= 0 )
      vCleanupPrivateFonts();
  }
  vRemoveRefPalettes(v4);
  v8 = 0;
  hdo = 0LL;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, v4, (unsigned __int64 *)&hdo);
    if ( !Owned )
      break;
    v10 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( (int)IsGreDeleteClientObjSupported() >= 0 )
        GreDeleteClientObj(hdo);
    }
    else if ( v10 == 8 )
    {
      v5 = bDeletePalette((HPALETTE)hdo, 1u, v3);
      if ( !v5 && !v8 )
        v8 = 1;
    }
    else if ( v10 == 28 )
    {
      HmgSetLock((unsigned int)hdo);
      EngLockDriverObj(hdo);
      EngDeleteDriverObj(hdo, 1, 1);
    }
    else
    {
      if ( !v8 )
        v8 = 1;
      v5 = 0;
    }
  }
  return v5;
}
