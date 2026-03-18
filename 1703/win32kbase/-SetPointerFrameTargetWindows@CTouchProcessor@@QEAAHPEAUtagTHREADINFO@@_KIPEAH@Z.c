/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004206C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004208C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0047F04 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0089DE8 (ApiSetEditionPostEventMessage.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00A11AC (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00D5190 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00D51C0 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0118298 (-GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsMessageOnlyWindow@CInputDest@@QEBA_NXZ @ 0x1C01183D0 (-IsMessageOnlyWindow@CInputDest@@QEBA_NXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C011853C (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011DB1C (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E428 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0122124 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01222F4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01225D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01229B4 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0122ABC (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0122DF8 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0123460 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C012584C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0125DA0 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C012683C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C012789C (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C013B8EC (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013BB58 (ApiSetEditionPointerSpeedHitTest.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  struct tagTHREADINFO *v7; // rsi
  CInpLockGuard *v9; // rbx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  struct CPointerInputFrame *v15; // rax
  struct CPointerInputFrame *v16; // r13
  unsigned int v17; // edi
  void *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  int v21; // r12d
  CTouchProcessor *v22; // rcx
  __int64 *v23; // rsi
  CPointerInfoNode *v24; // rcx
  struct tagTHREADINFO *v25; // r8
  int v26; // r11d
  CInputDest *Queue; // rax
  CInputDest *v28; // r10
  struct tagTHREADINFO *v29; // rcx
  _DWORD *v30; // rcx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  bool v43; // al
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rdx
  bool v58; // zf
  CTouchProcessor *v59; // rcx
  int v60; // eax
  int v61; // r11d
  CTouchProcessor *v62; // rcx
  CTouchProcessor *v63; // rcx
  int v64; // r8d
  int v65; // eax
  __int64 v66; // r9
  __int128 v67; // xmm1
  int v68; // r8d
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  bool v76; // cf
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  CTouchProcessor *v80; // rcx
  CTouchProcessor *v81; // rcx
  int v82; // r8d
  int v83; // eax
  int v84; // r9d
  unsigned int v85; // eax
  int v86; // ebx
  __int64 v87; // rcx
  int v88; // edx
  __int64 v89; // rcx
  __int64 v90; // rdx
  int v91; // r9d
  struct CPointerInputFrame *v92; // rax
  int v93; // edx
  unsigned int v95; // [rsp+50h] [rbp-B0h]
  int v96; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v97; // [rsp+58h] [rbp-A8h]
  int v98; // [rsp+5Ch] [rbp-A4h]
  struct tagTHREADINFO *v99; // [rsp+60h] [rbp-A0h]
  int IsMessageDelegated; // [rsp+68h] [rbp-98h]
  unsigned int v101; // [rsp+6Ch] [rbp-94h]
  struct tagQ *QueueForCurrentNode; // [rsp+70h] [rbp-90h]
  struct CPointerInfoNode *v103; // [rsp+78h] [rbp-88h]
  struct tagPOINT v104; // [rsp+80h] [rbp-80h] BYREF
  int *v105; // [rsp+88h] [rbp-78h]
  int v106; // [rsp+90h] [rbp-70h] BYREF
  __int64 v107; // [rsp+98h] [rbp-68h]
  __int64 v108; // [rsp+A0h] [rbp-60h]
  struct CInputDest *v109; // [rsp+A8h] [rbp-58h] BYREF
  char v110[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct CInputDest *v111; // [rsp+B8h] [rbp-48h] BYREF
  struct CInputDest *v112; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v113[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v114[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v115[64]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v116[12]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v117[12]; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v118[12]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v119; // [rsp+380h] [rbp+280h] BYREF
  _QWORD v120[26]; // [rsp+440h] [rbp+340h] BYREF

  v105 = a5;
  v97 = a4;
  v7 = a2;
  v99 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      83,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v9 = (CInpLockGuard *)(this + 25);
  CInpLockGuard::LockExclusive(this + 25);
  *a5 = 0;
  v104 = 0LL;
  if ( a4 == 595 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 84;
LABEL_15:
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(v11->DeviceExtension, v10, 11, v12, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  if ( !a3 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 85;
LABEL_20:
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(v13->DeviceExtension, v10, 11, v14, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      goto LABEL_21;
    }
    goto LABEL_21;
  }
  v15 = CTouchProcessor::FindAndReferenceFrameById((CTouchProcessor *)this, *(_DWORD *)(a3 + 28));
  v16 = v15;
  if ( !v15 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 86;
      goto LABEL_20;
    }
LABEL_21:
    v17 = 0;
    goto LABEL_111;
  }
  if ( (*((_DWORD *)v15 + 20) & 0x20) != 0 )
  {
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v15);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 87;
      goto LABEL_15;
    }
LABEL_16:
    v17 = 1;
    goto LABEL_111;
  }
  v18 = (void *)Win32AllocPool(200LL, 0x70697355u);
  v19 = (__int64)v18;
  if ( !v18 )
  {
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v16);
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 88;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  memset(v18, 0, 0xC8uLL);
  *(_BYTE *)(v19 + 192) = 0;
  PushW32ThreadLock(v19, v114, lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v20 = *(unsigned int *)(a3 + 32);
  v17 = 1;
  v21 = (*((_DWORD *)v7 + 274) >> 13) & 1;
  v103 = (struct CPointerInfoNode *)(*((_QWORD *)v16 + 12) + 608 * v20);
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated(v103, v97);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v22, v7, v21, v97, IsMessageDelegated, v22);
  PushW32ThreadLock(v16, v113, CTouchProcessor::DereferencePointerInputFrame);
  v23 = (__int64 *)*((_QWORD *)v16 + 12);
  v98 = 1;
  v95 = 0;
  if ( *((_DWORD *)v16 + 12) )
  {
    while ( 1 )
    {
      CInputDest::SetEmpty((CInputDest *)v19);
      if ( v21 && (*((_DWORD *)v99 + 274) & 0x2000) == 0 )
        goto LABEL_103;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
        goto LABEL_99;
      if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v24, v25) )
      {
        if ( (unsigned int)CTouchProcessor::HandlePointerNodeWithTarget((__int64)this, v103, v97, (__int64)v23) != 1 )
          goto LABEL_99;
        *v105 = 1;
        v17 = 0;
        goto LABEL_103;
      }
      if ( *((_DWORD *)v23 + 2) != *((_DWORD *)v103 + 2)
        || v23 != (__int64 *)v103
        && (!v21 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v23)
         || (Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v23, &v106), v26 = 0, v106)
         || Queue && CInputDest::GetQueue(Queue, 2) && !CInputDest::UsesQueue(v28, QueueForCurrentNode)) )
      {
        v98 = v26;
        goto LABEL_99;
      }
      v29 = v99;
      if ( (*((_DWORD *)v99 + 274) & 0x2000) != 0 )
        break;
LABEL_54:
      v56 = *((_QWORD *)v16 + 13);
      v57 = 240LL * *((unsigned int *)v23 + 2);
      if ( (*(_DWORD *)(v57 + v56 + 220) & 1) != 0 && (*((_DWORD *)v29 + 274) & 0x2000) == 0 )
        *(_DWORD *)(v57 + v56 + 220) &= ~1u;
      v58 = *((_DWORD *)v23 + 62) == 5;
      v96 = 1;
      if ( v58 )
      {
        CTouchProcessor::DetermineTouchpadPointerTargetWindow(
          (CTouchProcessor *)this,
          v29,
          v16,
          (struct CPointerInfoNode *)v23,
          QueueForCurrentNode,
          v95,
          v21,
          &v96,
          &v104,
          (struct CInputDest *)v19);
        if ( !*(_DWORD *)v19 )
          goto LABEL_99;
      }
      else
      {
        CTouchProcessor::DeterminePointerTargetWindow(
          (CTouchProcessor *)this,
          v29,
          (struct CPointerInfoNode *)v23,
          QueueForCurrentNode,
          v21,
          &v96,
          &v104,
          (struct CInputDest *)v19);
      }
      QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v59, v99, v21, v97, IsMessageDelegated, v103);
      if ( !QueueForCurrentNode )
      {
LABEL_102:
        *v105 = 1;
        v17 = 0;
        goto LABEL_103;
      }
      v60 = CTouchProcessor::RevalidateFrameProcessing(0LL, v99, v21, (const struct CPointerInfoNode *)v23, 0);
      v61 = 0;
      if ( !v60 )
        goto LABEL_99;
      if ( *(_DWORD *)v19 )
      {
        if ( (*((_DWORD *)v23 + 65) & 0x10000) != 0 && *((_DWORD *)v23 + 62) != 5 && (*((_DWORD *)v23 + 1) & 0x80u) == 0 )
        {
          CTouchProcessor::PointerParentNotify(
            (CTouchProcessor *)this,
            (struct CInputDest *)v19,
            (struct CPointerInfoNode *)v23);
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v62, v99, v21, v97, IsMessageDelegated, v103);
          if ( !QueueForCurrentNode )
            goto LABEL_102;
          if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                0LL,
                                v99,
                                v21,
                                (const struct CPointerInfoNode *)v23,
                                0) )
            goto LABEL_99;
          v65 = CTouchProcessor::RecheckPointerCapture(v63, v23[2], v64, &v111, &v96);
          v61 = 0;
          if ( v65 )
          {
            CInputDest::operator=(v19, (__int64)v111);
            v61 = 0;
          }
        }
        if ( *(_DWORD *)v19
          && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v23)
          && ((*((_DWORD *)v23 + 1) & 0x80u) == 0
           || CInputDest::IsMessageOnlyWindow((CInputDest *)v19)
           && CInputDest::GetCompositionWindowUIOwner((CInputDest *)v19)
           || CInputDest::TestWindowFlag((CInputDest *)v19, 64260)) )
        {
          *(_DWORD *)(608LL * v95 + *((_QWORD *)v16 + 12) + 224) = v96;
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v115, (struct CInputDest *)v19);
          CInpLockGuard::UnLock(v9);
          v66 = v23[2];
          v67 = *(_OWORD *)(v19 + 16);
          v68 = *((unsigned __int16 *)v23 + 112);
          v118[0] = *(_OWORD *)v19;
          v69 = *(_OWORD *)(v19 + 32);
          v118[1] = v67;
          v70 = *(_OWORD *)(v19 + 48);
          v118[2] = v69;
          v71 = *(_OWORD *)(v19 + 64);
          v118[3] = v70;
          v72 = *(_OWORD *)(v19 + 80);
          v118[4] = v71;
          v73 = *(_OWORD *)(v19 + 96);
          v118[5] = v72;
          v74 = *(_OWORD *)(v19 + 112);
          v118[6] = v73;
          v75 = *(_OWORD *)(v19 + 128);
          v76 = __CFSHR__(*((_DWORD *)v23 + 1), 8);
          v118[7] = v74;
          v77 = *(_OWORD *)(v19 + 144);
          v118[8] = v75;
          v78 = *(_OWORD *)(v19 + 160);
          v118[9] = v77;
          v79 = *(_OWORD *)(v19 + 176);
          v118[10] = v78;
          v118[11] = v79;
          ApiSetEditionPointerActivate((unsigned int)v118, -v76, v68, v66, (__int64)(v23 + 30));
          CInpLockGuard::LockExclusive((PERESOURCE *)v9);
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v115);
          QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(v80, v99, v21, v97, IsMessageDelegated, v103);
          if ( !QueueForCurrentNode )
            goto LABEL_102;
          if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                0LL,
                                v99,
                                v21,
                                (const struct CPointerInfoNode *)v23,
                                0) )
            goto LABEL_99;
          v83 = CTouchProcessor::RecheckPointerCapture(v81, v23[2], v82, &v112, &v96);
          v61 = 0;
          if ( v83 )
          {
            CInputDest::operator=(v19, (__int64)v112);
            v61 = 0;
          }
        }
      }
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)this,
        v16,
        v95,
        (const struct CInputDest *)v19,
        v96,
        &v104,
        v61,
        v61,
        1,
        v61);
      if ( *(_DWORD *)v19 )
      {
        if ( (*((_DWORD *)v23 + 65) & 0x10000) != 0 )
        {
          v84 = 1;
        }
        else
        {
          if ( v97 != 593 )
            goto LABEL_86;
          v84 = 2;
        }
        CTouchProcessor::SetPointerCapture((__int64)this, v23[2], v19, v84, v96, v21);
      }
