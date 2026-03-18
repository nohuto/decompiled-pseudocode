/*
 * XREFs of GreValidateVisrgn @ 0x1C007BB98
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0036C18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0036CB0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

DCOBJA *__fastcall GreValidateVisrgn(HDC a1, int a2)
{
  DCOBJA *result; // rax
  struct REGION **v4; // rcx
  struct DC *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  result = DCOBJA::DCOBJA((DCOBJA *)v5, a1);
  v4 = (struct REGION **)v5[0];
  if ( v5[0] )
  {
    if ( a2 )
      *((_DWORD *)v5[0] + 9) |= 0x100000u;
    else
      *((_DWORD *)v5[0] + 9) &= ~0x100000u;
    GrepValidateVisRgn((struct DC *)v4, v4[192]);
    XDCOBJ::RestoreAttributes((XDCOBJ *)v5);
    return (DCOBJA *)HmgDecrementShareReferenceCount((__int64)v5[0]);
  }
  return result;
}
