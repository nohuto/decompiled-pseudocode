/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01BF7C0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01CAE8C (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D004 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C009F1AC (IsPointerInputMessageWithState.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CF8DC (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     CheckPwndFilter @ 0x1C00CFA74 (CheckPwndFilter.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01CAB78 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01CB458 (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01CC274 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01F61C0 (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F6320 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  unsigned int v26; // eax
  __int64 v27; // rcx
  HWND v28; // rcx
  int PointerMessageInfo; // eax
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // r15
  struct _LIST_ENTRY *ThreadPointerData; // rax
  int *v37; // r9
  __int128 *v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int64 v49; // r8
  __int64 v50; // rdx
  int updated; // eax
  int v52; // eax
  struct tagPOINT v53; // rcx
  int v54; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v56[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagPOINT v57; // [rsp+68h] [rbp-A0h] BYREF
  HWND v58; // [rsp+70h] [rbp-98h] BYREF
  struct tagPOINT v59; // [rsp+78h] [rbp-90h] BYREF
  struct tagPOINT v60[2]; // [rsp+80h] [rbp-88h]
  unsigned __int64 v61[4]; // [rsp+90h] [rbp-78h]
  __int128 v62; // [rsp+B0h] [rbp-58h]
  _OWORD v63[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v64; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v65; // [rsp+108h] [rbp+0h]
  __int128 v66; // [rsp+118h] [rbp+10h]
  __int128 v67; // [rsp+128h] [rbp+20h]
  __int128 v68; // [rsp+138h] [rbp+30h]
  __int128 v69; // [rsp+148h] [rbp+40h]
  __int128 v70; // [rsp+158h] [rbp+50h]
  __int128 v71; // [rsp+168h] [rbp+60h]
  __int128 v72; // [rsp+178h] [rbp+70h]
  __int128 v73; // [rsp+188h] [rbp+80h]
  __int128 v74; // [rsp+198h] [rbp+90h]
  __int128 v75; // [rsp+1A8h] [rbp+A0h]
  __int128 v76; // [rsp+1B8h] [rbp+B0h]
  __int128 v77; // [rsp+1C8h] [rbp+C0h]
  __int128 v78; // [rsp+1D8h] [rbp+D0h]
  __int128 v79; // [rsp+1E8h] [rbp+E0h]
  __int128 v80; // [rsp+1F8h] [rbp+F0h]
  __int128 v81; // [rsp+208h] [rbp+100h]
  __int128 v82; // [rsp+218h] [rbp+110h]
  __int128 v83; // [rsp+228h] [rbp+120h]
  __int128 v84; // [rsp+238h] [rbp+130h]
  __int128 v85; // [rsp+248h] [rbp+140h]
  __int128 v86; // [rsp+258h] [rbp+150h]
  __int128 v87; // [rsp+268h] [rbp+160h]
  _DWORD v88[60]; // [rsp+278h] [rbp+170h] BYREF
  int v89; // [rsp+378h] [rbp+270h] BYREF
  __int64 v90; // [rsp+380h] [rbp+278h]
  unsigned int v91; // [rsp+388h] [rbp+280h]
  unsigned int v92; // [rsp+390h] [rbp+288h]

  v92 = a4;
  v91 = a3;
  v90 = a2;
  v14 = a8;
  v16 = *(_DWORD *)(a1 + 1184);
  v17 = *((_OWORD *)a8 + 2);
  v18 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  *(_OWORD *)&v60[0].x = *((_OWORD *)a8 + 1);
  v19 = -v18;
  v20 = *((_OWORD *)a8 + 3);
  *(_OWORD *)v61 = v17;
  v62 = v20;
  if ( (v16 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  v22 = v61[1];
  x = v60[1].x;
  if ( !a6 )
  {
    v24 = (unsigned int)v60[1].x;
    *(_DWORD *)(a1 + 1184) = v16 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v24);
    if ( (gdwMitConfig & 4) != 0 )
      v25 = CTouchProcessor::SetPointerFrameTargetWindows(
              gpTouchProcessor,
              (struct tagTHREADINFO *)a1,
              v22,
              x,
              (int *)&v56[1]);
    else
      v25 = xxxSetPointerFrameTargetWindows((struct tagTHREADINFO *)a1, v22, x, (int *)&v56[1]);
    if ( !v25 )
    {
      EtwTraceEndPointerSetTargetWindows(x);
      *(_DWORD *)(a1 + 1184) &= ~0x100u;
      v26 = v56[1];
      return (unsigned int)(v26 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(x);
    v27 = *(_QWORD *)(a1 + 408);
    *(_DWORD *)(a1 + 1184) &= ~0x100u;
    if ( *(struct tagQMSG **)(v27 + 80) != v14 )
      return 4LL;
  }
  if ( x == 595 )
  {
    v55 = 0;
    v28 = (HWND)*((_QWORD *)v14 + 2);
    v57 = 0LL;
    v58 = v28;
    v54 = 1;
    v89 = 1;
    v56[0] = 1;
  }
  else
  {
    if ( (gdwMitConfig & 4) != 0 )
      PointerMessageInfo = CTouchProcessor::GetPointerMessageInfo(
                             gpTouchProcessor,
                             v22,
                             v19,
                             &v58,
                             &v54,
                             &v89,
                             v56,
                             &v55);
    else
      PointerMessageInfo = GetPointerMessageInfo(v22, v19, &v58, &v54, &v89, v56, &v55);
    if ( !PointerMessageInfo )
      return 3LL;
    v28 = v58;
  }
  LOBYTE(a2) = 1;
  v30 = HMValidateHandleNoSecure((unsigned __int64)v28, a2, a3, a4);
  v31 = v30;
  if ( !v30 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v30, v90) )
    return 4LL;
  v32 = x;
  if ( a5 && v89 != 1 )
  {
    switch ( x )
    {
      case 0x245u:
        v32 = 577;
        break;
      case 0x246u:
        v32 = 578;
        break;
      case 0x247u:
        v32 = 579;
        break;
    }
  }
  if ( v91 || v92 != -1 )
  {
    if ( v91 <= v92 )
    {
      if ( v32 < v91 || v32 > v92 )
        return 4LL;
    }
    else if ( v32 >= v92 && v32 <= v91 )
    {
      return 4LL;
    }
  }
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v31, a8, a13, a7, a14) )
  {
LABEL_39:
    *a9 = v31;
    return 2LL;
  }
  if ( *a13 )
  {
    v34 = *(_QWORD *)(v31 + 16);
    if ( *(_QWORD *)(v34 + 408) == *(_QWORD *)(a1 + 408) )
    {
      if ( (*(_DWORD *)(v34 + 1184) & 0x8000) != 0 )
      {
        v26 = (v89 + 2) & 0xFFFFFFFD;
        return (unsigned int)(v26 != 0) + 3;
      }
      goto LABEL_39;
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v32, v33) )
  {
    v35 = v61[0];
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1056), v61[0]);
    if ( ThreadPointerData )
      LODWORD(ThreadPointerData[3].Flink) |= 8u;
    goto LABEL_71;
  }
  v38 = (__int128 *)INPUTDEST_FROM_PWND(v88, v31);
  v39 = v38[1];
  v76 = *v38;
  v40 = v38[2];
  v77 = v39;
  v41 = v38[3];
  v78 = v40;
  v42 = v38[4];
  v79 = v41;
  v43 = v38[5];
  v80 = v42;
  v44 = v38[6];
  v81 = v43;
  v45 = v38[8];
  v82 = v44;
  v83 = v38[7];
  v46 = v38[9];
  v84 = v45;
  v47 = v38[10];
  v85 = v46;
  v48 = v38[11];
  v86 = v47;
  v87 = v48;
  if ( (gdwMitConfig & 4) != 0 )
  {
    v63[0] = *(_OWORD *)&v60[0].x;
    v63[1] = *(_OWORD *)v61;
    v63[2] = v62;
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
    v75 = v87;
    CTouchProcessor::AdjustCaptureOnRetrieval(gpTouchProcessor, &v64, v55, v22, v89, v54, v19, *a7, v63);
    goto LABEL_61;
  }
  if ( v54 )
    goto LABEL_54;
  if ( (v55 & 0x10000) == 0 )
  {
    if ( v32 == 593 )
    {
      v49 = 2LL;
      goto LABEL_53;
    }
LABEL_54:
    if ( *a7 && v54 && (x == 583 || x == 594) )
    {
      v50 = *(_QWORD *)(v22 + 40);
      if ( v50 )
        ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)(v50 + 32 + (v19 != 0 ? 0x18 : 0)));
    }
    goto LABEL_61;
  }
  v49 = 1LL;
LABEL_53:
  PointerList::SetPointerCapture(v22, v31, v49, (unsigned int)v89, v19);
LABEL_61:
  if ( (gdwMitConfig & 4) != 0 )
  {
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
    v75 = v87;
    updated = CTouchProcessor::UpdatePointerInfoTarget(gpTouchProcessor, v22, &v64, (unsigned int)v89, v19, &v57, &v59);
  }
  else
  {
    updated = UpdatePointerInfoTarget(v22, (struct tagWND *)v31, v89, v19, &v57, &v59);
  }
  if ( !updated || ((v89 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v35 = v61[0];
  if ( (gdwMitConfig & 4) != 0 )
  {
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
    v75 = v87;
    v52 = CTouchProcessor::AddThreadPointerData(gpTouchProcessor, a1 + 1056, LOWORD(v61[0]), v56[0], v22, v32, &v64, 1);
  }
  else
  {
    v52 = AddThreadPointerData(
            (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1056),
            v61[0],
            v56[0],
            v22,
            v32,
            *(HWND *)v31,
            1);
  }
  if ( !v52 )
    return 3LL;
  v37 = a13;
LABEL_71:
  *a9 = v31;
  *a10 = v32;
  if ( v32 - 577 > 3 )
    *a11 = v35;
  else
    *a11 = (unsigned __int16)v35 | (unsigned __int64)((unsigned __int16)v89 << 16);
  result = 1LL;
  *a12 = LOWORD(v57.x) | (unsigned __int64)(LOWORD(v57.y) << 16);
  v53 = v59;
  *v37 = 0;
  *(struct tagPOINT *)(a1 + 1236) = v53;
  return result;
}
