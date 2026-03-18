/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C004ED10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     InputUnInitialize @ 0x1C0069278 (InputUnInitialize.c)
 *     InputInitialize @ 0x1C006DA98 (InputInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C008CE20 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     rimInputApc @ 0x1C008E100 (rimInputApc.c)
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C009BF98 (RIMApplyPTPConfigRemedy.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
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
