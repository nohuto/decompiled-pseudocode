/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0068AD4 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C008DC60 (DrvDestroyMDEV.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C0091028 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00EEF60 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00EEFF0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F4DB8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F7538 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00FB024 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     EngDeleteDriverObj @ 0x1C00FCA60 (EngDeleteDriverObj.c)
 * Callees:
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C002CD80 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(PDEV **a1, int a2)
{
  int v4; // edi
  __int64 v5; // rcx
  PDEV *v6; // rax
  PDEV *v7; // rcx
  PDEV *v8; // rdx
  PDEV *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v4 = PDEV::DecrementClientReferenceCount(*a1);
  if ( !v4 )
  {
    v6 = *a1;
    v7 = *(PDEV **)&WPP_MAIN_CB.SectorSize;
    if ( *(PDEV **)&WPP_MAIN_CB.SectorSize == *a1 )
    {
      *(_QWORD *)&WPP_MAIN_CB.SectorSize = *(_QWORD *)v6;
    }
    else if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    {
      while ( 1 )
      {
        v8 = *(PDEV **)v7;
        if ( *(PDEV **)v7 == v6 )
          break;
        v7 = *(PDEV **)v7;
        if ( !v8 )
          goto LABEL_2;
      }
      *(_QWORD *)v7 = *(_QWORD *)v6;
    }
  }
LABEL_2:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v5);
  }
  if ( !v4 )
  {
    v9 = *a1;
    v10 = a2;
    v11 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v9);
  }
}
