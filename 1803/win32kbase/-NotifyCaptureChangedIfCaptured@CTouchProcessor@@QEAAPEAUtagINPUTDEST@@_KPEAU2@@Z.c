/*
 * XREFs of ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0117B50
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011406C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C011AF54 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C011CC7C (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 *     WPP_RECORDER_SF_qHL @ 0x1C011FF38 (WPP_RECORDER_SF_qHL.c)
 */

struct tagINPUTDEST *__fastcall CTouchProcessor::NotifyCaptureChangedIfCaptured(
        PERESOURCE *this,
        __int64 a2,
        struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v6; // rdi
  __int128 v7; // xmm1
  char WindowHandle; // al
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v13; // [rsp+20h] [rbp-E8h]
  __int128 v14; // [rsp+60h] [rbp-A8h]
  __int128 v15; // [rsp+70h] [rbp-98h]
  __int128 v16; // [rsp+80h] [rbp-88h]
  __int128 v17; // [rsp+90h] [rbp-78h]
  __int128 v18; // [rsp+A0h] [rbp-68h]
  __int128 v19; // [rsp+B0h] [rbp-58h]
  __int128 v20; // [rsp+C0h] [rbp-48h]
  __int128 v21; // [rsp+D0h] [rbp-38h]
  __int128 v22; // [rsp+E0h] [rbp-28h]
  CInputDest *v23; // [rsp+110h] [rbp+8h] BYREF

  CInpLockGuard::LockExclusive(this + 9);
  v6 = 0LL;
  CTouchProcessor::GetPointerCapture((struct _KTHREAD **)this, a2, 0, &v23, 0LL);
  if ( v23 )
  {
    CTouchProcessor::SetPointerInfoNodeFlag(
      (CTouchProcessor *)this,
      *(_DWORD *)(a2 + 28),
      *(_WORD *)(a2 + 16),
      0x200000u);
    CTouchProcessor::SetDelegateAction(this, a2);
    v14 = *((_OWORD *)v23 + 2);
    v15 = *((_OWORD *)v23 + 3);
    v16 = *((_OWORD *)v23 + 4);
    v17 = *((_OWORD *)v23 + 5);
    v18 = *((_OWORD *)v23 + 6);
    v19 = *((_OWORD *)v23 + 7);
    v20 = *((_OWORD *)v23 + 8);
    v21 = *((_OWORD *)v23 + 9);
    v22 = *((_OWORD *)v23 + 10);
    v7 = *((_OWORD *)v23 + 1);
    *(_OWORD *)a3 = *(_OWORD *)v23;
    *((_OWORD *)a3 + 1) = v7;
    *((_OWORD *)a3 + 2) = v14;
    *((_OWORD *)a3 + 3) = v15;
    *((_OWORD *)a3 + 4) = v16;
    *((_OWORD *)a3 + 5) = v17;
    *((_OWORD *)a3 + 6) = v18;
    *((_OWORD *)a3 + 7) = v19;
    *((_OWORD *)a3 + 8) = v20;
    *((_OWORD *)a3 + 9) = v21;
    *((_OWORD *)a3 + 10) = v22;
    WindowHandle = (unsigned __int8)CInputDest::GetWindowHandle(v23);
    WPP_RECORDER_SF_qHL(
      (unsigned int)this[1],
      v9,
      v10,
      v11,
      v13,
      WindowHandle,
      *(_WORD *)(a2 + 16),
      *(_DWORD *)(a2 + 28));
    v6 = a3;
  }
  CInpLockGuard::UnLock(this + 9);
  return v6;
}
