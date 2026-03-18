/*
 * XREFs of xxxPointerSpeedHitTest @ 0x1C01D6750
 * Callers:
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C01A50EC (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01AEAC8 (-HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionPointerSpeedHitTest @ 0x1C01D5BD0 (EditionPointerSpeedHitTest.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01F6604 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C005DC7C (xxxSpeedHitTest.c)
 *     EditionTryDwmHitTest @ 0x1C005DF50 (EditionTryDwmHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D3CDC (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 *     TouchTargetChildTree @ 0x1C01D5E48 (TouchTargetChildTree.c)
 *     TouchTargetingCreateContact @ 0x1C023C7AC (TouchTargetingCreateContact.c)
 */

struct tagWND *__fastcall xxxPointerSpeedHitTest(
        int a1,
        __int64 a2,
        int *a3,
        unsigned int *a4,
        struct tagINPUTDEST *a5)
{
  struct tagWND *v9; // rbx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  struct tagPOINT v19; // rcx
  __int128 *v20; // r14
  __int64 v21; // r8
  __int128 v22; // xmm0
  int v23; // eax
  struct tagWND *result; // rax
  _QWORD *v25; // rax
  struct tagWND *v26; // r14
  __int128 *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  int v49; // [rsp+20h] [rbp-E0h]
  struct tagPOINT v50; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v53[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+84h] [rbp-7Ch]
  __int128 v55; // [rsp+8Ch] [rbp-74h]
  __int128 v56; // [rsp+9Ch] [rbp-64h]
  int v57; // [rsp+ACh] [rbp-54h]
  __int128 v58; // [rsp+B0h] [rbp-50h]
  __int128 v59; // [rsp+C0h] [rbp-40h]
  __int128 v60; // [rsp+D0h] [rbp-30h]
  __int128 v61; // [rsp+E0h] [rbp-20h]
  __int128 v62; // [rsp+F0h] [rbp-10h]
  __int128 v63; // [rsp+100h] [rbp+0h]
  __int128 v64; // [rsp+110h] [rbp+10h]
  __int128 v65; // [rsp+120h] [rbp+20h]
  __int128 v66; // [rsp+130h] [rbp+30h] BYREF
  __int128 v67; // [rsp+140h] [rbp+40h]
  __int128 v68; // [rsp+150h] [rbp+50h]
  __int128 v69; // [rsp+160h] [rbp+60h]
  _DWORD v70[48]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v71; // [rsp+230h] [rbp+130h] BYREF
  __int128 v72; // [rsp+240h] [rbp+140h] BYREF
  _OWORD v73[12]; // [rsp+250h] [rbp+150h] BYREF

