/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0116850
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C010DA58 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0116A78 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01099E4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011406C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013F498 (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  CInputDest *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  CTouchProcessor *v16; // rbx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  CInputDest *v27; // [rsp+30h] [rbp-248h] BYREF
  _OWORD v28[11]; // [rsp+40h] [rbp-238h] BYREF
  char v29; // [rsp+F0h] [rbp-188h] BYREF
  _QWORD v30[24]; // [rsp+1A0h] [rbp-D8h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  *a2 = 0;
  if ( !*((_DWORD *)this + 119) )
  {
LABEL_14:
    CTouchProcessor::GetPointerCapture((struct _KTHREAD **)gpTouchProcessor, *((_QWORD *)this + 2), 0, &v27, 0LL);
    v11 = v27;
    if ( v27 )
    {
      if ( !CInputDest::GetThreadInfo(v27) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
      if ( !*((_QWORD *)CInputDest::GetThreadInfo(v11) + 53) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
      return v11;
    }
    else
    {
      v16 = gpTouchProcessor;
      CInpLockGuard::UnLock((PERESOURCE *)gpTouchProcessor + 9);
      v17 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v29, (int)this + 232, 0, 0, 0LL, 0LL);
      v18 = v17[1];
      v28[0] = *v17;
      v19 = v17[2];
      v28[1] = v18;
      v20 = v17[3];
      v28[2] = v19;
      v21 = v17[4];
      v28[3] = v20;
      v22 = v17[5];
      v28[4] = v21;
      v23 = v17[6];
      v28[5] = v22;
      v24 = v17[8];
      v28[6] = v23;
      v28[7] = v17[7];
      v25 = v17[9];
      v28[8] = v24;
      v26 = v17[10];
      v28[9] = v25;
      v28[10] = v26;
      CInputDest::CInputDest((CInputDest *)v30, (const struct tagINPUTDEST *)v28);
      CInputDest::operator=((__int64)this + 392, v30);
      CInputDest::SetEmpty((CInputDest *)v30);
      CInpLockGuard::LockExclusive((PERESOURCE *)v16 + 9);
      return (struct CInputDest *)(((unsigned __int64)this + 392) & -(__int64)(*((_DWORD *)this + 98) != 0));
    }
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 392, *((void **)this + 32), 1) )
  {
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
    goto LABEL_14;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 392, *((void **)this + 32), 2) )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 392)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 392)) + 53) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  return (CPointerInfoNode *)((char *)this + 392);
}
