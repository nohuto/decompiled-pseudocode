/*
 * XREFs of _GetClientRect @ 0x1C013E1F0
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C008E290 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     GetDwmDependentMetric @ 0x1C002BF30 (GetDwmDependentMetric.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rcx
  __int64 result; // rax
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ecx

  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 || (*(_BYTE *)(a1 + 61) & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x29D )
    {
      v5 = *(_OWORD *)(a1 + 144);
      v6 = *(_DWORD *)(a1 + 144);
      v7 = -*(_DWORD *)(a1 + 148);
      *(_OWORD *)a2 = v5;
      *(_DWORD *)(a2 + 12) += v7;
      result = (unsigned int)-v6;
      *(_DWORD *)a2 += result;
      *(_DWORD *)(a2 + 8) += result;
      *(_DWORD *)(a2 + 4) += v7;
      return result;
    }
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = GetDwmDependentMetric(0);
    result = GetDwmDependentMetric(1);
  }
  else
  {
    v3 = gpsi;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = v3[527];
    result = (unsigned int)v3[528];
  }
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
