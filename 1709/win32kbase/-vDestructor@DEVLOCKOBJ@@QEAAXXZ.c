/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C00634D0 (GreGetNearestColor.c)
 *     pProcessDfbSurfacesInternal @ 0x1C006D050 (pProcessDfbSurfacesInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00EE574 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00EF2C8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C00FB5EC (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     GreDecLockCount @ 0x1C0043B90 (GreDecLockCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax

  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap(this);
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 0x1000) != 0 )
  {
    GreDecLockCount(v3, v2, v4, v5);
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v10, v11, v12);
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  else if ( (v6 & 0x800000) != 0 )
  {
    GreDecLockCount(v3, v2, v4, v5);
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion();
    }
  }
  v7 = *((_DWORD *)this + 6);
  if ( (v7 & 8) != 0 )
    *((_DWORD *)this + 6) = v7 & 0xFFFFFFF7;
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v8);
    v9 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v9 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v9);
      PsLeavePriorityRegion();
    }
  }
  if ( (int)IsUntrapAppContainerRenderingSupported() >= 0 )
    UntrapAppContainerRenderingWrap((char *)this + 64, (char *)this + 56, (char *)this + 48, (char *)this + 72);
}
