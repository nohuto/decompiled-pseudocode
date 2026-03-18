/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x1C00B9810 (NtUserSetManipulationInputTarget.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C010E340 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01096A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011155C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0111A30 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0111FF0 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C0112298 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0119238 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01196A0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C011A0B0 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C011A6E0 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C011AD38 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C011BAA0 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C011D520 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C011D6A4 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C013E518 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C0141954 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        CTouchProcessor *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5)
{
  unsigned int v7; // esi
  PERESOURCE *v8; // rbx
  struct CPointerInputFrame *v9; // rax
  CTouchProcessor *v10; // rcx
  struct CPointerInputFrame *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  struct CPointerInputFrame *v15; // r14
  struct CPointerQFrame *v16; // rax
  struct CInputPointerNode *v17; // rdx
  CPointerInfoNode *v18; // rcx
  struct CPointerQFrame *v19; // rdi
  const struct CPointerQFrame *v20; // r12
  __int64 v21; // rax
  struct CPointerInputFrame *v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r8
  _QWORD *v25; // rax
  unsigned __int16 v26; // cx
  unsigned __int64 v27; // rdi
  unsigned int v28; // edi
  struct CInputPointerNode *NodeById; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edi
  unsigned int MessagesCore; // r14d
  unsigned int i; // edi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // r8d
  unsigned int v40; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v42; // [rsp+30h] [rbp-D0h]
  unsigned int v43; // [rsp+34h] [rbp-CCh]
  int v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+3Ch] [rbp-C4h]
  int v46; // [rsp+40h] [rbp-C0h]
  unsigned int v47; // [rsp+44h] [rbp-BCh]
  struct CPointerQFrame *v48; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  struct CPointerInputFrame *v50; // [rsp+58h] [rbp-A8h]
  unsigned int *v51; // [rsp+60h] [rbp-A0h]
  void *v52; // [rsp+68h] [rbp-98h]
  struct CPointerInfoNode *ValidNodeInFrame; // [rsp+70h] [rbp-90h]
  _OWORD v54[11]; // [rsp+80h] [rbp-80h] BYREF
  char v55; // [rsp+130h] [rbp+30h]
  _BYTE v56[176]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v57[11]; // [rsp+1F0h] [rbp+F0h] BYREF
  _OWORD v58[11]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v59[192]; // [rsp+350h] [rbp+250h] BYREF
  _QWORD v60[24]; // [rsp+410h] [rbp+310h] BYREF
  _OWORD v61[12]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v52 = a5;
  v51 = a4;
  v49 = a3;
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x54u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v8 = (PERESOURCE *)((char *)this + 72);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
  v9 = CTouchProcessor::FindAndReferenceFrameById((struct _KTHREAD **)this, a2);
  v11 = v9;
  if ( !v9 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0x55u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    UserSetLastError(87);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x56u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_89;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, v9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  if ( !*((_QWORD *)v11 + 14) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  v14 = *(_DWORD *)(*((_QWORD *)v11 + 12) + 232LL);
  if ( v14 == 6 || !v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  v47 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v11 + 14) + 276LL), 6);
  v46 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v11 + 14) + 276LL), 7);
  memset(v54, 0, sizeof(v54));
  v55 = 0;
  v45 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(this, a5, v14, (struct tagINPUTDEST *)v56) )
  {
    v45 = -(v56[12] & 1);
    CInputDest::CInputDest((CInputDest *)v60, (const struct tagINPUTDEST *)v56);
    CInputDest::operator=((__int64)v54, v60);
    CInputDest::SetEmpty((CInputDest *)v60);
  }
  v50 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((struct _KTHREAD **)this, v11);
  v15 = v50;
  v16 = CTouchProcessor::SetupQFrame(this, v11, 0xFFFFFFFFFFFFFFFFuLL, (const struct CInputDest *)v54, 0);
  v48 = v16;
  v19 = v16;
  if ( !v16 || *(_DWORD *)v16 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
  v20 = 0LL;
  v21 = 0LL;
  v43 = 0;
  v44 = 0;
  if ( !*((_DWORD *)v11 + 12) )
  {
    v32 = 0;
LABEL_72:
    if ( LODWORD(v54[0]) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
    goto LABEL_74;
  }
  v22 = v50;
  do
  {
    v23 = *((_QWORD *)v11 + 12) + 576 * v21;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
    {
      if ( CPointerInfoNode::IsForManipulationThread(v18) && (*(_DWORD *)(v23 + 4) & 0x200) == 0 )
      {
        v18 = 0LL;
        if ( v49 )
        {
          v17 = (struct CInputPointerNode *)*(unsigned __int16 *)(v23 + 236);
          while ( v51[(unsigned int)v18] != (_DWORD)v17 )
          {
            v18 = (CPointerInfoNode *)(unsigned int)((_DWORD)v18 + 1);
            if ( (unsigned int)v18 >= v49 )
              goto LABEL_68;
          }
          v41 = 0;
          if ( DWORD1(v54[5]) )
          {
            v24 = *(_QWORD *)(v23 + 312);
            v57[0] = v54[0];
            v57[1] = v54[1];
            v57[2] = v54[2];
            v57[3] = v54[3];
            v57[4] = v54[4];
            v57[5] = v54[5];
            v57[6] = v54[6];
            v57[7] = v54[7];
            v57[8] = v54[8];
            v57[9] = v54[9];
            v57[10] = v54[10];
            v41 = ApiSetSetManipulationInputTargetTransform(
                    (unsigned int)v57,
                    (_DWORD)v52,
                    v24,
                    (_DWORD)v51,
                    v23 + 224,
                    v45);
          }
          if ( (*(_DWORD *)(v23 + 4) & 0x80u) == 0 )
          {
            v25 = CInputDest::CInputDest(v61, *(_QWORD *)(v23 + 256), *(_DWORD *)(v23 + 476));
            CInputDest::operator=((__int64)v54, v25);
            CInputDest::SetEmpty((CInputDest *)v61);
          }
          if ( LODWORD(v54[0]) )
          {
            if ( !v20 )
            {
              CInputDest::CInputDest((CInputDest *)v59, (const struct CInputDest *)v54);
              v20 = (const struct CPointerQFrame *)CTouchProcessor::SetupNewQFrame(this, v11, &v48);
              if ( !v20 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
              v19 = v48;
            }
            *(_DWORD *)(v23 + 4) |= 0x200u;
            v44 = 1;
            if ( v19 )
            {
              if ( *(_DWORD *)(v23 + 8) != *(_DWORD *)v19 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
              if ( !*((_DWORD *)v19 + 50) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
              *(_DWORD *)(v23 + 8) = *(_DWORD *)v20;
              ++*((_DWORD *)v20 + 50);
              --*((_DWORD *)v19 + 50);
            }
            *(_QWORD *)(v23 + 256) = CInputDest::GetWindowHandle((CInputDest *)v54);
            if ( DWORD1(v54[5]) )
              CInputDest::operator=(v23 + 392, (__int64)v54);
            if ( (*(_DWORD *)v23 & 0x100) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30);
            if ( v41 )
              *(_DWORD *)(v23 + 244) |= 0x400000u;
            if ( DWORD1(v54[5]) )
            {
              v58[0] = v54[0];
              v58[1] = v54[1];
              v58[2] = v54[2];
              v58[3] = v54[3];
              v58[4] = v54[4];
              v58[5] = v54[5];
              v58[6] = v54[6];
              v58[7] = v54[7];
              v58[8] = v54[8];
              v58[9] = v54[9];
              v58[10] = v54[10];
              if ( ApiSetEditionGetInputDelegate(v58) )
                *(_DWORD *)v23 |= 0x100000u;
            }
            CTouchProcessor::ProcessQFrameNode(this, v20, v22, (struct CPointerInfoNode *)v23);
            if ( *(_DWORD *)v20 == -1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
            *((_DWORD *)v20 + 51) |= 0x10u;
          }
          else
          {
            v26 = *(_WORD *)(v23 + 236);
            v42 = v26;
            v27 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v22 )
            {
              ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v22, v26, 0LL);
              if ( ValidNodeInFrame )
              {
                *(_QWORD *)(v23 + 256) = 0LL;
                CInputDest::SetEmpty((CInputDest *)(v23 + 392));
                *(_DWORD *)(v23 + 4) |= 0x200u;
                CTouchProcessor::ProcessEnterLeave(this, v22, (struct CPointerInfoNode *)v23);
                if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                  CTouchProcessor::ProcessAndUnreferencePreviousInput(
                    this,
                    (const struct CPointerInfoNode *)v23,
                    *((_QWORD *)ValidNodeInFrame + 2),
                    v27,
                    v47,
                    v46);
              }
              v26 = v42;
            }
            if ( (*(_DWORD *)(v23 + 244) & 0x40000) != 0 )
            {
              v40 = v27;
              v28 = v43;
              CTouchProcessor::ProcessLostCaptureList(this, v26, 1, v11, v43, v40);
            }
            else
            {
              v28 = v43;
            }
            CTouchProcessor::FreePointerInfoNodeInt((struct _KTHREAD **)this, v11, v28);
            NodeById = CTouchProcessor::FindNodeById(this, v42, 0, 0);
            v17 = NodeById;
            if ( NodeById
              && *((_DWORD *)NodeById + 9) == 3
              && *((struct CInputPointerNode **)NodeById + 36) == (struct CInputPointerNode *)((char *)NodeById + 288) )
            {
              CTouchProcessor::FreeNode((struct _KTHREAD **)this, NodeById);
            }
            v19 = v48;
          }
        }
      }
    }
LABEL_68:
    v21 = v43 + 1;
    v43 = v21;
  }
  while ( (unsigned int)v21 < *((_DWORD *)v11 + 12) );
  v32 = v44;
  v8 = (PERESOURCE *)((char *)this + 72);
  v15 = v50;
  if ( !v44 )
    goto LABEL_72;
  CTouchProcessor::TryCoalesceQFrame(this, v11, v50, v20);
LABEL_74:
  if ( v15 )
    CTouchProcessor::UnreferenceFrameInt(this, v15);
  if ( v32 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, v47, v46, 1, v11);
    for ( i = 0; i < *((_DWORD *)v11 + 12); ++i )
    {
      v35 = *((_QWORD *)v11 + 12) + 576LL * i;
      v36 = *(_DWORD *)(v35 + 4);
      if ( (v36 & 0x200) != 0 && (v36 & 0x400) == 0 )
      {
        v37 = *(_QWORD *)(v35 + 16);
        *(_DWORD *)(v35 + 4) = v36 | 0x400;
        if ( v37 )
        {
          v38 = *(_DWORD *)(v35 + 244);
          if ( (v38 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              this,
              v37,
              v54,
              2 - (unsigned int)((v38 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v35, 21));
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame(this, v11);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x57u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v7 = MessagesCore;
  CInputDest::SetEmpty((CInputDest *)v54);
LABEL_89:
  CInpLockGuard::UnLock(v8);
  return v7;
}
