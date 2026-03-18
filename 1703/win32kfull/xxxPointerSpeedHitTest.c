/*
 * XREFs of xxxPointerSpeedHitTest @ 0x1C01D214C
 * Callers:
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C0199550 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01AB708 (-HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionPointerSpeedHitTest @ 0x1C01D1540 (EditionPointerSpeedHitTest.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01EA710 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C005F884 (xxxSpeedHitTest.c)
 *     EditionTryDwmHitTest @ 0x1C005F960 (EditionTryDwmHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAI@Z @ 0x1C01CF5E8 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 *     TouchTargetChildTree @ 0x1C01D1850 (TouchTargetChildTree.c)
 *     TouchTargetingCreateContact @ 0x1C023A850 (TouchTargetingCreateContact.c)
 */

struct tagWND *__fastcall xxxPointerSpeedHitTest(int a1, __int64 a2, int *a3, unsigned int *a4)
{
  int v5; // ebx
  struct tagPOINT v6; // rcx
  __int128 *v10; // r15
  __int64 v11; // r8
  __int128 v12; // xmm0
  int v13; // eax
  struct tagRECT *v15; // rax
  int v16; // [rsp+20h] [rbp-E0h]
  struct tagPOINT v17; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v18[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+84h] [rbp-7Ch]
  __int128 v22; // [rsp+8Ch] [rbp-74h]
  __int128 v23; // [rsp+9Ch] [rbp-64h]
  int v24; // [rsp+ACh] [rbp-54h]
  __int128 v25; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v27[184]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+188h] [rbp+88h]

  v5 = 0;
  v6 = *(struct tagPOINT *)(a2 + 32);
  v17 = v6;
  if ( a1 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(v6, a2) )
    return xxxSpeedHitTest(a1, *(_DWORD *)a2, 0LL, *(_QWORD *)(a2 + 80), &v17, 0LL, (__int64)a3, (__int64)a4);
  v10 = 0LL;
  v25 = 0uLL;
  v26 = 0uLL;
  EtwTraceTouchTargetingSpeedHitTestStart();
  v28 = 0LL;
  if ( (unsigned int)_GetDeviceRects(a2, &v25, &v26) )
  {
    *(_OWORD *)&v18[0].x = v26;
    v19 = v25;
    _SetHimetricToPixelRatio(&v19, v18, v27);
    v10 = &v25;
  }
  v12 = *(_OWORD *)(a2 + 104);
  v21 = *(_QWORD *)(a2 + 32);
  v13 = *(_DWORD *)(a2 + 100);
  v22 = v12;
  v23 = v12;
  if ( (v13 & 2) != 0 )
    v24 = *(_DWORD *)(a2 + 136);
  else
    v24 = 0;
  TouchTargetingCreateContact(v20, v10, v11, v27);
  if ( g_bHitTestDwmFirstForTouch && EditionTryDwmHitTest(0LL) )
    return xxxDCompSpeedHitTest(
             *(_DWORD *)a2,
             4u,
             &v17,
             0LL,
             0,
             *(_QWORD *)(a2 + 80),
             (struct tagTOUCHTARGETINGCONTACT *)v27,
             a3,
             a4);
  v18[0] = 0LL;
  v15 = TopLevelTouchTarget(
          *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
          (struct tagTOUCHTARGETINGCONTACT *)v27,
          &v17,
          v18,
          *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1,
          *(_QWORD *)(a2 + 80),
          a3,
          a4);
  if ( !v15 )
    return *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  LOBYTE(v5) = !g_bHitTestDwmFirstForTouch;
  return TouchTargetChildTree(
           (struct tagWND *)v15,
           (struct tagTOUCHTARGETINGCONTACT *)v27,
           v17,
           v18,
           v16,
           v5,
           *(_QWORD *)(a2 + 80),
           a3,
           (int *)a4);
}
