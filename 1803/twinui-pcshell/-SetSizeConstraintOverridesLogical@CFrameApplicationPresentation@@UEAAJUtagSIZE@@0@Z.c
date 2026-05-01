/*
 * XREFs of ?SetSizeConstraintOverridesLogical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180013690
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___ @ 0x1800115F0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesLogical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  __int128 v4; // [rsp+20h] [rbp-48h]
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  struct tagSIZE v6; // [rsp+50h] [rbp-18h]

  *((struct tagSIZE *)&v4 + 1) = a2;
  *(_QWORD *)&v4 = this;
  v5 = v4;
  v6 = a3;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_5724401cb3353ab75381b91154028014___(this, &v5);
}
