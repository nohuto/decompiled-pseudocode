/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011DB1C (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0047F04 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C011853C (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0121ACC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0122DF8 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0123414 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C012584C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0127A74 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C013BCA4 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C013E060 (ApiSetValidatePointerOffset.c)
 */

void __fastcall CTouchProcessor::DeterminePointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        struct CPointerInfoNode *a3,
        struct tagQ *a4,
        int a5,
        int *a6,
        struct tagPOINT *a7,
        struct CInputDest *a8)
{
  unsigned __int16 v9; // r13
  struct tagQ *v10; // r12
  struct tagPOINT *v12; // rbx
  CTouchProcessor *v13; // rcx
  int v14; // esi
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // r12d
  __int64 v18; // rdi
  struct CInputDest *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  CTouchProcessor *v24; // rbx
  struct tagTHREADINFO *v25; // rdi
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  CPointerInfoNode *v37; // rcx
  CTouchProcessor *v38; // rcx
  __int64 v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+48h] [rbp-B8h]
  char *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v44; // [rsp+74h] [rbp-8Ch]
  unsigned int v45; // [rsp+78h] [rbp-88h]
  struct tagPOINT v46; // [rsp+80h] [rbp-80h] BYREF
  CTouchProcessor *v47; // [rsp+88h] [rbp-78h]
  struct CInputDest *v48; // [rsp+90h] [rbp-70h] BYREF
  struct tagTHREADINFO *v49; // [rsp+98h] [rbp-68h]
  struct tagPOINT *v50; // [rsp+A0h] [rbp-60h]
  struct tagQ *v51; // [rsp+A8h] [rbp-58h]
  int *v52; // [rsp+B0h] [rbp-50h]
  _BYTE v53[64]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v54[12]; // [rsp+100h] [rbp+0h] BYREF
  char v55; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v56[26]; // [rsp+280h] [rbp+180h] BYREF

  v9 = *((_WORD *)a3 + 126);
  v10 = a4;
  v12 = a7;
  v52 = a6;
  v47 = this;
  v46 = 0LL;
  v51 = a4;
  v49 = a2;
  v50 = a7;
  v44 = v9;
  CInputDest::SetEmpty(a8);
  v14 = CTouchProcessor::RecheckPointerCapture(v13, *((_QWORD *)a3 + 2), a5, &v48, &v43);
  if ( v14 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v48);
  }
  else
  {
    v15 = *((_DWORD *)a3 + 65);
    if ( (v15 & 0x40004) != 0 && (v15 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset(this, *((_WORD *)a3 + 126), &v46);
  if ( !v14 )
  {
    v16 = CTouchProcessor::PointerFlagsToMessage(this, *((_DWORD *)a3 + 65));
    v17 = *((unsigned __int16 *)a3 + 130);
    v18 = *((_QWORD *)a3 + 35);
    v19 = (struct CPointerInfoNode *)((char *)a3 + 408);
    v20 = v9;
    v21 = *((unsigned __int16 *)a3 + 142);
    v45 = v16;
    v22 = v20 | ((unsigned __int64)(v17 & 0xFFFFE1F7) << 16);
    v23 = *((unsigned __int16 *)a3 + 140) | (unsigned __int64)(v21 << 16);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v53, v19);
      v24 = v47;
      *((_QWORD *)v47 + 29) = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(*((PERESOURCE *)v24 + 25));
      v42 = *((_QWORD *)a3 + 2);
      v41 = (char *)a3 + 240;
      v40 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v53, v19);
      v24 = v47;
      *((_QWORD *)v47 + 29) = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(*((PERESOURCE *)v24 + 25));
      v42 = *((_QWORD *)a3 + 2);
      v41 = (char *)a3 + 240;
      v40 = 1;
    }
    v39 = v18;
    v25 = v49;
    v26 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v55,
                      (_DWORD)v49,
                      (int)a3 + 408,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v45,
                      v22,
                      v23,
                      v39,
                      (__int64)&v43,
                      v40,
                      (__int64)v41,
                      v42,
                      (__int64)&v46);
    v27 = v26[1];
    v54[0] = *v26;
    v28 = v26[2];
    v54[1] = v27;
    v29 = v26[3];
    v54[2] = v28;
    v30 = v26[4];
    v54[3] = v29;
    v31 = v26[5];
    v54[4] = v30;
    v32 = v26[6];
    v54[5] = v31;
    v54[6] = v32;
    v33 = v26[7];
    v26 += 8;
    v54[7] = v33;
    v34 = v26[1];
    v54[8] = *v26;
    v35 = v26[2];
    v54[9] = v34;
    v36 = v26[3];
    v54[10] = v35;
    v54[11] = v36;
    CInputDest::CInputDest((CInputDest *)v56, (const struct CInputDest *)v54);
    CInputDest::operator=((__int64)a8, v56);
    CInputDest::SetEmpty((CInputDest *)v56);
    CInpLockGuard::LockExclusive((PERESOURCE *)v24 + 25);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v53);
    if ( *(_DWORD *)a8 )
    {
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset(v47, v44, &v46);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v37, v25) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(v38, *((_QWORD *)a3 + 2), a5, &v48, &v43) )
      CInputDest::operator=((__int64)a8, (__int64)v48);
    v12 = v50;
    v10 = v51;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 35),
                        (char *)a3 + 240,
                        v46,
                        v12) )
    *v12 = 0LL;
  if ( *(_DWORD *)a8 )
  {
    if ( v10 && !CInputDest::UsesQueue(a8, v10) )
      CInputDest::SetEmpty(a8);
    if ( *(_DWORD *)a8 )
      *v52 = v43;
  }
}
