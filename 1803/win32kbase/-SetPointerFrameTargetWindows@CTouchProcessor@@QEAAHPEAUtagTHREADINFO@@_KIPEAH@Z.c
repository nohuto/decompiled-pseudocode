/*
 * XREFs of ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0036F3C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00370E0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C006A6E0 (ApiSetEditionPostEventMessage.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0109980 (-GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01099E4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsMessageOnlyWindow@CInputDest@@QEBA_NXZ @ 0x1C0109AC4 (-IsMessageOnlyWindow@CInputDest@@QEBA_NXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C0109C90 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011074C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0110B68 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011155C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011594C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0116850 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0116A78 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0116E28 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C0117214 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C011741C (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0117888 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C011792C (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C01179C4 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01181E4 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011A994 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C011AEFC (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C011BC38 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C011C9A4 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D060 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011D49C (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C011D7D8 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C013F23C (ApiSetEditionPointerActivate.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013F498 (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerFrameTargetWindows(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  PERESOURCE *v8; // rbx
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // r9
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  const struct CPointerInputFrame *v13; // rax
  const struct CPointerInputFrame *v14; // r15
  unsigned int v15; // edi
  void *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r12
  __int16 v22; // ax
  __int64 v23; // r12
  int v24; // r13d
  __int64 v25; // rdx
  unsigned __int64 v26; // r13
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  CPointerInfoNode *v29; // rcx
  struct tagTHREADINFO *v30; // r8
  int IsTargetSetForRetrieval; // eax
  int v32; // r9d
  int v33; // eax
  __int64 v34; // rcx
  CTouchProcessor *v35; // rcx
  CInputDest *Queue; // rax
  CTouchProcessor *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _OWORD *v40; // rax
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
  bool v51; // al
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  CTouchProcessor *v62; // rcx
  CTouchProcessor *v63; // rcx
  __int64 v64; // r9
  struct CPointerInfoNode *v65; // rax
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned int v78; // eax
  char *v79; // rcx
  CTouchProcessor *v80; // r12
  int v81; // r13d
  __int64 v82; // rcx
  struct CPointerInputFrame *v83; // rax
  struct tagQ *v85; // [rsp+20h] [rbp-E0h]
  unsigned int v86; // [rsp+50h] [rbp-B0h]
  int v87; // [rsp+54h] [rbp-ACh]
  int v88; // [rsp+58h] [rbp-A8h] BYREF
  CTouchProcessor *v89; // [rsp+60h] [rbp-A0h]
  unsigned int v90; // [rsp+68h] [rbp-98h]
  struct tagTHREADINFO *v91; // [rsp+70h] [rbp-90h]
  int v92; // [rsp+78h] [rbp-88h]
  int IsMessageDelegated; // [rsp+7Ch] [rbp-84h]
  unsigned int v94; // [rsp+80h] [rbp-80h]
  struct tagQ *QueueForCurrentNode; // [rsp+88h] [rbp-78h]
  struct tagPOINT v96; // [rsp+90h] [rbp-70h] BYREF
  int *v97; // [rsp+98h] [rbp-68h]
  CInputDest *v98; // [rsp+A0h] [rbp-60h]
  int v99; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v100; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-48h]
  struct CInputDest *v102; // [rsp+C0h] [rbp-40h] BYREF
  char v103[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct CInputDest *v104; // [rsp+D0h] [rbp-30h] BYREF
  struct CInputDest *v105; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-20h]
  _BYTE v107[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v108[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v109[64]; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v110[11]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v111[11]; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v112[11]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v113; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v114[24]; // [rsp+420h] [rbp+320h] BYREF

  v97 = a5;
  v90 = a4;
  v91 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x5Fu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v8 = (PERESOURCE *)((char *)this + 72);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
  *a5 = 0;
  v96 = 0LL;
  if ( a4 == 595 )
  {
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 96;
LABEL_15:
      WPP_RECORDER_SF_(
        (__int64)v9->DeviceExtension,
        5u,
        0xBu,
        v10,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  if ( !a3 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 97;
LABEL_20:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      goto LABEL_21;
    }
    goto LABEL_21;
  }
  v13 = CTouchProcessor::ReferenceFrame((struct _KTHREAD **)this, *(unsigned int *)(a3 + 28));
  v14 = v13;
  if ( !v13 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 98;
      goto LABEL_20;
    }
LABEL_21:
    v15 = 0;
    goto LABEL_137;
  }
  if ( (*((_DWORD *)v13 + 20) & 0x20) != 0 )
  {
    CTouchProcessor::UnreferenceFrame(this, v13);
    v9 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v10 = 99;
      goto LABEL_15;
    }
LABEL_16:
    v15 = 1;
    goto LABEL_137;
  }
  v16 = (void *)Win32AllocPool(184LL, 0x70697355u);
  v17 = (__int64)v16;
  if ( !v16 )
  {
    CTouchProcessor::UnreferenceFrame(this, v14);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 100;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  memset(v16, 0, 0xB8uLL);
  *(_BYTE *)(v17 + 176) = 0;
  PushW32ThreadLock(v17, v108, lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_);
  v20 = *(unsigned int *)(a3 + 32);
  if ( (unsigned int)v20 >= *((_DWORD *)v14 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
    v20 = *(unsigned int *)(a3 + 32);
  }
  v21 = 9 * v20;
  v22 = *(_WORD *)(a3 + 16);
  v23 = *((_QWORD *)v14 + 12) + (v21 << 6);
  v106 = v23;
  if ( *(_WORD *)(v23 + 236) != v22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  if ( a4 == 585 )
  {
    if ( (*(_DWORD *)v23 & 0x800000) != 0 )
      goto LABEL_38;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  }
  if ( a4 == 586 )
  {
    if ( (*(_DWORD *)v23 & 0x8000000) != 0 )
      goto LABEL_38;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  }
  if ( a4 == 593 )
  {
    if ( *(int *)v23 < 0 )
      goto LABEL_38;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  }
  if ( a4 == 594 && (*(_DWORD *)(v23 + 4) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
LABEL_38:
  if ( (*(_DWORD *)v23 & 0x100) == 0 && !*(_QWORD *)(v23 + 256) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  v15 = 1;
  v24 = (*((_DWORD *)v91 + 300) >> 13) & 1;
  v87 = v24;
  IsMessageDelegated = CPointerInfoNode::IsMessageDelegated((CPointerInfoNode *)v23, v90);
  QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                          (struct _KTHREAD **)this,
                          v91,
                          v24,
                          v90,
                          IsMessageDelegated,
                          (const struct CPointerInfoNode *)v23);
  PushW32ThreadLock(v14, v107, CTouchProcessor::DereferencePointerInputFrame);
  v26 = *((_QWORD *)v14 + 12);
  v27 = *((_DWORD *)v14 + 12);
  v101 = v26;
  v92 = 1;
  v86 = 0;
  if ( v27 )
  {
    v89 = (CTouchProcessor *)(v26 + 24);
    do
    {
      v28 = *((_QWORD *)v14 + 12) + 576LL * v27;
      if ( v26 >= v28 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v25);
      CInputDest::SetEmpty((CInputDest *)v17);
      if ( v87 && (*((_DWORD *)v91 + 300) & 0x2000) == 0 )
        break;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v26) )
        goto LABEL_124;
      IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v29, v30);
      v32 = 0;
      if ( IsTargetSetForRetrieval )
      {
        v33 = CTouchProcessor::HandlePointerNodeWithTarget((PERESOURCE *)this, (CPointerInfoNode *)v23, v90, v26);
        if ( v33 == 1 )
        {
          *v97 = 1;
          v15 = 0;
          break;
        }
        if ( (v33 & 0xFFFFFFFD) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v25);
        goto LABEL_124;
      }
      v35 = v89;
      if ( *((_DWORD *)v89 - 4) != *(_DWORD *)(v23 + 8) )
      {
LABEL_53:
        v92 = v32;
        goto LABEL_124;
      }
      if ( v26 != v23 )
      {
        if ( !v87 && !(unsigned int)CPointerInfoNode::IsAnyMessageNonDelegated((CPointerInfoNode *)v26) )
          goto LABEL_53;
        Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v26, &v99);
        v32 = 0;
        v98 = Queue;
        if ( v99 || Queue && CInputDest::GetQueue(Queue, 2LL) && !CInputDest::UsesQueue(v98, QueueForCurrentNode) )
          goto LABEL_53;
        v35 = v89;
      }
      if ( (*((_DWORD *)v91 + 300) & 0x2000) != 0 )
      {
        if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                             (struct _KTHREAD **)this,
                             *((_QWORD *)v35 - 1),
                             v87,
                             &v102,
                             &v88) )
        {
          CInputDest::operator=(v17, (__int64)v102);
        }
        else
        {
          v37 = v89;
          v88 = 1;
          if ( *(_DWORD *)v89 )
          {
            if ( !CInputDest::IsEqualByWindowHandle((__int64)v89, *((void **)v89 + 29), 0) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38);
            CInputDest::operator=(v17, (__int64)v89);
            v37 = v89;
          }
          if ( !*(_DWORD *)v17 )
          {
            CThreadLockInputDest::CThreadLockInputDest(
              (CThreadLockInputDest *)v109,
              (CTouchProcessor *)((char *)v37 + 368));
            v40 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v113, (int)v89 + 208, 0, 0, 0LL, 0LL);
            v41 = v40[1];
            v110[0] = *v40;
            v42 = v40[2];
            v110[1] = v41;
            v43 = v40[3];
            v110[2] = v42;
            v44 = v40[4];
            v110[3] = v43;
            v45 = v40[5];
            v110[4] = v44;
            v46 = v40[6];
            v110[5] = v45;
            v47 = v40[7];
            v110[6] = v46;
            v48 = v40[8];
            v110[7] = v47;
            v49 = v40[9];
            v110[8] = v48;
            v50 = v40[10];
            v110[9] = v49;
            v110[10] = v50;
            CInputDest::CInputDest((CInputDest *)v114, (const struct tagINPUTDEST *)v110);
            CInputDest::operator=(v17, v114);
            CInputDest::~CInputDest((CInputDest *)v114);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v109);
          }
        }
        v35 = (CTouchProcessor *)(unsigned int)(*(_DWORD *)(v17 + 84) - 1);
        if ( *(_DWORD *)(v17 + 84) == 1 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v17 + 72) + 64LL) )
            goto LABEL_77;
          v51 = 0;
          goto LABEL_76;
        }
        if ( *(_DWORD *)(v17 + 84) == 2 )
        {
          v51 = *(_QWORD *)(*(_QWORD *)(v17 + 72) + 248LL) != 0LL;
LABEL_76:
          if ( v51 )
          {
LABEL_77:
            CTouchProcessor::SetPointerInfoNodeTarget(
              this,
              v14,
              v86,
              (const struct CInputDest *)v17,
              v88,
              &v96,
              0,
              0,
              1,
              1);
            v92 = 0;
            if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v26) )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v103);
              v52 = *(_OWORD *)(v17 + 16);
              v111[0] = *(_OWORD *)v17;
              v53 = *(_OWORD *)(v17 + 32);
              v85 = (struct tagQ *)*((_QWORD *)v89 - 1);
              v111[1] = v52;
              v54 = *(_OWORD *)(v17 + 48);
              v111[2] = v53;
              v55 = *(_OWORD *)(v17 + 64);
              v111[3] = v54;
              v56 = *(_OWORD *)(v17 + 80);
              v111[4] = v55;
              v57 = *(_OWORD *)(v17 + 96);
              v111[5] = v56;
              v58 = *(_OWORD *)(v17 + 112);
              v111[6] = v57;
              v59 = *(_OWORD *)(v17 + 128);
              v111[7] = v58;
              v60 = *(_OWORD *)(v17 + 144);
              v111[8] = v59;
              v61 = *(_OWORD *)(v17 + 160);
              v111[9] = v60;
              v111[10] = v61;
              ApiSetEditionPostEventMessage(v111, 0x14u, 0, 0LL, (__int64)v85);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v103);
            }
            goto LABEL_124;
          }
        }
      }
      v62 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                   v35,
                                                   v14,
                                                   (const struct CPointerInfoNode *)v26)
                               + 51);
      if ( ((unsigned __int8)v62 & 1) != 0 && (*((_DWORD *)v91 + 300) & 0x2000) == 0 )
        CTouchProcessor::SetQFrameNonCoalescable(v62, v14, (const struct CPointerInfoNode *)v26);
      v88 = 1;
      if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v26) )
      {
        CTouchProcessor::DetermineTouchpadPointerTargetWindow(
          (PERESOURCE *)this,
          v91,
          v14,
          (struct CPointerInfoNode *)v26,
          QueueForCurrentNode,
          v86,
          v87,
          &v88,
          &v96,
          (struct CInputDest *)v17);
        if ( !*(_DWORD *)v17 )
          goto LABEL_124;
      }
      else
      {
        CTouchProcessor::DeterminePointerTargetWindow(
          (PERESOURCE *)this,
          v91,
          (struct CPointerInfoNode *)v26,
          QueueForCurrentNode,
          v87,
          &v88,
          &v96,
          (struct CInputDest *)v17);
      }
      QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                              (struct _KTHREAD **)this,
                              v91,
                              v87,
                              v90,
                              IsMessageDelegated,
                              (const struct CPointerInfoNode *)v23);
      if ( !QueueForCurrentNode )
        goto LABEL_128;
      if ( (unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                           0LL,
                           v91,
                           v87,
                           (const struct CPointerInfoNode *)v26,
                           0) )
      {
        if ( *(_DWORD *)v17 )
        {
          if ( (*((_DWORD *)v89 + 55) & 0x10000) != 0
            && !(unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v26)
            && (*((_DWORD *)v89 - 5) & 0x80u) == 0 )
          {
            CTouchProcessor::PointerParentNotify(
              (PERESOURCE *)this,
              (struct CInputDest *)v17,
              (struct CPointerInfoNode *)v26);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                    (struct _KTHREAD **)this,
                                    v91,
                                    v87,
                                    v90,
                                    IsMessageDelegated,
                                    (const struct CPointerInfoNode *)v23);
            if ( !QueueForCurrentNode )
              goto LABEL_128;
            if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                  0LL,
                                  v91,
                                  v87,
                                  (const struct CPointerInfoNode *)v26,
                                  0) )
              goto LABEL_124;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                                 (struct _KTHREAD **)this,
                                 *((_QWORD *)v89 - 1),
                                 v87,
                                 &v104,
                                 &v88) )
              CInputDest::operator=(v17, (__int64)v104);
          }
          if ( *(_DWORD *)v17
            && (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v26)
            && ((*(_DWORD *)(v64 - 20) & 0x80u) == 0
             || CInputDest::IsMessageOnlyWindow((CInputDest *)v17)
             && CInputDest::GetCompositionWindowUIOwner((CInputDest *)v17)
             || CInputDest::TestWindowFlag((CInputDest *)v17, 56066)) )
          {
            v65 = CTouchProcessor::LookupNode(v63, v14, v86);
            *((_DWORD *)v65 + 52) = v88;
            CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v109, (struct CInputDest *)v17);
            CInpLockGuard::UnLock(v8);
            v66 = *(_OWORD *)(v17 + 16);
            v112[0] = *(_OWORD *)v17;
            v67 = *(_OWORD *)(v17 + 32);
            v112[1] = v66;
            v68 = *(_OWORD *)(v17 + 48);
            v112[2] = v67;
            v69 = *(_OWORD *)(v17 + 64);
            v112[3] = v68;
            v70 = *(_OWORD *)(v17 + 80);
            v112[4] = v69;
            v71 = *(_OWORD *)(v17 + 96);
            v112[5] = v70;
            v72 = *(_OWORD *)(v17 + 112);
            v112[6] = v71;
            v73 = *(_OWORD *)(v17 + 128);
            v112[7] = v72;
            v74 = *(_OWORD *)(v17 + 144);
            v112[8] = v73;
            v75 = *(_OWORD *)(v17 + 160);
            v112[9] = v74;
            v112[10] = v75;
            ApiSetEditionPointerActivate(
              (unsigned int)v112,
              -__CFSHR__(*((_DWORD *)v89 - 5), 8),
              *((unsigned __int16 *)v89 + 92),
              *((_QWORD *)v89 - 1),
              (__int64)v89 + 200);
            CInpLockGuard::LockExclusive(v8);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v109);
            QueueForCurrentNode = CTouchProcessor::GetQueueForCurrentNode(
                                    (struct _KTHREAD **)this,
                                    v91,
                                    v87,
                                    v90,
                                    IsMessageDelegated,
                                    (const struct CPointerInfoNode *)v23);
            if ( !QueueForCurrentNode )
            {
LABEL_128:
              *v97 = 1;
              v15 = 0;
              break;
            }
            if ( !(unsigned int)CTouchProcessor::RevalidateFrameProcessing(
                                  0LL,
                                  v91,
                                  v87,
                                  (const struct CPointerInfoNode *)v26,
                                  0) )
              goto LABEL_124;
            if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                                 (struct _KTHREAD **)this,
                                 *((_QWORD *)v89 - 1),
                                 v87,
                                 &v105,
                                 &v88) )
              CInputDest::operator=(v17, (__int64)v105);
          }
        }
        if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)v26, v91) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v76);
        CTouchProcessor::SetPointerInfoNodeTarget(this, v14, v86, (const struct CInputDest *)v17, v88, &v96, 0, 0, 1, 0);
        if ( *(_DWORD *)v17 )
        {
          if ( (*((_DWORD *)v89 + 55) & 0x10000) != 0 )
          {
            CTouchProcessor::SetPointerImplicitCapture(
              this,
              *((_QWORD *)v89 - 1),
              (const struct CInputDest *)v17,
              v88,
              v87);
          }
          else if ( v90 == 593 )
          {
            CTouchProcessor::SetPointerExplicitCapture(
              this,
              *((_QWORD *)v89 - 1),
              (const struct CInputDest *)v17,
              v88,
              v87);
          }
        }
        if ( (unsigned int)CPointerInfoNode::IsTouchpad((CPointerInfoNode *)v26) )
        {
          v78 = v86;
          if ( (*((_DWORD *)v89 + 55) & 0x2000) == 0 )
            goto LABEL_125;
          v94 = 0;
          if ( !v86 )
            goto LABEL_125;
          v79 = 0LL;
          v80 = v89;
          v81 = v88;
          v98 = 0LL;
          v100 = 0LL;
          do
          {
            if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)&v79[*((_QWORD *)v14 + 12)]) )
            {
              WPP_RECORDER_SF_(
                *((_QWORD *)this + 1),
                4u,
                0xBu,
                0x65u,
                (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
              CTouchProcessor::SetPointerInfoNodeTarget(
                this,
                v14,
                v94,
                (const struct CInputDest *)v17,
                v81,
                &v96,
                0,
                0,
                1,
                0);
              if ( *(_DWORD *)v17 )
              {
                v82 = *((_QWORD *)v14 + 12);
                if ( (*(_DWORD *)(v100 + v82 + 244) & 0x10000) != 0 )
                {
                  CTouchProcessor::SetPointerImplicitCapture(
                    this,
                    *(_QWORD *)(v100 + v82 + 16),
                    (const struct CInputDest *)v17,
                    v81,
                    v87);
                }
                else if ( v90 == 593 )
                {
                  CTouchProcessor::SetPointerExplicitCapture(
                    this,
                    *((_QWORD *)v80 - 1),
                    (const struct CInputDest *)v17,
                    v81,
                    v87);
                }
              }
            }
            v25 = 576LL;
            v100 += 576LL;
            v79 = (char *)v98 + 576;
            ++v94;
            v98 = (CInputDest *)((char *)v98 + 576);
          }
          while ( v94 < v86 );
          v26 = v101;
          v8 = (PERESOURCE *)((char *)this + 72);
          v23 = v106;
        }
      }
LABEL_124:
      v78 = v86;
LABEL_125:
      v27 = *((_DWORD *)v14 + 12);
      v89 = (CTouchProcessor *)((char *)v89 + 576);
      v26 += 576LL;
      v101 = v26;
      v86 = v78 + 1;
    }
    while ( v78 + 1 < v27 );
  }
  PopW32ThreadLock(v107);
  PopAndFreeAlwaysW32ThreadLock(v108);
  if ( v15 )
  {
    if ( (*((_DWORD *)v14 + 20) & 0x20) == 0 )
    {
      if ( v92 )
      {
        if ( !v87 )
        {
          v83 = CTouchProcessor::FindAndReferenceFrameById((struct _KTHREAD **)this, *((unsigned int *)v14 + 10));
          if ( v83 )
          {
            *((_DWORD *)v83 + 20) |= 0x20u;
            CTouchProcessor::UnreferenceFrameInt(this, v83);
          }
        }
      }
    }
  }
  CTouchProcessor::UnreferenceFrame(this, v14);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x66u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
LABEL_137:
  CInpLockGuard::UnLock(v8);
  return v15;
}
