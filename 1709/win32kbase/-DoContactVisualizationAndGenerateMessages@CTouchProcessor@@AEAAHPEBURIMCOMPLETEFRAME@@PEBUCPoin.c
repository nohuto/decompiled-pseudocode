/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50
 * Callers:
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C011CB40 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0123E5C (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0124014 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C01244F0 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00DB220 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C011CBE8 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C011F424 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0122480 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C012472C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0125370 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C0139934 (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C01399C8 (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C0139AA4 (ApiSetEditionEdgyResetCurrentFrame.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        void *a4,
        int a5,
        int a6,
        int a7)
{
  int v9; // r12d
  unsigned int MessagesCore; // r14d
  CTouchProcessor *v12; // rcx
  CTouchProcessor *v13; // rcx
  int v14; // edx
  int v15; // esi
  CTouchProcessor *v16; // rcx
  unsigned int v17; // r8d
  struct CPointerInputFrame *v18; // rsi
  int v19; // eax
  CTouchProcessor *v20; // rcx
  const struct CPointerInputFrame *NextFrame; // rbx
  struct CPointerInputFrame *v22; // rdx
  struct CPointerInputFrame *v24; // rdx
  int v25; // r9d
  struct CPointerInputFrame *v26; // [rsp+30h] [rbp-28h] BYREF

  v9 = (int)a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x134u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  MessagesCore = 1;
  if ( !a7 )
  {
    CInpLockGuard::UnLock((CTouchProcessor *)((char *)this + 224));
    CTouchProcessor::DoContactVisualization(v12, a3, a4, a5);
    CInpLockGuard::LockExclusive((PERESOURCE *)this + 28);
  }
  if ( !(unsigned int)ApiSetEditionEdgyEnabled() || (unsigned int)CTouchProcessor::IsTouchpadDevice(v13, a4) )
    goto LABEL_22;
  v26 = 0LL;
  CInpLockGuard::UnLock((CTouchProcessor *)((char *)this + 224));
  v15 = ApiSetEditionEdgyProcessInput((_DWORD)this, v14, v9, (_DWORD)a3, (__int64)&v26);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 28);
  if ( !v15 )
  {
    *((_DWORD *)a3 + 20) |= 0x40u;
    return MessagesCore;
  }
  if ( v15 != -1 )
  {
    v18 = v26;
    if ( v26 )
    {
      *((_DWORD *)v26 + 20) &= ~0x40u;
      if ( v26 )
      {
        v19 = *((_DWORD *)v26 + 20);
        if ( (v19 & 0x80u) == 0 && *((_DWORD *)v26 + 12) == 1 && (v19 & 0x10) != 0 )
        {
          v16 = (CTouchProcessor *)*((_QWORD *)v26 + 12);
          if ( (*(_DWORD *)v16 & 0x400) != 0 && (*((_DWORD *)v16 + 65) & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v26, v17);
        }
      }
      do
      {
        if ( v18 == a3 )
          break;
        CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v16, v18);
        if ( (*((_DWORD *)v18 + 20) & 0x80u) == 0 )
          CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v18);
        NextFrame = CTouchProcessor::GetNextFrame(v20, v18, (struct _LIST_ENTRY *)((char *)this + 280));
        CTouchProcessor::UnreferenceFrameInt(this, v22);
        v18 = NextFrame;
      }
      while ( NextFrame );
    }
    ApiSetEditionEdgyResetCurrentFrame();
LABEL_22:
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v13, a3);
    if ( (*((_DWORD *)a3 + 20) & 0x80u) == 0 )
      MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, a3);
    CTouchProcessor::UnreferenceFrameInt(this, a3);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x135u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    return MessagesCore;
  }
  v24 = v26;
  v25 = 128;
  for ( *((_DWORD *)a3 + 20) |= 0x80u;
        v24;
        v24 = CTouchProcessor::GetNextFrame(v16, v24, (struct _LIST_ENTRY *)((char *)this + 280)) )
  {
    if ( v24 == a3 )
      break;
    *((_DWORD *)v24 + 20) |= v25;
  }
  return MessagesCore;
}
