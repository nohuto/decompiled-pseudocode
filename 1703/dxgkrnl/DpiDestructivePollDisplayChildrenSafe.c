/*
 * XREFs of DpiDestructivePollDisplayChildrenSafe @ 0x1C00887B0
 * Callers:
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009A1E0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDestructivePollDisplayChildrenSafe(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rcx

  v1 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 64) + 152LL);
  if ( v1 )
    IoInvalidateDeviceRelations(v1, BusRelations);
}
