/*
 * XREFs of CiConfigTaskPolicy @ 0x1C000D084
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiConfigTaskPolicy(__int64 a1)
{
  unsigned __int8 v2; // r8
  bool v3; // zf
  char v4; // r9
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = *(_BYTE *)(a1 + 3) & 0xFE;
  v3 = CiSystemResponsiveness == 100;
  *(_BYTE *)(a1 + 3) = v2;
  if ( v3 )
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v2 >> 4) & 7];
  }
  else
  {
    v4 = (v2 >> 4) & 7;
    if ( v4 == 3 )
    {
      *(_BYTE *)a1 = 24;
      *(_BYTE *)(a1 + 3) = v2 | 1;
    }
    else
    {
      *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v2 >> 4) & 7];
      if ( v4 == 2 )
        *(_BYTE *)(a1 + 3) = v2 | 1;
    }
  }
  result = qword_1C0006210;
  v3 = (qword_1C0006210 & *(_QWORD *)(a1 + 32)) == 0;
  *(_QWORD *)(a1 + 32) &= qword_1C0006210;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    v6 = qword_1C0006210;
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}
