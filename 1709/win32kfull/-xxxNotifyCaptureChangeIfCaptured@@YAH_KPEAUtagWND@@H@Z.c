/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01CCD9C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxSendPointerMessageWorker @ 0x1C01C0044 (xxxSendPointerMessageWorker.c)
 *     ?SetPointerDataCaptureChanged@@YAHKG@Z @ 0x1C01CC12C (-SetPointerDataCaptureChanged@@YAHKG@Z.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F5F6C (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(PointerList *this, struct tagWND *a2)
{
  struct tagINPUTDEST *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 v9; // rax
  __int64 ThreadWin32Thread; // rax
  _BYTE *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // [rsp+20h] [rbp-108h]
  int v16[2]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE v18[192]; // [rsp+50h] [rbp-D8h] BYREF

  if ( (gdwMitConfig & 4) != 0 )
  {
    v3 = CTouchProcessor::NotifyCaptureChangedIfCaptured(
           gpTouchProcessor,
           (unsigned __int64)this,
           (struct tagINPUTDEST *)v18);
    v7 = 0;
    if ( !v3 )
      return 1LL;
    *(_QWORD *)v16 = *((_QWORD *)v3 + 10);
  }
  else
  {
    PointerList::GetPointerCapture(this, 0LL, (int)v16, 0LL, v15);
    v7 = 0;
    if ( !*(_QWORD *)v16 )
      return 1LL;
    SetPointerDataCaptureChanged(*((_DWORD *)this + 7), *((_WORD *)this + 8));
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
      *(_DWORD *)(v9 + 80) |= 0x10u;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v17[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v17;
  v11 = *(_BYTE **)v16;
  v17[1] = *(_QWORD *)v16;
  if ( *(_QWORD *)v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v16 + 8LL));
    v11 = *(_BYTE **)v16;
  }
  v12 = xxxSendPointerMessageWorker(v11, 588LL, (__int64)this, *(_QWORD *)v11, 0LL, 183);
  ThreadUnlock1(v14, v13);
  LOBYTE(v7) = v12 != 0;
  return v7;
}
