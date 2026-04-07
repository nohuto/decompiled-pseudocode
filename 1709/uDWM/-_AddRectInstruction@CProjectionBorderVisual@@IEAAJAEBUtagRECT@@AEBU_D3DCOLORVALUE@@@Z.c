/*
 * XREFs of ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x180074FF4
 * Callers:
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x180074EB4 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800346A8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800356E8 (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
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
  struct _D3DCOLORVALUE *v10; // rdi
  unsigned int v11; // ebx
  struct CRenderDataInstruction *v12; // rdx
  int v13; // eax
  struct CSolidRectangleInstruction *v14; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h]

  v3 = _mm_cvtsi32_si128(a2->left);
  v5 = _mm_cvtsi32_si128(a2->right);
  v14 = 0LL;
  LODWORD(v15) = _mm_cvtepi32_ps(v3).m128_u32[0];
  v7 = _mm_cvtsi32_si128(a2->top);
  DWORD2(v15) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)v5.m128i_i32 = (float)a2->bottom;
  DWORD1(v15) = _mm_cvtepi32_ps(v7).m128_u32[0];
  HIDWORD(v15) = v5.m128i_i32[0];
  if ( IsPPIEdition() )
    return 0LL;
  v9 = CSolidRectangleInstruction::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
         &v14);
  v10 = (struct _D3DCOLORVALUE *)v14;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = v14;
    *((_OWORD *)v14 + 2) = v15;
    *(struct _D3DCOLORVALUE *)&v10[1].r = *(const struct _D3DCOLORVALUE *)&a3->r;
    v13 = CRenderDataVisual::AddInstruction(this, v12);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x37u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x34u);
  }
  if ( v10 )
    CBaseObject::Release((CBaseObject *)v10);
  return v11;
}
