/*
 * XREFs of MiComputeAgingPercent @ 0x140083B20
 * Callers:
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeAgingPercent(__int64 a1)
{
  __int64 AvailablePagesBelowPriority; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  __int16 v10; // dx

  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  v3 = *(_QWORD *)(a1 + 5544);
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
    if ( v9 )
    {
      result = 0x1B58 / v9;
      if ( (unsigned int)(0x1B58 / v9) > 0x3E8 )
        result = 1000LL;
      v10 = result;
    }
    else
    {
      v10 = 1000;
    }
    *(_WORD *)(v3 + 2354) = v10;
    *(_QWORD *)(v3 + 2360) = v9;
  }
  return result;
}
