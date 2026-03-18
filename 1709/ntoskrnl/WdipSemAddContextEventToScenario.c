/*
 * XREFs of WdipSemAddContextEventToScenario @ 0x14073EAB0
 * Callers:
 *     WdipSemMergeScenarios @ 0x14073EC80 (WdipSemMergeScenarios.c)
 * Callees:
 *     WdipSemFastAllocate @ 0x1405AAA04 (WdipSemFastAllocate.c)
 *     WdipSemMergeEvents @ 0x14073EC4C (WdipSemMergeEvents.c)
 */

__int64 __fastcall WdipSemAddContextEventToScenario(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  _QWORD *v7; // r9
  __int64 v8; // rdx
  PSLIST_ENTRY v9; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    v5 = *(_DWORD *)(a1 + 48);
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD **)(a1 + 8LL * v6 + 56);
        v8 = *(_QWORD *)a2 - *v7;
        if ( *(_QWORD *)a2 == *v7 )
          v8 = *(_QWORD *)(a2 + 8) - v7[1];
        if ( !v8 )
          break;
        if ( ++v6 >= v5 )
          goto LABEL_9;
      }
      WdipSemMergeEvents(*(_QWORD *)(a1 + 8LL * v6 + 56), a2);
    }
    else
    {
LABEL_9:
      if ( v5 < 0x7C )
      {
        v9 = WdipSemFastAllocate(0, 0x30u);
        if ( v9 )
        {
          *v9 = *(PSLIST_ENTRY)a2;
          v9[1] = *(PSLIST_ENTRY)(a2 + 16);
          v9[2] = *(PSLIST_ENTRY)(a2 + 32);
          *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 48))++ + 56) = v9;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
