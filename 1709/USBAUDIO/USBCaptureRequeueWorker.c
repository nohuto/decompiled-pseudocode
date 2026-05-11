/*
 * XREFs of USBCaptureRequeueWorker @ 0x1C00050E0
 * Callers:
 *     <none>
 * Callees:
 *     USBCaptureSubmitRequest @ 0x1C0020BE8 (USBCaptureSubmitRequest.c)
 */

void __fastcall USBCaptureRequeueWorker(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  KSPIN_LOCK *v4; // rbp
  KIRQL v5; // r14
  __int64 **v6; // rbx
  __int64 *v7; // rsi
  __int64 *v8; // rax

  v2 = Context[2];
  v3 = *(_QWORD *)(v2 + 136);
  v4 = (KSPIN_LOCK *)(v2 + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  if ( !*(_BYTE *)v3 )
  {
    v6 = (__int64 **)(v3 + 104);
    while ( *v6 != (__int64 *)v6 && *(_BYTE *)(v3 + 80) )
    {
      v7 = *v6;
      if ( (__int64 **)(*v6)[1] != v6 || (v8 = (__int64 *)*v7, *(__int64 **)(*v7 + 8) != v7) )
        __fastfail(3u);
      *v6 = v8;
      v8[1] = (__int64)v6;
      KeReleaseSpinLock(v4, v5);
      USBCaptureSubmitRequest(v7);
      v5 = KeAcquireSpinLockRaiseToDpc(v4);
    }
  }
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_BYTE *)(v3 + 232) = 0;
  KeReleaseSpinLock(v4, v5);
}
