/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1C009E430
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C003F6E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreGetNearestColor @ 0x1C00634D0 (GreGetNearestColor.c)
 * Callees:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C00413F8 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 */

unsigned int __fastcall ulGetNearestIndexFromColorref(__int64 a1, __int64 a2, tagPALETTEENTRY a3, int a4)
{
  __int64 v5; // r10
  tagPALETTEENTRY v6; // edx
  unsigned int result; // eax
  __int64 v8; // r8
  struct PALETTE *v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+10h] BYREF
  __int64 v11; // [rsp+48h] [rbp+18h] BYREF
  tagPALETTEENTRY v12; // [rsp+50h] [rbp+20h]

  v11 = a2;
  v10 = a1;
  v12 = a3;
  v5 = a1;
  if ( a1 && (*(_DWORD *)(a1 + 24) & 0x800) == 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x1000000) == 0 )
    {
      if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
        return (unsigned int)a3.peRed < *(_DWORD *)(a1 + 28) ? a3.peRed : 0;
      v12.peFlags = 0;
      v6 = v12;
      return XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v10, v6, a4);
    }
    if ( a2 )
    {
      v6 = *(tagPALETTEENTRY *)(*(_QWORD *)(a2 + 120)
                              + 4LL
                              * (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(a2 + 28))));
      return XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v10, v6, a4);
    }
    return 0;
  }
  if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
  {
    if ( !a2 )
      return 0;
    v12.peFlags = 0;
    if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
    {
      result = (unsigned int)v12;
      if ( *(unsigned int *)&v12 >= *(_DWORD *)(a2 + 28) )
        result = 0;
    }
    else
    {
      result = XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v11, v12, a4);
      a2 = v11;
      v5 = v10;
    }
    if ( (struct PALETTE *)a2 == ppalDefault )
    {
LABEL_30:
      if ( result < 0xA )
        return result;
      goto LABEL_31;
    }
    if ( v5 )
      v8 = *(_QWORD *)(a2 + 80);
    else
      v8 = *(_QWORD *)(a2 + 72);
    if ( v8 )
      return *(unsigned __int8 *)(result + v8 + 4);
    a3 = *(tagPALETTEENTRY *)(*(_QWORD *)(a2 + 120) + 4LL * result);
    v12 = a3;
    if ( a3.peFlags == 2 )
      return a3.peRed;
  }
  if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
    return a3.peRed;
  v12.peFlags = 0;
  result = (unsigned int)v12;
  if ( v12 != 0xFFFFFF )
  {
    if ( v12 )
    {
      v9 = ppalDefault;
      result = XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v9, v12, a4);
    }
    goto LABEL_30;
  }
  result = 19;
LABEL_31:
  result += 236;
  return result;
}
