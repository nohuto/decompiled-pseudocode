/*
 * XREFs of _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x180091D60
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___ @ 0x180091C00 (CTransitionVisualController--ForEachOwnedWindow__lambda_9b37f3d03e1ad1f523dfdba086665a20___.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x18000530C (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000553C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator()(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v4; // rbx
  HWND v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r14
  CStoryboard *v9; // rcx
  struct _GUID *v11; // rcx

  v2 = *(_QWORD *)(a2 + 408);
  if ( v2 )
    CTopLevelWindow3D::StopAnimation(v2);
  if ( *(_QWORD *)(a2 + 40) )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = *(HWND *)(a2 + 40);
      v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      v7 = *(_DWORD *)(v6 + 40);
      if ( !v7 )
        break;
      v8 = *(_QWORD *)(v6 + 16);
      while ( 1 )
      {
        v9 = *(CStoryboard **)(v8 + 8 * v4);
        if ( *((_DWORD *)v9 + 6) != 4 && (!v5 || CStoryboard::HasAnimationComponent(v9, v5, 0)) )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v7 )
          return 0LL;
      }
      v11 = *(struct _GUID **)(v8 + 8 * v4);
      if ( !v11 )
        break;
      CStoryboard::Abandon(v11);
    }
  }
  return 0LL;
}
