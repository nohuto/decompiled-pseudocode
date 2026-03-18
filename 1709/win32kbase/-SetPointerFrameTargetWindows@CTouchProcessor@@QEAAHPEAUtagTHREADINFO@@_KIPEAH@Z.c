/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0017280 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ApiSetEditionPostEventMessage @ 0x1C00905D8 (ApiSetEditionPostEventMessage.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C011710C (-GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsMessageOnlyWindow@CInputDest@@QEBA_NXZ @ 0x1C0117278 (-IsMessageOnlyWindow@CInputDest@@QEBA_NXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01173D0 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C588 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C960 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01216F4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01218C4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0121C2C (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C012200C (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0122114 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0122450 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0122AB0 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0124E24 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C01253A4 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0125E1C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0126EF4 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C012745C (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C013AA5C (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013ACC8 (ApiSetEditionPointerSpeedHitTest.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  char *v9; // rbx
  int v10; // edi
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v14; // r15
  void *v15; // rax
  __int64 v16; // r14
  int v17; // r12d
  CTouchProcessor *v18; // rcx
  __int64 *v19; // rsi
  CPointerInfoNode *v20; // rcx
  struct tagTHREADINFO *v21; // r10
  struct tagTHREADINFO *v22; // r10
  int v23; // r11d
  CTouchProcessor *v24; // rcx
  CInputDest *Queue; // rax
  CInputDest *v26; // r10
  __int64 v27; // r9
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  bool v40; // al
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r8
  int v55; // ecx
  bool v56; // zf
  CTouchProcessor *v57; // rcx
  int v58; // eax
  __int64 v59; // r9
  int v60; // r11d
  CTouchProcessor *v61; // rcx
  CTouchProcessor *v62; // rcx
  int v63; // r8d
  int v64; // eax
  __int64 v65; // r8
  __int64 v66; // r9
  struct _ERESOURCE *v67; // rcx
  __int64 v68; // r9
  __int128 v69; // xmm1
  int v70; // r8d
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  bool v78; // cf
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  CTouchProcessor *v82; // rcx
  CTouchProcessor *v83; // rcx
  int v84; // r8d
  int v85; // eax
  int v86; // r9d
  unsigned int v87; // eax
  int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rdx
  int v92; // r9d
  unsigned int v93; // esi
  struct CPointerInputFrame *v94; // rax
  struct _ERESOURCE *v95; // rcx
  unsigned int v97; // [rsp+50h] [rbp-B0h]
  int v98; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v99; // [rsp+58h] [rbp-A8h]
  int v100; // [rsp+5Ch] [rbp-A4h]
  struct tagTHREADINFO *v101; // [rsp+60h] [rbp-A0h]
  int v102; // [rsp+68h] [rbp-98h]
  int IsMessageDelegated; // [rsp+6Ch] [rbp-94h]
  unsigned int v104; // [rsp+70h] [rbp-90h]
  struct tagQ *QueueForCurrentNode; // [rsp+78h] [rbp-88h]
  struct CPointerInfoNode *v106; // [rsp+80h] [rbp-80h]
  struct tagPOINT v107; // [rsp+88h] [rbp-78h] BYREF
  int *v108; // [rsp+90h] [rbp-70h]
  int v109; // [rsp+98h] [rbp-68h] BYREF
  __int64 v110; // [rsp+A0h] [rbp-60h]
  char *v111; // [rsp+A8h] [rbp-58h]
  __int64 v112; // [rsp+B0h] [rbp-50h]
  struct CInputDest *v113; // [rsp+B8h] [rbp-48h] BYREF
  char v114[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct CInputDest *v115; // [rsp+C8h] [rbp-38h] BYREF
  struct CInputDest *v116; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v117[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v118[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v119[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v120[64]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v121[12]; // [rsp+190h] [rbp+90h] BYREF
  _OWORD v122[12]; // [rsp+250h] [rbp+150h] BYREF
  _OWORD v123[12]; // [rsp+310h] [rbp+210h] BYREF
  char v124; // [rsp+3D0h] [rbp+2D0h] BYREF
  _QWORD v125[26]; // [rsp+490h] [rbp+390h] BYREF

  v108 = a5;
  v99 = a4;
  v101 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x53u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = (char *)this + 224;
  v111 = (char *)this + 224;
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 28);
  *a5 = 0;
  v107 = 0LL;
  if ( a4 == 595 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x54u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v10 = 1;
    goto LABEL_115;
  }
  if ( !a3 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 85;
LABEL_113:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      goto LABEL_114;
    }
    goto LABEL_114;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a3 + 28));
  v14 = FrameById;
  if ( !FrameById )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 86;
      goto LABEL_113;
    }
LABEL_114:
    v10 = 0;
LABEL_115:
    v93 = v10;
    goto LABEL_116;
  }
  v10 = 1;
  _InterlockedAdd((volatile signed __int32 *)FrameById + 11, 1u);
  if ( (*((_DWORD *)FrameById + 20) & 0x20) != 0 )
  {
    CTouchProcessor::UnreferenceFrameInt(this, FrameById);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x57u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v9 = v111;
    goto LABEL_115;
  }
  v15 = (void *)Win32AllocPool(200LL, 0x70697355u);
  v16 = (__int64)v15;
  if ( !v15 )
  {
    CTouchProcessor::UnreferenceFrameInt(this, v14);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x58u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v9 = v111;
    goto LABEL_114;
  }
  memset(v15, 0, 0xC8uLL);
  *(_BYTE *)(v16 + 192) = 0;
  PushW32ThreadLock(v16, v118, lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v17 = (*((_DWORD *)a2 + 296) >> 13) & 1;
  v106 = (struct CPointerInfoNode *)(*((_QWORD *)v14 + 12) + 608LL * *(unsigned int *)(a3 + 32));
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated(v106, v99);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v18, v101, v17, v99, IsMessageDelegated, v18);
  PushW32ThreadLock(v14, v117, CTouchProcessor::DereferencePointerInputFrame);
  v19 = (__int64 *)*((_QWORD *)v14 + 12);
  v102 = 1;
  v100 = 1;
  v97 = 0;
  if ( *((_DWORD *)v14 + 12) )
  {
    while ( 1 )
    {
      CInputDest::SetEmpty((CInputDest *)v16);
      if ( v17 && (*((_DWORD *)v101 + 296) & 0x2000) == 0 )
        goto LABEL_102;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v19) )
        goto LABEL_97;
      if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v20, v21) )
      {
        if ( (unsigned int)CTouchProcessor::HandlePointerNodeWithTarget((__int64)this, v106, v99, (__int64)v19) != 1 )
          goto LABEL_97;
        v100 = 0;
        goto LABEL_101;
      }
      v24 = v106;
      if ( *((_DWORD *)v19 + 2) != *((_DWORD *)v106 + 2) )
        goto LABEL_27;
      if ( v19 != (__int64 *)v106 )
      {
        if ( !v17 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v19)
          || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v19, &v109), v23 = 0, v109)
          || Queue && CInputDest::GetQueue(Queue, 2) && !CInputDest::UsesQueue(v26, QueueForCurrentNode) )
        {
LABEL_27:
          v102 = v23;
          goto LABEL_97;
        }
        v22 = v101;
      }
      if ( (*((_DWORD *)v22 + 296) & 0x2000) != 0 )
        break;
LABEL_52:
      v53 = *((unsigned int *)v19 + 2);
      v54 = *((_QWORD *)v14 + 13);
      v55 = *(_DWORD *)(240 * v53 + v54 + 220);
      if ( (v55 & 1) != 0 && (*((_DWORD *)v22 + 296) & 0x2000) == 0 )
        *(_DWORD *)(240 * v53 + v54 + 220) = v55 & 0xFFFFFFFE;
      v56 = *((_DWORD *)v19 + 62) == 5;
      v98 = 1;
      if ( v56 )
      {
        CTouchProcessor::DetermineTouchpadPointerTargetWindow(
          (PERESOURCE *)this,
          v22,
          v14,
          (struct CPointerInfoNode *)v19,
          QueueForCurrentNode,
          v97,
          v17,
          &v98,
          &v107,
          (struct CInputDest *)v16);
        if ( !*(_DWORD *)v16 )
          goto LABEL_97;
      }
      else
      {
        CTouchProcessor::DeterminePointerTargetWindow(
          (PERESOURCE *)this,
          v22,
          (struct CPointerInfoNode *)v19,
          QueueForCurrentNode,
          v17,
          &v98,
          &v107,
          (struct CInputDest *)v16);
      }
      QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v57, v101, v17, v99, IsMessageDelegated, v106);
      if ( !QueueForCurrentNode )
      {
LABEL_100:
        v100 = 0;
LABEL_101:
        *v108 = 1;
        goto LABEL_102;
      }
      v58 = CTouchProcessor::RevalidateFrameProcessing(0LL, v101, v17, (const struct CPointerInfoNode *)v19, 0);
      v60 = 0;
      if ( !v58 )
        goto LABEL_97;
      if ( *(_DWORD *)v16 )
      {
        if ( (*((_DWORD *)v19 + 65) & 0x10000) != 0 && *((_DWORD *)v19 + 62) != 5 && (*((_DWORD *)v19 + 1) & 0x80u) == 0 )
        {
          CTouchProcessor::PointerParentNotify(this, (struct CInputDest *)v16, (struct CPointerInfoNode *)v19, v59);
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v61, v101, v17, v99, IsMessageDelegated, v106);
          if ( !QueueForCurrentNode )
            goto LABEL_100;
          if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                0LL,
                                v101,
                                v17,
                                (const struct CPointerInfoNode *)v19,
                                0) )
            goto LABEL_97;
          v64 = CTouchProcessor::RecheckPointerCapture(v62, v19[2], v63, &v115, &v98);
          v60 = 0;
          if ( v64 )
          {
            CInputDest::operator=(v16, (__int64)v115);
            v60 = 0;
          }
        }
        if ( *(_DWORD *)v16
          && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v19)
          && ((*((_DWORD *)v19 + 1) & 0x80u) == 0
           || CInputDest::IsMessageOnlyWindow((CInputDest *)v16)
           && CInputDest::GetCompositionWindowUIOwner((CInputDest *)v16)
           || CInputDest::TestWindowFlag((CInputDest *)v16, 64260)) )
        {
          *(_DWORD *)(608LL * v97 + *((_QWORD *)v14 + 12) + 224) = v98;
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v120, (struct CInputDest *)v16, v65, v66);
          v67 = *(struct _ERESOURCE **)v9;
          *((_QWORD *)v9 + 4) = 0LL;
          ExReleaseResourceAndLeaveCriticalRegion(v67);
          v68 = v19[2];
          v69 = *(_OWORD *)(v16 + 16);
          v70 = *((unsigned __int16 *)v19 + 112);
          v123[0] = *(_OWORD *)v16;
          v71 = *(_OWORD *)(v16 + 32);
          v123[1] = v69;
          v72 = *(_OWORD *)(v16 + 48);
          v123[2] = v71;
          v73 = *(_OWORD *)(v16 + 64);
          v123[3] = v72;
          v74 = *(_OWORD *)(v16 + 80);
          v123[4] = v73;
          v75 = *(_OWORD *)(v16 + 96);
          v123[5] = v74;
          v76 = *(_OWORD *)(v16 + 112);
          v123[6] = v75;
          v77 = *(_OWORD *)(v16 + 128);
          v78 = __CFSHR__(*((_DWORD *)v19 + 1), 8);
          v123[7] = v76;
          v79 = *(_OWORD *)(v16 + 144);
          v123[8] = v77;
          v80 = *(_OWORD *)(v16 + 160);
          v123[9] = v79;
          v81 = *(_OWORD *)(v16 + 176);
          v123[10] = v80;
          v123[11] = v81;
          ApiSetEditionPointerActivate((unsigned int)v123, -v78, v70, v68, (__int64)(v19 + 30));
          CInpLockGuard::LockExclusive((PERESOURCE *)v9);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v120);
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v82, v101, v17, v99, IsMessageDelegated, v106);
          if ( !QueueForCurrentNode )
            goto LABEL_100;
          if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                0LL,
                                v101,
                                v17,
                                (const struct CPointerInfoNode *)v19,
                                0) )
            goto LABEL_97;
          v85 = CTouchProcessor::RecheckPointerCapture(v83, v19[2], v84, &v116, &v98);
          v60 = 0;
          if ( v85 )
          {
            CInputDest::operator=(v16, (__int64)v116);
            v60 = 0;
          }
        }
      }
      CTouchProcessor::SetPointerInfoNodeTarget(
        this,
        v14,
        v97,
        (const struct CInputDest *)v16,
        v98,
        &v107,
        v60,
        v60,
        1,
        v60);
      if ( *(_DWORD *)v16 )
      {
        if ( (*((_DWORD *)v19 + 65) & 0x10000) != 0 )
        {
          v86 = 1;
        }
        else
        {
          if ( v99 != 593 )
            goto LABEL_84;
          v86 = 2;
        }
        CTouchProcessor::SetPointerCapture((__int64)this, v19[2], v16, v86, v98, v17);
      }
