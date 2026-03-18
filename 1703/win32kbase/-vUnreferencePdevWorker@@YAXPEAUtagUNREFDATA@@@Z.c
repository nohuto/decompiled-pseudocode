/*
 * XREFs of ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x1C002ED00 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00386C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0038A90 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 *     bDeleteSurface @ 0x1C003F890 (bDeleteSurface.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreDeleteSemaphore @ 0x1C0054980 (GreDeleteSemaphore.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0058284 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0058420 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ldevUnloadImage @ 0x1C005F790 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
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
  void **v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  int v18; // edx
  struct _ERESOURCE *v19; // rcx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 *Objt; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v32[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+90h] [rbp+40h] BYREF
  __int64 v34; // [rsp+98h] [rbp+48h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_DWORD *)a1 + 3);
  v4 = *((_DWORD *)a1 + 2);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 32LL);
  *((_DWORD *)a1 + 3) = 0;
  v6 = v5 & 0x8000;
  v33 = v1;
  memset(v32, 0, sizeof(v32));
  PushThreadGuardedObject(v32, (__int64)a1, (__int64)vUnreferencePdevWorker);
  while ( 1 )
  {
    v8 = *(_QWORD *)(v1 + 1536);
    if ( !v8 )
      break;
    v34 = *(_QWORD *)(v1 + 1536);
    v31 = *(_QWORD *)(v8 + 120);
    if ( (int)IsRFONTOBJ_vDeleteRFONTSupported(v7) >= 0 )
      RFONTOBJ_vDeleteRFONTWrap(&v34, &v33, &v31, v2);
    v34 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34);
  }
  PopThreadGuardedObject(v32);
  if ( *(_DWORD *)(v1 + 2120) && (*(_DWORD *)(v33 + 32) & 0x40) != 0 )
  {
    v29 = 0LL;
    v34 = 0LL;
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    if ( (int)IsGetgpPFTDeviceSupported() >= 0 )
      v35 = *(_QWORD *)GetgpPFTDeviceWrap();
    if ( (int)IsDEVICE_PFTOBJ_pPFFGetSupported() >= 0 )
      v29 = DEVICE_PFTOBJ_pPFFGetWrap(&v35, v33, &v34);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap(&v35, v29, v34, 0LL);
  }
  v9 = *(_QWORD *)(v1 + 1728);
  while ( v9 )
  {
    v30 = v9;
    *(_DWORD *)(v9 + 228) = 1;
    if ( (int)IsvUnmapRemoteFontsSupported() >= 0 )
      vUnmapRemoteFonts(v9 + 128);
    v9 = *(_QWORD *)(v9 + 248);
    Win32FreePool(v30);
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
  if ( (*(_DWORD *)(v33 + 32) & 0x80000) == 0 )
  {
    v14 = gahStockObjects;
    v15 = *(void **)(v1 + 1440);
    if ( v15 != gahStockObjects[13] )
    {
      bDeleteFont(v15, 1LL);
      v14 = gahStockObjects;
    }
    v16 = *(void **)(v1 + 1448);
    if ( v16 != v14[13] )
    {
      bDeleteFont(v16, 1LL);
      v14 = gahStockObjects;
    }
    v17 = *(void **)(v1 + 1456);
    if ( v17 != v14[16] )
      bDeleteFont(v17, 1LL);
    if ( (*(_DWORD *)(v1 + 32) & 1) != 0 )
    {
      v27 = (_QWORD *)(v1 + 1464);
      v28 = 6LL;
      do
      {
        bDeleteSurface(*v27++);
        --v28;
      }
      while ( v28 );
    }
  }
  PDEVOBJ::vDisableSurface(&v33, v4, 1);
  if ( *(_QWORD *)(v1 + 1520) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(&v33);
  if ( !v4 )
    PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)&v33);
  EBRUSHOBJ::vDelete((EBRUSHOBJ *)(v33 + 1552));
  v21 = v33;
  if ( (*(_DWORD *)(v33 + 32) & 0x80000) == 0 )
  {
    if ( v4 != 2 )
    {
      v22 = *(_QWORD *)(v1 + 1824);
      if ( v22 )
        HmgDecrementShareReferenceCount(v22);
      v23 = *(_QWORD *)(v1 + 1832);
      if ( v23 )
        HmgDecrementShareReferenceCount(v23);
      v34 = *(_QWORD *)(v1 + 1832);
      XEPALOBJ::bDeletePalette(&v34, 1LL);
      v21 = v33;
    }
    if ( *(_QWORD *)(v21 + 2720) != *(_QWORD *)(v21 + 2704) && (!v6 || !v4) && v2 )
      (*(void (__fastcall **)(_QWORD))(v21 + 2720))(*(_QWORD *)(v1 + 1816));
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
    v19 = *(struct _ERESOURCE **)(v1 + 40);
    if ( v19 )
      GreDeleteSemaphore(v19);
  }
  if ( (*(_DWORD *)(v1 + 32) & 1) != 0 )
    GreDeleteSemaphore(*(PERESOURCE *)(v1 + 48));
  LODWORD(v24) = 0;
  GreAcquireHmgrSemaphore((__int64)v19, v18, v20);
  while ( 1 )
  {
    Objt = (__int64 *)HmgSafeNextObjt(v24, 5);
    if ( !Objt )
      break;
    v24 = *Objt;
    if ( Objt[6] == v1 )
      Objt[6] = 0LL;
  }
  GreReleaseHmgrSemaphore(v26);
  PDEV::Free((struct PDEV *)v1, v6);
}
