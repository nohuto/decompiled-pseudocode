/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0122FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01206C8 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0125DFC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0127618 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_SF_qHL @ 0x1C0129E80 (WPP_RECORDER_SF_qHL.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        PERESOURCE *this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  char *v3; // rbx
  CTouchProcessor *v7; // rcx
  char WindowHandle; // al
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-E8h]
  __int128 v14; // [rsp+50h] [rbp-B8h]
  __int128 v15; // [rsp+60h] [rbp-A8h]
  __int128 v16; // [rsp+70h] [rbp-98h]
  __int128 v17; // [rsp+80h] [rbp-88h]
  __int128 v18; // [rsp+90h] [rbp-78h]
  __int128 v19; // [rsp+A0h] [rbp-68h]
  __int128 v20; // [rsp+B0h] [rbp-58h]
  __int128 v21; // [rsp+C0h] [rbp-48h]
  __int128 v22; // [rsp+D0h] [rbp-38h]
  __int128 v23; // [rsp+E0h] [rbp-28h]
  __int128 v24; // [rsp+F0h] [rbp-18h]
  CInputDest *v25; // [rsp+110h] [rbp+8h] BYREF

  v3 = (char *)(this + 25);
  CInpLockGuard::LockExclusive(this + 25);
  CTouchProcessor::GetPointerCapture(v7, a2, 0, &v25, 0LL);
  if ( v25 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    if ( *(_QWORD *)(a2 + 40) )
      CTouchProcessor::SetDelegateActionInt(this);
    v14 = *((_OWORD *)v25 + 1);
    v15 = *((_OWORD *)v25 + 2);
    v16 = *((_OWORD *)v25 + 3);
    v17 = *((_OWORD *)v25 + 4);
    v18 = *((_OWORD *)v25 + 5);
    v19 = *((_OWORD *)v25 + 6);
    v20 = *((_OWORD *)v25 + 7);
    v21 = *((_OWORD *)v25 + 8);
    v22 = *((_OWORD *)v25 + 9);
    v23 = *((_OWORD *)v25 + 10);
    v24 = *((_OWORD *)v25 + 11);
    *(_OWORD *)a3 = *(_OWORD *)v25;
    *((_OWORD *)a3 + 1) = v14;
    *((_OWORD *)a3 + 2) = v15;
    *((_OWORD *)a3 + 3) = v16;
    *((_OWORD *)a3 + 4) = v17;
    *((_OWORD *)a3 + 5) = v18;
    *((_OWORD *)a3 + 6) = v19;
    *((_OWORD *)a3 + 7) = v20;
    *((_OWORD *)a3 + 8) = v21;
    *((_OWORD *)a3 + 9) = v22;
    *((_OWORD *)a3 + 10) = v23;
    *((_OWORD *)a3 + 11) = v24;
    WindowHandle = (unsigned __int8)CInputDest::GetWindowHandle(v25);
    WPP_RECORDER_SF_qHL(
      (unsigned int)this[1],
      v9,
      v10,
      v11,
      v13,
      WindowHandle,
      *(_WORD *)(a2 + 16),
      *(_DWORD *)(a2 + 28));
  }
  else
  {
    a3 = 0LL;
  }
  *((_QWORD *)v3 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v3);
  return a3;
}
