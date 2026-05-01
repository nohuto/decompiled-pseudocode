/*
 * XREFs of ?ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B3A8
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180057780 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801CCF40 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::ContainsDeferredInfo(const RECT *this)
{
  const RECT *v1; // rbx
  BOOL v3; // eax
  char v4; // r8

  v1 = this + 1;
  v3 = EqualRect(this, this + 1);
  v4 = 0;
  if ( (!v3 && v1->left <= v1->right && v1->top <= v1->bottom
     || !ImmersiveApplicationLayout::AreAppViewDataEqual(
           (ImmersiveApplicationLayout *)&this[2],
           (const struct APPLICATION_VIEW_DATA *)&this[4].top,
           0LL))
    && v1->left <= v1->right
    && v1->top <= v1->bottom )
  {
    return 1;
  }
  return v4;
}
