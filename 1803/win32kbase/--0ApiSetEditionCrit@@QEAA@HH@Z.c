/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C000EE90 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?DoPreDispatchProcessing@CHidInput@@EEAAJXZ @ 0x1C000EEF0 (-DoPreDispatchProcessing@CHidInput@@EEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C009F5F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00FC47C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     rimInputApc @ 0x1C00FE6E0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
 *     rimDeviceResetApc @ 0x1C01095A0 (rimDeviceResetApc.c)
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C012CC88 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 *     InputInitialize @ 0x1C01315F8 (InputInitialize.c)
 *     InputUnInitialize @ 0x1C0131764 (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this, int a2, unsigned int a3)
{
  int v3; // ebx

  v3 = 0;
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( (int)IsEnterEditionCritSupported() >= 0 )
      v3 = EnterEditionCrit(a3);
    *((_DWORD *)this + 1) = v3;
  }
  return this;
}
