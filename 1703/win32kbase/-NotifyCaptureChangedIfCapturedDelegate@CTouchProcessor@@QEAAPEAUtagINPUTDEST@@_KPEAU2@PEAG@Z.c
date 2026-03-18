/*
 * XREFs of ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0123180
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01206C8 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0125DFC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0127618 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCapturedDelegate(
        PERESOURCE *this,
        __int64 a2,
        struct tagINPUTDEST *a3,
        unsigned __int16 *a4)
{
  char *v4; // rbx
  CTouchProcessor *v9; // rcx
  struct CInputDest *v10; // rbp
  __int128 v11; // xmm0
  __int128 *v12; // rbp
  __int128 v14; // [rsp+30h] [rbp-D8h]
  __int128 v15; // [rsp+40h] [rbp-C8h]
  __int128 v16; // [rsp+50h] [rbp-B8h]
  __int128 v17; // [rsp+60h] [rbp-A8h]
  __int128 v18; // [rsp+70h] [rbp-98h]
  __int128 v19; // [rsp+80h] [rbp-88h]
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+B0h] [rbp-58h]
  __int128 v22; // [rsp+C0h] [rbp-48h]
  __int128 v23; // [rsp+D0h] [rbp-38h]
  __int128 v24; // [rsp+E0h] [rbp-28h]
  struct CInputDest *v25; // [rsp+110h] [rbp+8h] BYREF

  v25 = 0LL;
  v4 = (char *)(this + 25);
  CInpLockGuard::LockExclusive(this + 25);
  CTouchProcessor::GetPointerCapture(v9, a2, 0, &v25, 0LL);
  v10 = v25;
  if ( v25 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( *(_QWORD *)(a2 + 40) )
      CTouchProcessor::SetDelegateActionInt(this);
    *a4 = *(_WORD *)(a2 + 16);
    v14 = *(_OWORD *)v10;
    v15 = *((_OWORD *)v10 + 1);
    v16 = *((_OWORD *)v10 + 2);
    v17 = *((_OWORD *)v10 + 3);
    v18 = *((_OWORD *)v10 + 4);
    v19 = *((_OWORD *)v10 + 5);
    v20 = *((_OWORD *)v10 + 6);
    v11 = *((_OWORD *)v10 + 7);
    v12 = (__int128 *)((char *)v10 + 128);
    v21 = *v12;
    v22 = v12[1];
    v23 = v12[2];
    v24 = v12[3];
    *(_OWORD *)a3 = v14;
    *((_OWORD *)a3 + 1) = v15;
    *((_OWORD *)a3 + 2) = v16;
    *((_OWORD *)a3 + 3) = v17;
    *((_OWORD *)a3 + 4) = v18;
    *((_OWORD *)a3 + 5) = v19;
    *((_OWORD *)a3 + 6) = v20;
    *((_OWORD *)a3 + 7) = v11;
    *((_OWORD *)a3 + 8) = v21;
    *((_OWORD *)a3 + 9) = v22;
    *((_OWORD *)a3 + 10) = v23;
    *((_OWORD *)a3 + 11) = v24;
  }
  else
  {
    a3 = 0LL;
  }
  *((_QWORD *)v4 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v4);
  return a3;
}
