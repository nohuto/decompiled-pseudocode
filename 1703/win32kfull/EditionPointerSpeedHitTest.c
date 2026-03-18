/*
 * XREFs of EditionPointerSpeedHitTest @ 0x1C01D1540
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 */

_OWORD *__fastcall EditionPointerSpeedHitTest(_OWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD *result; // rax
  _DWORD v17[50]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = xxxPointerSpeedHitTest(a3);
  v5 = INPUTDEST_FROM_PWND(v17, v4);
  v6 = v5[1];
  *a1 = *v5;
  v7 = v5[2];
  a1[1] = v6;
  v8 = v5[3];
  a1[2] = v7;
  v9 = v5[4];
  a1[3] = v8;
  v10 = v5[5];
  a1[4] = v9;
  v11 = v5[6];
  a1[5] = v10;
  a1[6] = v11;
  v12 = v5[7];
  v5 += 8;
  a1[7] = v12;
  v13 = v5[1];
  a1[8] = *v5;
  v14 = v5[2];
  a1[9] = v13;
  v15 = v5[3];
  result = a1;
  a1[10] = v14;
  a1[11] = v15;
  return result;
}
