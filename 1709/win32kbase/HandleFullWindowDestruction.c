/*
 * XREFs of HandleFullWindowDestruction @ 0x1C0016DC0
 * Callers:
 *     <none>
 * Callees:
 *     HandleInputDestDestruction @ 0x1C0016E5C (HandleInputDestDestruction.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0016F4C (INPUTDEST_FROM_PWND.c)
 */

__int64 HandleFullWindowDestruction()
{
  _OWORD *v0; // rax
  __int128 v1; // xmm1
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD v12[12]; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v13[200]; // [rsp+E0h] [rbp-C8h] BYREF

  v0 = (_OWORD *)INPUTDEST_FROM_PWND(v13);
  v1 = v0[1];
  v12[0] = *v0;
  v2 = v0[2];
  v12[1] = v1;
  v3 = v0[3];
  v12[2] = v2;
  v4 = v0[4];
  v12[3] = v3;
  v5 = v0[5];
  v12[4] = v4;
  v6 = v0[6];
  v12[5] = v5;
  v12[6] = v6;
  v7 = v0[7];
  v0 += 8;
  v12[7] = v7;
  v8 = v0[1];
  v12[8] = *v0;
  v9 = v0[2];
  v12[9] = v8;
  v10 = v0[3];
  v12[10] = v9;
  v12[11] = v10;
  return HandleInputDestDestruction((struct CInputDest *)v12);
}
