/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18013FA18
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BCFC (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18019DD14 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1802052BC (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 */

char __fastcall CExpressionValue::operator==(_QWORD *a1, _QWORD *a2)
{
  int v2; // r8d
  char v3; // bl
  char v4; // al
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  __int64 v17; // rax

  v2 = *((_DWORD *)a1 + 18);
  v3 = 0;
  if ( v2 != *((_DWORD *)a2 + 18) )
    return v3;
  v4 = *((_BYTE *)a1 + 76);
  if ( v4 != *((_BYTE *)a2 + 76) )
    return v3;
  if ( !v4 )
    return 1;
  if ( v2 > 52 )
  {
    v13 = v2 - 69;
    if ( v13 && (v14 = v13 - 1) != 0 )
    {
      v15 = v14 - 1;
      if ( !v15 )
        return (unsigned int)D2DQuaternion::operator==(a1, a2) != 0;
      v16 = v15 - 33;
      if ( v16 )
      {
        if ( v16 != 161 )
          return v3;
        return memcmp_0(a1, a2, 0x40uLL) == 0;
      }
      v17 = *a1 - *a2;
      if ( *a1 == *a2 )
      {
        v17 = a1[1] - a2[1];
        if ( !v17 )
          v17 = a1[2] - a2[2];
      }
    }
    else
    {
      v17 = *a1 - *a2;
      if ( *a1 == *a2 )
        v17 = a1[1] - a2[1];
    }
    return v17 == 0;
  }
  if ( v2 == 52 )
  {
    v12 = *a1 - *a2;
    if ( *a1 == *a2 )
      v12 = *((unsigned int *)a1 + 2) - (unsigned __int64)*((unsigned int *)a2 + 2);
    return v12 == 0;
  }
  v5 = v2 - 11;
  if ( !v5 )
  {
    v11 = a1[8];
    if ( v11 && a2[8] )
      return CPathData::operator==(v11, a2[8]);
    return v11 == a2[8];
  }
  v6 = v5 - 6;
  if ( !v6 )
    return *(_BYTE *)a1 == *(_BYTE *)a2;
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 17;
    if ( v8 )
    {
      if ( v8 != 7 )
        return v3;
      goto LABEL_11;
    }
    return *a1 == *a2;
  }
LABEL_11:
  if ( *(float *)a1 == *(float *)a2 )
    return 1;
  return v3;
}
