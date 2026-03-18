/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0037E90
 * Callers:
 *     GreGetClipBox @ 0x1C0020E10 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C0058F50 (GreGetNearestColor.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0077B90 (pProcessDfbSurfacesInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00E936C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00EABEC (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x1C00FB1FC (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreDecLockCount @ 0x1C0077870 (GreDecLockCount.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  int v2; // eax
  __int64 v3; // rdx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap(this);
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v7 = *ThreadWin32Thread;
      if ( v7 )
      {
        *(_QWORD *)(v7 + 320) = 0LL;
        *(_QWORD *)(v7 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v8);
    }
  }
  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 8) != 0 )
    *((_DWORD *)this + 6) = v2 & 0xFFFFFFF7;
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v3);
    v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v4 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v4);
      PsLeavePriorityRegion(v5);
    }
  }
  if ( (int)IsUntrapAppContainerRenderingSupported() >= 0 )
    UntrapAppContainerRenderingWrap((char *)this + 64, (char *)this + 56, (char *)this + 48, (char *)this + 72);
}
