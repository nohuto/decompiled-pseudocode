/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C005DBF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSpeedHitTest @ 0x1C005DC7C (xxxSpeedHitTest.c)
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01113C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0111504 (TransformVectorWithInputTargetPrecedence.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 */

_OWORD *__fastcall EditionMouseSpeedHitTest(
        _OWORD *a1,
        struct tagPOINT *a2,
        struct _SUBPIXELS *a3,
        int a4,
        int a5,
        int a6,
        char a7)
{
  _QWORD *v9; // rdx
  __int128 *v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // r9
  __int64 v13; // r10
  __int128 v14; // [rsp+50h] [rbp-188h]
  __int128 v15; // [rsp+60h] [rbp-178h]
  __int128 v16; // [rsp+70h] [rbp-168h]
  __int128 v17; // [rsp+80h] [rbp-158h]
  __int128 v18; // [rsp+90h] [rbp-148h]
  __int128 v19; // [rsp+A0h] [rbp-138h]
  __int128 v20; // [rsp+B0h] [rbp-128h]
  __int128 v21; // [rsp+D0h] [rbp-108h]
  __int128 v22; // [rsp+E0h] [rbp-F8h]
  __int128 v23; // [rsp+F0h] [rbp-E8h]
  __int128 v24; // [rsp+100h] [rbp-D8h]
  _BYTE v25[200]; // [rsp+110h] [rbp-C8h] BYREF

  if ( (a7 & 1) != 0 )
    goto LABEL_4;
  if ( gspwndMouseOwner )
  {
    PhysicalToLogicalDPIPointWithHitTest(a2, a2, a3);
    v9 = (_QWORD *)gspwndMouseOwner;
LABEL_8:
    v10 = (__int128 *)INPUTDEST_FROM_PWND(v25, *v9);
    v14 = *v10;
    v15 = v10[1];
    v16 = v10[2];
    v17 = v10[3];
    v18 = v10[4];
    v19 = v10[5];
    v20 = v10[6];
    v11 = v10[7];
    v10 += 8;
    v21 = *v10;
    v22 = v10[1];
    v23 = v10[2];
    v24 = v10[3];
    *a1 = v14;
    a1[1] = v15;
    a1[2] = v16;
    a1[3] = v17;
    a1[4] = v18;
    a1[5] = v19;
    a1[6] = v20;
    a1[7] = v11;
    a1[8] = v21;
    a1[9] = v22;
    a1[10] = v23;
    a1[11] = v24;
    return a1;
  }
  if ( gspwndInternalCapture )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      TransformVectorWithInputTargetPrecedence(v12, v13);
    v9 = (_QWORD *)gspwndInternalCapture;
    goto LABEL_8;
  }
LABEL_4:
  xxxSpeedHitTest(a6, 4, a5, a4, a2, a3, 0LL, 0LL, (__int64)a1);
  return a1;
}
