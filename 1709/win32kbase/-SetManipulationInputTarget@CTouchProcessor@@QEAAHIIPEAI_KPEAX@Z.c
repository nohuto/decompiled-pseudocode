/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x1C00EA300 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0117004 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011D248 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011D4CC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011D874 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011D9E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0123778 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0123AE0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01243F4 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124B58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0125E1C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01271E8 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0127344 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0127870 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0139EE0 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C013D0AC (ApiSetSetManipulationInputTargetTransform.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        CTouchProcessor *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        CompositionObject *a5,
        void *a6)
{
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbx
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v11; // rsi
  int v12; // ebx
  int v13; // eax
  int v14; // edi
  int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rax
  const struct CPointerInputFrame *v20; // r15
  unsigned int v21; // ebx
  int v22; // r13d
  __int64 v23; // rdi
  CPointerInfoNode *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct tagWND *v28; // rax
  CInputDest *v29; // rax
  CTouchProcessor *v30; // rcx
  __int16 v31; // r13
  unsigned __int64 v32; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // r13
  struct CInputPointerNode *NodeById; // rax
  CTouchProcessor *v35; // rcx
  struct CPointerQFrame *v36; // rdx
  HWND WindowHandle; // rax
  bool v38; // zf
  unsigned int MessagesCore; // edi
  unsigned int i; // ebx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  int v44; // r8d
  struct _ERESOURCE *v45; // rcx
  unsigned int v47; // [rsp+30h] [rbp-D8h]
  __int16 v48; // [rsp+38h] [rbp-D0h]
  unsigned int v49; // [rsp+3Ch] [rbp-CCh]
  int v50; // [rsp+40h] [rbp-C8h]
  int v51; // [rsp+44h] [rbp-C4h]
  int v52; // [rsp+48h] [rbp-C0h]
  int v53; // [rsp+4Ch] [rbp-BCh]
  struct CPointerQFrame *v55; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v56; // [rsp+60h] [rbp-A8h]
  __int64 v57; // [rsp+68h] [rbp-A0h]
  _OWORD v58[12]; // [rsp+78h] [rbp-90h] BYREF
  char v59; // [rsp+138h] [rbp+30h]
  _BYTE v60[192]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v61[12]; // [rsp+208h] [rbp+100h] BYREF
  _OWORD v62[12]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _BYTE v63[208]; // [rsp+388h] [rbp+280h] BYREF
  _QWORD v64[26]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v65[208]; // [rsp+528h] [rbp+420h] BYREF

  v7 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v56 = a4;
  v8 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x48u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v9 = v7 + 224;
  v57 = v7 + 224;
  CInpLockGuard::LockExclusive((PERESOURCE *)(v7 + 224));
  FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)v7, a2);
  v11 = FrameById;
  if ( FrameById )
  {
    _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
    v12 = *(_DWORD *)(*((_QWORD *)FrameById + 12) + 248LL);
    v13 = *(_DWORD *)(*((_QWORD *)FrameById + 14) + 276LL);
    v53 = -__CFSHR__(v13, 6);
    v52 = -__CFSHR__(v13, 7);
    memset(v58, 0, sizeof(v58));
    v59 = 0;
    v14 = 0;
    if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(
           (CSpatialProcessor *)v7,
           a6,
           a5,
           v12,
           (struct tagINPUTDEST *)v60) )
    {
      v14 = -(v60[12] & 1);
      CInputDest::CInputDest((CInputDest *)v64, (const struct CInputDest *)v60);
      CInputDest::operator=((__int64)v58, v64);
      CInputDest::SetEmpty((CInputDest *)v64);
    }
    v51 = 0;
    if ( HIDWORD(v58[5]) )
    {
      v16 = *((_QWORD *)v11 + 12);
      v61[0] = v58[0];
      v61[1] = v58[1];
      v61[2] = v58[2];
      v61[3] = v58[3];
      v61[4] = v58[4];
      v61[5] = v58[5];
      v61[6] = v58[6];
      v61[7] = v58[7];
      v61[8] = v58[8];
      v61[9] = v58[9];
      v17 = v16 + 240;
      v18 = *(_QWORD *)(v16 + 328);
      v61[10] = v58[10];
      v61[11] = v58[11];
      v51 = ApiSetSetManipulationInputTargetTransform((unsigned int)v61, (_DWORD)a6, v18, v15, v17, v14);
    }
    PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt((CTouchProcessor *)v7, v11);
    v20 = PreviousFrameByDeviceInt;
    if ( PreviousFrameByDeviceInt )
      _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
    v21 = 0;
    v55 = CTouchProcessor::SetupQFrame(
            (CTouchProcessor *)v7,
            v11,
            0xFFFFFFFFFFFFFFFFuLL,
            (const struct CInputDest *)v58,
            0);
    v22 = 0;
    v50 = 0;
    v49 = 0;
    if ( *((_DWORD *)v11 + 12) )
    {
      do
      {
        v23 = *((_QWORD *)v11 + 12) + 608LL * v21;
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
        {
          if ( CPointerInfoNode::IsForManipulationThread(v24) )
          {
            v25 = *(unsigned int *)(v23 + 4);
            if ( (v25 & 0x200) == 0 )
            {
              v26 = 0LL;
              if ( a3 )
              {
                v27 = *(unsigned __int16 *)(v23 + 252);
                while ( v56[v26] != (_DWORD)v27 )
                {
                  v26 = (unsigned int)(v26 + 1);
                  if ( (unsigned int)v26 >= a3 )
                    goto LABEL_47;
                }
                if ( (v25 & 0x80u) == 0LL )
                {
                  LOBYTE(v25) = 1;
                  v28 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v23 + 272), v25, v27, a3);
                  v29 = CInputDest::CInputDest((CInputDest *)v65, v28);
                  CInputDest::operator=((__int64)v58, v29);
                  CInputDest::SetEmpty((CInputDest *)v65);
                }
                if ( LODWORD(v58[0]) )
                {
                  if ( !v8 )
                  {
                    CInputDest::CInputDest((CInputDest *)v63, (const struct CInputDest *)v58);
                    v21 = v49;
                    v8 = CTouchProcessor::SetupNewQFrame(v7, v11, &v55);
                  }
                  *(_DWORD *)(v23 + 4) |= 0x200u;
                  v22 = 1;
                  v36 = v55;
                  v50 = 1;
                  if ( v55 )
                  {
                    *(_DWORD *)(v23 + 8) = *(_DWORD *)v8;
                    ++*(_DWORD *)(v8 + 216);
                    --*((_DWORD *)v36 + 54);
                  }
                  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v58);
                  v38 = HIDWORD(v58[5]) == 0;
                  *(_QWORD *)(v23 + 272) = WindowHandle;
                  if ( !v38 )
                    CInputDest::operator=(v23 + 408, (__int64)v58);
                  if ( v51 )
                    *(_DWORD *)(v23 + 260) |= 0x400000u;
                  if ( HIDWORD(v58[5]) )
                  {
                    v62[0] = v58[0];
                    v62[1] = v58[1];
                    v62[2] = v58[2];
                    v62[3] = v58[3];
                    v62[4] = v58[4];
                    v62[5] = v58[5];
                    v62[6] = v58[6];
                    v62[7] = v58[7];
                    v62[8] = v58[8];
                    v62[9] = v58[9];
                    v62[10] = v58[10];
                    v62[11] = v58[11];
                    if ( ApiSetEditionGetInputDelegate(v62) )
                      *(_DWORD *)v23 |= 0x100000u;
                  }
                  CTouchProcessor::ProcessQFrameNode(
                    (CTouchProcessor *)v7,
                    (struct CPointerQFrame *)v8,
                    v20,
                    (struct CPointerInfoNode *)v23);
                  *(_DWORD *)(v8 + 220) |= 0x10u;
                }
                else
                {
                  v30 = (CTouchProcessor *)0xFFFFF78000000004LL;
                  v31 = *(_WORD *)(v23 + 252);
                  v48 = v31;
                  v32 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  if ( v20 )
                  {
                    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(
                                         (CTouchProcessor *)0xFFFFF78000000004LL,
                                         v20,
                                         v31,
                                         0LL);
                    if ( ValidNodeInFrame )
                    {
                      *(_QWORD *)(v23 + 272) = 0LL;
                      CInputDest::SetEmpty((CInputDest *)(v23 + 408));
                      *(_DWORD *)(v23 + 4) |= 0x200u;
                      CTouchProcessor::ProcessEnterLeave((CTouchProcessor *)v7, v20, (struct CPointerInfoNode *)v23);
                      v30 = (CTouchProcessor *)*(unsigned int *)ValidNodeInFrame;
                      if ( (char)v30 >= 0 )
                        CTouchProcessor::ProcessAndUnreferencePreviousInput(
                          (CTouchProcessor *)v7,
                          (const struct CPointerInfoNode *)v23,
                          *((_QWORD *)ValidNodeInFrame + 2),
                          v32,
                          v53,
                          v52);
                    }
                    v31 = v48;
                  }
                  if ( (*(_DWORD *)(v23 + 260) & 0x40000) != 0 )
                  {
                    v47 = v32;
                    v21 = v49;
                    CTouchProcessor::ProcessLostCaptureList((CTouchProcessor *)v7, v31, 1, v11, v49, v47);
                  }
                  else
                  {
                    v21 = v49;
                  }
                  CTouchProcessor::FreePointerInfoNodeInt(v30, v11, v21);
                  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)v7, v31, 0, 0);
                  if ( NodeById )
                  {
                    if ( *((_DWORD *)NodeById + 9) == 3 )
                    {
                      v35 = (struct CInputPointerNode *)((char *)NodeById + 304);
                      if ( *(CTouchProcessor **)v35 == v35 )
                        CTouchProcessor::FreeNode(v35, (struct CInputPointerNode ***)NodeById);
                    }
                  }
                  v22 = v50;
                }
              }
            }
          }
        }
