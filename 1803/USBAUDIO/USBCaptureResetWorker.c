/*
 * XREFs of USBCaptureResetWorker @ 0x1C0005160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     PinWaitForStarvationTimeout @ 0x1C0002220 (PinWaitForStarvationTimeout.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C00050DC (USBCaptureWaitForWorkerComplete.c)
 *     USBCaptureStartTransfers @ 0x1C00258A4 (USBCaptureStartTransfers.c)
 */

void __fastcall USBCaptureResetWorker(PDEVICE_OBJECT DeviceObject, struct _KSPIN *Context)
{
  _QWORD *v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  KIRQL v6; // bp
  KSPIN_LOCK *v7; // rcx
  _QWORD **v8; // rdx
  _QWORD *v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int started; // eax
  __int64 v16; // rdx
  KIRQL v17; // bl
  __int64 v18; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+30h] [rbp-28h]

  v2 = Context->Context;
  v4 = v2[19];
  KsPinAcquireProcessingMutex(Context);
  USBCaptureWaitForWorkerComplete((__int64)v2, (_BYTE *)(v4 + 248), (struct _KEVENT *)(v4 + 256));
  v6 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = *(unsigned __int8 *)(v4 + 96);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      3u,
      0xAu,
      (__int64)&WPP_53a1a3c61b3e356c0bbf99edf396b77c_Traceguids,
      Context,
      v19);
  }
  v7 = v2 + 14;
  if ( *(_BYTE *)(v4 + 96) )
  {
    KeReleaseSpinLock(v7, v6);
    PinWaitForStarvationTimeout((__int64)Context, 0LL);
    *(_QWORD *)(v4 + 128) = v4 + 120;
    v8 = (_QWORD **)(v4 + 136);
    *(_QWORD *)(v4 + 120) = v4 + 120;
    while ( 1 )
    {
      v13 = *v8;
      if ( *v8 == v8 )
        break;
      if ( (_QWORD **)v13[1] != v8 || (v9 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
        __fastfail(3u);
      *v8 = v9;
      v10 = 0;
      v9[1] = v8;
      v11 = v13[3];
      if ( *(_DWORD *)(v11 + 132) )
      {
        v12 = (unsigned int *)(v11 + 144);
        do
        {
          if ( (v12[1] & 0x80000000) == 0 )
            v2[11] -= *v12;
          ++v10;
          v12 += 3;
        }
        while ( v10 < *(_DWORD *)(v11 + 132) );
      }
    }
  }
  else
  {
    KeReleaseSpinLock(v7, v6);
  }
  KsPinReleaseProcessingMutex(Context);
  if ( *(_BYTE *)(v4 + 96) )
  {
    LOBYTE(v14) = 1;
    started = USBCaptureStartTransfers(Context, v14);
    if ( started < 0 )
    {
      LODWORD(v18) = started;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v16,
        8u,
        0xBu,
        (__int64)&WPP_53a1a3c61b3e356c0bbf99edf396b77c_Traceguids,
        Context,
        v18);
    }
  }
  v17 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  KeSetEvent((PRKEVENT)(v4 + 216), 0, 0);
  *(_BYTE *)(v4 + 208) = 0;
  KeReleaseSpinLock(v2 + 14, v17);
}
