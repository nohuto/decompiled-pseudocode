/*
 * XREFs of ?GetDesc@CHolographicViewer@@UEAAJPEAUHOLOGRAPHIC_VIEWER_DESC@@@Z @ 0x1800D6AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicViewer::GetDesc(CHolographicViewer *this, struct HOLOGRAPHIC_VIEWER_DESC *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 20);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 36);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 52);
  return result;
}
