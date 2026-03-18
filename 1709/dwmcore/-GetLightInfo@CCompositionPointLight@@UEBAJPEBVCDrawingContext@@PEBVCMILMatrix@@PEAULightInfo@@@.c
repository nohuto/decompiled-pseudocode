/*
 * XREFs of ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18015BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18015B160 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18015B808 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x18015BE40 (-TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@.c)
 */

__int64 __fastcall CCompositionPointLight::GetLightInfo(
        CCompositionPointLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v8; // r9
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  CCompositionLight *v12; // rcx
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)a4 = 2;
  v5 = this - a4;
  v6 = (float *)((char *)a4 + 4);
  v8 = 4LL;
  do
  {
    *v6 = *(float *)((char *)v6 + v5 + 168) * *((float *)this + 53);
    ++v6;
    --v8;
  }
  while ( v8 );
  v9 = CCompositionLight::CalcLocalToDeviceMatrix(
         (struct LightInfo *)((char *)a4 + 96),
         a2,
         a3,
         *((struct CVisual **)this + 24),
         (struct LightInfo *)((char *)a4 + 96),
         (struct LightInfo *)((char *)a4 + 164));
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x57u);
  }
  else
  {
    *((_OWORD *)a4 + 5) = *(_OWORD *)CCompositionLight::CalcEyePointOrVector(v10, v14, *((_QWORD *)this + 24));
    *(_QWORD *)((char *)a4 + 36) = *((_QWORD *)this + 25);
    v12 = (CCompositionLight *)*((unsigned int *)this + 52);
    *((_DWORD *)a4 + 11) = (_DWORD)v12;
    CCompositionLight::TransformAttenuation(
      v12,
      (CCompositionPointLight *)((char *)this + 160),
      (struct LightInfo *)((char *)a4 + 60));
  }
  return v11;
}
