/*
 * XREFs of USBCaptureStateChangePin @ 0x1C00055E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0001380 (WPP_RECORDER_SF_qdd.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C0004E9C (USBCaptureWaitForWorkerComplete.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C001C04C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C001C9BC (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C00204F0 (USBType1SetSampleRate.c)
 *     USBCaptureStartTransfers @ 0x1C0020D38 (USBCaptureStartTransfers.c)
 */

__int64 __fastcall USBCaptureStateChangePin(PKSPIN Pin, int a2, int a3)
{
  _QWORD *Context; // rbp
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  int started; // eax
  unsigned __int16 v12; // r9
  int v13; // eax
  KIRQL v14; // al
  KIRQL v15; // r15
  PKSGATE i; // rax
  KIRQL v17; // al
  KIRQL v18; // al
  int v19; // ebx
  __int64 v21; // [rsp+30h] [rbp-28h]

  Context = Pin->Context;
  v7 = 0;
  v8 = Context[17];
  v9 = Context[16];
  WPP_RECORDER_SF_qdd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x16u,
    (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
    Pin,
    a2,
    a3);
  if ( a2 != a3 )
  {
    if ( a3 )
    {
      v10 = a3 - 2;
      if ( v10 )
      {
        if ( v10 != 1 )
          goto LABEL_21;
        started = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 136));
        v7 = started;
        if ( started < 0 )
        {
          v12 = 23;
LABEL_11:
          LODWORD(v21) = started;
          WPP_RECORDER_SF_qd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            8u,
            v12,
            (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
            Pin,
            v21);
          goto LABEL_21;
        }
        v13 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 22));
        v7 = v13;
        if ( v13 < 0 )
        {
          LODWORD(v21) = v13;
          WPP_RECORDER_SF_qd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            8u,
            0x18u,
            (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
            Pin,
            v21);
          USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144));
          goto LABEL_21;
        }
        started = USBCaptureStartTransfers(Pin, 0LL);
        v7 = started;
        if ( started < 0 )
        {
          v12 = 25;
          goto LABEL_11;
        }
      }
      else if ( a2 == 3 )
      {
        KeWaitForSingleObject((PVOID)(v8 + 136), Executive, 0, 0, 0LL);
        v14 = KeAcquireSpinLockRaiseToDpc(Context + 12);
        *(_BYTE *)v8 = 0;
        v15 = v14;
        *(_BYTE *)(v8 + 80) = 0;
        *((_BYTE *)Context + 37) = 0;
        if ( *(_BYTE *)(v8 + 81) )
        {
          for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
            ;
          *(_BYTE *)(v8 + 81) = 0;
        }
        KeReleaseSpinLock(Context + 12, v15);
        USBCaptureWaitForWorkerComplete((__int64)Context, (_BYTE *)(v8 + 232), (struct _KEVENT *)(v8 + 240));
        USBHwDataPipeReset(Pin);
        v17 = KeAcquireSpinLockRaiseToDpc(Context + 12);
        *(_QWORD *)(v8 + 112) = v8 + 104;
        *(_QWORD *)(v8 + 104) = v8 + 104;
        *(_QWORD *)(v8 + 128) = v8 + 120;
        *(_QWORD *)(v8 + 120) = v8 + 120;
        KeReleaseSpinLock(Context + 12, v17);
        KeReleaseMutex((PRKMUTEX)(v8 + 136), 0);
        v7 = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144));
      }
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc(Context + 12);
      *(_BYTE *)(v8 + 83) = 0;
      Context[8] = 0LL;
      Context[9] = 0LL;
      Context[10] = 0LL;
      KeReleaseSpinLock(Context + 12, v18);
    }
  }
LABEL_21:
  v19 = 0;
  if ( v7 != -1073741632 )
    v19 = v7;
  if ( v19 < 0 )
  {
    LODWORD(v21) = v19;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      0x1Au,
      (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
      Pin,
      v21);
  }
  return (unsigned int)v19;
}
