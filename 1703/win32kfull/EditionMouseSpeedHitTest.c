/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C005F6F0
 * Callers:
 *     <none>
 * Callees:
 *     DetermineMouseInputTarget @ 0x1C005F7F4 (DetermineMouseInputTarget.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

_OWORD *__fastcall EditionMouseSpeedHitTest(
        _OWORD *a1,
        struct tagPOINT *a2,
        struct _SUBPIXELS *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  __int64 v8; // rbx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD *result; // rax
  _OWORD v19[12]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = DetermineMouseInputTarget(a2, a3, a6, a7);
  memset(v19, 0, sizeof(v19));
  if ( v8 )
  {
    LODWORD(v19[0]) = 4;
    *(_QWORD *)&v19[5] = v8;
    HIDWORD(v19[5]) = 2;
  }
  v9 = v19[1];
  *a1 = v19[0];
  v10 = v19[2];
  a1[1] = v9;
  v11 = v19[3];
  a1[2] = v10;
  v12 = v19[4];
  a1[3] = v11;
  v13 = v19[5];
  a1[4] = v12;
  v14 = v19[6];
  a1[5] = v13;
  a1[6] = v14;
  a1[7] = v19[7];
  v15 = v19[9];
  a1[8] = v19[8];
  v16 = v19[10];
  a1[9] = v15;
  v17 = v19[11];
  result = a1;
  a1[10] = v16;
  a1[11] = v17;
  return result;
}