LABEL_84:
      if ( *((_DWORD *)v19 + 62) != 5 )
        goto LABEL_97;
      v87 = v97;
      if ( (*((_DWORD *)v19 + 65) & 0x2000) != 0 )
      {
        v104 = 0;
        if ( v97 )
        {
          v88 = v98;
          v89 = 0LL;
          v112 = 0LL;
          v110 = 0LL;
          while ( 1 )
          {
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)v14 + 12) + v89)) )
              goto LABEL_95;
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              4u,
              0xBu,
              0x59u,
              (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
            CTouchProcessor::SetPointerInfoNodeTarget(
              this,
              v14,
              v104,
              (const struct CInputDest *)v16,
              v88,
              &v107,
              0,
              0,
              1,
              0);
            if ( !*(_DWORD *)v16 )
              goto LABEL_95;
            v90 = *((_QWORD *)v14 + 12);
            if ( (*(_DWORD *)(v110 + v90 + 260) & 0x10000) != 0 )
              break;
            if ( v99 == 593 )
            {
              v91 = v19[2];
              v92 = 2;
              goto LABEL_94;
            }
LABEL_95:
            v110 += 608LL;
            v89 = v112 + 608;
            ++v104;
            v112 += 608LL;
            if ( v104 >= v97 )
            {
              v9 = (char *)this + 224;
              goto LABEL_97;
            }
          }
          v91 = *(_QWORD *)(v110 + v90 + 16);
          v92 = 1;
