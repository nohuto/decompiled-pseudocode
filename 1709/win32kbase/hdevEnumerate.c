/*
 * XREFs of hdevEnumerate @ 0x1C00684D0
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0067770 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00678EC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067A20 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067BD0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C0067FB0 (-DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00680E8 (DrvNotifyModeChangeStartStop.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C0068300 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00683A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006B684 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

PDEV *__fastcall hdevEnumerate(PDEV *a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  PDEV *v4; // rsi
  PDEV *v5; // rbx
  PDEV *v6; // rdi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v7; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  int v10; // r8d
  PDEV **v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = ghsemDriverMgmt;
  v4 = a1;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)a1, a2, a3, (_DWORD)ghsemDriverMgmt, 12, (__int64)L"ghsemDriverMgmt");
  v5 = gppdevList;
  if ( v4 )
    v5 = v4;
  v11 = (PDEV **)v5;
  if ( v4 )
    v6 = *(PDEV **)v5;
  else
    v6 = v5;
  while ( v6 )
  {
    if ( (*((_DWORD *)v6 + 8) & 1) != 0 )
    {
      ++*((_DWORD *)v6 + 2);
      v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v6 + 446);
      LODWORD(a1) = (_DWORD)qword_1C018DF78;
      if ( v7 && qword_1C018DF78 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C018DF78, v7, 1);
      break;
    }
    v6 = *(PDEV **)v6;
  }
  if ( !v4 )
    goto LABEL_16;
  if ( *((_DWORD *)v5 + 2) > 1u )
  {
    v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v5 + 446);
    LODWORD(a1) = (_DWORD)qword_1C018DF78;
    if ( v8 && qword_1C018DF78 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C018DF78, v8, 0);
    --*((_DWORD *)v5 + 2);
LABEL_16:
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz((_DWORD)a1, (unsigned int)&LockRelease, a3, (_DWORD)ghsemDriverMgmt, (__int64)L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    return v6;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  PDEVOBJ::vUnreferencePdev(&v11, 0, v10);
  return v6;
}
