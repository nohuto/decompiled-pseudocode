/*
 * XREFs of ndisIsPMProtocolOffloadSupported @ 0x1C00DF4B4
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00DF510 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E0E74 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisSourcePreAddProtocolOffload @ 0x1C00E1E00 (ndisSourcePreAddProtocolOffload.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsPMProtocolOffloadSupported(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax

  v2 = a1 - 1;
  if ( !v2 )
    return *(_DWORD *)(a2 + 1088) & 1;
  v3 = v2 - 1;
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a2 + 1088) >> 1;
    goto LABEL_7;
  }
  if ( v3 == 1 )
  {
    v4 = *(_DWORD *)(a2 + 1088) >> 7;
LABEL_7:
    LOBYTE(v4) = v4 & 1;
    return v4;
  }
  LOBYTE(v4) = 0;
  return v4;
}
