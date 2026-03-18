/*
 * XREFs of ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C0059B80
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C002ED50 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0059E40 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

__int64 __fastcall ulGetMatchingIndexFromColorref(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned int *Reserved; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  _DWORD *v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+48h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+30h]

  v12 = a2;
  v11 = a1;
  v13 = a3;
  if ( !a1 || (a1[6] & 0x800) != 0 )
  {
    if ( (a3 & 0x3000000) != 0 )
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        result = (unsigned __int16)a3;
        if ( (unsigned int)(unsigned __int16)a3 >= *(_DWORD *)(a2 + 28) )
          result = 0LL;
      }
      else
      {
        v7 = *(unsigned int *)(a2 + 96);
        HIBYTE(v13) = 0;
        result = XEPALOBJ::ulDispatchGFPEFunction(&v12, v7, v13);
      }
      Reserved = (unsigned int *)WPP_MAIN_CB.Reserved;
      if ( (PVOID)a2 == WPP_MAIN_CB.Reserved )
      {
        if ( (unsigned int)result < 0xA )
          return result;
        return (unsigned int)(result + 236);
      }
      if ( a1 )
        v9 = *(_QWORD *)(a2 + 80);
      else
        v9 = *(_QWORD *)(a2 + 72);
      if ( v9 )
        return *(unsigned __int8 *)((unsigned int)result + v9 + 4);
      a3 = *(_DWORD *)(*(_QWORD *)(a2 + 120) + 4LL * (unsigned int)result);
      v13 = a3;
      if ( HIBYTE(a3) == 2 )
        return (unsigned __int8)a3;
    }
    else
    {
      Reserved = (unsigned int *)WPP_MAIN_CB.Reserved;
    }
    if ( (a3 & 0x10FF0000) != 0x10FF0000 )
    {
      HIBYTE(v13) = 0;
      result = v13;
      if ( v13 == 0xFFFFFF )
      {
        LODWORD(result) = 19;
      }
      else
      {
        if ( v13 )
        {
          v10 = Reserved[25];
          v11 = Reserved;
          result = XEPALOBJ::ulDispatchGFPEFunction(&v11, v10, v13);
        }
        if ( (unsigned int)(result - 10) > 0xFFFFFFF4 )
          return result;
      }
      return (unsigned int)(result + 236);
    }
    return (unsigned __int8)a3;
  }
  if ( (a3 & 0x1000000) != 0 )
  {
    v5 = *(unsigned int *)(*(_QWORD *)(a2 + 120)
                         + 4LL
                         * ((unsigned __int16)a3 & (unsigned int)-((unsigned int)(unsigned __int16)a3 < *(_DWORD *)(a2 + 28))));
  }
  else
  {
    if ( (a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned __int8)a3 & (unsigned int)-((unsigned int)(unsigned __int8)a3 < a1[7]);
    HIBYTE(v13) = 0;
    v5 = v13;
  }
  return XEPALOBJ::ulDispatchGFPEFunction(&v11, (unsigned int)a1[25], v5);
}
