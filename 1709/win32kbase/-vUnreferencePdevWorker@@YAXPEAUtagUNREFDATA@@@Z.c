/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C006B870
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001D5F0 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C001DE60 (PopThreadGuardedObject.c)
 *     bDeleteSurface @ 0x1C001F690 (bDeleteSurface.c)
 *     GreDeleteSemaphore @ 0x1C0024AA0 (GreDeleteSemaphore.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C003CD30 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C003D120 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C003F6B0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C006BBA8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C006BBCC (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     ldevUnloadImage @ 0x1C006DD30 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall vUnreferencePdevWorker(struct tagUNREFDATA *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  unsigned int v4; // r14d
  int v5; // r15d
  int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  int v17; // edx
  struct _ERESOURCE *v18; // rcx
  int v19; // r8d
  __int64 v20; // rax
  struct OBJECT *v21; // rcx
  struct OBJECT *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 *Objt; // rax
  int v26; // ecx
  int v27; // r8d
  struct HOBJ__ **v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v33[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v34; // [rsp+90h] [rbp+40h] BYREF
  __int64 v35; // [rsp+98h] [rbp+48h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 2);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 32LL);
  *((_DWORD *)a1 + 3) = 0;
  v6 = v5 & 0x8000;
  v34 = v1;
  memset(v33, 0, sizeof(v33));
  PushThreadGuardedObject(v33, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v8 = *(_QWORD *)(v1 + 1536);
    if ( !v8 )
      break;
    v35 = *(_QWORD *)(v1 + 1536);
    v32 = *(_QWORD *)(v8 + 120);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported(v7) >= 0 )
      RFONTOBJ_vDeleteRFONTWrap(&v35, &v34, &v32, v2);
    v35 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
  }
  PopThreadGuardedObject(v33);
  if ( *(_DWORD *)(v1 + 2120) && (*(_DWORD *)(v34 + 32) & 0x40) != 0 )
  {
    v30 = 0LL;
    v35 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    if ( (int)IsGetgpPFTDeviceSupported() >= 0 )
      v36 = *(_QWORD *)GetgpPFTDeviceWrap();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported() >= 0 )
      v30 = DEVICE_PFTOBJ_pPFFGetWrap(&v36, v34, &v35);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v36, v30, v35, 0LL);
  }
  v9 = *(_QWORD *)(v1 + 1728);
  while ( v9 )
  {
    v31 = v9;
    *(_DWORD *)(v9 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported() >= 0 )
      vUnmapRemoteFonts(v9 + 128);
    v9 = *(_QWORD *)(v9 + 248);
    Win32FreePool(v31);
  }
  if ( (int)IsvCleanupOwnedRedirectionDeviceBitmapsSupported() >= 0 )
    vCleanupOwnedRedirectionDeviceBitmapsWrap(v1, v4);
  v10 = *(_QWORD *)(v1 + 1704);
  if ( v10 )
  {
    Win32FreePool(v10);
    *(_QWORD *)(v1 + 1704) = 0LL;
  }
  v11 = *(_QWORD *)(v1 + 1712);
  if ( v11 )
  {
    Win32FreePool(v11);
    *(_QWORD *)(v1 + 1712) = 0LL;
  }
  v12 = *(_QWORD *)(v1 + 1720);
  if ( v12 )
  {
    Win32FreePool(v12);
    *(_QWORD *)(v1 + 1720) = 0LL;
  }
  v13 = *(_QWORD *)(v1 + 2608);
  if ( v13 )
    Win32FreePool(v13);
  if ( (*(_DWORD *)(v34 + 32) & 0x80000) == 0 )
  {
    v14 = *(void **)(v1 + 1440);
    if ( v14 != gahStockObjects[13] )
      bDeleteFont(v14, 1LL);
    v15 = *(void **)(v1 + 1448);
    if ( v15 != gahStockObjects[13] )
      bDeleteFont(v15, 1LL);
    v16 = *(void **)(v1 + 1456);
    if ( v16 != gahStockObjects[16] )
      bDeleteFont(v16, 1LL);
    if ( (*(_DWORD *)(v1 + 32) & 1) != 0 )
    {
      v28 = (struct HOBJ__ **)(v1 + 1464);
      v29 = 6LL;
      do
      {
        bDeleteSurface(*v28++);
        --v29;
      }
      while ( v29 );
    }
  }
  PDEVOBJ::vDisableSurface(&v34, v4, 1);
  if ( *(_QWORD *)(v1 + 1520) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v34);
  if ( !v4 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v34);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v34 + 1552));
  v20 = v34;
  if ( (*(_DWORD *)(v34 + 32) & 0x80000) == 0 )
  {
    if ( v4 != 2 )
    {
      v21 = *(struct OBJECT **)(v1 + 1824);
      if ( v21 )
        HmgDecrementShareReferenceCountEx(v21, 0LL);
      v22 = *(struct OBJECT **)(v1 + 1832);
      if ( v22 )
        HmgDecrementShareReferenceCountEx(v22, 0LL);
      v35 = *(_QWORD *)(v1 + 1832);
      XEPALOBJ::bDeletePalette((XEPALOBJ *)&v35, 1LL, 0LL);
      v20 = v34;
    }
    if ( *(_QWORD *)(v20 + 2720) != *(_QWORD *)(v20 + 2704) && (!v6 || !v4) && v2 )
      (*(void (__fastcall **)(_QWORD))(v20 + 2720))(*(_QWORD *)(v1 + 1816));
    if ( v6 )
    {
      if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
        UMPD_ldevUnloadImageWrap(*(_QWORD *)(v1 + 1808));
    }
    else
    {
      ldevUnloadImage(*(_QWORD *)(v1 + 1808));
    }
  }
  if ( (*(_DWORD *)(v1 + 32) & 0x10000) == 0 )
  {
    v18 = *(struct _ERESOURCE **)(v1 + 40);
    if ( v18 )
      GreDeleteSemaphore(v18);
  }
  if ( (*(_DWORD *)(v1 + 32) & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 48));
  v23 = 0LL;
  GreAcquireHmgrSemaphore((int)v18, v17, v19);
  while ( 1 )
  {
    LOBYTE(v24) = 5;
    Objt = (__int64 *)HmgSafeNextObjt(v23, v24);
    if ( !Objt )
      break;
    v23 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v26, v24, v27);
  PDEV::Free((struct PDEV *)v1, v6);
}
