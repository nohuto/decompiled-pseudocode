/*
 * XREFs of EngFreeMem @ 0x1C0058530
 * Callers:
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0058420 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C005845C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00EEFF0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00EF040 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00EF130 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C00FC740 (EngDeleteClip.c)
 * Callees:
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  struct _ERESOURCE *v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx

  if ( pv )
  {
    v1 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
    v2 = (char *)pv - 32;
    if ( MultiUserEngAllocListLock )
    {
      PsEnterPriorityRegion(pv);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v1);
    }
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
    if ( MultiUserEngAllocListLock )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      {
        Template_pz(MultiUserEngAllocListLock, &LockRelease);
        v5 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
      }
      if ( v5 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v5);
        PsLeavePriorityRegion(v6);
      }
    }
    if ( (int)IsWin32FreePoolImplSupported(v5) >= 0 )
      Win32FreePoolImpl(v2);
  }
}
