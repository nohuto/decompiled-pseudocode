/*
 * XREFs of ndisValidOid @ 0x1C00A5E4C
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 *     ndisQueryStatisticsOids @ 0x1C00A5E9C (ndisQueryStatisticsOids.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidOid(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v2 + 32) < 6u && (a2 & 0xFF000000) == 0xFF000000 || (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = 0;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4LL * v5) == a2 )
            break;
          ++v5;
        }
        while ( v5 < v6 );
      }
      LOBYTE(v4) = v5 < v6;
    }
  }
  return v4;
}
