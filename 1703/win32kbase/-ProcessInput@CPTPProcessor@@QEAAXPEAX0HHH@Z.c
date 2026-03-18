/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011E74C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?AreEqualRects@CPTPProcessor@@AEAA_NUtagRECT@@0@Z @ 0x1C012AE8C (-AreEqualRects@CPTPProcessor@@AEAA_NUtagRECT@@0@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012C5F8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C01394D0 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ApiSetQueryInertiaStatus @ 0x1C013D598 (ApiSetQueryInertiaStatus.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        unsigned __int64 a2,
        struct RIMCOMPLETEFRAME *a3,
        int a4,
        int a5,
        int a6)
{
  struct CPointerInputFrame *v9; // rbp
  char v10; // si
  __int64 v11; // rdi
  int v12; // eax
  struct tagRECT *v13; // rcx
  struct tagRECT v14; // xmm1
  CPTPProcessor *v15; // rcx
  struct tagRECT v16; // xmm0
  struct tagRECT v17; // xmm1
  int InertiaStatus; // eax
  int v19; // r11d
  __int64 v20; // r9
  char *v21; // r10
  __int64 v22; // rax
  struct tagRECT v23; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v24; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v25; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v26; // [rsp+50h] [rbp-28h] BYREF

  v9 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 1, 0);
  v10 = 0;
  v11 = *(_QWORD *)(HMValidateHandleNoSecure(a2, 19) + 472);
  v12 = *((_DWORD *)gpsi + 493) != 0;
  if ( *((_DWORD *)this + 205) != v12 )
  {
    *((_DWORD *)this + 205) = v12;
    v10 = 1;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v13 = (struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(v11 + 288) + 40LL) + 44LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v13 = (struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(v11 + 288) + 40LL) + 60LL);
  }
  else
  {
    v13 = (struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(v11 + 288) + 40LL) + 28LL);
  }
  v14 = *(struct tagRECT *)((char *)this + 856);
  v23 = *v13;
  v24 = v14;
  if ( !CPTPProcessor::AreEqualRects((CPTPProcessor *)v13, &v24, &v23) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v15 = (CPTPProcessor *)(*(_QWORD *)(*(_QWORD *)(v11 + 288) + 40LL) + 44LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v15 = (CPTPProcessor *)(*(_QWORD *)(*(_QWORD *)(v11 + 288) + 40LL) + 60LL);
    }
    else
    {
      v15 = (CPTPProcessor *)(*(_QWORD *)(*(_QWORD *)(v11 + 288) + 40LL) + 28LL);
    }
    v10 = 1;
    *(_OWORD *)((char *)this + 856) = *(_OWORD *)v15;
  }
  v16 = *(struct tagRECT *)(v11 + 140);
  v17 = *(struct tagRECT *)((char *)this + 872);
  v25 = v16;
  v26 = v17;
  if ( !CPTPProcessor::AreEqualRects(v15, &v26, &v25) )
  {
    *(struct tagRECT *)((char *)this + 872) = v16;
    v10 = 1;
  }
  if ( v10 )
    CPTPProcessor::UpdateEnvironment(this, 0LL);
  *((_QWORD *)this + 95) = a2;
  *((_QWORD *)this + 96) = v9;
  *((_DWORD *)this + 194) = a4;
  *((_DWORD *)this + 195) = a5;
  memset((char *)this + 1320, 0, 0x274uLL);
  *((LARGE_INTEGER *)this + 165) = KeQueryPerformanceCounter(0LL);
  *((_QWORD *)this + 166) = qword_1C018F1E0;
  *((_QWORD *)this + 167) = qword_1C018F1E8;
  *((_DWORD *)this + 336) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(struct tagPOINT *)((char *)this + 1348) = gptCursorAsync;
  *((_DWORD *)this + 339) = a6 != 0;
  if ( (*((_DWORD *)this + 130) & 1) != 0 || (InertiaStatus = ApiSetQueryInertiaStatus()) != 0 )
    InertiaStatus = 1;
  *((_DWORD *)this + 340) = InertiaStatus;
  v19 = 0;
  *((_DWORD *)this + 341) = *((_DWORD *)v9 + 10);
  *((_DWORD *)this + 342) = *((_DWORD *)v9 + 12);
  if ( *((_DWORD *)v9 + 12) )
  {
    v20 = 0LL;
    v21 = (char *)this + 1376;
    do
    {
      v22 = *((_QWORD *)v9 + 12);
      v20 += 608LL;
      ++v19;
      *(_OWORD *)(v21 - 4) = *(_OWORD *)(v20 + v22 - 360);
      *(_OWORD *)(v21 + 12) = *(_OWORD *)(v20 + v22 - 344);
      *(_OWORD *)(v21 + 28) = *(_OWORD *)(v20 + v22 - 328);
      *(_OWORD *)(v21 + 44) = *(_OWORD *)(v20 + v22 - 312);
      *(_OWORD *)(v21 + 60) = *(_OWORD *)(v20 + v22 - 296);
      *(_OWORD *)(v21 + 76) = *(_OWORD *)(v20 + v22 - 280);
      *(_DWORD *)v21 = *(unsigned __int16 *)(v20 + *((_QWORD *)v9 + 12) - 368);
      v21 += 96;
    }
    while ( v19 != *((_DWORD *)v9 + 12) );
  }
  PTPEngineTraceProducer::OnInput(
    *((PTPEngineTraceProducer **)this + 100),
    (CPTPProcessor *)((char *)this + 1320),
    (struct tagTPAAPSTATE *)&CPTPProcessor::s_aapState);
  if ( *((_QWORD *)this + 96) )
    CTouchProcessor::FreeFrame(this, v9, 1);
}
