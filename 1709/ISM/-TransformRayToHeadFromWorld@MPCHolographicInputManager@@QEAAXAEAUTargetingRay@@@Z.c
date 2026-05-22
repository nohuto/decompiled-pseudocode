/*
 * XREFs of ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180058578
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x180065ADC (-GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUHitTestResult3D@@Ufl.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall MPCHolographicInputManager::TransformRayToHeadFromWorld(
        MPCHolographicInputManager *this,
        struct TargetingRay *a2,
        __int64 a3,
        const char *a4)
{
  float v4; // xmm13_4
  float v5; // xmm11_4
  float v6; // xmm9_4
  float v7; // xmm12_4
  float v8; // xmm10_4
  float v9; // xmm8_4
  float v10; // xmm13_4
  float v11; // xmm0_4
  float v12; // xmm11_4
  float v13; // xmm1_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( !*((_BYTE *)this + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x352,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v4 = *((float *)this + 16);
  v5 = *((float *)this + 17);
  v6 = *((float *)this + 18);
  v7 = v4 * *(float *)a2;
  v8 = v5 * *(float *)a2;
  v9 = v6 * *(float *)a2;
  v10 = (float)((float)(v4 * *((float *)a2 + 3)) + (float)(*((float *)this + 20) * *((float *)a2 + 4)))
      + (float)(*((float *)this + 24) * *((float *)a2 + 5));
  v11 = *((float *)this + 22);
  v12 = (float)((float)(v5 * *((float *)a2 + 3)) + (float)(*((float *)this + 21) * *((float *)a2 + 4)))
      + (float)(*((float *)this + 25) * *((float *)a2 + 5));
  v13 = *((float *)this + 26);
  v14 = (float)((float)(v8 + (float)(*((float *)this + 21) * *((float *)a2 + 1)))
              + (float)(*((float *)this + 25) * *((float *)a2 + 2)))
      + *((float *)this + 29);
  v15 = (float)((float)(v6 * *((float *)a2 + 3)) + (float)(v11 * *((float *)a2 + 4)))
      + (float)(v13 * *((float *)a2 + 5));
  v16 = (float)((float)(v9 + (float)(v11 * *((float *)a2 + 1))) + (float)(v13 * *((float *)a2 + 2)))
      + *((float *)this + 30);
  *(float *)a2 = (float)((float)(v7 + (float)(*((float *)this + 20) * *((float *)a2 + 1)))
                       + (float)(*((float *)this + 24) * *((float *)a2 + 2)))
               + *((float *)this + 28);
  *((float *)a2 + 1) = v14;
  *((float *)a2 + 2) = v16;
  *((float *)a2 + 3) = v10;
  *((float *)a2 + 4) = v12;
  *((float *)a2 + 5) = v15;
}
