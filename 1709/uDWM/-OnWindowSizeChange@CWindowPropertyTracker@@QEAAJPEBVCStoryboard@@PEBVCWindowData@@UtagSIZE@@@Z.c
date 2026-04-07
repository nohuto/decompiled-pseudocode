/*
 * XREFs of ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x18009A8F8
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028630 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180001770 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowPropertyTracker::OnWindowSizeChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        struct tagSIZE a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v12; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (unsigned int)v12;
    *(struct tagSIZE *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v12) + 112LL) = a4;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v10) + 40LL) |= 2u;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x25u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
