/*
 * XREFs of ExNotifyWithProcessing @ 0x14006EED0
 * Callers:
 *     ExNotifyCallback @ 0x14006EEC0 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x14014AAD0 (IopSessionChangeWorker.c)
 *     PoNotifySystemTimeSet @ 0x14014B7EC (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1402008CC (KiDynamicProcessorAddNotification.c)
 *     SepImageVerificationCallbackWorker @ 0x140459EC0 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x1407FA028 (PnpNotifyEarlyLaunchImageLoad.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1407FA354 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCallProcessing @ 0x14006EFD8 (ExpCallProcessing.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
