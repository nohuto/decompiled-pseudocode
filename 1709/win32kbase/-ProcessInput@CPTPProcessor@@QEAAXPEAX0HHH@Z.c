/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012B348
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C000 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011D5EC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?AreEqualRects@CPTPProcessor@@AEAA_NUtagRECT@@0@Z @ 0x1C012A5E4 (-AreEqualRects@CPTPProcessor@@AEAA_NUtagRECT@@0@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012BD1C (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C0138808 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ApiSetQueryInertiaStatus @ 0x1C013CA68 (ApiSetQueryInertiaStatus.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        unsigned __int64 a2,
        struct RIMCOMPLETEFRAME *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v9; // rdx
  struct CPointerInputFrame *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  CPTPProcessor *v13; // rcx
  int v14; // edx
  struct tagRECT v15; // xmm0
  struct tagRECT v16; // xmm1
  CPTPProcessor *v17; // rcx
  struct tagRECT v18; // xmm0
  struct tagRECT v19; // xmm1
  char v20; // r9
  _OWORD *v21; // rdi
  int InertiaStatus; // eax
  int v23; // r9d
  __int64 v24; // rdx
  char *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  bool v36; // zf
  int v37; // eax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  struct tagRECT v44; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v45; // [rsp+40h] [rbp-18h] BYREF

  v10 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 1, 0);
  if ( v10 )
  {
    LOBYTE(v9) = 19;
    v13 = *(CPTPProcessor **)(HMValidateHandleNoSecure(a2, v9, v11, v12) + 472);
    v14 = *((_DWORD *)gpsi + 493) != 0;
    if ( *((_DWORD *)this + 211) != v14 )
      *((_DWORD *)this + 211) = v14;
    v15 = (struct tagRECT)*((_OWORD *)v13 + 10);
    v16 = (struct tagRECT)*((_OWORD *)this + 55);
    v44 = v15;
    v45 = v16;
    if ( !CPTPProcessor::AreEqualRects(v13, &v45, &v44) )
      *((struct tagRECT *)this + 55) = v15;
    v18 = (struct tagRECT)*((_OWORD *)v17 + 11);
    v19 = (struct tagRECT)*((_OWORD *)this + 56);
    v45 = v18;
    v44 = v19;
    if ( !CPTPProcessor::AreEqualRects(v17, &v44, &v45) )
    {
      *((struct tagRECT *)this + 56) = v18;
      v20 = 1;
    }
    if ( v20 )
      CPTPProcessor::UpdateEnvironment(this, 0LL);
    *((_QWORD *)this + 98) = a2;
    v21 = (_OWORD *)((char *)this + 1364);
    *((_QWORD *)this + 99) = v10;
    *((_DWORD *)this + 200) = a4;
    *((_DWORD *)this + 201) = a5;
    memset((char *)this + 1364, 0, 0x274uLL);
    *(_QWORD *)((char *)this + 1364) = *(_QWORD *)(*((_QWORD *)v10 + 12) + 328LL);
    *(_QWORD *)((char *)this + 1372) = qword_1C0196040;
    *(_QWORD *)((char *)this + 1380) = qword_1C0196048;
    *((_DWORD *)this + 347) = *(_DWORD *)(*((_QWORD *)v10 + 12) + 312LL);
    *((struct tagPOINT *)this + 174) = gptCursorAsync;
    *((_DWORD *)this + 350) = a6 != 0;
    if ( (*((_DWORD *)this + 136) & 1) != 0 || (InertiaStatus = ApiSetQueryInertiaStatus()) != 0 )
      InertiaStatus = 1;
    *((_DWORD *)this + 351) = InertiaStatus;
    v23 = 0;
    *((_DWORD *)this + 352) = *((_DWORD *)v10 + 10);
    *((_DWORD *)this + 353) = *((_DWORD *)v10 + 12);
    if ( *((_DWORD *)v10 + 12) )
    {
      v24 = 0LL;
      v25 = (char *)this + 1420;
      do
      {
        v26 = *((_QWORD *)v10 + 12);
        v24 += 608LL;
        ++v23;
        *(_OWORD *)(v25 - 4) = *(_OWORD *)(v24 + v26 - 360);
        *(_OWORD *)(v25 + 12) = *(_OWORD *)(v24 + v26 - 344);
        *(_OWORD *)(v25 + 28) = *(_OWORD *)(v24 + v26 - 328);
        *(_OWORD *)(v25 + 44) = *(_OWORD *)(v24 + v26 - 312);
        *(_OWORD *)(v25 + 60) = *(_OWORD *)(v24 + v26 - 296);
        *(_OWORD *)(v25 + 76) = *(_OWORD *)(v24 + v26 - 280);
        *(_DWORD *)v25 = *(unsigned __int16 *)(v24 + *((_QWORD *)v10 + 12) - 368);
        v25 += 96;
      }
      while ( v23 != *((_DWORD *)v10 + 12) );
    }
    PTPEngineTraceProducer::OnInput(
      *((PTPEngineTraceProducer **)this + 103),
      (CPTPProcessor *)((char *)this + 1364),
      (struct tagTPAAPSTATE *)&CPTPProcessor::s_aapState);
    v27 = 4LL;
    v28 = (char *)this + 1992;
    do
    {
      v29 = v21[1];
      *(_OWORD *)v28 = *v21;
      v30 = v21[2];
      *((_OWORD *)v28 + 1) = v29;
      v31 = v21[3];
      *((_OWORD *)v28 + 2) = v30;
      v32 = v21[4];
      *((_OWORD *)v28 + 3) = v31;
      v33 = v21[5];
      *((_OWORD *)v28 + 4) = v32;
      v34 = v21[6];
      *((_OWORD *)v28 + 5) = v33;
      v35 = v21[7];
      v21 += 8;
      *((_OWORD *)v28 + 6) = v34;
      v28 += 128;
      *((_OWORD *)v28 - 1) = v35;
      --v27;
    }
    while ( v27 );
    v36 = *((_QWORD *)this + 99) == 0LL;
    v37 = *((_DWORD *)v21 + 28);
    v38 = v21[1];
    *(_OWORD *)v28 = *v21;
    v39 = v21[2];
    *((_OWORD *)v28 + 1) = v38;
    v40 = v21[3];
    *((_OWORD *)v28 + 2) = v39;
    v41 = v21[4];
    *((_OWORD *)v28 + 3) = v40;
    v42 = v21[5];
    *((_OWORD *)v28 + 4) = v41;
    v43 = v21[6];
    *((_OWORD *)v28 + 5) = v42;
    *((_OWORD *)v28 + 6) = v43;
    *((_DWORD *)v28 + 28) = v37;
    if ( !v36 )
    {
      CTouchProcessor::FreeFrame(this, v10, 1);
      *((_QWORD *)this + 99) = 0LL;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xDu, 0xAu, (__int64)&WPP_b96333be1fe73c9db3186ffcd2e44210_Traceguids);
  }
}
