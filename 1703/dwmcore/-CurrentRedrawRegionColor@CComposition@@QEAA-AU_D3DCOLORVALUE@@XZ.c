/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x18013F4EC
 * Callers:
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014DF10 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rax
  struct _D3DCOLORVALUE *result; // rax

  v2 = *((_QWORD *)this + 50);
  if ( v2 != *((_QWORD *)this + 167) )
  {
    *((_QWORD *)this + 167) = v2;
    *((_DWORD *)this + 332) = ((unsigned __int8)*((_DWORD *)this + 332) + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *((struct _D3DCOLORVALUE *)this + *((unsigned int *)this + 332) + 79);
  return result;
}
