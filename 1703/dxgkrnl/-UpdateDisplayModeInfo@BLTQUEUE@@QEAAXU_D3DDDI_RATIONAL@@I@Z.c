/*
 * XREFs of ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C0103BAC
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0103A18 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01B6A94 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfo(struct _D3DDDI_RATIONAL *this, struct _D3DDDI_RATIONAL a2, UINT a3)
{
  if ( !a2.Numerator || !a2.Denominator )
    a2 = (struct _D3DDDI_RATIONAL)0x10000003CLL;
  this[52] = a2;
  this[53].Numerator = a3;
  BYTE2(this[50].Numerator) = 1;
  BLTQUEUE::IssueCommand((BLTQUEUE *)this);
}
