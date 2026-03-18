/*
 * XREFs of ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180173F70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     cosf_0 @ 0x1800D535A (cosf_0.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180172330 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801729D4 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x1801730EC (-TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@.c)
 */

__int64 __fastcall CCompositionSpotLight::GetLightInfo(
        CCompositionSpotLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  CCompositionLight *v9; // rcx
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  _DWORD v15[4]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)a4 = 3;
  *(_OWORD *)((char *)a4 + 4) = *(_OWORD *)((char *)this + 168);
  *(_OWORD *)((char *)a4 + 20) = *(_OWORD *)((char *)this + 184);
  v6 = CCompositionLight::CalcLocalToDeviceMatrix(
         this,
         a2,
         a3,
         *((struct CVisual **)this + 16),
         (struct LightInfo *)((char *)a4 + 96),
         (struct LightInfo *)((char *)a4 + 164));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x44u);
  }
  else
  {
    *((_OWORD *)a4 + 5) = *(_OWORD *)CCompositionLight::CalcEyePointOrVector(v7, v15, *((_QWORD *)this + 16));
    *(_QWORD *)((char *)a4 + 36) = *((_QWORD *)this + 17);
    v9 = (CCompositionLight *)*((unsigned int *)this + 36);
    *((_DWORD *)a4 + 11) = (_DWORD)v9;
    *((_QWORD *)a4 + 6) = *(_QWORD *)((char *)this + 148);
    *((_DWORD *)a4 + 14) = *((_DWORD *)this + 39);
    CCompositionLight::TransformAttenuation(
      v9,
      (CCompositionSpotLight *)((char *)this + 112),
      (struct LightInfo *)((char *)a4 + 60));
    v10 = *((float *)this + 40);
    v11 = 0.0;
    if ( v10 >= 0.0 )
      v12 = fminf(1.5707964, v10);
    else
      v12 = 0.0;
    *((float *)a4 + 18) = cosf_0(v12);
    v13 = *((float *)this + 41);
    if ( v13 >= 0.0 )
      v11 = fminf(1.5707964, v13);
    *((float *)a4 + 19) = cosf_0(v11);
  }
  return v8;
}
