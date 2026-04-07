/*
 * XREFs of ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x180078B6C
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800785F0 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180078844 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180003E28 (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::_UpdateSolidFill(CImmersiveWindowIconic *this)
{
  unsigned __int8 *v2; // rcx
  __int64 v3; // rax
  float v4; // xmm0_4
  __int64 v5; // rax
  __m128i v6; // xmm1
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct CSolidRectangleInstruction *v10; // rdi
  struct CRenderDataInstruction *v11; // rdx
  __int128 v12; // xmm1
  int v13; // eax
  struct CSolidRectangleInstruction *v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+48h] [rbp-18h]

  v15 = 0LL;
  v2 = (unsigned __int8 *)*((_QWORD *)this + 35);
  *(_QWORD *)&v17 = 0LL;
  v3 = v2[169];
  *(float *)&v16 = GammaLUT_sRGB_to_scRGB[v2[168]] / 255.0;
  v4 = GammaLUT_sRGB_to_scRGB[v3];
  v5 = v2[170];
  *((float *)&v16 + 1) = v4 / 255.0;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 31));
  *((float *)&v16 + 2) = GammaLUT_sRGB_to_scRGB[v5] / 255.0;
  *((float *)&v16 + 3) = FLOAT_1_0;
  *((float *)&v17 + 2) = (float)*((int *)this + 30) + 0.0;
  *((float *)&v17 + 3) = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v7 = CRenderDataVisual::ClearInstructions(this);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CSolidRectangleInstruction::Create(
           *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
           &v15);
    v10 = v15;
    v8 = v9;
    if ( v9 >= 0 )
    {
      v11 = v15;
      v12 = v16;
      *((_OWORD *)v15 + 2) = v17;
      *((_OWORD *)v10 + 1) = v12;
      v13 = CRenderDataVisual::AddInstruction(this, v11);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x85u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x81u);
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x7Fu);
  }
  return v8;
}
