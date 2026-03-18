/*
 * XREFs of HandleFullWindowDestruction @ 0x1C004BFF0
 * Callers:
 *     <none>
 * Callees:
 *     HandleInputDestDestruction @ 0x1C004BF10 (HandleInputDestDestruction.c)
 *     INPUTDEST_FROM_PWND @ 0x1C004C08C (INPUTDEST_FROM_PWND.c)
 */

void __fastcall HandleFullWindowDestruction(__int64 a1)
{
  _OWORD *v1; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _OWORD v12[12]; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v13[200]; // [rsp+E0h] [rbp-C8h] BYREF

  v1 = (_OWORD *)INPUTDEST_FROM_PWND(v13, a1);
  v2 = v1[1];
  v12[0] = *v1;
  v3 = v1[2];
  v12[1] = v2;
  v4 = v1[3];
  v12[2] = v3;
  v5 = v1[4];
  v12[3] = v4;
  v6 = v1[5];
  v12[4] = v5;
  v7 = v1[6];
  v12[5] = v6;
  v12[6] = v7;
  v8 = v1[7];
  v1 += 8;
  v12[7] = v8;
  v9 = v1[1];
  v12[8] = *v1;
  v10 = v1[2];
  v12[9] = v9;
  v11 = v1[3];
  v12[10] = v10;
  v12[11] = v11;
  HandleInputDestDestruction((struct CInputDest *)v12);
}
