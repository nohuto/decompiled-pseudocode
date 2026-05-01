/*
 * XREFs of ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801CCF40
 * Callers:
 *     ?ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B3A8 (-ContainsDeferredInfo@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180069C20 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?v_SetDesiredPosition_HasViewDataChanged@LegacyViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18013AD90 (-v_SetDesiredPosition_HasViewDataChanged@LegacyViewWrapper@@EEBA_NAEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ImmersiveApplicationLayout::AreAppViewDataEqual(
        ImmersiveApplicationLayout *this,
        const struct APPLICATION_VIEW_DATA *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  return *(_DWORD *)this == *(_DWORD *)a2
      && *((_DWORD *)this + 1) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)this + 2) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)this + 3) == *((_DWORD *)a2 + 3)
      && *((_DWORD *)this + 5) == *((_DWORD *)a2 + 5)
      && *((_DWORD *)this + 4) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)this + 6) == *((_DWORD *)a2 + 6)
      && *((_DWORD *)this + 7) == *((_DWORD *)a2 + 7)
      && *((_DWORD *)this + 8) == *((_DWORD *)a2 + 8);
}
