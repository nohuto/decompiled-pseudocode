/*
 * XREFs of DxgkNotifyMonitorDimming @ 0x1C0178460
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C01E3A20 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 */

__int64 __fastcall DxgkNotifyMonitorDimming(__int64 a1, unsigned __int8 a2)
{
  struct _DEVICE_OBJECT *v2; // rcx

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 192);
  if ( v2 )
    return DpiBrightnessNotifyMonitorDimming(v2, a2);
  else
    return 3221226166LL;
}
