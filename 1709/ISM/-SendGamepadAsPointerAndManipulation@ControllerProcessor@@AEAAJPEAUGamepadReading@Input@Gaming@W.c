/*
 * XREFs of ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8
 * Callers:
 *     ?OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x18003F720 (-OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z.c)
 * Callees:
 *     SignedNormalize @ 0x18003D01C (SignedNormalize.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x18003FA18 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x18003FB64 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x18003FCE8 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x18003FE20 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18003FF08 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1800401C0 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800402F4 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180041CA0 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsPointerAndManipulation(
        ControllerProcessor *this,
        struct Windows::Gaming::Input::GamepadReading *a2)
{
  float v3; // xmm0_4
  float v4; // xmm10_4
  __int64 v5; // rdx
  float v6; // xmm0_4
  float v7; // xmm10_4
  __int64 v8; // rdx
  float v9; // xmm0_4
  float v10; // xmm11_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rdx
  ControllerProcessor *v14; // rcx
  float v15; // xmm12_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  int v18; // eax
  float v19; // xmm0_4
  __int64 v20; // rdx
  float v21; // xmm0_4

  v3 = *((double *)a2 + 2);
  v4 = 0.0 - SignedNormalize(v3, 0.1171875, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_f32[0];
  v6 = *(double *)(v5 + 24);
  v7 = v4 + SignedNormalize(v6, 0.1171875, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_f32[0];
  v9 = *(double *)(v8 + 48);
  LODWORD(v10) = SignedNormalize(v9, 0.26516724, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
  v12 = *(double *)(v11 + 56);
  LODWORD(v15) = SignedNormalize(v12, 0.26516724, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
  v16 = 0.0;
  v17 = 0.0;
  if ( *((_BYTE *)v14 + 232) )
  {
    v18 = *(_DWORD *)(v13 + 8);
    if ( (v18 & 0x40) != 0 )
      v16 = FLOAT_0_5;
    if ( (v18 & 0x80u) != 0 )
      v16 = FLOAT_N0_5;
    if ( (v18 & 0x100) != 0 )
      v17 = FLOAT_N0_5;
    if ( (v18 & 0x200) != 0 )
      v17 = FLOAT_0_5;
  }
  else
  {
    v19 = *(double *)(v13 + 32);
    LODWORD(v17) = SignedNormalize(v19, 0.23953247, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
    v21 = *(double *)(v20 + 40);
    LODWORD(v16) = SignedNormalize(v21, 0.23953247, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0))).m128_u32[0];
  }
  if ( (*((_BYTE *)v14 + 320) & 1) != 0 )
    ControllerProcessor::CalculateNavigationDelta(v14, v17, v16);
  if ( *((_BYTE *)this + 1229) )
  {
    if ( (*((_BYTE *)this + 320) & 8) != 0 )
      ControllerProcessor::CalculateMarginPanDelta(this);
    if ( (*((_BYTE *)this + 320) & 0x84) != 0 )
      ControllerProcessor::CalculatePanDelta(this, v10, v15);
    if ( (*((_BYTE *)this + 320) & 2) != 0 )
      ControllerProcessor::CalculateZoomDelta(this, v7);
  }
  if ( (*((_BYTE *)this + 320) & 1) != 0 )
    ControllerProcessor::ApplyNavigationDelta(this);
  if ( *((char *)this + 320) < 0 )
    ControllerProcessor::ApplyPanDeltaToScroll(this);
  if ( *((_BYTE *)this + 1229) )
  {
    if ( (*((_BYTE *)this + 320) & 0xC) != 0 )
    {
      if ( *((float *)this + 96) == 0.0 && *((float *)this + 97) == 0.0 )
      {
        if ( *((_DWORD *)this + 306) == 1 )
          ControllerProcessor::TryUpdateInteractionType(this, 0LL);
      }
      else
      {
        ControllerProcessor::TryUpdateInteractionType(this, 1LL);
        if ( *((_DWORD *)this + 306) == 1 )
          ManipulationInjector::InjectPan(
            (ControllerProcessor *)((char *)this + 400),
            *((float *)this + 96),
            *((float *)this + 97),
            0);
        *((_DWORD *)this + 96) = 0;
        *((_DWORD *)this + 97) = 0;
      }
    }
    if ( (*((_BYTE *)this + 320) & 2) != 0 )
      ControllerProcessor::ApplyZoomDelta(this);
  }
  return 0LL;
}
