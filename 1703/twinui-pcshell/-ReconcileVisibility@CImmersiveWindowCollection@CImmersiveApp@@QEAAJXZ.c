/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059230
 * Callers:
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18005745C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1800589A0 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800590F4 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005915C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x18005938C (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x1800593D0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180059A3C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625___::Invoke @ 0x18005C280 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625___--Invoke.c)
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180058678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800587A4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058B34 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilityState@@@Z @ 0x18005940C (-EnsureCanSendVisibilityState@CImmersiveWindowCollection@CImmersiveApp@@QEAA_NW4ViewVisibilitySt.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char *v2; // rax
  char *v3; // rdx
  char *v4; // rcx
  unsigned int v5; // edi
  unsigned __int64 i; // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v13; // rcx

  if ( *((_QWORD *)this + 20) )
  {
    v2 = (char *)this + 200;
    v3 = (char *)this + 232;
    v4 = v2;
    if ( v2 == v3 )
    {
LABEL_5:
      v5 = *((_BYTE *)this + 184) != 0 ? 2 : 0;
    }
    else
    {
      while ( !*v4 )
      {
        v4 += 8;
        if ( v4 == v3 )
          goto LABEL_5;
      }
      v5 = 2;
      v13 = v2 + 32;
      while ( v2 != v13 )
      {
        if ( *v2 )
        {
          if ( !*((_DWORD *)v2 + 1) )
          {
            v5 = 0;
            break;
          }
          if ( *((_DWORD *)v2 + 1) == 1 )
            v5 = 1;
        }
        v2 += 8;
      }
    }
    if ( (unsigned __int8)CImmersiveApp::CImmersiveWindowCollection::EnsureCanSendVisibilityState(this, v5) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)this + 19) + 224LL))(**((_QWORD **)this + 19), v5);
      for ( i = 1LL; i < *((_QWORD *)this + 20); ++i )
      {
        v7 = *(_QWORD *)(*((_QWORD *)this + 19) + 8 * i);
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
        v9 = *(_QWORD *)(*((_QWORD *)this + 19) + 8 * i);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 224LL))(v9, v8 != 0 ? v5 : 0);
      }
      if ( v5 == 2 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this, 0x10u);
        if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this, v10, v11) )
          CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
      }
    }
  }
  return 0LL;
}
