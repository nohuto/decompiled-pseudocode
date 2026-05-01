/*
 * XREFs of ?IsHorizontal@CScrollViewer@@UEAA_NXZ @ 0x1802A2730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScrollViewer::IsHorizontal(CScrollViewer *this)
{
  return *((_DWORD *)this + 20) & 1;
}
