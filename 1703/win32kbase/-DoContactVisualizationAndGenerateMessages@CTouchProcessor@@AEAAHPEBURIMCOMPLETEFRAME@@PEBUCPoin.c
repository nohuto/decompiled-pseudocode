/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011DE10
 * Callers:
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C011DD00 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0124804 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01249BC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C0124E98 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C011DDA8 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011F8CC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C0122E28 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0125158 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C013A65C (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C013A6F0 (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C013A7CC (ApiSetEditionEdgyResetCurrentFrame.c)
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
  int v9; // ebp
  CTouchProcessor *v11; // rcx
  unsigned int MessagesCore; // r14d
  CTouchProcessor *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  int v15; // edx
  int v16; // ebp
  unsigned int v17; // r8d
  struct CPointerInputFrame *v18; // rbx
  int v19; // eax
  _DWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  CTouchProcessor *v24; // rcx
  struct CPointerInputFrame *v25; // rbp
  _QWORD *v26; // rax
  __int64 v27; // r9
  _QWORD *v28; // rcx
  int v29; // edx
  struct CPointerInputFrame *v30; // rax
  struct CPointerInputFrame *v31; // rcx
  CTouchProcessor *v32; // rdx
  struct CPointerInputFrame *v34; // [rsp+30h] [rbp-28h] BYREF

  v9 = (int)a2;
  v11 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      292,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  MessagesCore = 1;
  if ( !a7 )
    CTouchProcessor::DoContactVisualization(v11, a3, a4, a5);
  if ( !(unsigned int)ApiSetEditionEdgyEnabled() || (unsigned int)CTouchProcessor::IsTouchpadDevice(v13, a4) )
    goto LABEL_27;
  v34 = 0LL;
  v14 = (struct _ERESOURCE *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 29) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v14);
  v16 = ApiSetEditionEdgyProcessInput((_DWORD)this, v15, v9, (_DWORD)a3, (__int64)&v34);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 25);
  if ( !v16 )
  {
    *((_DWORD *)a3 + 20) |= 0x40u;
    return MessagesCore;
  }
  if ( v16 != -1 )
  {
    v18 = v34;
    if ( v34 )
    {
      *((_DWORD *)v34 + 20) &= ~0x40u;
      if ( v34 )
      {
        v19 = *((_DWORD *)v34 + 20);
        if ( (v19 & 0x80u) == 0 && *((_DWORD *)v34 + 12) == 1 && (v19 & 0x10) != 0 )
        {
          v20 = (_DWORD *)*((_QWORD *)v34 + 12);
          if ( (*v20 & 0x400) != 0 && (v20[65] & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v34, v17);
        }
      }
      do
      {
        if ( v18 == a3 )
          break;
        v21 = (_QWORD *)((char *)v18 + 24);
        v22 = *((_QWORD *)v18 + 3);
        v23 = (_QWORD *)*((_QWORD *)v18 + 4);
        if ( *(struct CPointerInputFrame **)(v22 + 8) != (struct CPointerInputFrame *)((char *)v18 + 24)
          || (_QWORD *)*v23 != v21 )
        {
          __fastfail(3u);
        }
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *((_QWORD *)v18 + 4) = (char *)v18 + 24;
        *v21 = v21;
        if ( (*((_DWORD *)v18 + 20) & 0x80u) == 0 )
          CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v18);
        v24 = (CTouchProcessor *)*((_QWORD *)v18 + 2);
        v25 = 0LL;
        if ( v24 && v24 != (CTouchProcessor *)((char *)this + 256) )
          v25 = (CTouchProcessor *)((char *)v24 - 8);
        CTouchProcessor::UnreferenceFrameInt(this, v18);
        v18 = v25;
      }
      while ( v25 );
    }
    ApiSetEditionEdgyResetCurrentFrame();
LABEL_27:
    v26 = (_QWORD *)((char *)a3 + 24);
    v27 = *((_QWORD *)a3 + 3);
    v28 = (_QWORD *)*((_QWORD *)a3 + 4);
    if ( *(const struct CPointerInputFrame **)(v27 + 8) != (const struct CPointerInputFrame *)((char *)a3 + 24)
      || (_QWORD *)*v28 != v26 )
    {
      __fastfail(3u);
    }
    *v28 = v27;
    *(_QWORD *)(v27 + 8) = v28;
    *((_QWORD *)a3 + 4) = (char *)a3 + 24;
    *v26 = v26;
    if ( (*((_DWORD *)a3 + 20) & 0x80u) == 0 )
      MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, a3);
    CTouchProcessor::UnreferenceFrameInt(this, a3);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v29) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v29,
        11,
        293,
        (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
    return MessagesCore;
  }
  v30 = v34;
  *((_DWORD *)a3 + 20) |= 0x80u;
  if ( v30 )
  {
    do
    {
      if ( v30 == a3 )
        break;
      *((_DWORD *)v30 + 20) |= 0x80u;
      v31 = 0LL;
      v32 = (CTouchProcessor *)*((_QWORD *)v30 + 2);
      if ( v32 && v32 != (CTouchProcessor *)((char *)this + 256) )
        v31 = (CTouchProcessor *)((char *)v32 - 8);
      v30 = v31;
    }
    while ( v31 );
  }
  return MessagesCore;
}
