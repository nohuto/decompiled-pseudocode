/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0122AB0
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C013ABA0 (ApiSetEditionPointerParentNotify.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(
        CTouchProcessor *this,
        struct CInputDest *a2,
        struct CPointerInfoNode *a3,
        __int64 a4)
{
  struct CInputDest *v6; // rdi
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // r8
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
  _BYTE v19[64]; // [rsp+20h] [rbp-108h] BYREF
  _OWORD v20[12]; // [rsp+60h] [rbp-C8h] BYREF

  v6 = a2;
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v19, a2, (__int64)a3, a4);
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 32) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v7);
  v8 = *((_QWORD *)a3 + 2);
  v9 = *((_OWORD *)v6 + 1);
  v20[0] = *(_OWORD *)v6;
  v10 = *((_OWORD *)v6 + 2);
  v20[1] = v9;
  v11 = *((_OWORD *)v6 + 3);
  v20[2] = v10;
  v12 = *((_OWORD *)v6 + 4);
  v20[3] = v11;
  v13 = *((_OWORD *)v6 + 5);
  v20[4] = v12;
  v14 = *((_OWORD *)v6 + 6);
  v20[5] = v13;
  v20[6] = v14;
  v15 = *((_OWORD *)v6 + 7);
  v6 = (struct CInputDest *)((char *)v6 + 128);
  v20[7] = v15;
  v16 = *((_OWORD *)v6 + 1);
  v20[8] = *(_OWORD *)v6;
  v17 = *((_OWORD *)v6 + 2);
  v20[9] = v16;
  v18 = *((_OWORD *)v6 + 3);
  v20[10] = v17;
  v20[11] = v18;
  ApiSetEditionPointerParentNotify(v20, a3, v8);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 28);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v19);
}
