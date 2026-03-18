/*
 * XREFs of ?CreateCoRenderVisual@CoRenderHost@@UEAAJPEAXPEAPEAUIDWMCoRenderVisualProxy@@@Z @ 0x180125700
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z @ 0x1801295E4 (-CreateForForeignVisual@CCoRenderVisualProxy@@SAJPEAVCComposition@@PEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CoRenderHost::CreateCoRenderVisual(
        struct CComposition **this,
        void *a2,
        struct IDWMCoRenderVisualProxy **a3)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  struct CCoRenderVisualProxy *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = CCoRenderVisualProxy::CreateForForeignVisual(this[2], a2, &v7);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x166u);
  else
    *a3 = v7;
  return v5;
}
