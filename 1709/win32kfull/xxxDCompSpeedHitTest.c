/*
 * XREFs of xxxDCompSpeedHitTest @ 0x1C005DFBC
 * Callers:
 *     xxxSpeedHitTest @ 0x1C005DC7C (xxxSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     xxxClientCallDitThread @ 0x1C005B094 (xxxClientCallDitThread.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005E39C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C005E58C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0113D78 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0113DE8 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01B9B44 (-ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     TouchTargetChildTree @ 0x1C01D5E48 (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 */

__int64 __fastcall xxxDCompSpeedHitTest(
        unsigned int a1,
        unsigned int a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4,
        int a5,
        unsigned __int64 a6,
        struct tagTOUCHTARGETINGCONTACT *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10)
{
  struct tagWND *v10; // rsi
  struct tagWND *v11; // rdi
  int v13; // r15d
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  int v45; // ecx
  int v46; // eax
  __int64 TopLevelWindow; // rax
  struct _SUBPIXELS *v48; // rsi
  int IsWindowHit; // eax
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  _OWORD *v57; // rbx
  __int64 result; // rax
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  struct _SUBPIXELS *v63; // rax
  __int64 v64; // r8
  unsigned int v65; // r15d
  int (*v66)(struct tagDITCALLBACKSTRUCT *); // rcx
  __int64 v67; // rdx
  struct tagWND *v68; // rax
  _OWORD *v69; // rax
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int64 v87; // rax
  struct tagTOUCHTARGETINGCONTACT *v88; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  int v92; // [rsp+20h] [rbp-E0h]
  unsigned int v93; // [rsp+70h] [rbp-90h] BYREF
  int v94; // [rsp+74h] [rbp-8Ch]
  unsigned int v95; // [rsp+78h] [rbp-88h]
  struct _SUBPIXELS *v96; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v97; // [rsp+88h] [rbp-78h] BYREF
  struct tagTOUCHTARGETINGCONTACT *v98; // [rsp+90h] [rbp-70h]
  _QWORD v99[51]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v100[192]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v101[192]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v102[26]; // [rsp+3B0h] [rbp+2B0h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v95 = a1;
  v94 = a5;
  v97 = a6;
  v98 = a7;
  v96 = a4;
  v93 = a2;
  if ( a1 == 4 )
    LOBYTE(v13) = gdwMitConfig;
  else
    v13 = gdwMitConfig >> 2;
  memset(&v99[27], 0, 0xC0uLL);
  v14 = *(_OWORD *)&v99[29];
  *(_OWORD *)a10 = *(_OWORD *)&v99[27];
  v15 = *(_OWORD *)&v99[31];
  *(_OWORD *)(a10 + 16) = v14;
  v16 = *(_OWORD *)&v99[33];
  *(_OWORD *)(a10 + 32) = v15;
  v17 = *(_OWORD *)&v99[35];
  *(_OWORD *)(a10 + 48) = v16;
  v18 = *(_OWORD *)&v99[37];
  *(_OWORD *)(a10 + 64) = v17;
  v19 = *(_OWORD *)&v99[39];
  *(_OWORD *)(a10 + 80) = v18;
  *(_OWORD *)(a10 + 96) = v19;
  *(_OWORD *)(a10 + 112) = *(_OWORD *)&v99[41];
  v20 = *(_OWORD *)&v99[45];
  *(_OWORD *)(a10 + 128) = *(_OWORD *)&v99[43];
  v21 = *(_OWORD *)&v99[47];
  *(_OWORD *)(a10 + 144) = v20;
  v22 = *(_OWORD *)&v99[49];
  *(_OWORD *)(a10 + 160) = v21;
  *(_OWORD *)(a10 + 176) = v22;
  if ( (v13 & 1) != 0 )
  {
    v23 = (_OWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))DCompHitTest)(
                      v100,
                      v95,
                      v93,
                      *a3,
                      v97,
                      0,
                      v94,
                      a8,
                      a9);
    v24 = v23[1];
    *(_OWORD *)&v99[3] = *v23;
    v25 = v23[2];
    *(_OWORD *)&v99[5] = v24;
    v26 = v23[3];
    *(_OWORD *)&v99[7] = v25;
    v27 = v23[4];
    *(_OWORD *)&v99[9] = v26;
    v28 = v23[5];
    *(_OWORD *)&v99[11] = v27;
    v29 = v23[6];
    *(_OWORD *)&v99[13] = v28;
    v30 = v23[7];
    *(_OWORD *)&v99[15] = v29;
    v31 = v23[8];
    *(_OWORD *)&v99[17] = v30;
    v32 = v23[9];
    *(_OWORD *)&v99[19] = v31;
    v33 = v23[10];
    *(_OWORD *)&v99[21] = v32;
    v34 = v23[11];
    *(_OWORD *)&v99[23] = v33;
    *(_OWORD *)&v99[25] = v34;
    v35 = *(_OWORD *)&v99[5];
    *(_OWORD *)a10 = *(_OWORD *)&v99[3];
    v36 = *(_OWORD *)&v99[7];
    *(_OWORD *)(a10 + 16) = v35;
    v37 = *(_OWORD *)&v99[9];
    *(_OWORD *)(a10 + 32) = v36;
    v38 = *(_OWORD *)&v99[11];
    *(_OWORD *)(a10 + 48) = v37;
    v39 = *(_OWORD *)&v99[13];
    *(_OWORD *)(a10 + 64) = v38;
    v40 = *(_OWORD *)&v99[15];
    *(_OWORD *)(a10 + 80) = v39;
    v41 = *(_OWORD *)&v99[17];
    *(_OWORD *)(a10 + 96) = v40;
    *(_OWORD *)(a10 + 112) = v41;
    v42 = *(_OWORD *)&v99[21];
    *(_OWORD *)(a10 + 128) = *(_OWORD *)&v99[19];
    v43 = *(_OWORD *)&v99[23];
    *(_OWORD *)(a10 + 144) = v42;
    v44 = *(_OWORD *)&v99[25];
    *(_OWORD *)(a10 + 160) = v43;
    *(_OWORD *)(a10 + 176) = v44;
    v45 = *(_DWORD *)(a10 + 92);
    if ( v45 == 2 )
      v46 = -(*(_DWORD *)(a10 + 88) & 1);
    else
      v46 = 0;
    if ( !v46 )
    {
      if ( v45 == 2 )
        v10 = *(struct tagWND **)(a10 + 80);
      if ( v10 )
      {
        v63 = (struct _SUBPIXELS *)ValidateHmonitorNoRip(*((_QWORD *)v10 + 45));
        v64 = *((unsigned int *)v10 + 92);
        v96 = v63;
        return PhysicalToLogicalDPIPoint(a3, a3, v64, &v96);
      }
LABEL_9:
      if ( (v93 & 4) != 0 )
      {
        v88 = v98;
        if ( v98 )
        {
          v97 = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v99[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v99;
          v99[1] = v11;
          if ( v11 )
            _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
          if ( (unsigned int)xxxTouchTargetWindow(
                               v11,
                               v88,
                               a3,
                               (__int64)&v93,
                               (__int64)&v97,
                               *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1,
                               0,
                               0LL,
                               0LL,
                               0LL,
                               0LL,
                               0LL) )
          {
            v10 = (struct tagWND *)TouchTargetChildTree(v11, v88, v92, 0, 0LL, 0LL, 0LL, 0LL);
          }
          else
          {
            v91 = grpdeskRitInput;
            v10 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
          }
          ThreadUnlock1(v91, v90);
        }
        goto LABEL_16;
      }
      if ( v11 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v11) )
        {
          v48 = v96;
          IsWindowHit = DCEIsWindowHit(v11, a3, v96);
        }
        else
        {
          IsWindowHit = ClassicIsWindowHit(v11, *a3);
          v48 = v96;
        }
        if ( IsWindowHit )
          goto LABEL_14;
      }
      else
      {
        v48 = v96;
      }
      v11 = TopLevelSpeedHitTest(grpdeskRitInput, a3, v48);
