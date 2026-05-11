/*
 * XREFs of USBCaptureRequeueWorker @ 0x1C0005320
 * Callers:
 *     <none>
 * Callees:
 *     USBCaptureSubmitRequest @ 0x1C0025754 (USBCaptureSubmitRequest.c)
 */

void __fastcall USBCaptureRequeueWorker(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  KSPIN_LOCK *v4; // rbp
  KIRQL v5; // r14
  _QWORD **v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx

  v2 = Context[2];
  v3 = *(_QWORD *)(v2 + 152);
  v4 = (KSPIN_LOCK *)(v2 + 112);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 112));
  if ( !*(_BYTE *)v3 )
  {
    v6 = (_QWORD **)(v3 + 120);
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 == v6 || !*(_BYTE *)(v3 + 96) )
        break;
      if ( (_QWORD **)v8[1] != v6 || (v7 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
        __fastfail(3u);
      *v6 = v7;
      v7[1] = v6;
      KeReleaseSpinLock(v4, v5);
      USBCaptureSubmitRequest(v8);
      v5 = KeAcquireSpinLockRaiseToDpc(v4);
    }
  }
  KeSetEvent((PRKEVENT)(v3 + 256), 0, 0);
  *(_BYTE *)(v3 + 248) = 0;
  KeReleaseSpinLock(v4, v5);
}
