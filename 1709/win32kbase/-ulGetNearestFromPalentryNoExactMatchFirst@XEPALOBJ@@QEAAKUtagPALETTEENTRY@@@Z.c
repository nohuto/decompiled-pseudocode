/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0041060
 * Callers:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C00413F8 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00416E0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00DB418 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(XEPALOBJ *this, struct tagPALETTEENTRY a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // r10
  unsigned __int8 *v4; // r9
  unsigned __int8 *v5; // rdi
  unsigned int v6; // ebx
  unsigned __int8 *v7; // rsi
  unsigned int v8; // r11d

  v2 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 28LL) )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v3 = 0LL;
  v4 = (unsigned __int8 *)&aPalDefaultVGA;
  if ( (struct PALETTE *)v2 != ppalDefault )
    v4 = *(unsigned __int8 **)(v2 + 120);
  v5 = v4;
  v6 = 196608;
  v7 = &v4[4 * *(unsigned int *)(v2 + 28)];
  do
  {
    v8 = pArrayOfSquares[v4[1] - a2.peGreen] + pArrayOfSquares[*v4 - a2.peRed] + pArrayOfSquares[v4[2] - a2.peBlue];
    if ( v8 < v6 )
    {
      v3 = v4;
      v6 = pArrayOfSquares[v4[1] - a2.peGreen] + pArrayOfSquares[*v4 - a2.peRed] + pArrayOfSquares[v4[2] - a2.peBlue];
      if ( !v8 )
        break;
    }
    v4 += 4;
  }
  while ( v4 < v7 );
  return (v3 - v5) >> 2;
}
