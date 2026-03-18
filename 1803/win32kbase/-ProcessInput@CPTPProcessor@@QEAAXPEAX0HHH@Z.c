/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0125D88
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127A70 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0111BBC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01268D4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C013CB38 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ApiSetQueryInertiaStatus @ 0x1C014127C (ApiSetQueryInertiaStatus.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        unsigned __int64 a2,
        struct RIMCOMPLETEFRAME *a3,
        int a4,
        int a5,
        int a6)
{
  struct CPointerInputFrame *v9; // rsi
  __int64 v10; // r8
  int v11; // ecx
  char *v12; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  bool v39; // zf
  int v40; // eax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0

  v9 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 1, 0);
  if ( v9 )
  {
    v10 = *(_QWORD *)(HMValidateHandleNoSecure(a2, 19) + 480);
    v11 = *((_DWORD *)gpsi + 497) != 0;
    if ( *((_DWORD *)this + 167) != v11 )
    {
      *((_DWORD *)this + 167) = v11;
      CPTPProcessor::UpdateEnvironment(this, 0LL, v10);
    }
    *((_QWORD *)this + 76) = a2;
    v12 = (char *)this + 1192;
    *((_QWORD *)this + 77) = v9;
    *((_DWORD *)this + 156) = a4;
    *((_DWORD *)this + 157) = a5;
    memset((char *)this + 1192, 0, 0x274uLL);
    *((_QWORD *)this + 149) = *(_QWORD *)(*((_QWORD *)v9 + 12) + 312LL);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = qword_1C01A29C0;
    if ( qword_1C01A29C0 != *((_QWORD *)this + 307) )
    {
      *((_QWORD *)this + 307) = qword_1C01A29C0;
      if ( v15 )
      {
        v14 = *(LARGE_INTEGER *)v12;
        v16 = v15 + *(_QWORD *)v12 - PerformanceCounter.QuadPart;
        v17 = *(_QWORD *)v12 - 1LL;
        if ( v16 >= v17 )
          v16 = *(_QWORD *)v12 - 1LL;
        if ( v16 <= *(_QWORD *)((char *)this + 1820) + 1LL )
        {
          v19 = *(_QWORD *)((char *)this + 1820) + 1LL;
        }
        else
        {
          v18 = v15 - PerformanceCounter.QuadPart;
          if ( v18 + v14.QuadPart >= v17 )
            v18 = -1LL;
          v19 = v14.QuadPart + v18;
        }
        *((_QWORD *)this + 309) = v19;
      }
      else
      {
        *((_QWORD *)this + 309) = 0LL;
      }
    }
    v20 = qword_1C01A29C8;
    if ( qword_1C01A29C8 != *((_QWORD *)this + 308) )
    {
      *((_QWORD *)this + 308) = qword_1C01A29C8;
      if ( v20 )
      {
        v14 = *(LARGE_INTEGER *)v12;
        v21 = v20 + *(_QWORD *)v12 - PerformanceCounter.QuadPart;
        v22 = *(_QWORD *)v12 - 1LL;
        if ( v21 >= v22 )
          v21 = *(_QWORD *)v12 - 1LL;
        if ( v21 <= *(_QWORD *)((char *)this + 1820) + 1LL )
        {
          v20 = *(_QWORD *)((char *)this + 1820) + 1LL;
        }
        else
        {
          v23 = v20 - PerformanceCounter.QuadPart;
          if ( v23 + v14.QuadPart >= v22 )
            v23 = -1LL;
          v20 = v14.QuadPart + v23;
        }
        *((_QWORD *)this + 310) = v20;
      }
      else
      {
        *((_QWORD *)this + 310) = 0LL;
      }
    }
    *((_QWORD *)this + 150) = *((_QWORD *)this + 309);
    *((_QWORD *)this + 151) = *((_QWORD *)this + 310);
    v24 = *(unsigned int *)(*((_QWORD *)v9 + 12) + 296LL);
    *((_DWORD *)this + 304) = v24;
    *(struct tagPOINT *)((char *)this + 1220) = gptCursorAsync;
    *((_DWORD *)this + 307) = a6 != 0;
    if ( (*((_DWORD *)this + 96) & 1) != 0
      || (v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetQueryInertiaStatus)(
                  v24,
                  v20,
                  (LARGE_INTEGER)v14.QuadPart,
                  (LARGE_INTEGER)PerformanceCounter.QuadPart)) != 0 )
    {
      v25 = 1;
    }
    *((_DWORD *)this + 308) = v25;
    v26 = 0LL;
    *((_DWORD *)this + 309) = *((_DWORD *)v9 + 10);
    *((_DWORD *)this + 310) = *((_DWORD *)v9 + 12);
    if ( *((_DWORD *)v9 + 12) )
    {
      do
      {
        v27 = *((_QWORD *)v9 + 12);
        v28 = 96 * v26;
        *(_OWORD *)((char *)this + v28 + 1244) = *(_OWORD *)(576 * v26 + v27 + 232);
        *(_OWORD *)((char *)this + v28 + 1260) = *(_OWORD *)(576 * v26 + v27 + 248);
        *(_OWORD *)((char *)this + v28 + 1276) = *(_OWORD *)(576 * v26 + v27 + 264);
        *(_OWORD *)((char *)this + v28 + 1292) = *(_OWORD *)(576 * v26 + v27 + 280);
        *(_OWORD *)((char *)this + v28 + 1308) = *(_OWORD *)(576 * v26 + v27 + 296);
        *(_OWORD *)((char *)this + v28 + 1324) = *(_OWORD *)(576 * v26 + v27 + 312);
        LODWORD(v28) = *(unsigned __int16 *)(576 * v26 + *((_QWORD *)v9 + 12) + 224);
        v29 = 3 * (v26 + 13);
        v26 = (unsigned int)(v26 + 1);
        *((_DWORD *)this + 8 * v29) = v28;
      }
      while ( (_DWORD)v26 != *((_DWORD *)v9 + 12) );
    }
    PTPEngineTraceProducer::OnInput(
      *((PTPEngineTraceProducer **)this + 81),
      (CPTPProcessor *)((char *)this + 1192),
      (struct tagTPAAPSTATE *)&CPTPProcessor::s_aapState);
    v30 = 4LL;
    v31 = (char *)this + 1820;
    do
    {
      v32 = *((_OWORD *)v12 + 1);
      *(_OWORD *)v31 = *(_OWORD *)v12;
      v33 = *((_OWORD *)v12 + 2);
      *((_OWORD *)v31 + 1) = v32;
      v34 = *((_OWORD *)v12 + 3);
      *((_OWORD *)v31 + 2) = v33;
      v35 = *((_OWORD *)v12 + 4);
      *((_OWORD *)v31 + 3) = v34;
      v36 = *((_OWORD *)v12 + 5);
      *((_OWORD *)v31 + 4) = v35;
      v37 = *((_OWORD *)v12 + 6);
      *((_OWORD *)v31 + 5) = v36;
      v38 = *((_OWORD *)v12 + 7);
      v12 += 128;
      *((_OWORD *)v31 + 6) = v37;
      v31 += 128;
      *((_OWORD *)v31 - 1) = v38;
      --v30;
    }
    while ( v30 );
    v39 = *((_QWORD *)this + 77) == 0LL;
    v40 = *((_DWORD *)v12 + 28);
    v41 = *((_OWORD *)v12 + 1);
    *(_OWORD *)v31 = *(_OWORD *)v12;
    v42 = *((_OWORD *)v12 + 2);
    *((_OWORD *)v31 + 1) = v41;
    v43 = *((_OWORD *)v12 + 3);
    *((_OWORD *)v31 + 2) = v42;
    v44 = *((_OWORD *)v12 + 4);
    *((_OWORD *)v31 + 3) = v43;
    v45 = *((_OWORD *)v12 + 5);
    *((_OWORD *)v31 + 4) = v44;
    v46 = *((_OWORD *)v12 + 6);
    *((_OWORD *)v31 + 5) = v45;
    *((_OWORD *)v31 + 6) = v46;
    *((_DWORD *)v31 + 28) = v40;
    if ( !v39 )
    {
      CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v9, 1);
      *((_QWORD *)this + 77) = 0LL;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xEu, 0xAu, (__int64)&WPP_28abebde61583ba5b27ae605aca3fcd8_Traceguids);
  }
}
