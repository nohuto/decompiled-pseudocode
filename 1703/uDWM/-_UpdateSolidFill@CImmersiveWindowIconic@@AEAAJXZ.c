/*
 * XREFs of ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007CC68
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007C6F0 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007C944 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A33C (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A41C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v11; // eax
  struct CSolidRectangleInstruction *v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

  v13 = 0LL;
  v2 = (unsigned __int8 *)*((_QWORD *)this + 35);
  *(_QWORD *)&v15 = 0LL;
  v3 = v2[169];
  *(float *)&v14 = GammaLUT_sRGB_to_scRGB[v2[168]] / 255.0;
  v4 = GammaLUT_sRGB_to_scRGB[v3];
  v5 = v2[170];
  *((float *)&v14 + 1) = v4 / 255.0;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 31));
  *((float *)&v14 + 2) = GammaLUT_sRGB_to_scRGB[v5] / 255.0;
  *((float *)&v14 + 3) = FLOAT_1_0;
  *((float *)&v15 + 2) = (float)*((int *)this + 30) + 0.0;
  *((float *)&v15 + 3) = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  v7 = CRenderDataVisual::ClearInstructions(this);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = CSolidRectangleInstruction::Create(
           *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
           &v13);
    v10 = v13;
    v8 = v9;
    if ( v9 >= 0 )
    {
      CSolidRectangleInstruction::SetRect((__int64)v13, &v15);
      *((_OWORD *)v10 + 1) = v14;
      v11 = CRenderDataVisual::AddInstruction(this, v10);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x85u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x81u);
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x7Fu);
  }
  return v8;
}
