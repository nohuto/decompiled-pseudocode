/*
 * XREFs of XFORMOBJ_bApplyXform @ 0x1C029B110
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C0293DA0 (NtGdiXFORMOBJ_bApplyXform.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

BOOL __stdcall XFORMOBJ_bApplyXform(XFORMOBJ *pxo, ULONG iMode, ULONG cPoints, PVOID pvIn, PVOID pvOut)
{
  _DWORD *v5; // rdi
  int v6; // esi
  unsigned __int64 v7; // rbp
  struct _POINTFIX *v8; // rbx
  struct MATRIX *v11; // rdx
  unsigned __int64 v13; // r9
  struct _POINTFIX *v14; // rax
  struct _POINTFIX *v15; // rbp
  char *v16; // [rsp+20h] [rbp-68h] BYREF
  int v17; // [rsp+2Ch] [rbp-5Ch]
  char v18; // [rsp+30h] [rbp-58h] BYREF

  v5 = pvOut;
  v6 = 0;
  v7 = cPoints;
  v8 = (struct _POINTFIX *)pvIn;
  if ( !pxo || !pvIn || !pvOut )
    return 0;
  if ( iMode )
  {
    if ( iMode == 2 )
      return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints);
    v11 = *(struct MATRIX **)&pxo->ulReserved;
    v16 = &v18;
    v17 = 0;
    if ( !EXFORMOBJ::bInverse((EXFORMOBJ *)&v16, v11) )
      return v6;
    if ( iMode == 1 )
    {
      if ( v8 != pvOut )
      {
        v13 = v7;
        v14 = v8;
        v15 = &v8[v7];
        if ( v8 < v15 )
        {
          do
          {
            v14->x *= 16;
            v14->y *= 16;
            ++v14;
          }
          while ( v14 < v15 );
        }
        v6 = EXFORMOBJ::bXform((EXFORMOBJ *)&v16, v8, (struct _POINTL *)pvOut, v13);
        while ( v8 < v15 )
        {
          v8->x >>= 4;
          v8->y >>= 4;
          ++v8;
        }
        return v6;
      }
      return EXFORMOBJ::bXform((EXFORMOBJ *)&v16, (struct _POINTL *)v8, v7);
    }
    else
    {
      if ( iMode != 3 )
        return v6;
      return EXFORMOBJ::bXform((EXFORMOBJ *)&v16, v8, (struct _POINTL *)pvOut, v7);
    }
  }
  if ( pvIn == pvOut )
    return EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, cPoints);
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints) )
    return 0;
  while ( v5 < (_DWORD *)((char *)pvOut + 8 * v7) )
  {
    *v5 = (*v5 + 8) >> 4;
    v5[1] = (v5[1] + 8) >> 4;
    v5 += 2;
  }
  return 1;
}
