/*
 * XREFs of CiConfigTaskPolicy @ 0x1C000D080
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiConfigTaskPolicy(__int64 a1)
{
  unsigned __int8 v2; // dl
  char v3; // r9
  __int64 result; // rax
  bool v5; // zf
  __int64 v6; // rcx

  *(_BYTE *)(a1 + 3) &= ~1u;
  v2 = *(_BYTE *)(a1 + 3);
  if ( CiSystemResponsiveness == 100 )
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v2 >> 4) & 7];
  }
  else
  {
    v3 = (v2 >> 4) & 7;
    if ( v3 == 3 )
    {
      *(_BYTE *)a1 = 24;
      *(_BYTE *)(a1 + 3) = v2 | 1;
    }
    else
    {
      *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v2 >> 4) & 7];
      if ( v3 == 2 )
        *(_BYTE *)(a1 + 3) = v2 | 1;
    }
  }
  result = qword_1C0006210;
  v5 = (qword_1C0006210 & *(_QWORD *)(a1 + 32)) == 0;
  *(_QWORD *)(a1 + 32) &= qword_1C0006210;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v5 )
    v6 = qword_1C0006210;
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}
