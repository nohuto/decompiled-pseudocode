/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0110F30
 * Callers:
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0110D50 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0119A94 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0119E20 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C0110EC8 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0113F28 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0117968 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C011A1C0 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C013DE48 (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C013DEDC (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C013DF9C (ApiSetEditionEdgyResetCurrentFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  PDEVICE_OBJECT v10; // rcx
  unsigned int MessagesCore; // r14d
  CTouchProcessor *v12; // rcx
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  int v15; // ebp
  unsigned int v16; // r8d
  struct CPointerInputFrame *v17; // rbp
  int v18; // eax
  _DWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  const struct CPointerInputFrame *NextFrame; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  int v27; // eax
  struct CPointerInputFrame *i; // rax
  struct CPointerInputFrame *v30; // [rsp+58h] [rbp+10h] BYREF

  v30 = a2;
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x149u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  MessagesCore = 1;
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2);
  if ( !a7 )
  {
    CInpLockGuard::UnLock((PERESOURCE *)this + 9);
    CTouchProcessor::DoContactVisualization(v12, a3, a4, a5);
    CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled() && !(unsigned int)CTouchProcessor::IsTouchpadDevice(v13, a4) )
  {
    v30 = 0LL;
    CInpLockGuard::UnLock((PERESOURCE *)this + 9);
    v15 = ApiSetEditionEdgyProcessInput(this, v14, a3, &v30);
    CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
    if ( (unsigned int)(v15 + 1) <= 1 )
    {
      v27 = *((_DWORD *)a3 + 20);
      if ( v15 )
      {
        *((_DWORD *)a3 + 20) = v27 | 0x80;
        for ( i = v30; i && i != a3; i = CTouchProcessor::GetNextFrame(
                                           this,
                                           i,
                                           (struct _LIST_ENTRY *)((char *)this + 120)) )
          *((_DWORD *)i + 20) |= 0x80u;
      }
      else
      {
        *((_DWORD *)a3 + 20) = v27 | 0x40;
      }
      return MessagesCore;
    }
    v17 = v30;
    if ( v30 )
    {
      *((_DWORD *)v30 + 20) &= ~0x40u;
      if ( v30 )
      {
        v18 = *((_DWORD *)v30 + 20);
        if ( (v18 & 0x80u) == 0 && *((_DWORD *)v30 + 12) == 1 && (v18 & 0x10) != 0 )
        {
          v19 = (_DWORD *)*((_QWORD *)v30 + 12);
          if ( (*v19 & 0x400) != 0 && (v19[61] & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v30, v16);
        }
      }
      do
      {
        if ( v17 == a3 )
          break;
        v20 = (_QWORD *)((char *)v17 + 24);
        v21 = *((_QWORD *)v17 + 3);
        if ( *(struct CPointerInputFrame **)(v21 + 8) == (struct CPointerInputFrame *)((char *)v17 + 24) )
        {
          v22 = (_QWORD *)*((_QWORD *)v17 + 4);
          if ( (_QWORD *)*v22 == v20 )
            continue;
        }
        __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        *((_QWORD *)v17 + 4) = (char *)v17 + 24;
        *v20 = v20;
        if ( (*((_DWORD *)v17 + 20) & 0x80u) == 0 )
          CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v17);
        NextFrame = CTouchProcessor::GetNextFrame(this, v17, (struct _LIST_ENTRY *)((char *)this + 120));
        CTouchProcessor::UnreferenceFrame(this, v17);
        v17 = NextFrame;
      }
      while ( NextFrame );
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  v24 = (_QWORD *)((char *)a3 + 24);
  v25 = *((_QWORD *)a3 + 3);
  if ( *(const struct CPointerInputFrame **)(v25 + 8) != (const struct CPointerInputFrame *)((char *)a3 + 24)
    || (v26 = (_QWORD *)*((_QWORD *)a3 + 4), (_QWORD *)*v26 != v24) )
  {
    __fastfail(3u);
  }
  *v26 = v25;
  *(_QWORD *)(v25 + 8) = v26;
  *((_QWORD *)a3 + 4) = (char *)a3 + 24;
  *v24 = v24;
  if ( (*((_DWORD *)a3 + 20) & 0x80u) == 0 )
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, a3);
  CTouchProcessor::UnreferenceFrame(this, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x14Au,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return MessagesCore;
}
