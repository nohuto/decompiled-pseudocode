/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011074C
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C0110B68 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0036F3C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C0109C90 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0115CC8 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0117888 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0118130 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011A994 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C011D378 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C013F5E8 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C0141DEC (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  unsigned __int16 v8; // ax
  int *v10; // r13
  const struct tagQ *v11; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // r13d
  __int64 v25; // rdi
  unsigned __int64 v26; // r13
  __int64 v27; // rcx
  struct CInputDest *v28; // rdx
  struct tagTHREADINFO *v29; // rdi
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rdx
  __int64 v41; // rcx
  CPointerInfoNode *v42; // rcx
  int v43; // r9d
  __int64 v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+48h] [rbp-B8h]
  char *v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v50; // [rsp+78h] [rbp-88h]
  struct tagPOINT v51; // [rsp+80h] [rbp-80h] BYREF
  struct CInputDest *v52; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h]
  struct tagTHREADINFO *v54; // [rsp+98h] [rbp-68h]
  struct tagQ *v55; // [rsp+A0h] [rbp-60h]
  int *v56; // [rsp+A8h] [rbp-58h]
  _BYTE v57[64]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v58[11]; // [rsp+F0h] [rbp-10h] BYREF
  char v59; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v60[24]; // [rsp+250h] [rbp+150h] BYREF

  v8 = *((_WORD *)a3 + 118);
  v10 = a6;
  v11 = a4;
  v51 = 0LL;
  v55 = a4;
  v54 = a2;
  v56 = a6;
  v48 = v8;
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
  CInputDest::SetEmpty(a8);
  v18 = CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)this, *((_QWORD *)a3 + 2), a5, &v52, &v49);
  if ( v18 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v52);
  }
  else
  {
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
    v21 = *((_DWORD *)a3 + 61);
    if ( (v21 & 0x40004) != 0 && (v21 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset((CTouchProcessor *)this, *((_WORD *)a3 + 118), &v51);
  if ( !v18 )
  {
    v22 = CTouchProcessor::PointerFlagsToMessage((CTouchProcessor *)this, *((_DWORD *)a3 + 61));
    v24 = *((_WORD *)a3 + 122) & 0xE1F7;
    v25 = *((_QWORD *)a3 + 33);
    v50 = v22;
    v26 = v48 | (unsigned __int64)(unsigned int)(v24 << 16);
    v27 = *((unsigned __int16 *)a3 + 132);
    v53 = v27 | (*((unsigned __int16 *)a3 + 134) << 16);
    if ( *(_DWORD *)a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v23);
    v28 = (struct CPointerInfoNode *)((char *)a3 + 392);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v57, v28);
      CInpLockGuard::UnLock(this + 9);
      v47 = *((_QWORD *)a3 + 2);
      v46 = (char *)a3 + 224;
      v45 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v57, v28);
      CInpLockGuard::UnLock(this + 9);
      v47 = *((_QWORD *)a3 + 2);
      v46 = (char *)a3 + 224;
      v45 = 1;
    }
    v44 = v25;
    v29 = v54;
    v30 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v59,
                      (_DWORD)v54,
                      (int)a3 + 392,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v50,
                      v26,
                      v53,
                      v44,
                      (__int64)&v49,
                      v45,
                      (__int64)v46,
                      v47,
                      (__int64)&v51);
    v31 = v30[1];
    v58[0] = *v30;
    v32 = v30[2];
    v58[1] = v31;
    v33 = v30[3];
    v58[2] = v32;
    v34 = v30[4];
    v58[3] = v33;
    v35 = v30[5];
    v58[4] = v34;
    v36 = v30[6];
    v58[5] = v35;
    v37 = v30[8];
    v58[6] = v36;
    v58[7] = v30[7];
    v38 = v30[9];
    v58[8] = v37;
    v39 = v30[10];
    v58[9] = v38;
    v58[10] = v39;
    CInputDest::CInputDest((CInputDest *)v60, (const struct tagINPUTDEST *)v58);
    CInputDest::operator=((__int64)a8, v60);
    CInputDest::SetEmpty((CInputDest *)v60);
    CInpLockGuard::LockExclusive(this + 9);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v57);
    if ( *(_DWORD *)a8 )
    {
      if ( v49 == -1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40);
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset((CTouchProcessor *)this, v48, &v51);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v42, v29) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(
                         (CTouchProcessor *)this,
                         *((_QWORD *)a3 + 2),
                         a5,
                         &v52,
                         &v49) )
      CInputDest::operator=((__int64)a8, (__int64)v52);
    v10 = v56;
    v11 = v55;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 33),
                        (char *)a3 + 224,
                        v51,
                        a7) )
  {
    a7->x = 0;
    a7->y = 0;
  }
  v43 = *(_DWORD *)a8;
  if ( *(_DWORD *)a8 && v11 && !CInputDest::UsesQueue(a8, v11) )
  {
    CInputDest::SetEmpty(a8);
    v43 = *(_DWORD *)a8;
  }
  if ( v43 )
    *v10 = v49;
}
