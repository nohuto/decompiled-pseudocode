/*
 * XREFs of ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800127C8
 * Callers:
 *     ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x180011FA0 (-Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180077A68 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800300B4 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAccent::_AddOcclusionInstruction(CAccent *this)
{
  unsigned int v1; // edi
  int v3; // eax
  int v4; // eax
  struct _MARGINS v6; // [rsp+30h] [rbp-18h] BYREF
  struct CRenderDataInstruction *v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0LL;
  *(_QWORD *)&v6.cxLeftWidth = 0LL;
  *(_QWORD *)&v6.cyTopHeight = 0LL;
  if ( *((_DWORD *)this + 70) != 2 )
  {
    v3 = *((_DWORD *)this + 71);
    if ( (v3 & 8) == 0 && (v3 & 2) == 0 && (v3 & 0x800) == 0 && !*((_BYTE *)this + 375) )
    {
      CDrawOcclusionRectangleInstruction::Create(&v6, &v7);
      v4 = CRenderDataVisual::AddInstruction(this, v7);
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xC7u);
      if ( v7 )
        CBaseObject::Release(v7);
    }
  }
  return v1;
}
