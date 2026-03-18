/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8
 * Callers:
 *     PopSystemRequiredCallback @ 0x1404E6D70 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x14059E830 (PopExecutionRequiredCallback.c)
 * Callees:
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400B0B44 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400DF250 (RtlLookupElementGenericTableAvl.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1404E79A0 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1404E79C8 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x1404E7E4C (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 */

void __fastcall PopHandleConvergedPowerRequestUpdate(int a1, int a2)
{
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // dl
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  PopAcquirePowerRequestPushLock(1);
  v9 = a1;
  v4 = (__int64 *)RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v4 && PopPowerRequestIsExecutionRequiredCapable(*v4) )
  {
    if ( !PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( (_BYTE)PopExecutionRequiredContext && !qword_1403671E8 )
    {
      v7 = 1;
LABEL_7:
      PopUpdatePowerRequestProcessWakeCounter(v6, v7);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  PopHandleSystemRequiredPowerRequestsUpdate(a2);
}
