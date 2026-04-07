/*
 * XREFs of ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x18000318C
 * Callers:
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x1800027C8 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180006C10 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x180010510 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800702A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CAccent::UpdateAccentBlurRect(CAccent *this, const struct tagRECT *a2)
{
  LONG left; // eax
  struct CResource *v3; // rbx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CResource *v8; // [rsp+38h] [rbp+10h] BYREF

  left = a2->left;
  v3 = 0LL;
  v8 = 0LL;
  if ( a2->right <= left || a2->bottom <= a2->top )
    goto LABEL_5;
  v5 = ResourceHelper::CreateRectangleGeometry(a2, &v8);
  if ( v5 >= 0 )
  {
    v3 = v8;
LABEL_5:
    CAccent::SetClipRegion(this, v3);
    goto LABEL_6;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2FB,
    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v5,
    v6);
  v3 = v8;
LABEL_6:
  if ( v3 )
    CBaseObject::Release(v3);
}
