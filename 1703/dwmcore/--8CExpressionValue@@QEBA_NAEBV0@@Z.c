/*
 * XREFs of ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180020BB4
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180020A00 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180020AF0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800D5390 (memcmp_0.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18015B940 (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 */

char __fastcall CExpressionValue::operator==(_QWORD *a1, _BYTE *a2)
{
  int v2; // r8d
  char v3; // bl
  char v4; // al
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rax
  int v14; // r8d
  int v15; // r8d
  unsigned __int64 v16; // r8

  v2 = *((_DWORD *)a1 + 16);
  v3 = 0;
  if ( v2 == *((_DWORD *)a2 + 16) )
  {
    v4 = *((_BYTE *)a1 + 68);
    if ( v4 == a2[68] )
    {
      if ( v4 )
      {
        v5 = v2 - 17;
        if ( !v5 )
          return *(_BYTE *)a1 == *a2;
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 17;
          if ( !v7 )
            return *a1 == *(_QWORD *)a2;
          v8 = v7 - 17;
          if ( v8 )
          {
            v9 = v8 - 17;
            if ( v9 && (v10 = v9 - 1) != 0 )
            {
              v14 = v10 - 1;
              if ( !v14 )
                return (unsigned int)D2DQuaternion::operator==() != 0;
              v15 = v14 - 33;
              if ( v15 )
              {
                if ( v15 != 161 )
                  return v3;
                return memcmp_0(a1, a2, 0x40uLL) == 0;
              }
              v11 = *a1 - *(_QWORD *)a2;
              if ( *a1 == *(_QWORD *)a2 )
              {
                v11 = a1[1] - *((_QWORD *)a2 + 1);
                if ( !v11 )
                  v11 = a1[2] - *((_QWORD *)a2 + 2);
              }
            }
            else
            {
              v11 = *a1 - *(_QWORD *)a2;
              if ( *a1 == *(_QWORD *)a2 )
                v11 = a1[1] - *((_QWORD *)a2 + 1);
            }
            return v11 == 0;
          }
          else
          {
            v16 = *a1 - *(_QWORD *)a2;
            if ( *a1 == *(_QWORD *)a2 )
              v16 = *((unsigned int *)a1 + 2) - (unsigned __int64)*((unsigned int *)a2 + 2);
            return v16 == 0;
          }
        }
        if ( *(float *)a1 != *(float *)a2 )
          return v3;
      }
      return 1;
    }
  }
  return v3;
}
