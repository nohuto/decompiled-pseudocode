/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01BBAB8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01C5538 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0007AAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0049424 (IsPointerInputMessageWithState.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CCF90 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     CheckPwndFilter @ 0x1C00CD134 (CheckPwndFilter.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01C51E0 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01C6554 (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01C7650 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01EA244 (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01EA408 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int *a7,
        struct tagQMSG *a8,
        __int64 *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14)
{
  struct tagQMSG *v14; // rdi
  int v16; // eax
  __int128 v17; // xmm1
  bool v18; // cf
  int v19; // r12d
  __int128 v20; // xmm0
  __int64 result; // rax
  unsigned __int64 v22; // r13
  unsigned int x; // r15d
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  HWND v27; // rcx
  int PointerMessageInfo; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // edi
  __int64 v32; // rcx
  int v33; // ecx
  unsigned __int64 v34; // r15
  struct _LIST_ENTRY *ThreadPointerData; // rax
  int *v36; // r9
  __int128 *v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int64 v48; // r8
  __int64 v49; // rdx
  int updated; // eax
  int v51; // eax
  struct tagPOINT v52; // rcx
  int v53; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v55[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagPOINT v56; // [rsp+68h] [rbp-A0h] BYREF
  HWND v57; // [rsp+70h] [rbp-98h] BYREF
  struct tagPOINT v58; // [rsp+78h] [rbp-90h] BYREF
  struct tagPOINT v59[2]; // [rsp+80h] [rbp-88h]
  unsigned __int64 v60[4]; // [rsp+90h] [rbp-78h]
  __int128 v61; // [rsp+B0h] [rbp-58h]
  _OWORD v62[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v63; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v64; // [rsp+108h] [rbp+0h]
  __int128 v65; // [rsp+118h] [rbp+10h]
  __int128 v66; // [rsp+128h] [rbp+20h]
  __int128 v67; // [rsp+138h] [rbp+30h]
  __int128 v68; // [rsp+148h] [rbp+40h]
  __int128 v69; // [rsp+158h] [rbp+50h]
  __int128 v70; // [rsp+168h] [rbp+60h]
  __int128 v71; // [rsp+178h] [rbp+70h]
  __int128 v72; // [rsp+188h] [rbp+80h]
  __int128 v73; // [rsp+198h] [rbp+90h]
  __int128 v74; // [rsp+1A8h] [rbp+A0h]
  __int128 v75; // [rsp+1B8h] [rbp+B0h]
  __int128 v76; // [rsp+1C8h] [rbp+C0h]
  __int128 v77; // [rsp+1D8h] [rbp+D0h]
  __int128 v78; // [rsp+1E8h] [rbp+E0h]
  __int128 v79; // [rsp+1F8h] [rbp+F0h]
  __int128 v80; // [rsp+208h] [rbp+100h]
  __int128 v81; // [rsp+218h] [rbp+110h]
  __int128 v82; // [rsp+228h] [rbp+120h]
  __int128 v83; // [rsp+238h] [rbp+130h]
  __int128 v84; // [rsp+248h] [rbp+140h]
  __int128 v85; // [rsp+258h] [rbp+150h]
  __int128 v86; // [rsp+268h] [rbp+160h]
  int v87[60]; // [rsp+278h] [rbp+170h] BYREF
  int v88; // [rsp+378h] [rbp+270h] BYREF
  __int64 v89; // [rsp+380h] [rbp+278h]
  unsigned int v90; // [rsp+388h] [rbp+280h]
  unsigned int v91; // [rsp+390h] [rbp+288h]

  v91 = a4;
  v90 = a3;
  v89 = a2;
  v14 = a8;
  v16 = *(_DWORD *)(a1 + 1096);
  v17 = *((_OWORD *)a8 + 2);
  v18 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  *(_OWORD *)&v59[0].x = *((_OWORD *)a8 + 1);
  v19 = -v18;
  v20 = *((_OWORD *)a8 + 3);
  *(_OWORD *)v60 = v17;
  v61 = v20;
  if ( (v16 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  v22 = v60[1];
  x = v59[1].x;
  if ( !a6 )
  {
    v24 = (unsigned int)v59[1].x;
    *(_DWORD *)(a1 + 1096) = v16 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v24);
    if ( (gdwMitConfig & 4) != 0 )
      v25 = CTouchProcessor::SetPointerFrameTargetWindows(
              gpTouchProcessor,
              (struct tagTHREADINFO *)a1,
              v22,
              x,
              (int *)&v55[1]);
    else
      v25 = xxxSetPointerFrameTargetWindows((struct tagTHREADINFO *)a1, v22, x, (int *)&v55[1]);
    if ( !v25 )
    {
      EtwTraceEndPointerSetTargetWindows(x);
      *(_DWORD *)(a1 + 1096) &= ~0x100u;
      return (unsigned int)(v55[1] != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(x);
    v26 = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a1 + 1096) &= ~0x100u;
    if ( *(struct tagQMSG **)(v26 + 48) != v14 )
      return 4LL;
  }
  if ( x == 595 )
  {
    v54 = 0;
    v27 = (HWND)*((_QWORD *)v14 + 2);
    v56 = 0LL;
    v57 = v27;
    v53 = 1;
    v88 = 1;
    v55[0] = 1;
  }
  else
  {
    if ( (gdwMitConfig & 4) != 0 )
      PointerMessageInfo = CTouchProcessor::GetPointerMessageInfo(
                             gpTouchProcessor,
                             v22,
                             v19,
                             &v57,
                             &v53,
                             &v88,
                             v55,
                             &v54);
    else
      PointerMessageInfo = GetPointerMessageInfo(v22, v19, &v57, &v53, &v88, v55, &v54);
    if ( !PointerMessageInfo )
      return 3LL;
    v27 = v57;
  }
  v29 = HMValidateHandleNoSecure((unsigned __int64)v27, 1);
  v30 = v29;
  if ( !v29 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v29, v89) )
    return 4LL;
  v31 = x;
  if ( a5 && v88 != 1 )
  {
    switch ( x )
    {
      case 0x245u:
        v31 = 577;
        break;
      case 0x246u:
        v31 = 578;
        break;
      case 0x247u:
        v31 = 579;
        break;
    }
  }
  if ( v90 || v91 != -1 )
  {
    if ( v90 <= v91 )
    {
      if ( v31 < v90 || v31 > v91 )
        return 4LL;
    }
    else if ( v31 >= v91 && v31 <= v90 )
    {
      return 4LL;
    }
  }
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v30, a8, a13, a7, a14) )
  {
LABEL_38:
    *a9 = v30;
    return 2LL;
  }
  if ( *a13 )
  {
    v32 = *(_QWORD *)(v30 + 16);
    if ( *(_QWORD *)(v32 + 384) == *(_QWORD *)(a1 + 384) )
    {
      v33 = *(_DWORD *)(v32 + 1096) & 0x8000;
      if ( !v33 || ((v88 + 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !v33 )
          goto LABEL_38;
        return 4LL;
      }
    }
    return 3LL;
  }
  if ( !IsPointerInputMessageWithState(v31) )
  {
    v34 = v60[0];
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 968), v60[0]);
    if ( ThreadPointerData )
      LODWORD(ThreadPointerData[3].Flink) |= 8u;
    goto LABEL_72;
  }
  v37 = (__int128 *)INPUTDEST_FROM_PWND(v87, v30);
  v38 = v37[1];
  v75 = *v37;
  v39 = v37[2];
  v76 = v38;
  v40 = v37[3];
  v77 = v39;
  v41 = v37[4];
  v78 = v40;
  v42 = v37[5];
  v79 = v41;
  v43 = v37[6];
  v80 = v42;
  v44 = v37[8];
  v81 = v43;
  v82 = v37[7];
  v45 = v37[9];
  v83 = v44;
  v46 = v37[10];
  v84 = v45;
  v47 = v37[11];
  v85 = v46;
  v86 = v47;
  if ( (gdwMitConfig & 4) != 0 )
  {
    v62[0] = *(_OWORD *)&v59[0].x;
    v62[1] = *(_OWORD *)v60;
    v62[2] = v61;
    v63 = v75;
    v64 = v76;
    v65 = v77;
    v66 = v78;
    v67 = v79;
    v68 = v80;
    v69 = v81;
    v70 = v82;
    v71 = v83;
    v72 = v84;
    v73 = v85;
    v74 = v86;
    CTouchProcessor::AdjustCaptureOnRetrieval(gpTouchProcessor, &v63, v54, v22, v88, v53, v19, *a7, v62);
    goto LABEL_62;
  }
  if ( v53 )
    goto LABEL_55;
  if ( (v54 & 0x10000) == 0 )
  {
    if ( v31 == 593 )
    {
      v48 = 2LL;
      goto LABEL_54;
    }
LABEL_55:
    if ( *a7 && v53 && (x == 583 || x == 594) )
    {
      v49 = *(_QWORD *)(v22 + 40);
      if ( v49 )
        ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)(v49 + 32 + (v19 != 0 ? 0x18 : 0)));
    }
    goto LABEL_62;
  }
  v48 = 1LL;
LABEL_54:
  PointerList::SetPointerCapture(v22, v30, v48, (unsigned int)v88, v19);
LABEL_62:
  if ( (gdwMitConfig & 4) != 0 )
  {
    v63 = v75;
    v64 = v76;
    v65 = v77;
    v66 = v78;
    v67 = v79;
    v68 = v80;
    v69 = v81;
    v70 = v82;
    v71 = v83;
    v72 = v84;
    v73 = v85;
    v74 = v86;
    updated = CTouchProcessor::UpdatePointerInfoTarget(gpTouchProcessor, v22, &v63, (unsigned int)v88, v19, &v56, &v58);
  }
  else
  {
    updated = UpdatePointerInfoTarget(v22, (struct tagWND *)v30, v88, v19, &v56, &v58);
  }
  if ( !updated || ((v88 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v34 = v60[0];
  if ( (gdwMitConfig & 4) != 0 )
  {
    v63 = v75;
    v64 = v76;
    v65 = v77;
    v66 = v78;
    v67 = v79;
    v68 = v80;
    v69 = v81;
    v70 = v82;
    v71 = v83;
    v72 = v84;
    v73 = v85;
    v74 = v86;
    v51 = CTouchProcessor::AddThreadPointerData(gpTouchProcessor, a1 + 968, LOWORD(v60[0]), v55[0], v22, v31, &v63, 1);
  }
  else
  {
    v51 = AddThreadPointerData((struct _LIST_ENTRY *)(a1 + 968), v60[0], v55[0], v22, v31, *(HWND *)v30, 1);
  }
  if ( !v51 )
    return 3LL;
  v36 = a13;
LABEL_72:
  *a9 = v30;
  *a10 = v31;
  if ( v31 - 577 > 3 )
    *a11 = v34;
  else
    *a11 = (unsigned __int16)v34 | ((unsigned __int64)(unsigned __int16)v88 << 16);
  result = 1LL;
  *a12 = LOWORD(v56.x) | ((unsigned __int64)LOWORD(v56.y) << 16);
  v52 = v58;
  *v36 = 0;
  *(struct tagPOINT *)(a1 + 1148) = v52;
  return result;
}
