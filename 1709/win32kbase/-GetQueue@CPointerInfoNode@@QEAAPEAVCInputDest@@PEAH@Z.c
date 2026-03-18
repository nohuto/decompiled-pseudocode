/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01216F4
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011A408 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01218C4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01171A4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011F548 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C013ACC8 (ApiSetEditionPointerSpeedHitTest.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  char *v4; // rbx
  struct CInputDest *result; // rax
  __int64 v6; // rbx
  struct _ERESOURCE *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rdi
  struct CInputDest *v20; // [rsp+30h] [rbp-278h] BYREF
  _OWORD v21[12]; // [rsp+40h] [rbp-268h] BYREF
  char v22; // [rsp+100h] [rbp-1A8h] BYREF
  _QWORD v23[26]; // [rsp+1C0h] [rbp-E8h] BYREF

  *a2 = 0;
  if ( !*((_DWORD *)this + 125) )
  {
LABEL_8:
    CTouchProcessor::GetPointerCapture(this, *((_QWORD *)this + 2), 0, &v20, 0LL);
    result = v20;
    if ( !v20 )
    {
      v6 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
      v7 = *(struct _ERESOURCE **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 224LL);
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 256LL) = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      v8 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v22, (int)this + 248, 0, 0, 0LL);
      v9 = v8[1];
      v21[0] = *v8;
      v10 = v8[2];
      v21[1] = v9;
      v11 = v8[3];
      v21[2] = v10;
      v12 = v8[4];
      v21[3] = v11;
      v13 = v8[5];
      v21[4] = v12;
      v14 = v8[6];
      v21[5] = v13;
      v21[6] = v14;
      v15 = v8[7];
      v8 += 8;
      v21[7] = v15;
      v16 = v8[1];
      v21[8] = *v8;
      v17 = v8[2];
      v21[9] = v16;
      v18 = v8[3];
      v21[10] = v17;
      v21[11] = v18;
      CInputDest::CInputDest((CInputDest *)v23, (const struct CInputDest *)v21);
      v19 = (__int64)this + 408;
      CInputDest::operator=(v19, v23);
      CInputDest::SetEmpty((CInputDest *)v23);
      CInpLockGuard::LockExclusive((PERESOURCE *)(v6 + 224));
      return (struct CInputDest *)(v19 & -(__int64)(*(_DWORD *)v19 != 0));
    }
    return result;
  }
  v4 = (char *)this + 408;
  if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 408, *((void **)this + 34), 1) )
  {
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
    goto LABEL_8;
  }
  if ( !CInputDest::IsEqualByWindowHandle((__int64)v4, *((void **)this + 34), 2) )
  {
    *a2 = 1;
    return 0LL;
  }
  return (struct CInputDest *)v4;
}
