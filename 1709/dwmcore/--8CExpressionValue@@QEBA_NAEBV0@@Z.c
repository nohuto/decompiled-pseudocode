/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18011CCE8
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1801C8E7C (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
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
  unsigned __int64 v9; // r8
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rax

  v2 = *((_DWORD *)a1 + 16);
  v3 = 0;
  if ( v2 != *((_DWORD *)a2 + 16) )
    return v3;
  v4 = *((_BYTE *)a1 + 68);
  if ( v4 != *((_BYTE *)a2 + 68) )
    return v3;
  if ( !v4 )
    return 1;
  if ( v2 > 69 )
  {
    v12 = v2 - 70;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
        return (unsigned int)D2DQuaternion::operator==(a1, a2) != 0;
      v14 = v13 - 33;
      if ( v14 )
      {
        if ( v14 != 161 )
          return v3;
        return memcmp_0(a1, a2, 0x40uLL) == 0;
      }
      v15 = *a1 - *a2;
      if ( *a1 == *a2 )
      {
        v15 = a1[1] - a2[1];
        if ( !v15 )
          v15 = a1[2] - a2[2];
      }
      return v15 == 0;
    }
LABEL_28:
    v15 = *a1 - *a2;
    if ( *a1 == *a2 )
      v15 = a1[1] - a2[1];
    return v15 == 0;
  }
  if ( v2 == 69 )
    goto LABEL_28;
  v5 = v2 - 17;
  if ( !v5 )
    return *(_BYTE *)a1 == *(_BYTE *)a2;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_15;
  v7 = v6 - 17;
  if ( !v7 )
    return *a1 == *a2;
  v8 = v7 - 7;
  if ( !v8 )
  {
LABEL_15:
    if ( *(float *)a1 != *(float *)a2 )
      return v3;
    return 1;
  }
  if ( v8 == 10 )
  {
    v9 = *a1 - *a2;
    if ( *a1 == *a2 )
      v9 = *((unsigned int *)a1 + 2) - (unsigned __int64)*((unsigned int *)a2 + 2);
    return v9 == 0;
  }
  return v3;
}
