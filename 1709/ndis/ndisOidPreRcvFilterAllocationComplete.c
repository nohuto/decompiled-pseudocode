/*
 * XREFs of ndisOidPreRcvFilterAllocationComplete @ 0x1C00DA530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ndisOidPreRcvFilterAllocationComplete(__int64 a1)
{
  _DWORD *v1; // rax
  char v2; // dl

  v1 = *(_DWORD **)(a1 + 32);
  v2 = 1;
  if ( v1[1] == 12 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v1[12] >= 0x14u )
    {
      if ( v1[13] < 0x14u )
      {
        v1[17] = 20;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      v1[17] = 20;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    return *(_DWORD *)(a1 + 40) != 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
