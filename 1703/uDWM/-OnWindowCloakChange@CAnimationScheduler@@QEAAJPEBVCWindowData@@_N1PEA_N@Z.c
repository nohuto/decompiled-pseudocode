/*
 * XREFs of ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18001058C
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180031C10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180001DDC (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180004628 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000A380 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     Template_pqq @ 0x180095A5C (Template_pqq.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowCloakChange(
        CAnimationScheduler *this,
        CTopLevelWindow **a2,
        unsigned __int8 a3,
        bool a4,
        bool *a5)
{
  int v9; // edx
  CAnimationScheduler *v10; // rcx
  signed int v11; // r15d
  __int64 v12; // rbx
  const struct CStoryboard *v14; // r12

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = 0LL;
  for ( *a5 = 0; (unsigned int)v12 < *((_DWORD *)this + 10); v12 = (unsigned int)(v12 + 1) )
  {
    v14 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v12);
    if ( CAnimationScheduler::_ShouldTrack(v10, (HWND *)a2, v14, 1) )
    {
      v11 = CWindowPropertyTracker::OnWindowCloakChange((CAnimationScheduler *)((char *)this + 48), v14, a2, a3, a4);
      LOBYTE(v10) = v11 >= 0;
      *a5 |= v11 >= 0;
    }
    else if ( a3 )
    {
      CTransitionVisualController::RemoveTLWClone(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
        a2[50],
        0,
        0);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_pqq((_DWORD)v10, v9, (unsigned int)a2[5], a3, *a5);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v11;
}
