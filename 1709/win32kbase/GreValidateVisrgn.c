/*
 * XREFs of GreValidateVisrgn @ 0x1C00552A4
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004961C (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0055314 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  struct REGION **v3; // rcx
  struct DC *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v4, a1);
  v3 = (struct REGION **)v4[0];
  if ( v4[0] )
  {
    if ( a2 )
      *((_DWORD *)v4[0] + 9) |= 0x100000u;
    else
      *((_DWORD *)v4[0] + 9) &= ~0x100000u;
    GrepValidateVisRgn((struct DC *)v3, v3[192]);
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v4);
  }
}
