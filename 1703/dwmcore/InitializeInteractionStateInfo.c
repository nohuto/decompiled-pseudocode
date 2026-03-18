/*
 * XREFs of InitializeInteractionStateInfo @ 0x1800B37C8
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800B29C0 (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall InitializeInteractionStateInfo(__int64 a1)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rdx
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 result; // rax
  _BYTE v16[112]; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+D4h] [rbp-2Ch]
  int v19; // [rsp+118h] [rbp+18h]
  int v20; // [rsp+15Ch] [rbp+5Ch]
  int v21; // [rsp+1A0h] [rbp+A0h]
  int v22; // [rsp+1E4h] [rbp+E4h]

  memset_0(v16, 0, 0x30uLL);
  v2 = v16;
  v17 = 0;
  v3 = (_OWORD *)a1;
  v18 = 0;
  v19 = 0;
  v4 = 3LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  do
  {
    v5 = v2[1];
    *v3 = *v2;
    v6 = v2[2];
    v3[1] = v5;
    v7 = v2[3];
    v3[2] = v6;
    v8 = v2[4];
    v3[3] = v7;
    v9 = v2[5];
    v3[4] = v8;
    v10 = v2[6];
    v3[5] = v9;
    v11 = v2[7];
    v2 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = v2[1];
  *v3 = *v2;
  v3[1] = v12;
  v13 = v2[2];
  v14 = v2[3];
  result = *((_QWORD *)v2 + 8);
  v3[2] = v13;
  v3[3] = v14;
  *((_QWORD *)v3 + 8) = result;
  *(_BYTE *)(a1 + 25) &= ~1u;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 48) = _xmm;
  *(_WORD *)(a1 + 112) = 32085;
  *(_OWORD *)(a1 + 64) = _xmm;
  *(_OWORD *)(a1 + 80) = _xmm;
  *(_OWORD *)(a1 + 96) = _xmm;
  *(_WORD *)(a1 + 180) = 32085;
  *(_OWORD *)(a1 + 116) = _xmm;
  *(_OWORD *)(a1 + 132) = _xmm;
  *(_OWORD *)(a1 + 148) = _xmm;
  *(_OWORD *)(a1 + 164) = _xmm;
  *(_WORD *)(a1 + 248) = 32085;
  *(_OWORD *)(a1 + 184) = _xmm;
  *(_OWORD *)(a1 + 200) = _xmm;
  *(_OWORD *)(a1 + 216) = _xmm;
  *(_OWORD *)(a1 + 232) = _xmm;
  *(_WORD *)(a1 + 316) = 32085;
  *(_OWORD *)(a1 + 252) = _xmm;
  *(_OWORD *)(a1 + 268) = _xmm;
  *(_OWORD *)(a1 + 284) = _xmm;
  *(_OWORD *)(a1 + 300) = _xmm;
  *(_WORD *)(a1 + 384) = 32085;
  *(_OWORD *)(a1 + 320) = _xmm;
  *(_OWORD *)(a1 + 336) = _xmm;
  *(_OWORD *)(a1 + 352) = _xmm;
  *(_OWORD *)(a1 + 368) = _xmm;
  *(_WORD *)(a1 + 452) = 32085;
  *(_OWORD *)(a1 + 388) = _xmm;
  *(_OWORD *)(a1 + 404) = _xmm;
  *(_OWORD *)(a1 + 420) = _xmm;
  *(_OWORD *)(a1 + 436) = _xmm;
  return result;
}
