/*
 * XREFs of ndisIovCopyVFInfo @ 0x1C006A3D8
 * Callers:
 *     ndisOidPreIovEnumVFs @ 0x1C006BD80 (ndisOidPreIovEnumVFs.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisIovCopyVFInfo(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int64 result; // rax

  memset(a1, 0, 0x660uLL);
  *a1 = 106955136;
  a1[1] = *(_DWORD *)(a2 + 100);
  v4 = 4LL;
  v5 = 4LL;
  v6 = (_OWORD *)(a2 + 624);
  a1[2] = *(_DWORD *)(*(_QWORD *)(a2 + 64) + 36LL);
  v7 = a1 + 132;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    v8 = v6[7];
    v6 += 8;
    *(v7 - 1) = v8;
    --v5;
  }
  while ( v5 );
  v9 = 4LL;
  *(_DWORD *)v7 = *(_DWORD *)v6;
  v10 = a1 + 3;
  v11 = (_OWORD *)(a2 + 108);
  do
  {
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10 += 8;
    v12 = v11[7];
    v11 += 8;
    *(v10 - 1) = v12;
    --v9;
  }
  while ( v9 );
  *(_DWORD *)v10 = *(_DWORD *)v11;
  v13 = a1 + 261;
  v14 = (_OWORD *)(a2 + 1140);
  do
  {
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    v13[3] = v14[3];
    v13[4] = v14[4];
    v13[5] = v14[5];
    v13[6] = v14[6];
    v13 += 8;
    v15 = v14[7];
    v14 += 8;
    *(v13 - 1) = v15;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)v13 = *(_DWORD *)v14;
  *((_WORD *)a1 + 780) = *(_WORD *)(a2 + 1656);
  memmove((char *)a1 + 1562, (const void *)(a2 + 1658), *(unsigned __int16 *)(a2 + 1656));
  memmove((char *)a1 + 1594, (const void *)(a2 + 1690), *(unsigned __int16 *)(a2 + 1656));
  *((_WORD *)a1 + 813) = *(_WORD *)(a2 + 1722);
  result = *(unsigned int *)(a2 + 1724);
  a1[407] = result;
  return result;
}
