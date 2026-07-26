/*
 * XREFs of ndisOidPreRcvFilterAllocateQueue @ 0x1C00DC080
 * Callers:
 *     <none>
 * Callees:
 *     ndisAllocateReceiveQueue @ 0x1C003AA8C (ndisAllocateReceiveQueue.c)
 */

char __fastcall ndisOidPreRcvFilterAllocateQueue(__int64 a1)
{
  _DWORD *v1; // rax
  char v2; // dl

  v1 = *(_DWORD **)(a1 + 32);
  v2 = 1;
  if ( v1[1] == 12 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( v1[12] >= 0x43Cu )
    {
      if ( v1[13] >= 0x43Cu )
      {
        if ( *(_QWORD *)a1 )
          return ndisAllocateReceiveQueue(a1);
        else
          return 0;
      }
      else
      {
        v1[17] = 1084;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      v1[17] = 1084;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
