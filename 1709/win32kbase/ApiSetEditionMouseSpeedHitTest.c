/*
 * XREFs of ApiSetEditionMouseSpeedHitTest @ 0x1C0017808
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C0014354 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionMouseSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _BYTE v23[192]; // [rsp+40h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( (int)IsEditionMouseSpeedHitTestSupported() >= 0 )
  {
    v11 = (_OWORD *)EditionMouseSpeedHitTest(v23, a2, a3, a4, a5, a6, a7);
    v12 = v11[1];
    *a1 = *v11;
    v13 = v11[2];
    a1[1] = v12;
    v14 = v11[3];
    a1[2] = v13;
    v15 = v11[4];
    a1[3] = v14;
    v16 = v11[5];
    a1[4] = v15;
    v17 = v11[6];
    a1[5] = v16;
    a1[6] = v17;
    v18 = v11[7];
    v11 += 8;
    a1[7] = v18;
    v19 = v11[1];
    a1[8] = *v11;
    v20 = v11[2];
    a1[9] = v19;
    v21 = v11[3];
    a1[10] = v20;
    a1[11] = v21;
  }
  return a1;
}
