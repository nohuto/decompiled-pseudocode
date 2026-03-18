/*
 * XREFs of EngIsCddDeviceBitmap @ 0x1C0250F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EngIsCddDeviceBitmap(__int64 a1)
{
  return *(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 116) & 0x100;
}
