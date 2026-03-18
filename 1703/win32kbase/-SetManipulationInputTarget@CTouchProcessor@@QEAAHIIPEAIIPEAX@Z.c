/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x1C00E4260 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z @ 0x1C000103C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0118184 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E704 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011E9D4 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011EB44 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0124108 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124488 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0124D9C (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C012557C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C012683C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C0127B88 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0127CE4 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0128010 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C013ACD4 (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C013DCB0 (ApiSetSetManipulationInputTargetTransform.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        CTouchProcessor *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6)
{
  int v6; // edi
  __int64 v7; // r15
  int v8; // r13d
  __int64 v9; // rbx
  struct CPointerInputFrame *FrameById; // rax
  int v11; // edx
  struct CPointerInputFrame *v12; // r14
  int v13; // edi
  int v14; // eax
  int v15; // esi
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rax
  const struct CPointerInputFrame *v21; // r12
  __int64 v22; // rdi
  unsigned int v23; // ebx
  __int64 v24; // rsi
  CPointerInfoNode *v25; // rcx
  int v26; // r11d
  int v27; // edx
  int v28; // ecx
  int v29; // r13d
  struct tagWND *v30; // rax
  CInputDest *v31; // rax
  CTouchProcessor *v32; // rcx
  __int16 v33; // r13
  unsigned __int64 v34; // rdi
  struct CPointerInfoNode *ValidNodeInFrame; // r13
  struct CInputPointerNode *NodeById; // rax
  CTouchProcessor *v37; // rcx
  struct CPointerQFrame *v38; // rdx
  __int64 v39; // r11
  unsigned int MessagesCore; // esi
  unsigned int i; // edi
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  struct _ERESOURCE *v51; // rcx
  int v53; // [rsp+38h] [rbp-D0h]
  __int16 v54; // [rsp+3Ch] [rbp-CCh]
  int v55; // [rsp+40h] [rbp-C8h]
  int v56; // [rsp+44h] [rbp-C4h]
  __int64 v58; // [rsp+50h] [rbp-B8h]
  struct CPointerQFrame *v59; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v60; // [rsp+60h] [rbp-A8h]
  __int64 v61; // [rsp+68h] [rbp-A0h]
  _OWORD v62[12]; // [rsp+78h] [rbp-90h] BYREF
  char v63; // [rsp+138h] [rbp+30h]
  _BYTE v64[192]; // [rsp+148h] [rbp+40h] BYREF
  _OWORD v65[12]; // [rsp+208h] [rbp+100h] BYREF
  _OWORD v66[12]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _BYTE v67[208]; // [rsp+388h] [rbp+280h] BYREF
  _QWORD v68[26]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v69[208]; // [rsp+528h] [rbp+420h] BYREF

  v6 = a2;
  v7 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v60 = a4;
  v8 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      72,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v9 = v7 + 200;
  CInpLockGuard::LockExclusive((PERESOURCE *)(v7 + 200));
  FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)v7, v6);
  v12 = FrameById;
  if ( !FrameById )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v7 + 8), v11, 11, 73, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    UserSetLastError(87LL, v47, v48, v49);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v50) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v50,
        11,
        74,
        (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
    MessagesCore = 0;
    goto LABEL_68;
  }
  _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
  v13 = *(_DWORD *)(*((_QWORD *)FrameById + 12) + 248LL);
  v14 = *(_DWORD *)(*((_QWORD *)FrameById + 14) + 260LL);
  v56 = -__CFSHR__(v14, 6);
  v55 = -__CFSHR__(v14, 7);
  memset(v62, 0, sizeof(v62));
  v63 = 0;
  v15 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(
         (CSpatialProcessor *)v7,
         a6,
         (void *)a5,
         v13,
         (struct tagINPUTDEST *)v64) )
  {
    v15 = -(v64[12] & 1);
    CInputDest::CInputDest((CInputDest *)v68, (const struct CInputDest *)v64);
    CInputDest::operator=((__int64)v62, v68);
    CInputDest::SetEmpty((CInputDest *)v68);
  }
  if ( HIDWORD(v62[5]) )
  {
    v17 = *((_QWORD *)v12 + 12);
    v65[0] = v62[0];
    v65[1] = v62[1];
    v65[2] = v62[2];
    v65[3] = v62[3];
    v65[4] = v62[4];
    v65[5] = v62[5];
    v65[6] = v62[6];
    v65[7] = v62[7];
    v65[8] = v62[8];
    v65[9] = v62[9];
    v18 = v17 + 240;
    v19 = *(_QWORD *)(v17 + 328);
    v65[10] = v62[10];
    v65[11] = v62[11];
    v8 = ApiSetSetManipulationInputTargetTransform((unsigned int)v65, (_DWORD)a6, v19, v16, v18, v15);
  }
  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt((CTouchProcessor *)v7, v12);
  v21 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
  v59 = CTouchProcessor::SetupQFrame((CTouchProcessor *)v7, v12, 0xFFFFFFFFuLL, (const struct CInputDest *)v62, 0);
  v22 = 0LL;
  v53 = 0;
  v58 = 0LL;
  if ( !*((_DWORD *)v12 + 12) )
  {
    v29 = 0;
    goto LABEL_50;
  }
  v23 = 0;
  v61 = v8;
  do
  {
    v24 = *((_QWORD *)v12 + 12) + 608LL * v23;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
      goto LABEL_18;
    if ( !CPointerInfoNode::IsForManipulationThread(v25) )
      goto LABEL_18;
    v27 = *(_DWORD *)(v24 + 4);
    if ( (v27 & 0x200) != 0 )
      goto LABEL_18;
    v28 = v26;
    if ( !a3 )
      goto LABEL_18;
    while ( v60[v28] != *(unsigned __int16 *)(v24 + 252) )
    {
      if ( ++v28 >= a3 )
        goto LABEL_18;
    }
    if ( (v27 & 0x80u) == 0 )
    {
      v30 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v24 + 272), 1);
      v31 = CInputDest::CInputDest((CInputDest *)v69, v30);
      CInputDest::operator=((__int64)v62, v31);
      CInputDest::SetEmpty((CInputDest *)v69);
      v26 = 0;
    }
    if ( LODWORD(v62[0]) == v26 )
    {
      v32 = (CTouchProcessor *)0xFFFFF78000000004LL;
      v33 = *(_WORD *)(v24 + 252);
      v54 = v33;
      v34 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( v21 )
      {
        ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)0xFFFFF78000000004LL, v21, v33, 0LL);
        if ( ValidNodeInFrame )
        {
          *(_QWORD *)(v24 + 272) = 0LL;
          CInputDest::SetEmpty((CInputDest *)(v24 + 408));
          *(_DWORD *)(v24 + 4) |= 0x200u;
          CTouchProcessor::ProcessEnterLeave((CTouchProcessor *)v7, v21, (struct CPointerInfoNode *)v24);
          v32 = (CTouchProcessor *)*(unsigned int *)ValidNodeInFrame;
          if ( (char)v32 >= 0 )
            CTouchProcessor::ProcessAndUnreferencePreviousInput(
              (CTouchProcessor *)v7,
              (const struct CPointerInfoNode *)v24,
              *((_QWORD *)ValidNodeInFrame + 2),
              v34,
              v56,
              v55);
        }
        v33 = v54;
      }
      if ( (*(_DWORD *)(v24 + 260) & 0x40000) != 0 )
        CTouchProcessor::ProcessLostCaptureList((CTouchProcessor *)v7, v33, 1, v12, v23, v34);
      CTouchProcessor::FreePointerInfoNodeInt(v32, v12, v23);
      NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)v7, v33, 0, 0);
      if ( NodeById
        && *((_DWORD *)NodeById + 9) == 3
        && (v37 = (struct CInputPointerNode *)((char *)NodeById + 304), *(CTouchProcessor **)v37 == v37) )
      {
        CTouchProcessor::FreeNode(v37, NodeById);
        v22 = v58;
      }
      else
      {
        v22 = v58;
      }
