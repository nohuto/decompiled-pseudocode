/*
 * XREFs of mth_Non90DegreeTransformation @ 0x1C02BDB54
 * Callers:
 *     scl_InitializeScaling @ 0x1C02BE930 (scl_InitializeScaling.c)
 * Callees:
 *     FixMul @ 0x1C02BD1FC (FixMul.c)
 */

__int64 __fastcall mth_Non90DegreeTransformation(int *a1, BOOL *a2, int *a3)
{
  int v3; // r14d
  int v5; // edi
  int v6; // ebp
  int v8; // esi
  int fixed; // eax
  int v10; // r10d
  int v11; // ebx
  BOOL v12; // r11d
  __int64 result; // rax
  int v14; // r10d
  int v15; // r11d
  int v16; // r11d
  int v17; // r10d
  int v18; // r10d

  v3 = a1[4];
  v5 = *a1;
  v6 = a1[3];
  v8 = a1[1];
  FixMul(v8, v3);
  fixed = FixMul(v5, v6);
  if ( fixed + v10 )
  {
    v11 = 0;
    v16 = 1;
    if ( !v5 || (result = 1LL, !v8) )
      result = 0LL;
    *a2 = result;
    if ( (_DWORD)result
      || (FixMul(v8, v8), result = FixMul(v5, v5), (_DWORD)result + v17 != 0x10000)
      || (FixMul(v5, v3), result = FixMul(v8, v6), v18 - (_DWORD)result != 0x10000) )
    {
      v11 = v16;
    }
  }
  else
  {
    v11 = 0;
    v12 = (v5 || v3) && (v8 || v6);
    *a2 = v12;
    FixMul(v3, v3);
    FixMul(v6, v6);
    FixMul(v8, v8);
    result = FixMul(v5, v5);
    LOBYTE(v11) = (_DWORD)result + v14 != v15;
  }
  *a3 = v11;
  return result;
}
