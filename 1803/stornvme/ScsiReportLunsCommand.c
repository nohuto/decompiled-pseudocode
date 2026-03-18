/*
 * XREFs of ScsiReportLunsCommand @ 0x1C0007A60
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScsiReportLunsCommand(__int64 a1, __int64 a2)
{
  _BYTE *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int i; // ecx
  __int64 v9; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_BYTE **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_BYTE **)(a2 + 24);
    v5 = 16LL;
  }
  *(_BYTE *)(a2 + 3) = 1;
  v6 = *(unsigned int *)(a2 + v5);
  v7 = 8 * *(_DWORD *)(a1 + 156);
  if ( v6 >= (unsigned __int64)v7 + 8 )
  {
    v4[3] = v7;
    *v4 = HIBYTE(v7);
    v4[1] = BYTE2(v7);
    v4[2] = BYTE1(v7);
    for ( i = 0; i < *(_DWORD *)(a1 + 156); *(_WORD *)&v4[8 * v9 + 14] = 0 )
    {
      v9 = i;
      v4[8 * i + 9] = i;
      ++i;
      v4[8 * v9 + 8] = 0;
      *(_DWORD *)&v4[8 * v9 + 10] = 0;
    }
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 18;
    if ( *(_DWORD *)(a2 + v5) >= 4u )
    {
      v4[3] = v7;
      *v4 = HIBYTE(v7);
      v4[1] = BYTE2(v7);
      v4[2] = BYTE1(v7);
    }
  }
  return 0LL;
}
