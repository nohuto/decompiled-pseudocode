/*
 * XREFs of ?CurrentRedrawRegionColor@CComposition@@QEAA?AU_D3DCOLORVALUE@@XZ @ 0x180127EBC
 * Callers:
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18013EEC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CComposition::CurrentRedrawRegionColor(
        CComposition *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rax
  struct _D3DCOLORVALUE *result; // rax

  v2 = *((_QWORD *)this + 45);
  if ( v2 != *((_QWORD *)this + 159) )
  {
    *((_QWORD *)this + 159) = v2;
    *((_DWORD *)this + 316) = ((unsigned __int8)*((_DWORD *)this + 316) + 1) & 3;
  }
  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *((struct _D3DCOLORVALUE *)this + *((unsigned int *)this + 316) + 75);
  return result;
}
