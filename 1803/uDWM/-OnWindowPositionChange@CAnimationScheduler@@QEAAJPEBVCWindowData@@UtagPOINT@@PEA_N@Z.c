/*
 * XREFs of ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18006C600
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A550 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002C9A0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000B6C8 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800A2C88 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowPositionChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        struct tagPOINT a3,
        bool *a4)
{
  CAnimationScheduler *v8; // rcx
  signed int v9; // ebp
  __int64 v10; // rdi
  const struct CStoryboard *v11; // r15
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  v10 = 0LL;
  for ( *a4 = 0; (unsigned int)v10 < *((_DWORD *)this + 10); v10 = (unsigned int)(v10 + 1) )
  {
    v11 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v10);
    if ( CAnimationScheduler::_ShouldTrack(v8, (HWND *)a2, v11, 0) )
    {
      v9 = CWindowPropertyTracker::OnWindowPositionChange((CAnimationScheduler *)((char *)this + 48), v11, a2, a3);
      LOBYTE(v8) = v9 >= 0;
      *a4 |= v9 >= 0;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v9;
}