  memset(v73, 0, sizeof(v73));
  v9 = 0LL;
  v10 = v73[1];
  *(_OWORD *)a5 = v73[0];
  v11 = v73[2];
  *((_OWORD *)a5 + 1) = v10;
  v12 = v73[3];
  *((_OWORD *)a5 + 2) = v11;
  v13 = v73[4];
  *((_OWORD *)a5 + 3) = v12;
  v14 = v73[5];
  *((_OWORD *)a5 + 4) = v13;
  v15 = v73[6];
  *((_OWORD *)a5 + 5) = v14;
  *((_OWORD *)a5 + 6) = v15;
  *((_OWORD *)a5 + 7) = v73[7];
  v16 = v73[9];
  *((_OWORD *)a5 + 8) = v73[8];
  v17 = v73[10];
  *((_OWORD *)a5 + 9) = v16;
  v18 = v73[11];
  *((_OWORD *)a5 + 10) = v17;
  *((_OWORD *)a5 + 11) = v18;
  v19 = *(struct tagPOINT *)(a2 + 32);
  v50 = v19;
  if ( a1 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(v19, a2) )
    return xxxSpeedHitTest(a1, *(_DWORD *)a2, 0, *(_QWORD *)(a2 + 80), &v50, 0LL, (__int64)a3, (__int64)a4, a5);
  v20 = 0LL;
  v71 = 0uLL;
  v72 = 0uLL;
  EtwTraceTouchTargetingSpeedHitTestStart();
  *((_QWORD *)&v73[11] + 1) = 0LL;
  if ( (unsigned int)_GetDeviceRects(a2, &v71, &v72) )
  {
    *(_OWORD *)&v51[0].x = v72;
    v52 = v71;
    _SetHimetricToPixelRatio(&v52, v51, v73);
    v20 = &v71;
  }
  v22 = *(_OWORD *)(a2 + 104);
  v54 = *(_QWORD *)(a2 + 32);
  v23 = *(_DWORD *)(a2 + 100);
  v55 = v22;
  v56 = v22;
  if ( (v23 & 2) != 0 )
    v57 = *(_DWORD *)(a2 + 136);
  else
    v57 = 0;
  TouchTargetingCreateContact(v53, v20, v21, v73);
  if ( g_bHitTestDwmFirstForTouch && EditionTryDwmHitTest(0LL) )
    return (struct tagWND *)xxxDCompSpeedHitTest(
                              *(_DWORD *)a2,
                              4u,
                              &v50,
                              0LL,
                              0,
                              *(_QWORD *)(a2 + 80),
                              (struct tagTOUCHTARGETINGCONTACT *)v73,
                              a3,
                              a4,
                              (__int64)a5);
  v51[0] = 0LL;
  v25 = *(_QWORD **)(grpdeskRitInput + 8LL);
  v26 = (struct tagWND *)v25[2];
  result = (struct tagWND *)TopLevelTouchTarget(
                              v26,
                              (struct tagTOUCHTARGETINGCONTACT *)v73,
                              &v50,
                              v51,
                              *(_DWORD *)(*v25 + 52LL) & 1,
                              *(_QWORD *)(a2 + 80),
                              a3,
                              a4,
                              a5);
  if ( result )
  {
    result = TouchTargetChildTree(
               result,
               (struct tagPOINT *)v73,
               v50,
               v51,
               v49,
               !g_bHitTestDwmFirstForTouch,
               *(_QWORD *)(a2 + 80),
               a3,
               (int *)a4,
               a5);
    v26 = result;
  }
  if ( *((_DWORD *)a5 + 23) == 2 )
    v9 = (struct tagWND *)*((_QWORD *)a5 + 10);
  if ( v9 != v26 )
  {
    v27 = (__int128 *)INPUTDEST_FROM_PWND(v70, (__int64)v26);
    v28 = v27[1];
    v58 = *v27;
    v29 = v27[2];
    v59 = v28;
    v30 = v27[3];
    v60 = v29;
    v31 = v27[4];
    v61 = v30;
    v32 = v27[5];
    v62 = v31;
    v33 = v27[6];
    v63 = v32;
    v34 = v27[7];
    v27 += 8;
    v64 = v33;
    v35 = *v27;
    v65 = v34;
    v36 = v27[1];
    v66 = v35;
    v37 = v27[2];
    v67 = v36;
    v38 = v27[3];
    v68 = v37;
    v69 = v38;
    v39 = v59;
    *(_OWORD *)a5 = v58;
    v40 = v60;
    *((_OWORD *)a5 + 1) = v39;
    v41 = v61;
    *((_OWORD *)a5 + 2) = v40;
    v42 = v62;
    *((_OWORD *)a5 + 3) = v41;
    v43 = v63;
    *((_OWORD *)a5 + 4) = v42;
    v44 = v64;
    *((_OWORD *)a5 + 5) = v43;
    v45 = v65;
    *((_OWORD *)a5 + 6) = v44;
    result = (struct tagWND *)&v66;
    *((_OWORD *)a5 + 7) = v45;
    v46 = v67;
    *((_OWORD *)a5 + 8) = v66;
    v47 = v68;
    *((_OWORD *)a5 + 9) = v46;
    v48 = v69;
    *((_OWORD *)a5 + 10) = v47;
    *((_OWORD *)a5 + 11) = v48;
  }
  return result;
}
