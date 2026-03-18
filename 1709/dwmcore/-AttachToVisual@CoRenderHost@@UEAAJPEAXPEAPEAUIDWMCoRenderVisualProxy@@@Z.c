/*
 * XREFs of ?AttachToVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x1801254A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z @ 0x180129524 (-CreateForControlledVisual@CCoRenderVisualProxy@@SAJPEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CoRenderHost::AttachToVisual(CoRenderHost *this, void *a2, struct IDWMCoRenderVisualProxy **a3)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  struct CCoRenderVisualProxy *v7; // [rsp+58h] [rbp+20h] BYREF

  v4 = CCoRenderVisualProxy::CreateForControlledVisual(a2, &v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x183u);
  else
    *a3 = v7;
  return v5;
}
