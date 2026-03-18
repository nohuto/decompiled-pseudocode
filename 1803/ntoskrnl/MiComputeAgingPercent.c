/*
 * XREFs of MiComputeAgingPercent @ 0x1400BB4D4
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeAgingPercent(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // r8
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int16 v12; // dx

  v1 = *(_QWORD *)(a1 + 6768);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  v3 = 0LL;
  v4 = (unsigned __int64 *)(v1 + 2280);
  v5 = 8LL;
  do
  {
    v6 = *v4;
    if ( *v4 < AvailablePagesBelowPriority )
    {
      v6 = AvailablePagesBelowPriority;
      *v4 = AvailablePagesBelowPriority;
    }
    v3 += v6;
    ++v4;
    --v5;
  }
  while ( v5 );
  v7 = v3 >> 3;
  *(_QWORD *)(v1 + 2344) = (AvailablePagesBelowPriority + 7 * v7) >> 3;
  result = *(_DWORD *)(v1 + 128) & 7;
  *(_QWORD *)(v1 + 8 * result + 2280) = AvailablePagesBelowPriority;
  ++*(_DWORD *)(v1 + 128);
  if ( AvailablePagesBelowPriority >= v7 )
  {
    *(_WORD *)(v1 + 2354) = 0;
    v11 = 3600LL;
  }
  else
  {
    result = *(_QWORD *)(v1 + 2408);
    v9 = v7 - AvailablePagesBelowPriority;
    if ( AvailablePagesBelowPriority <= result )
    {
      v11 = 0LL;
    }
    else
    {
      v10 = AvailablePagesBelowPriority - result;
      if ( v9 < 8 )
        v9 = 8LL;
      result = v10 / (v9 >> 3);
      v11 = result - 2;
      if ( result < 2 )
        v11 = result;
    }
    if ( v11 )
    {
      result = 0x1B58 / v11;
      if ( (unsigned int)(0x1B58 / v11) > 0x3E8 )
        result = 1000LL;
      v12 = result;
    }
    else
    {
      v12 = 1000;
    }
    *(_WORD *)(v1 + 2354) = v12;
  }
  *(_QWORD *)(v1 + 2360) = v11;
  return result;
}
