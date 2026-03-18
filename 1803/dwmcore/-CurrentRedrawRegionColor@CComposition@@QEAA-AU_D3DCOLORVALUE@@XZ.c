/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18014A168
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18015F438 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int128 v4; // xmm0
  struct _D3DCOLORVALUE *result; // rax

  v2 = *((_QWORD *)this + 48);
  v3 = *((unsigned int *)this + 322);
  if ( v2 != *((_QWORD *)this + 162) )
  {
    *((_QWORD *)this + 162) = v2;
    v3 = ((_BYTE)v3 + 1) & 3;
    *((_DWORD *)this + 322) = v3;
  }
  v4 = *(_OWORD *)((char *)this + 16 * v3 + 1224);
  result = retstr;
  *(_OWORD *)&retstr->r = v4;
  return result;
}