LABEL_47:
        v49 = ++v21;
      }
      while ( v21 < *((_DWORD *)v11 + 12) );
      if ( v22 )
        CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)v7, v11, v20, (const struct CPointerQFrame *)v8);
    }
    if ( v20 )
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)v7, v20);
    if ( v22 )
    {
      MessagesCore = CTouchProcessor::GenerateMessagesCore((PERESOURCE *)v7, v53, v52, 1, v11);
      for ( i = 0; i < *((_DWORD *)v11 + 12); ++i )
      {
        v41 = *((_QWORD *)v11 + 12) + 608LL * i;
        v42 = *(_DWORD *)(v41 + 4);
        if ( (v42 & 0x200) != 0 && (v42 & 0x400) == 0 )
        {
          v43 = *(_QWORD *)(v41 + 16);
          *(_DWORD *)(v41 + 4) = v42 | 0x400;
          if ( v43 )
          {
            v44 = *(_DWORD *)(v41 + 260);
            if ( (v44 & 4) != 0 )
              CTouchProcessor::SetPointerCapture(
                v7,
                v43,
                v58,
                2 - (unsigned int)((v44 & 0x10000) != 0),
                1,
                -__CFSHR__(*(_DWORD *)v41, 21));
          }
        }
      }
    }
    else
    {
      MessagesCore = 0;
    }
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)v7, v11);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x4Bu,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    CInputDest::SetEmpty((CInputDest *)v58);
    v9 = v57;
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v7 + 8), 2u, 0xBu, 0x49u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    UserSetLastError(87);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x4Au,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    MessagesCore = 0;
  }
  v45 = *(struct _ERESOURCE **)v9;
  *(_QWORD *)(v9 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v45);
  return MessagesCore;
}
