/*
 * XREFs of CiConfigTaskPolicy @ 0x1C000D850
 * Callers:
 *     CiConfigInitializeFromRegistry @ 0x1C000D670 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiConfigTaskPolicy(__int64 a1)
{
  unsigned __int8 v1; // r9
  __int64 result; // rax
  bool v3; // zf
  __int64 v4; // rdx

  *(_BYTE *)(a1 + 3) &= ~1u;
  v1 = *(_BYTE *)(a1 + 3);
  if ( CiSystemResponsiveness == 100 )
  {
    *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
  }
  else
  {
    if ( (v1 & 0x70) == 0x30 )
    {
      *(_BYTE *)a1 = 24;
    }
    else
    {
      *(_BYTE *)a1 = *(_BYTE *)(a1 + 1) + CiSchedulingCategoryPriorityMap[((unsigned __int64)v1 >> 4) & 7];
      if ( (v1 & 0x70) != 0x20 )
        goto LABEL_5;
    }
    *(_BYTE *)(a1 + 3) = v1 | 1;
  }
LABEL_5:
  result = qword_1C00071F0;
  v3 = (qword_1C00071F0 & *(_QWORD *)(a1 + 32)) == 0;
  *(_QWORD *)(a1 + 32) &= qword_1C00071F0;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    v4 = qword_1C00071F0;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
