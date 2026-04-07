/*
 * XREFs of ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180010824
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800107D0 (-Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180080F44 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x180037DE8 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccent::_AddOcclusionInstruction(CAccent *this)
{
  CBaseObject *v1; // rbx
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  struct _MARGINS v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CRenderDataInstruction *v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  *(_QWORD *)&v8.cxLeftWidth = 0LL;
  *(_QWORD *)&v8.cyTopHeight = 0LL;
  v3 = *((_DWORD *)this + 70) == 2;
  v10 = 0LL;
  if ( v3
    || (v4 = *((_DWORD *)this + 71), (v4 & 8) != 0)
    || (v4 & 2) != 0
    || (v4 & 0x800) != 0
    || *((_BYTE *)this + 375)
    || (CDrawOcclusionRectangleInstruction::Create(&v8, &v10),
        v1 = v10,
        v5 = CRenderDataVisual::AddInstruction(this, v10),
        v6 = v5,
        v5 >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v5,
      v8.cxLeftWidth);
  }
  if ( v1 )
    CBaseObject::Release(v1);
  return v6;
}
