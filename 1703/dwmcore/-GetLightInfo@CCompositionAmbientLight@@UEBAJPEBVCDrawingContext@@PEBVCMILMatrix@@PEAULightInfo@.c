/*
 * XREFs of ?GetLightInfo@CCompositionAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1800CC610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::GetLightInfo(
        CCompositionAmbientLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  __int64 result; // rax

  *(_DWORD *)a4 = 0;
  result = 0LL;
  *(_OWORD *)((char *)a4 + 4) = *((_OWORD *)this + 7);
  return result;
}
