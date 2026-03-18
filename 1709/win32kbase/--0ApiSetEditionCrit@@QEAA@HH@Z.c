/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C001ADD0
 * Callers:
 *     InputUnInitialize @ 0x1C0004D90 (InputUnInitialize.c)
 *     InputInitialize @ 0x1C000650C (InputInitialize.c)
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0019610 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0093938 (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     rimInputApc @ 0x1C00954A0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00A5FA0 (RIMApplyPTPConfigRemedy.c)
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
