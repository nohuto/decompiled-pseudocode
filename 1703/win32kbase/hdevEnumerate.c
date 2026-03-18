/*
 * XREFs of hdevEnumerate @ 0x1C005BFB0
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C005AC10 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C005AD88 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B660 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B880 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C005B9C4 (DrvNotifyModeChangeStartStop.c)
 *     ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C005BCA0 (-DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C005BDE0 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C005BE80 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006295C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C002CD80 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C002CDD0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037B10 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

PDEV *__fastcall hdevEnumerate(PDEV *this)
{
  PDEV *v2; // rdi
  PDEV *v3; // rbx
  PDEV *v5; // [rsp+30h] [rbp+8h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v2 = *(PDEV **)&WPP_MAIN_CB.SectorSize;
  if ( this )
    v2 = this;
  v5 = v2;
  if ( this )
    v3 = *(PDEV **)v2;
  else
    v3 = v2;
  while ( v3 )
  {
    if ( (*((_DWORD *)v3 + 8) & 1) != 0 )
    {
      PDEV::IncrementClientReferenceCount(v3);
      break;
    }
    v3 = *(PDEV **)v3;
  }
  if ( this )
  {
    if ( *((_DWORD *)v2 + 2) <= 1u )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      PDEVOBJ::vUnreferencePdev(&v5, 0);
      return v3;
    }
    PDEV::DecrementClientReferenceCount(v2);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  return v3;
}
