/*
 * XREFs of ndisCopyReceiveQueueInfo @ 0x1C0039CC0
 * Callers:
 *     ndisOidPreRcvFilterEnumQueues @ 0x1C003AC70 (ndisOidPreRcvFilterEnumQueues.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisCopyReceiveQueueInfo(_DWORD *a1, __int64 a2)
{
  _OWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 result; // rax

  memset(a1, 0, 0x448uLL);
  *a1 = 71565952;
  v4 = a1 + 13;
  a1[1] = *(_DWORD *)(a2 + 132);
  a1[2] = *(_DWORD *)(a2 + 136);
  v5 = 4LL;
  a1[3] = *(_DWORD *)(a2 + 48);
  v6 = 4LL;
  a1[4] = *(_DWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 6) = *(_OWORD *)(a2 + 152);
  a1[10] = *(_DWORD *)(a2 + 168);
  a1[11] = *(_DWORD *)(a2 + 172);
  a1[12] = *(_DWORD *)(a2 + 176);
  v7 = (_OWORD *)(a2 + 180);
  do
  {
    *v4 = *v7;
    v4[1] = v7[1];
    v4[2] = v7[2];
    v4[3] = v7[3];
    v4[4] = v7[4];
    v4[5] = v7[5];
    v4[6] = v7[6];
    v4 += 8;
    v8 = v7[7];
    v7 += 8;
    *(v4 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)v4 = *(_DWORD *)v7;
  v9 = a1 + 142;
  v10 = (_OWORD *)(a2 + 696);
  do
  {
    *v9 = *v10;
    v9[1] = v10[1];
    v9[2] = v10[2];
    v9[3] = v10[3];
    v9[4] = v10[4];
    v9[5] = v10[5];
    v9[6] = v10[6];
    v9 += 8;
    v11 = v10[7];
    v10 += 8;
    *(v9 - 1) = v11;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)v9 = *(_DWORD *)v10;
  a1[271] = *(_DWORD *)(a2 + 84);
  result = *(unsigned int *)(a2 + 1216);
  a1[272] = result;
  return result;
}
