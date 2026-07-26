/*
 * XREFs of ndisIsWoLPacketTypeSupported @ 0x1C00BB060
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00BA844 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BA92C (ndisMiniportPreAddWoLPattern.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00D6C10 (ndisRejectUnsupportedWoLPatterns.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsWoLPacketTypeSupported(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v5 = v3 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
          {
            LOBYTE(v4) = 0;
            return v4;
          }
          LOBYTE(v4) = *(_BYTE *)(a2 + 1070);
        }
        else
        {
          v4 = *(_DWORD *)(a2 + 1068) >> 3;
        }
      }
      else
      {
        v4 = *(_DWORD *)(a2 + 1068) >> 2;
      }
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 1068) >> 1;
    }
    LOBYTE(v4) = v4 & 1;
  }
  else
  {
    return *(_DWORD *)(a2 + 1068) & 1;
  }
  return v4;
}
