/*
 * XREFs of ?GetLightInfo@CCompositionAmbientLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1800B1270
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::GetLightInfo(
        CCompositionAmbientLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  float *v4; // r8
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v7; // rdx

  *(_DWORD *)a4 = 0;
  v4 = (float *)((char *)this + 176);
  v5 = this - a4;
  v6 = (float *)((char *)a4 + 4);
  v7 = 4LL;
  do
  {
    *v6 = *(float *)((char *)v6 + v5 + 156) * *v4;
    ++v6;
    --v7;
  }
  while ( v7 );
  return 0LL;
}
