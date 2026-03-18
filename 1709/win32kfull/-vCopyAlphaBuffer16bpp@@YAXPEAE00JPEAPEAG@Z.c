/*
 * XREFs of ?vCopyAlphaBuffer16bpp@@YAXPEAE00JPEAPEAG@Z @ 0x1C025389C
 * Callers:
 *     ?vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AX000JPEAPEAG@Z0@Z @ 0x1C0253A5C (-vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AX000JPEAPEAG@Z0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vCopyAlphaBuffer16bpp(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int16 **a5)
{
  unsigned __int16 *v5; // r8
  char v6; // r10
  unsigned __int64 v7; // r9

  v5 = (unsigned __int16 *)&a3[(unsigned __int8)a2 & 3];
  *a5 = v5;
  if ( ((unsigned __int8)a2 & 2) != 0 )
  {
    if ( (unsigned __int8)(*a1 - 1) < 0x71u )
      *v5 = *(_WORD *)a2;
    a2 += 2;
    ++v5;
    ++a1;
    --a4;
  }
  v6 = a4 - 2;
  if ( (int)(a4 - 2) >= 0 )
  {
    v7 = (unsigned __int64)a4 >> 1;
    do
    {
      if ( (unsigned __int8)(*a1 - 1) < 0x71u || (unsigned __int8)(a1[1] - 1) < 0x71u )
        *(_DWORD *)v5 = *(_DWORD *)a2;
      a2 += 4;
      v5 += 2;
      a1 += 2;
      --v7;
    }
    while ( v7 );
  }
  if ( (v6 & 1) != 0 && (unsigned __int8)(*a1 - 1) < 0x71u )
    *v5 = *(_WORD *)a2;
}
