/*
 * XREFs of ?GetSupportedButtons@SpatialInteractionDevice@@UEAA?AW4ButtonFlags@SpatialInteractionDevices@@XZ @ 0x180074FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevice::GetSupportedButtons(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 88) + 280LL);
}
