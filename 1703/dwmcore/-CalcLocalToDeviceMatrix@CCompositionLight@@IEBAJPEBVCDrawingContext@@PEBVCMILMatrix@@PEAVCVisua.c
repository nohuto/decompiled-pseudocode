/*
 * XREFs of ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801729D4
 * Callers:
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1801733C0 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180173760 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180173F70 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CCompositionLight::CalcLocalToDeviceMatrix(
        CCompositionLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CVisual *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  __int64 v6; // rdx
  int WorldTransform; // eax
  unsigned int v9; // ebx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // r10d
  __int128 v15; // [rsp+30h] [rbp-59h] BYREF
  __int128 v16; // [rsp+40h] [rbp-49h]
  __int128 v17; // [rsp+50h] [rbp-39h]
  __int128 v18; // [rsp+60h] [rbp-29h]
  int v19; // [rsp+70h] [rbp-19h]
  __int128 v20; // [rsp+80h] [rbp-9h] BYREF
  __int128 v21; // [rsp+90h] [rbp+7h]
  __int128 v22; // [rsp+A0h] [rbp+17h]
  __int128 v23; // [rsp+B0h] [rbp+27h]
  int v24; // [rsp+C0h] [rbp+37h]

  v6 = *((_QWORD *)a2 + 808);
  v24 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v6, 3, (__int64)&v20, 0LL, 0LL);
  v9 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0x69u);
  }
  else
  {
    v15 = v20;
    v19 = v24;
    v16 = v21;
    v17 = v22;
    v18 = v23;
    CMILMatrix::Multiply((CMILMatrix *)&v15, a3);
    v20 = v15;
    v24 = v19;
    v21 = v16;
    v22 = v17;
    v23 = v18;
    CMILMatrix::SetToInverse((__m128 *)a5, (const struct CMILMatrix *)&v20);
    v10 = v16;
    *(_OWORD *)a6 = v15;
    v11 = v17;
    *((_OWORD *)a6 + 1) = v10;
    v12 = v18;
    *((_OWORD *)a6 + 2) = v11;
    *((_OWORD *)a6 + 3) = v12;
    *((_DWORD *)a6 + 16) = v13;
  }
  return v9;
}
