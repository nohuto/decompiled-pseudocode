/*
 * XREFs of xxxDCompSpeedHitTest @ 0x1C00B6DB8
 * Callers:
 *     xxxSpeedHitTest @ 0x1C005F884 (xxxSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005F9CC (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0062A4C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00B7204 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxClientCallDitThread @ 0x1C00C56DC (xxxClientCallDitThread.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C0108538 (MagpRemoveTransformOutputMagFac.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C011A4FC (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?GetMagClientToScreenTransform@@YAXPEAUtagDESKTOP@@PEAUtagPOINT@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019C490 (-GetMagClientToScreenTransform@@YAXPEAUtagDESKTOP@@PEAUtagPOINT@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019D530 (-ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     TouchTargetChildTree @ 0x1C01D1850 (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x1C01D2798 (xxxTouchTargetWindow.c)
 */

struct tagWND *__fastcall xxxDCompSpeedHitTest(
        unsigned int a1,
        unsigned int a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4,
        int a5,
        unsigned __int64 a6,
        struct tagTOUCHTARGETINGCONTACT *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  __int64 v9; // rdi
  struct tagWND *TopLevelWindow; // rbx
  int v13; // ecx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // eax
  __int64 v25; // rcx
  int (*v26)(struct tagDITCALLBACKSTRUCT *); // rcx
  __int64 v28; // rax
  struct _SUBPIXELS *v29; // rdi
  int IsWindowHit; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _SUBPIXELS *v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h]
  unsigned __int64 v38; // [rsp+78h] [rbp-88h]
  _QWORD v39[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v40[200]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v41[12]; // [rsp+160h] [rbp+60h] BYREF

  v9 = 0LL;
  TopLevelWindow = 0LL;
  v36 = a4;
  v38 = a6;
  LODWORD(v35) = a2;
  v37 = a5;
  if ( a1 && a1 != 6 )
  {
    if ( a1 == 4 )
      LOBYTE(v13) = gdwMitConfig;
    else
      v13 = gdwMitConfig >> 2;
    if ( (v13 & 1) != 0 )
    {
      v14 = (_OWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))DCompHitTest)(
                        v40,
                        a1,
                        a2,
                        *a3,
                        a6,
                        0,
                        a5,
                        a8,
                        a9);
      v15 = v14[1];
      v41[0] = *v14;
      v16 = v14[2];
      v41[1] = v15;
      v17 = v14[3];
      v41[2] = v16;
      v18 = v14[4];
      v41[3] = v17;
      v19 = v14[5];
      v41[4] = v18;
      v20 = v14[6];
      v41[5] = v19;
      v41[6] = v20;
      v41[7] = v14[7];
      v21 = v14[9];
      v41[8] = v14[8];
      v22 = v14[10];
      v41[9] = v21;
      v23 = v14[11];
      v41[10] = v22;
      v41[11] = v23;
      if ( HIDWORD(v41[5]) == 2 )
        v24 = -(BYTE8(v41[5]) & 1);
      else
        v24 = 0;
      if ( !v24 )
      {
        if ( HIDWORD(v41[5]) == 2 )
          v9 = *(_QWORD *)&v41[5];
        if ( v9 )
          return (struct tagWND *)v9;
LABEL_35:
        if ( (v35 & 4) != 0 )
        {
          if ( a7 )
          {
            v36 = 0LL;
            v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v39;
            v39[1] = TopLevelWindow;
            if ( TopLevelWindow )
              ++*((_DWORD *)TopLevelWindow + 2);
            if ( (unsigned int)xxxTouchTargetWindow(
                                 TopLevelWindow,
                                 a7,
                                 a3,
                                 (__int64)&v35,
                                 (__int64)&v36,
                                 *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1,
                                 0,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0LL) )
            {
              v9 = TouchTargetChildTree(TopLevelWindow, a7, v34, 0, 0LL, 0LL, 0LL);
            }
            else
            {
              v32 = grpdeskRitInput;
              v9 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
            }
            ThreadUnlock1(v32, v31);
          }
          return (struct tagWND *)v9;
        }
        if ( TopLevelWindow )
        {
          if ( (unsigned int)IsWindowDesktopComposed(TopLevelWindow) )
          {
            v29 = v36;
            IsWindowHit = DCEIsWindowHit(TopLevelWindow, a3, v36);
          }
          else
          {
            IsWindowHit = ClassicIsWindowHit(TopLevelWindow, *a3);
            v29 = v36;
          }
          if ( IsWindowHit )
            goto LABEL_44;
        }
        else
        {
          v29 = v36;
        }
        TopLevelWindow = TopLevelSpeedHitTest(grpdeskRitInput, a3, v29);
LABEL_44:
        if ( !TopLevelWindow )
        {
          EtwTraceDITSpeedHitTestFailedRevalidation(0LL);
          return *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
        }
        return ClassicChildTreeSpeedHitTest(TopLevelWindow, *a3);
      }
      v25 = *(_QWORD *)&v41[5];
    }
    else
    {
      memset(v41, 0, sizeof(v41));
      if ( a8 )
        *a8 = 0;
      if ( a9 )
        *a9 = 0;
      *(struct tagPOINT *)&v41[1] = *a3;
      LODWORD(v41[0]) = a1;
      HIDWORD(v41[10]) = v35 & 7;
      DWORD2(v41[11]) = v37;
      GetMagClientToScreenTransform(grpdeskRitInput, a3, (struct tagINPUT_TRANSFORM *)((char *)&v41[3] + 8));
      if ( gpDitInfo )
        v26 = *(int (**)(struct tagDITCALLBACKSTRUCT *))(gpDitInfo + 24);
      else
        v26 = CSpatialProcessor::_spfnDitCallback;
      if ( !(unsigned int)xxxClientCallDitThread(v26, v41) )
        return (struct tagWND *)v9;
      MagpRemoveTransformOutputMagFac(grpdeskRitInput, (char *)&v41[3] + 8);
      if ( a8 )
        *a8 = -(BYTE8(v41[10]) & 1);
      if ( a9 )
        *a9 = DWORD2(v41[7]);
      if ( *(_QWORD *)&v41[2] )
        return ResolveDCompInputHandleToPwnd(
                 *((HWND *)&v41[1] + 1),
                 *(void **)&v41[2],
                 a1,
                 v38,
                 (struct tagINPUT_TRANSFORM *)((char *)&v41[3] + 8));
      if ( !*((_QWORD *)&v41[1] + 1) )
        return (struct tagWND *)v9;
      v28 = HMValidateHandleNoSecure(*((unsigned __int64 *)&v41[1] + 1), 1);
      if ( !v28 )
      {
        EtwTraceDITSpeedHitTestFailedRevalidation(*((_QWORD *)&v41[1] + 1));
        return (struct tagWND *)v9;
      }
      v25 = v28;
    }
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v25);
    goto LABEL_35;
  }
  return 0LL;
}
