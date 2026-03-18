/*
 * XREFs of GetMouseEventInputSource @ 0x1C012EBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMouseEventInputSource(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 48);
  if ( (v2 & 4) != 0 )
  {
    *a2 = 4;
  }
  else if ( (v2 & 8) != 0 )
  {
    *a2 = 8;
  }
  else if ( (v2 & 0x100) != 0 )
  {
    *a2 = 18;
  }
  else
  {
    *a2 = (*(_DWORD *)(a1 + 48) & 0x200 | 0x20u) >> 4;
  }
  result = *(unsigned int *)(a1 + 48);
  if ( (result & 0x10) != 0 )
  {
    a2[1] = 1;
  }
  else
  {
    result = 2 * (*(_DWORD *)(a1 + 48) & 1u);
    a2[1] = result;
  }
  return result;
}
