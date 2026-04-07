/*
 * XREFs of ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180006958
 * Callers:
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180006700 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x1800077E8 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x18001700C (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x18001D308 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CAccent::UpdateAccentBlurRect(CAccent *this, const struct tagRECT *a2)
{
  struct CResource *v3; // rbx
  const struct tagRECT *v4; // rcx
  int v5; // eax
  struct CResource *v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  if ( IsRectEmpty(a2) )
    goto LABEL_4;
  v5 = ResourceHelper::CreateRectangleGeometry(v4, &v6);
  if ( v5 >= 0 )
  {
    v3 = v6;
LABEL_4:
    CAccent::SetClipRegion(this, v3);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x305u);
  v3 = v6;
LABEL_5:
  if ( v3 )
    CBaseObject::Release(v3);
}
