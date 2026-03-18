/*
 * XREFs of ExNotifyWithProcessing @ 0x1400AEAC8
 * Callers:
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x14015AB90 (IopSessionChangeWorker.c)
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 *     PoNotifySystemTimeSet @ 0x14015D400 (PoNotifySystemTimeSet.c)
 *     KiDynamicProcessorAddNotification @ 0x140206D5C (KiDynamicProcessorAddNotification.c)
 *     SepImageVerificationCallbackWorker @ 0x140599C80 (SepImageVerificationCallbackWorker.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140844F18 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140846D10 (PnpNotifyEarlyLaunchImageLoad.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCallProcessing @ 0x1400AEBD0 (ExpCallProcessing.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // al
  _QWORD *v10; // rdi
  KIRQL v11; // bp
  KIRQL v12; // al

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
            v12 = KeAcquireSpinLockRaiseToDpc(v8);
            --*((_DWORD *)v10 + 10);
            v11 = v12;
            if ( *((_BYTE *)v10 + 44) )
            {
              if ( !*((_DWORD *)v10 + 10) )
                KeSetEvent(&ExpCallbackEvent, 0, 0);
            }
          }
          v10 = (_QWORD *)*v10;
        }
      }
      KxReleaseSpinLock(v8);
      __writecr8(v11);
    }
  }
}
