/*
 * XREFs of MiComputeAgingPercent @ 0x1400F4F08
 * Callers:
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeAgingPercent(__int64 a1)
{
  __int64 AvailablePagesBelowPriority; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  __int16 v10; // cx

  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  v3 = *(_QWORD *)(v2 + 5680);
  v4 = AvailablePagesBelowPriority;
  v5 = *(_QWORD *)(v3 + 2344) >> 3;
  *(_QWORD *)(v3 + 2344) = AvailablePagesBelowPriority + 7 * v5;
  result = *(_DWORD *)(v3 + 128) & 7;
  *(_QWORD *)(v3 + 8 * result + 2280) = v4;
  if ( v4 >= v5 )
  {
    *(_WORD *)(v3 + 2354) = 0;
  }
  else
  {
    result = *(_QWORD *)(v3 + 2408);
    v7 = v5 - v4;
    if ( v4 <= result )
    {
      v9 = 0LL;
    }
    else
    {
      v8 = v4 - result;
      if ( v7 < 8 )
        v7 = 8LL;
      result = v8 / (v7 >> 3);
      v9 = result - 2;
      if ( result < 2 )
        v9 = result;
    }
    v10 = 1000;
    if ( v9 )
    {
      result = 0x1B58 / v9;
      if ( (unsigned int)(0x1B58 / v9) > 0x3E8 )
        result = 1000LL;
      v10 = result;
    }
    *(_WORD *)(v3 + 2354) = v10;
    *(_QWORD *)(v3 + 2360) = v9;
  }
  return result;
}
