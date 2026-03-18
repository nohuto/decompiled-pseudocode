/*
 * XREFs of xxxSpeedHitTest @ 0x1C005DC7C
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C005DBF0 (EditionMouseSpeedHitTest.c)
 *     ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01AF01C (-RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z.c)
 *     EditionSpeedHitTest @ 0x1C01D5D90 (EditionSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     EditionTryDwmHitTest @ 0x1C005DF50 (EditionTryDwmHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C005E58C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0113D78 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 */

struct tagWND *__fastcall xxxSpeedHitTest(
        int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct tagPOINT *a5,
        struct _SUBPIXELS *a6,
        __int64 a7,
        __int64 a8,
        _OWORD *a9)
{
  __int128 *v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  struct tagWND *result; // rax
  __int128 *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // [rsp+50h] [rbp-198h]
  __int128 v32; // [rsp+50h] [rbp-198h]
  __int128 v33; // [rsp+60h] [rbp-188h]
  __int128 v34; // [rsp+60h] [rbp-188h]
  __int128 v35; // [rsp+70h] [rbp-178h]
  __int128 v36; // [rsp+70h] [rbp-178h]
  __int128 v37; // [rsp+80h] [rbp-168h]
  __int128 v38; // [rsp+80h] [rbp-168h]
  __int128 v39; // [rsp+90h] [rbp-158h]
  __int128 v40; // [rsp+90h] [rbp-158h]
  __int128 v41; // [rsp+A0h] [rbp-148h]
  __int128 v42; // [rsp+A0h] [rbp-148h]
  __int128 v43; // [rsp+B0h] [rbp-138h]
  __int128 v44; // [rsp+B0h] [rbp-138h]
  __int128 v45; // [rsp+C0h] [rbp-128h]
  __int128 v46; // [rsp+C0h] [rbp-128h]
  __int128 v47; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-108h]
  __int128 v49; // [rsp+F0h] [rbp-F8h]
  __int128 v50; // [rsp+100h] [rbp-E8h]
  _BYTE v51[192]; // [rsp+110h] [rbp-D8h] BYREF

  v13 = (__int128 *)INPUTDEST_FROM_PWND(v51, *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL));
  v31 = *v13;
  v33 = v13[1];
  v35 = v13[2];
  v37 = v13[3];
  v39 = v13[4];
  v41 = v13[5];
  v43 = v13[6];
  v14 = v13[7];
  v13 += 8;
  v45 = v14;
  v15 = v13[1];
  v47 = *v13;
  v16 = v13[2];
  v48 = v15;
  v17 = v13[3];
  v49 = v16;
  v50 = v17;
  *a9 = v31;
  a9[1] = v33;
  a9[2] = v35;
  a9[3] = v37;
  a9[4] = v39;
  a9[5] = v41;
  a9[6] = v43;
  a9[7] = v45;
  v18 = v48;
  a9[8] = v47;
  v19 = v49;
  a9[9] = v18;
  v20 = v50;
  a9[10] = v19;
  a9[11] = v20;
  result = (struct tagWND *)EditionTryDwmHitTest(0LL);
  if ( (_DWORD)result )
    return (struct tagWND *)xxxDCompSpeedHitTest(a2, a3, a5, a6, a1, a4, 0LL, a7, a8, a9);
  if ( !a1 )
  {
    result = TopLevelSpeedHitTest(grpdeskRitInput, a5, a6);
    if ( result )
    {
      result = ClassicChildTreeSpeedHitTest(result, *a5);
      if ( result )
      {
        v22 = (__int128 *)INPUTDEST_FROM_PWND(v51, result);
        v32 = *v22;
        v34 = v22[1];
        v36 = v22[2];
        v38 = v22[3];
        v40 = v22[4];
        v23 = v22[6];
        v42 = v22[5];
        v24 = v22[7];
        v22 += 8;
        v44 = v23;
        v46 = v24;
        v25 = v22[1];
        v47 = *v22;
        v26 = v22[2];
        v48 = v25;
        v27 = v22[3];
        v49 = v26;
        v50 = v27;
        *a9 = v32;
        a9[1] = v34;
        a9[2] = v36;
        a9[3] = v38;
        a9[4] = v40;
        a9[5] = v42;
        a9[6] = v44;
        result = (struct tagWND *)&v47;
        a9[7] = v46;
        v28 = v48;
        a9[8] = v47;
        v29 = v49;
        a9[9] = v28;
        v30 = v50;
        a9[10] = v29;
        a9[11] = v30;
      }
    }
  }
  return result;
}
