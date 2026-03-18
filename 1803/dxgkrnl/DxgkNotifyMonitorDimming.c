/*
 * XREFs of DxgkNotifyMonitorDimming @ 0x1C015C640
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C020169C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 */

__int64 __fastcall DxgkNotifyMonitorDimming(__int64 a1, unsigned int a2)
{
  struct _DEVICE_OBJECT *v2; // rcx

  v2 = *(struct _DEVICE_OBJECT **)(a1 + 192);
  if ( v2 )
    return DpiBrightnessNotifyMonitorDimming(v2, a2, a2);
  else
    return 3221226166LL;
}
