/*
 * XREFs of ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007F294
 * Callers:
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x18007F154 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800157E8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A33C (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A41C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddRectInstruction(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  __m128i v7; // xmm0
  int v9; // eax
  struct CSolidRectangleInstruction *v10; // rdi
  unsigned int v11; // ebx
  int v12; // eax
  struct CSolidRectangleInstruction *v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+38h] [rbp-20h] BYREF

  v3 = _mm_cvtsi32_si128(a2->left);
  v5 = _mm_cvtsi32_si128(a2->right);
  v13 = 0LL;
  LODWORD(v14) = _mm_cvtepi32_ps(v3).m128_u32[0];
  v7 = _mm_cvtsi32_si128(a2->top);
  DWORD2(v14) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)v5.m128i_i32 = (float)a2->bottom;
  DWORD1(v14) = _mm_cvtepi32_ps(v7).m128_u32[0];
  HIDWORD(v14) = v5.m128i_i32[0];
  if ( IsPPIEdition() )
    return 0LL;
  v9 = CSolidRectangleInstruction::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
         &v13);
  v10 = v13;
  v11 = v9;
  if ( v9 >= 0 )
  {
    CSolidRectangleInstruction::SetRect((__int64)v13, &v14);
    *((struct _D3DCOLORVALUE *)v10 + 1) = *(const struct _D3DCOLORVALUE *)&a3->r;
    v12 = CRenderDataVisual::AddInstruction(this, v10);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x37u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x34u);
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return v11;
}
