/*
 * XREFs of ExNotifyWithProcessing @ 0x140072E18
 * Callers:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x14016DD10 (IopSessionChangeWorker.c)
 *     PoNotifySystemTimeSet @ 0x14016E698 (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x140244984 (KiDynamicProcessorAddNotification.c)
 *     SepImageVerificationCallbackWorker @ 0x140604C60 (SepImageVerificationCallbackWorker.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x1408B6BB4 (PnpNotifyEarlyLaunchImageLoad.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1408B6ED4 (PnpNotifyEarlyLaunchStatusUpdate.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCallProcessing @ 0x140072F24 (ExpCallProcessing.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // bp
  int v12; // eax
  bool v13; // zf

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (KSPIN_LOCK *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v10 = (_QWORD *)*v4;
      v11 = v9;
      if ( v9 == 2 )
      {
        while ( v10 != v4 )
        {
          ExpCallProcessing(1, v10[4], a2, a3, a4);
          ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
          ExpCallProcessing(0, v10[4], a2, a3, a4);
          v10 = (_QWORD *)*v10;
        }
      }
      else
      {
        while ( v10 != v4 )
        {
          if ( !*((_BYTE *)v10 + 44) )
          {
            ++*((_DWORD *)v10 + 10);
            KxReleaseSpinLock(v8);
            __writecr8(v11);
            ExpCallProcessing(1, v10[4], a2, a3, a4);
            ((void (__fastcall *)(_QWORD, __int64, __int64))v10[3])(v10[4], a2, a3);
            ExpCallProcessing(0, v10[4], a2, a3, a4);
            v11 = KeAcquireSpinLockRaiseToDpc(v8);
            v12 = *((_DWORD *)v10 + 10) - 1;
            v13 = *((_BYTE *)v10 + 44) == 0;
            *((_DWORD *)v10 + 10) = v12;
            if ( !v13 && !v12 )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v10 = (_QWORD *)*v10;
        }
      }
      KxReleaseSpinLock(v8);
      __writecr8(v11);
    }
  }
}
