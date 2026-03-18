/*
 * XREFs of ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1801733C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180172330 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801729D4 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 */

__int64 __fastcall CCompositionDistantLight::GetLightInfo(
        CCompositionDistantLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)a4 = 1;
  *(_OWORD *)((char *)a4 + 4) = *((_OWORD *)this + 7);
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x51u);
  }
  else
  {
    *((_OWORD *)a4 + 5) = *(_OWORD *)CCompositionLight::CalcEyePointOrVector(v7, v10, *((_QWORD *)this + 16));
    *((_QWORD *)a4 + 6) = *((_QWORD *)this + 17);
    *((_DWORD *)a4 + 14) = *((_DWORD *)this + 36);
  }
  return v8;
}
