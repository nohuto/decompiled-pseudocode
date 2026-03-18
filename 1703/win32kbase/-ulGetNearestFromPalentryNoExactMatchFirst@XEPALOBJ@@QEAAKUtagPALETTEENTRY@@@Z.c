/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C005A020
 * Callers:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0059E40 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00FD960 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00D51DC (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(XEPALOBJ *this, struct tagPALETTEENTRY a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax
  unsigned __int8 *v4; // r9
  unsigned __int8 *v5; // r8
  unsigned __int8 *v6; // rdi
  unsigned __int8 *v7; // rbx
  unsigned int v8; // r11d
  unsigned int v9; // r10d

  v2 = *(_QWORD **)this;
  v3 = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( !(_DWORD)v3 )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v4 = 0LL;
  if ( v2 == WPP_MAIN_CB.Reserved )
    v5 = (unsigned __int8 *)&aPalDefaultVGA;
  else
    v5 = (unsigned __int8 *)v2[15];
  v6 = &v5[4 * v3];
  v7 = v5;
  v8 = 196608;
  do
  {
    v9 = pArrayOfSquares[v5[1] - a2.peGreen] + pArrayOfSquares[*v5 - a2.peRed] + pArrayOfSquares[v5[2] - a2.peBlue];
    if ( v9 < v8 )
    {
      v4 = v5;
      v8 = pArrayOfSquares[v5[1] - a2.peGreen] + pArrayOfSquares[*v5 - a2.peRed] + pArrayOfSquares[v5[2] - a2.peBlue];
      if ( !v9 )
        break;
    }
    v5 += 4;
  }
  while ( v5 < v6 );
  return (v4 - v7) >> 2;
}