LABEL_94:
          CTouchProcessor::SetPointerCapture((__int64)this, v91, v16, v92, v88, v17);
          goto LABEL_95;
        }
      }
LABEL_98:
      v19 += 76;
      v97 = v87 + 1;
      if ( v87 + 1 >= *((_DWORD *)v14 + 12) )
        goto LABEL_102;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(v24, v19[2], v17, &v113, &v98) )
    {
      CInputDest::operator=(v16, (__int64)v113);
    }
    else
    {
      v98 = 1;
      if ( *((_DWORD *)v19 + 6) )
        CInputDest::operator=(v16, (__int64)(v19 + 3));
      if ( !*(_DWORD *)v16 )
      {
        CThreadLockInputDest::CThreadLockInputDest(
          (CThreadLockInputDest *)v119,
          (struct CInputDest *)(v19 + 51),
          0LL,
          v27);
        v28 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v124, (int)v19 + 248, 0, 0, 0LL);
        v29 = v28[1];
        v121[0] = *v28;
        v30 = v28[2];
        v121[1] = v29;
        v31 = v28[3];
        v121[2] = v30;
        v32 = v28[4];
        v121[3] = v31;
        v33 = v28[5];
        v121[4] = v32;
        v34 = v28[6];
        v121[5] = v33;
        v35 = v28[7];
        v28 += 8;
        v121[6] = v34;
        v36 = *v28;
        v121[7] = v35;
        v37 = v28[1];
        v121[8] = v36;
        v38 = v28[2];
        v121[9] = v37;
        v39 = v28[3];
        v121[10] = v38;
        v121[11] = v39;
        CInputDest::CInputDest((CInputDest *)v125, (const struct CInputDest *)v121);
        CInputDest::operator=(v16, v125);
        CInputDest::SetEmpty((CInputDest *)v125);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v119);
      }
    }
    if ( *(_DWORD *)(v16 + 92) == 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v16 + 80) + 64LL) )
        goto LABEL_49;
      v40 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v16 + 92) != 2 )
      {
LABEL_51:
        v22 = v101;
        goto LABEL_52;
      }
      v40 = *(_QWORD *)(*(_QWORD *)(v16 + 80) + 328LL) != 0LL;
    }
    if ( v40 )
    {
LABEL_49:
      CTouchProcessor::SetPointerInfoNodeTarget(this, v14, v97, (const struct CInputDest *)v16, v98, &v107, 0, 0, 1, 1);
      v102 = 0;
      if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v19) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v114);
        v41 = *(_OWORD *)(v16 + 16);
        v122[0] = *(_OWORD *)v16;
        v42 = *(_OWORD *)(v16 + 32);
        v122[1] = v41;
        v43 = *(_OWORD *)(v16 + 48);
        v122[2] = v42;
        v44 = *(_OWORD *)(v16 + 64);
        v122[3] = v43;
        v45 = *(_OWORD *)(v16 + 80);
        v122[4] = v44;
        v46 = *(_OWORD *)(v16 + 96);
        v122[5] = v45;
        v47 = *(_OWORD *)(v16 + 112);
        v122[6] = v46;
        v48 = *(_OWORD *)(v16 + 128);
        v122[7] = v47;
        v49 = *(_OWORD *)(v16 + 144);
        v122[8] = v48;
        v50 = *(_OWORD *)(v16 + 160);
        v122[9] = v49;
        v51 = *(_OWORD *)(v16 + 176);
        v52 = v19[2];
        v122[10] = v50;
        v122[11] = v51;
        ApiSetEditionPostEventMessage(v122, 0x14u, 0, 0LL, v52);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v114);
      }
LABEL_97:
      v87 = v97;
      goto LABEL_98;
    }
    goto LABEL_51;
  }
LABEL_102:
  PopW32ThreadLock(v117);
  PopAndFreeAlwaysW32ThreadLock(v118);
  v93 = v100;
  if ( v100 )
  {
    if ( (*((_DWORD *)v14 + 20) & 0x20) == 0 )
    {
      if ( v102 )
      {
        if ( !v17 )
        {
          v94 = CTouchProcessor::FindFrameById(this, *((_DWORD *)v14 + 10));
          if ( v94 )
          {
            _InterlockedAdd((volatile signed __int32 *)v94 + 11, 1u);
            *((_DWORD *)v94 + 20) |= 0x20u;
            CTouchProcessor::UnreferenceFrameInt(this, v94);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrameInt(this, v14);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x5Au,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = v111;
LABEL_116:
  v95 = *(struct _ERESOURCE **)v9;
  *((_QWORD *)v9 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v95);
  return v93;
}
