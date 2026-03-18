/*
 * XREFs of ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C588
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C960 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0017280 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z @ 0x1C01173D0 (-UsesQueue@CInputDest@@QEBA_NPEBUtagQ@@@Z.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0120DBC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0122450 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1C0122A64 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0124E24 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01270CC (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetEditionPointerWindowHitTest @ 0x1C013AE14 (ApiSetEditionPointerWindowHitTest.c)
 *     ApiSetValidatePointerOffset @ 0x1C013D48C (ApiSetValidatePointerOffset.c)
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
  unsigned __int16 v9; // si
  struct tagQ *v10; // rdi
  CTouchProcessor *v12; // rcx
  int v13; // ebx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  struct CInputDest *v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *v21; // rbx
  struct tagTHREADINFO *v22; // rdi
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  CPointerInfoNode *v34; // rcx
  CTouchProcessor *v35; // rcx
  __int64 v36; // [rsp+38h] [rbp-C8h]
  int v37; // [rsp+48h] [rbp-B8h]
  char *v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v41; // [rsp+74h] [rbp-8Ch]
  unsigned int v42; // [rsp+78h] [rbp-88h]
  struct tagPOINT v43; // [rsp+80h] [rbp-80h] BYREF
  struct CInputDest *v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  unsigned __int64 v46; // [rsp+98h] [rbp-68h]
  struct tagTHREADINFO *v47; // [rsp+A0h] [rbp-60h]
  struct tagQ *v48; // [rsp+A8h] [rbp-58h]
  int *v49; // [rsp+B0h] [rbp-50h]
  _BYTE v50[64]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v51[12]; // [rsp+100h] [rbp+0h] BYREF
  char v52; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v53[26]; // [rsp+280h] [rbp+180h] BYREF

  v9 = *((_WORD *)a3 + 126);
  v10 = a4;
  v49 = a6;
  v43 = 0LL;
  v48 = a4;
  v47 = a2;
  v41 = v9;
  CInputDest::SetEmpty(a8);
  v13 = CTouchProcessor::RecheckPointerCapture(v12, *((_QWORD *)a3 + 2), a5, &v44, &v40);
  if ( v13 )
  {
    CInputDest::operator=((__int64)a8, (__int64)v44);
  }
  else
  {
    v14 = *((_DWORD *)a3 + 65);
    if ( (v14 & 0x40004) != 0 && (v14 & 0x10000) == 0 )
      return;
  }
  CTouchProcessor::GetPointerOffset((CTouchProcessor *)this, *((_WORD *)a3 + 126), &v43);
  if ( !v13 )
  {
    v15 = CTouchProcessor::PointerFlagsToMessage((CTouchProcessor *)this, *((_DWORD *)a3 + 65));
    v18 = *((_QWORD *)a3 + 35);
    v42 = v15;
    v19 = (struct CPointerInfoNode *)((char *)a3 + 408);
    v20 = *((unsigned __int16 *)a3 + 140);
    v46 = v9 | (unsigned __int64)((unsigned __int16)(*((_WORD *)a3 + 130) & 0xE1F7) << 16);
    v45 = v20 | (*((unsigned __int16 *)a3 + 142) << 16);
    if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v50, v19, v16, v17);
      v21 = this + 28;
      this[32] = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(this[28]);
      v39 = *((_QWORD *)a3 + 2);
      v38 = (char *)a3 + 240;
      v37 = 9;
    }
    else
    {
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v50, v19, v16, v17);
      v21 = this + 28;
      this[32] = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(this[28]);
      v39 = *((_QWORD *)a3 + 2);
      v38 = (char *)a3 + 240;
      v37 = 1;
    }
    v36 = v18;
    v22 = v47;
    v23 = (_OWORD *)ApiSetEditionPointerWindowHitTest(
                      (unsigned int)&v52,
                      (_DWORD)v47,
                      (int)a3 + 408,
                      -__CFSHR__(*((_DWORD *)a3 + 1), 8),
                      v42,
                      v46,
                      v45,
                      v36,
                      (__int64)&v40,
                      v37,
                      (__int64)v38,
                      v39,
                      (__int64)&v43);
    v24 = v23[1];
    v51[0] = *v23;
    v25 = v23[2];
    v51[1] = v24;
    v26 = v23[3];
    v51[2] = v25;
    v27 = v23[4];
    v51[3] = v26;
    v28 = v23[5];
    v51[4] = v27;
    v29 = v23[6];
    v51[5] = v28;
    v51[6] = v29;
    v30 = v23[7];
    v23 += 8;
    v51[7] = v30;
    v31 = v23[1];
    v51[8] = *v23;
    v32 = v23[2];
    v51[9] = v31;
    v33 = v23[3];
    v51[10] = v32;
    v51[11] = v33;
    CInputDest::CInputDest((CInputDest *)v53, (const struct CInputDest *)v51);
    CInputDest::operator=((__int64)a8, v53);
    CInputDest::SetEmpty((CInputDest *)v53);
    CInpLockGuard::LockExclusive(v21);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v50);
    if ( *(_DWORD *)a8 )
    {
      if ( CInputDest::TestWindowFlag(a8, 1152) || CInputDest::TestWindowFlag(a8, 896) )
        CInputDest::SetEmpty(a8);
      if ( *(_DWORD *)a8 )
        CTouchProcessor::SetPointerOffset((CTouchProcessor *)this, v41, &v43);
    }
    if ( !(unsigned int)CPointerInfoNode::IsValid(a3)
      || (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v34, v22) )
    {
      CInputDest::SetEmpty(a8);
      return;
    }
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(v35, *((_QWORD *)a3 + 2), a5, &v44, &v40) )
      CInputDest::operator=((__int64)a8, (__int64)v44);
    v10 = v48;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                        *((_QWORD *)a3 + 35),
                        (char *)a3 + 240,
                        v43,
                        a7) )
    *a7 = 0LL;
  if ( *(_DWORD *)a8 )
  {
    if ( v10 && !CInputDest::UsesQueue(a8, v10) )
      CInputDest::SetEmpty(a8);
    if ( *(_DWORD *)a8 )
      *v49 = v40;
  }
}
