/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1C00FD960
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C002ED50 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreGetNearestColor @ 0x1C0058F50 (GreGetNearestColor.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0059E40 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C005A020 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall ulGetNearestIndexFromColorref(__int64 a1, struct PALETTE *a2, tagPALETTEENTRY a3, int a4)
{
  struct PALETTE *v5; // r10
  unsigned int v6; // r8d
  unsigned int result; // eax
  PVOID Reserved; // rcx
  __int64 v9; // r8
  struct PALETTE *v10[2]; // [rsp+20h] [rbp-10h] BYREF
  struct PALETTE *v11; // [rsp+40h] [rbp+10h] BYREF
  struct PALETTE *v12; // [rsp+48h] [rbp+18h] BYREF
  tagPALETTEENTRY v13; // [rsp+50h] [rbp+20h]

  v12 = a2;
  v11 = (struct PALETTE *)a1;
  v13 = a3;
  v5 = (struct PALETTE *)a1;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 0x800) != 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x3000000) != 0 )
    {
      if ( !a2 )
        return 0;
      v13.peFlags = 0;
      if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
      {
        result = (unsigned int)v13;
        if ( *(unsigned int *)&v13 >= *((_DWORD *)a2 + 7) )
          result = 0;
      }
      else
      {
        if ( a4 )
          result = XEPALOBJ::ulDispatchGFPEFunction(&v12, *((_DWORD *)a2 + 24), *(_DWORD *)&v13);
        else
          result = XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v12, v13);
        a2 = v12;
        v5 = v11;
      }
      Reserved = WPP_MAIN_CB.Reserved;
      if ( a2 == WPP_MAIN_CB.Reserved )
        goto LABEL_38;
      if ( v5 )
        v9 = *((_QWORD *)a2 + 10);
      else
        v9 = *((_QWORD *)a2 + 9);
      if ( v9 )
        return *(unsigned __int8 *)(result + v9 + 4);
      a3 = *(tagPALETTEENTRY *)(*((_QWORD *)a2 + 15) + 4LL * result);
      v13 = a3;
      if ( a3.peFlags == 2 )
        return a3.peRed;
    }
    else
    {
      Reserved = WPP_MAIN_CB.Reserved;
    }
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return a3.peRed;
    v13.peFlags = 0;
    result = (unsigned int)v13;
    if ( v13 == 0xFFFFFF )
    {
      result = 19;
LABEL_39:
      result += 236;
      return result;
    }
    if ( v13 )
    {
      v10[0] = (struct PALETTE *)Reserved;
      if ( a4 )
        result = XEPALOBJ::ulDispatchGFPEFunction(v10, *((_DWORD *)Reserved + 24), *(_DWORD *)&v13);
      else
        result = XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)v10, v13);
    }
LABEL_38:
    if ( result < 0xA )
      return result;
    goto LABEL_39;
  }
  if ( (*(_DWORD *)&a3 & 0x1000000) == 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned int)a3.peRed < *(_DWORD *)(a1 + 28) ? a3.peRed : 0;
    v13.peFlags = 0;
    v6 = (unsigned int)v13;
    goto LABEL_9;
  }
  if ( !a2 )
    return 0;
  v6 = *(_DWORD *)(*((_QWORD *)a2 + 15)
                 + 4LL
                 * (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < *((_DWORD *)a2 + 7))));
LABEL_9:
  if ( a4 )
    return XEPALOBJ::ulDispatchGFPEFunction(&v11, *(_DWORD *)(a1 + 96), v6);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v11, (struct tagPALETTEENTRY)v6);
}
