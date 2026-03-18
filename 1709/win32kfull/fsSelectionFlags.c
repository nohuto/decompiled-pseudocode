/*
 * XREFs of fsSelectionFlags @ 0x1C0235E3C
 * Callers:
 *     vBmfdFill_IFIMETRICS @ 0x1C02360A0 (vBmfdFill_IFIMETRICS.c)
 *     cFacesRes @ 0x1C0237034 (cFacesRes.c)
 *     vDefFace @ 0x1C0237640 (vDefFace.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0238AAC (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall fsSelectionFlags(_BYTE *a1)
{
  __int16 v2; // dx
  __int16 v3; // r8
  bool v4; // zf
  char v5; // al
  __int16 v6; // cx
  __int16 v7; // dx
  __int16 result; // ax

  v2 = a1[80] != 0;
  v3 = v2 | 2;
  v4 = a1[81] == 0;
  v5 = a1[82];
  v6 = (unsigned __int8)a1[84];
  if ( v4 )
    v3 = v2;
  v7 = v3 | 0x10;
  if ( !v5 )
    v7 = v3;
  result = v7 | 0x20;
  if ( (unsigned __int16)((unsigned __int8)a1[83] | (unsigned __int16)(v6 << 8)) <= 0x190u )
    return v7;
  return result;
}
