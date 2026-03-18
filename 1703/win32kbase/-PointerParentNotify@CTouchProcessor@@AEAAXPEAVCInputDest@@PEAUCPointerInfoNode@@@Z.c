/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0123460
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C013BA30 (ApiSetEditionPointerParentNotify.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(
        CTouchProcessor *this,
        struct CInputDest *a2,
        struct CPointerInfoNode *a3)
{
  struct CInputDest *v5; // rdi
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // r8
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _BYTE v18[64]; // [rsp+20h] [rbp-108h] BYREF
  _OWORD v19[12]; // [rsp+60h] [rbp-C8h] BYREF

  v5 = a2;
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v18, a2);
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 29) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v6);
  v7 = *((_QWORD *)a3 + 2);
  v8 = *((_OWORD *)v5 + 1);
  v19[0] = *(_OWORD *)v5;
  v9 = *((_OWORD *)v5 + 2);
  v19[1] = v8;
  v10 = *((_OWORD *)v5 + 3);
  v19[2] = v9;
  v11 = *((_OWORD *)v5 + 4);
  v19[3] = v10;
  v12 = *((_OWORD *)v5 + 5);
  v19[4] = v11;
  v13 = *((_OWORD *)v5 + 6);
  v19[5] = v12;
  v19[6] = v13;
  v14 = *((_OWORD *)v5 + 7);
  v5 = (struct CInputDest *)((char *)v5 + 128);
  v19[7] = v14;
  v15 = *((_OWORD *)v5 + 1);
  v19[8] = *(_OWORD *)v5;
  v16 = *((_OWORD *)v5 + 2);
  v19[9] = v15;
  v17 = *((_OWORD *)v5 + 3);
  v19[10] = v16;
  v19[11] = v17;
  ApiSetEditionPointerParentNotify(v19, a3, v7);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 25);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v18);
}
