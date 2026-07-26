/*
 * XREFs of ndisIovCopyVPortInfo @ 0x1C006B9B4
 * Callers:
 *     ndisOidPreIovEnumVPorts @ 0x1C006D5F0 (ndisOidPreIovEnumVPorts.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisIovCopyVPortInfo(_DWORD *a1, __int64 a2)
{
  _OWORD *v4; // rcx
  __int64 v5; // rdx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int64 result; // rax

  memset(a1, 0, 0x240uLL);
  *a1 = 37749120;
  v4 = a1 + 4;
  a1[1] = *(_DWORD *)(a2 + 124);
  a1[2] = *(_DWORD *)(a2 + 116) & 3;
  v5 = 4LL;
  a1[3] = *(_DWORD *)(a2 + 120);
  v6 = (_OWORD *)(a2 + 128);
  do
  {
    *v4 = *v6;
    v4[1] = v6[1];
    v4[2] = v6[2];
    v4[3] = v6[3];
    v4[4] = v6[4];
    v4[5] = v6[5];
    v4[6] = v6[6];
    v4 += 8;
    v7 = v6[7];
    v6 += 8;
    *(v4 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)v4 = *(_DWORD *)v6;
  *((_WORD *)a1 + 266) = *(_WORD *)(a2 + 644);
  a1[134] = *(_DWORD *)(a2 + 648);
  a1[135] = *(_DWORD *)(a2 + 652);
  a1[136] = *(_DWORD *)(a2 + 656);
  *(_OWORD *)(a1 + 138) = *(_OWORD *)(a2 + 664);
  a1[142] = *(_DWORD *)(a2 + 680);
  result = *(unsigned int *)(a2 + 864);
  a1[143] = result;
  return result;
}
