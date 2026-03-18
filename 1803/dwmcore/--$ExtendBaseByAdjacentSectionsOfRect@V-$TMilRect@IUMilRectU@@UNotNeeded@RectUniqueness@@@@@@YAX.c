/*
 * XREFs of ??$ExtendBaseByAdjacentSectionsOfRect@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@@YAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@0AEAV0@@Z @ 0x1801EE078
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendBaseByAdjacentSectionsOfRect<TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  char v6; // r11
  unsigned int v7; // eax
  unsigned int v8; // r8d
  char v9; // r10
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 result; // rax

  v3 = a2[3];
  v5 = a1[1];
  v6 = 1;
  if ( v3 < v5 || a2[1] > a1[3] || (v7 = *a1, *a2 > *a1) || (v8 = a2[2], a1[2] > v8) )
  {
    v8 = a2[2];
    v9 = 0;
    v7 = *a1;
  }
  else
  {
    v9 = 1;
  }
  if ( v8 < v7 || (v10 = *a2, *a2 > a1[2]) || a2[1] > v5 || a1[3] > v3 )
  {
    v6 = 0;
  }
  else if ( v10 < v7 )
  {
    goto LABEL_15;
  }
  v10 = v7;
LABEL_15:
  *a3 = v10;
  if ( !v9 || (v11 = a2[1], v11 >= a1[1]) )
    v11 = a1[1];
  a3[1] = v11;
  if ( !v6 || (v12 = a2[2], v12 <= a1[2]) )
    v12 = a1[2];
  a3[2] = v12;
  if ( !v9 || (result = a2[3], (unsigned int)result <= a1[3]) )
    result = a1[3];
  a3[3] = result;
  return result;
}
