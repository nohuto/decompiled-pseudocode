/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C8968
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxSendPointerMessageWorker @ 0x1C01BC354 (xxxSendPointerMessageWorker.c)
 *     ?SetPointerDataCaptureChanged@@YAHKG@Z @ 0x1C01C74C8 (-SetPointerDataCaptureChanged@@YAHKG@Z.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01E9FD4 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01EA270 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(PointerList *this, struct tagWND *a2)
{
  struct tagINPUTDEST *v3; // rax
  unsigned int v4; // edi
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int *v10; // [rsp+20h] [rbp-108h]
  int v11[2]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE v13[192]; // [rsp+50h] [rbp-D8h] BYREF

  if ( (gdwMitConfig & 4) != 0 )
  {
    v3 = CTouchProcessor::NotifyCaptureChangedIfCaptured(
           gpTouchProcessor,
           (unsigned __int64)this,
           (struct tagINPUTDEST *)v13);
    v4 = 0;
    if ( !v3 )
      return 1LL;
    v6 = *((_QWORD *)v3 + 10);
  }
  else
  {
    PointerList::GetPointerCapture(this, 0LL, (int)v11, 0LL, v10);
    v6 = *(_QWORD *)v11;
    v4 = 0;
    if ( !*(_QWORD *)v11 )
      return 1LL;
    SetPointerDataCaptureChanged(*((_DWORD *)this + 7), *((_WORD *)this + 8));
    PointerList::SetDelegateAction(this, 5LL);
  }
  v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v12;
  v12[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = xxxSendPointerMessageWorker((_BYTE *)v6, 588LL, (__int64)this, *(_QWORD *)v6, 0LL, 183);
  ThreadUnlock1(v9, v8);
  LOBYTE(v4) = v7 != 0;
  return v4;
}
