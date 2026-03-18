/*
 * XREFs of EditionSpeedHitTest @ 0x1C01D1770
 * Callers:
 *     <none>
 * Callees:
 *     xxxSpeedHitTest @ 0x1C005F884 (xxxSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 */

_OWORD *__fastcall EditionSpeedHitTest(
        _OWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT *a5,
        struct _SUBPIXELS *a6,
        __int64 a7,
        __int64 a8)
{
  struct tagWND *v9; // rax
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _OWORD *result; // rax
  _DWORD v22[50]; // [rsp+40h] [rbp-C8h] BYREF

  v9 = xxxSpeedHitTest(0, a2, a3, a4, a5, a6, a7, a8);
  v10 = INPUTDEST_FROM_PWND(v22, (__int64)v9);
  v11 = v10[1];
  *a1 = *v10;
  v12 = v10[2];
  a1[1] = v11;
  v13 = v10[3];
  a1[2] = v12;
  v14 = v10[4];
  a1[3] = v13;
  v15 = v10[5];
  a1[4] = v14;
  v16 = v10[6];
  a1[5] = v15;
  a1[6] = v16;
  v17 = v10[7];
  v10 += 8;
  a1[7] = v17;
  v18 = v10[1];
  a1[8] = *v10;
  v19 = v10[2];
  a1[9] = v18;
  v20 = v10[3];
  result = a1;
  a1[10] = v19;
  a1[11] = v20;
  return result;
}