LABEL_18:
      v29 = v53;
      goto LABEL_19;
    }
    if ( !v22 )
    {
      CInputDest::CInputDest((CInputDest *)v67, (const struct CInputDest *)v62);
      v22 = CTouchProcessor::SetupNewQFrame(v7, v12, &v59);
      v58 = v22;
    }
    *(_DWORD *)(v24 + 4) |= 0x200u;
    v29 = 1;
    v38 = v59;
    v53 = 1;
    if ( v59 )
    {
      *(_DWORD *)(v24 + 8) = *(_DWORD *)v22;
      ++*(_DWORD *)(v22 + 216);
      --*((_DWORD *)v38 + 54);
    }
    *(_QWORD *)(v24 + 272) = CInputDest::GetWindowHandle((CInputDest *)v62);
    if ( HIDWORD(v62[5]) != (_DWORD)v39 )
    {
      CInputDest::operator=(v24 + 408, (__int64)v62);
      v39 = 0LL;
    }
    if ( v61 != v39 )
      *(_DWORD *)(v24 + 260) |= 0x400000u;
    if ( HIDWORD(v62[5]) != (_DWORD)v39 )
    {
      v66[0] = v62[0];
      v66[1] = v62[1];
      v66[2] = v62[2];
      v66[3] = v62[3];
      v66[4] = v62[4];
      v66[5] = v62[5];
      v66[6] = v62[6];
      v66[7] = v62[7];
      v66[8] = v62[8];
      v66[9] = v62[9];
      v66[10] = v62[10];
      v66[11] = v62[11];
      if ( ApiSetEditionGetInputDelegate(v66) )
        *(_DWORD *)v24 |= 0x100000u;
    }
    CTouchProcessor::ProcessQFrameNode(
      (CTouchProcessor *)v7,
      (struct CPointerQFrame *)v22,
      v21,
      (struct CPointerInfoNode *)v24);
    *(_DWORD *)(v22 + 220) |= 0x10u;
LABEL_19:
    ++v23;
  }
  while ( v23 < *((_DWORD *)v12 + 12) );
  v9 = v7 + 200;
  if ( v29 )
    CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)v7, v12, v21, (const struct CPointerQFrame *)v22);
LABEL_50:
  if ( v21 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)v7, v21);
  if ( v29 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore((CTouchProcessor *)v7, v56, v55, 1, v12);
    for ( i = 0; i < *((_DWORD *)v12 + 12); ++i )
    {
      v42 = *((_QWORD *)v12 + 12) + 608LL * i;
      v43 = *(_DWORD *)(v42 + 4);
      if ( (v43 & 0x200) != 0 && (v43 & 0x400) == 0 )
      {
        v44 = *(_QWORD *)(v42 + 16);
        *(_DWORD *)(v42 + 4) = v43 | 0x400;
        if ( v44 )
        {
          v45 = *(_DWORD *)(v42 + 260);
          if ( (v45 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              v7,
              v44,
              v62,
              2 - (unsigned int)((v45 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v42, 21));
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)v7, v12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v46) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v46,
      11,
      75,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  CInputDest::SetEmpty((CInputDest *)v62);
LABEL_68:
  v51 = *(struct _ERESOURCE **)v9;
  *(_QWORD *)(v9 + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v51);
  return MessagesCore;
}