LABEL_14:
      if ( v11 )
      {
        v10 = ClassicChildTreeSpeedHitTest(v11, *a3);
      }
      else
      {
        EtwTraceDITSpeedHitTestFailedRevalidation(0LL);
        v10 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
      }
LABEL_16:
      memset(&v99[3], 0, 0xC0uLL);
      if ( v10 )
      {
        LODWORD(v99[3]) = 4;
        v99[13] = v10;
        HIDWORD(v99[14]) = 2;
      }
      v50 = *(_OWORD *)&v99[5];
      *(_OWORD *)a10 = *(_OWORD *)&v99[3];
      v51 = *(_OWORD *)&v99[7];
      *(_OWORD *)(a10 + 16) = v50;
      v52 = *(_OWORD *)&v99[9];
      *(_OWORD *)(a10 + 32) = v51;
      v53 = *(_OWORD *)&v99[11];
      *(_OWORD *)(a10 + 48) = v52;
      v54 = *(_OWORD *)&v99[13];
      *(_OWORD *)(a10 + 64) = v53;
      v55 = *(_OWORD *)&v99[15];
      *(_OWORD *)(a10 + 80) = v54;
      v56 = *(_OWORD *)&v99[17];
      *(_OWORD *)(a10 + 96) = v55;
      v57 = (_OWORD *)(a10 + 128);
      result = (__int64)&v99[19];
      goto LABEL_19;
    }
    TopLevelWindow = GetTopLevelWindow(*(_QWORD *)(a10 + 80));