LABEL_86:
      if ( *((_DWORD *)v23 + 62) != 5 )
        goto LABEL_99;
      v85 = v95;
      if ( (*((_DWORD *)v23 + 65) & 0x2000) != 0 )
      {
        v101 = 0;
        if ( v95 )
        {
          v86 = v96;
          v87 = 0LL;
          v108 = 0LL;
          v107 = 0LL;
          while ( 1 )
          {
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)v16 + 12) + v87)) )
              goto LABEL_97;
            LOBYTE(v88) = 4;
            WPP_RECORDER_SF_(
              (unsigned int)this[1],
              v88,
              11,
              89,
              (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
            CTouchProcessor::SetPointerInfoNodeTarget(
              (CTouchProcessor *)this,
              v16,
              v101,
              (const struct CInputDest *)v19,
              v86,
              &v104,
              0,
              0,
              1,
              0);
            if ( !*(_DWORD *)v19 )
              goto LABEL_97;
            v89 = *((_QWORD *)v16 + 12);
            if ( (*(_DWORD *)(v89 + v107 + 260) & 0x10000) != 0 )
              break;
            if ( v97 == 593 )
            {
              v90 = v23[2];
              v91 = 2;
              goto LABEL_96;
            }
LABEL_97:
            v107 += 608LL;
            v87 = v108 + 608;
            ++v101;
            v108 += 608LL;
            if ( v101 >= v95 )
            {
              v9 = (CInpLockGuard *)(this + 25);
              goto LABEL_99;
            }
          }
          v90 = *(_QWORD *)(v89 + v107 + 16);
          v91 = 1;
LABEL_96:
          CTouchProcessor::SetPointerCapture((__int64)this, v90, v19, v91, v86, v21);
          goto LABEL_97;
        }
      }
