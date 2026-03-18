/*
 * XREFs of ?IsPrimaryMonitor@CHolographicInteropTarget@@UEBA_NXZ @ 0x1800CC540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHolographicInteropTarget::IsPrimaryMonitor(CHolographicInteropTarget *this)
{
  return *((_BYTE *)this + 128);
}
