/*
 * XREFs of _GetClientRect @ 0x1C013D708
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C0095EE0 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C013D6D4 (GetPrimaryMonitorRect.c)
 */

unsigned __int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rcx
  unsigned __int64 result; // rax
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ecx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 || (*(_BYTE *)(a1 + 61) & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
    {
      result = (unsigned __int64)GetPrimaryMonitorRect(&v8);
      *(_OWORD *)a2 = *(_OWORD *)result;
    }
    else
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
    }
  }
  else
  {
    v3 = gpsi;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = v3[527];
    result = (unsigned int)v3[528];
    *(_DWORD *)(a2 + 12) = result;
  }
  return result;
}