LABEL_100:
      v23 += 76;
      v95 = v85 + 1;
      if ( v85 + 1 >= *((_DWORD *)v16 + 12) )
        goto LABEL_103;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(v99, v23[2], v21, &v109, &v96) )
    {
      CInputDest::operator=(v19, (__int64)v109);
    }
    else
    {
      v30 = v23 + 3;
      v96 = 1;
      if ( *((_DWORD *)v23 + 6) )
      {
        CInputDest::operator=(v19, (__int64)(v23 + 3));
        v30 = v23 + 3;
      }
      if ( !*(_DWORD *)v19 )
      {
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v115, (struct CInputDest *)(v30 + 96));
        v31 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v119, (int)v23 + 248, 0, 0, 0LL);
        v32 = v31[1];
        v116[0] = *v31;
        v33 = v31[2];
        v116[1] = v32;
        v34 = v31[3];
        v116[2] = v33;
        v35 = v31[4];
        v116[3] = v34;
        v36 = v31[5];
        v116[4] = v35;
        v37 = v31[6];
        v116[5] = v36;
        v38 = v31[7];
        v31 += 8;
        v116[6] = v37;
        v39 = *v31;
        v116[7] = v38;
        v40 = v31[1];
        v116[8] = v39;
        v41 = v31[2];
        v116[9] = v40;
        v42 = v31[3];
        v116[10] = v41;
        v116[11] = v42;
        CInputDest::CInputDest((CInputDest *)v120, (const struct CInputDest *)v116);
        CInputDest::operator=(v19, v120);
        CInputDest::~CInputDest((CInputDest *)v120);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v115);
      }
    }
    if ( *(_DWORD *)(v19 + 92) == 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v19 + 80) + 64LL) )
        goto LABEL_51;
      v43 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v19 + 92) != 2 )
      {
LABEL_53:
        v29 = v99;
        goto LABEL_54;
      }
      v43 = *(_QWORD *)(*(_QWORD *)(v19 + 80) + 328LL) != 0LL;
    }
    if ( v43 )
    {
LABEL_51:
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)this,
        v16,
        v95,
        (const struct CInputDest *)v19,
        v96,
        &v104,
        0,
        0,
        1,
        1);
      v98 = 0;
      if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v23) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v110);
        v44 = *(_OWORD *)(v19 + 16);
        v117[0] = *(_OWORD *)v19;
        v45 = *(_OWORD *)(v19 + 32);
        v117[1] = v44;
        v46 = *(_OWORD *)(v19 + 48);
        v117[2] = v45;
        v47 = *(_OWORD *)(v19 + 64);
        v117[3] = v46;
        v48 = *(_OWORD *)(v19 + 80);
        v117[4] = v47;
        v49 = *(_OWORD *)(v19 + 96);
        v117[5] = v48;
        v50 = *(_OWORD *)(v19 + 112);
        v117[6] = v49;
        v51 = *(_OWORD *)(v19 + 128);
        v117[7] = v50;
        v52 = *(_OWORD *)(v19 + 144);
        v117[8] = v51;
        v53 = *(_OWORD *)(v19 + 160);
        v117[9] = v52;
        v54 = *(_OWORD *)(v19 + 176);
        v55 = v23[2];
        v117[10] = v53;
        v117[11] = v54;
        ApiSetEditionPostEventMessage(v117, 0x14u, 0, 0LL, v55);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v110);
      }
LABEL_99:
      v85 = v95;
      goto LABEL_100;
    }
    goto LABEL_53;
  }
LABEL_103:
  PopW32ThreadLock(v113);
  PopAndFreeAlwaysW32ThreadLock(v114);
  if ( v17 )
  {
    if ( (*((_DWORD *)v16 + 20) & 0x20) == 0 )
    {
      if ( v98 )
      {
        if ( !v21 )
        {
          v92 = CTouchProcessor::FindAndReferenceFrameById((CTouchProcessor *)this, *((_DWORD *)v16 + 10));
          if ( v92 )
          {
            *((_DWORD *)v92 + 20) |= 0x20u;
            CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v92);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v93) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v93,
      11,
      90,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
LABEL_111:
  CInpLockGuard::UnLock(v9);
  return v17;
}
