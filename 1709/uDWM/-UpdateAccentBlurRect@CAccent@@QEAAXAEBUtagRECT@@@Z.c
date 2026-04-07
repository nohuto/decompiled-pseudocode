/*
 * XREFs of ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x18000843C
 * Callers:
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x180007B2C (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180009148 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x180012480 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CAccent::UpdateAccentBlurRect(CAccent *this, const struct tagRECT *a2)
{
  LONG left; // eax
  struct CResource *v3; // rbx
  int v5; // eax
  struct CResource *v6; // [rsp+48h] [rbp+10h] BYREF

  left = a2->left;
  v3 = 0LL;
  v6 = 0LL;
  if ( a2->right <= left || a2->bottom <= a2->top )
    goto LABEL_5;
  v5 = ResourceHelper::CreateRectangleGeometry(a2, &v6);
  if ( v5 >= 0 )
  {
    v3 = v6;
LABEL_5:
    CAccent::SetClipRegion(this, v3);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x30Au);
  v3 = v6;
LABEL_6:
  if ( v3 )
    CBaseObject::Release(v3);
}
