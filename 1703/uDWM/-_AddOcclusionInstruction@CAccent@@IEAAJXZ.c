/*
 * XREFs of ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x18001E2BC
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001CA90 (-Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x180016228 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    if ( (v3 & 8) == 0 && (v3 & 2) == 0 && (v3 & 0x800) == 0 && !*((_BYTE *)this + 367) )
    {
      CDrawOcclusionRectangleInstruction::Create(&v6, &v7);
      v4 = CRenderDataVisual::AddInstruction(this, v7);
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC6u);
      if ( v7 )
        CBaseObject::Release(v7);
    }
  }
  return v1;
}