LABEL_8:
    v11 = (struct tagWND *)TopLevelWindow;
    goto LABEL_9;
  }
  memset(v102, 0, sizeof(v102));
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  v65 = v95;
  v102[2] = *a3;
  LODWORD(v102[0]) = v95;
  HIDWORD(v102[22]) = v93 & 0xF;
  LODWORD(v102[24]) = v94;
  if ( gpDitInfo )
    v66 = *(int (**)(struct tagDITCALLBACKSTRUCT *))(gpDitInfo + 24);
  else
    v66 = CSpatialProcessor::_spfnDitCallback;
  result = xxxClientCallDitThread((__int64)v66, (__int64)v102);
  if ( (_DWORD)result )
  {
    if ( a8 )
    {
      result = -(v102[22] & 1);
      *a8 = result;
    }
    if ( a9 )
    {
      result = LODWORD(v102[15]);
      *a9 = v102[15];
    }
    v67 = v102[4];
    if ( v102[4] )
    {
      v68 = ResolveDCompInputHandleToPwnd(
              (HWND)v102[3],
              (void *)v102[4],
              v65,
              v97,
              (struct tagINPUT_TRANSFORM *)&v102[7]);
      v69 = (_OWORD *)INPUTDEST_FROM_PWND(v101, v68);
      v70 = v69[1];
      *(_OWORD *)&v99[27] = *v69;
      v71 = v69[2];
      *(_OWORD *)&v99[29] = v70;
      v72 = v69[3];
      *(_OWORD *)&v99[31] = v71;
      v73 = v69[4];
      *(_OWORD *)&v99[33] = v72;
      v74 = v69[5];
      *(_OWORD *)&v99[35] = v73;
      v75 = v69[6];
      *(_OWORD *)&v99[37] = v74;
      v76 = v69[7];
      v69 += 8;
      *(_OWORD *)&v99[39] = v75;
      v77 = *v69;
      *(_OWORD *)&v99[41] = v76;
      v78 = v69[1];
      *(_OWORD *)&v99[43] = v77;
      v79 = v69[2];
      *(_OWORD *)&v99[45] = v78;
      v80 = v69[3];
      *(_OWORD *)&v99[47] = v79;
      *(_OWORD *)&v99[49] = v80;
      v81 = *(_OWORD *)&v99[29];
      *(_OWORD *)a10 = *(_OWORD *)&v99[27];
      v82 = *(_OWORD *)&v99[31];
      *(_OWORD *)(a10 + 16) = v81;
      v83 = *(_OWORD *)&v99[33];
      *(_OWORD *)(a10 + 32) = v82;
      v84 = *(_OWORD *)&v99[35];
      *(_OWORD *)(a10 + 48) = v83;
      v85 = *(_OWORD *)&v99[37];
      *(_OWORD *)(a10 + 64) = v84;
      v86 = *(_OWORD *)&v99[39];
      *(_OWORD *)(a10 + 80) = v85;
      v56 = *(_OWORD *)&v99[41];
      *(_OWORD *)(a10 + 96) = v86;
      v57 = (_OWORD *)(a10 + 128);
      result = (__int64)&v99[43];
LABEL_19:
      v59 = *(_OWORD *)result;
      *(v57 - 1) = v56;
      v60 = *(_OWORD *)(result + 16);
      *v57 = v59;
      v61 = *(_OWORD *)(result + 32);
      v57[1] = v60;
      v62 = *(_OWORD *)(result + 48);
      v57[2] = v61;
      v57[3] = v62;
      return result;
    }
    if ( v102[3] )
    {
      LOBYTE(v67) = 1;
      v87 = HMValidateHandleNoSecure(v102[3], v67);
      if ( !v87 )
        return EtwTraceDITSpeedHitTestFailedRevalidation(v102[3]);
      TopLevelWindow = GetTopLevelWindow(v87);
      goto LABEL_8;
    }
  }
  return result;
}
