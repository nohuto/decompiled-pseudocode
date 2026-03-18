/*
 * XREFs of PopHandleConvergedPowerRequestUpdate @ 0x14051D51C
 * Callers:
 *     PopSystemRequiredCallback @ 0x14051D9D0 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x140583700 (PopExecutionRequiredCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     RtlLookupElementGenericTableAvl @ 0x14006DE30 (RtlLookupElementGenericTableAvl.c)
 *     PopHandleSystemRequiredPowerRequestsUpdate @ 0x140074DB4 (PopHandleSystemRequiredPowerRequestsUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14051D5E0 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14051D604 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x14051D664 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 */

void __fastcall PopHandleConvergedPowerRequestUpdate(__int64 a1, int a2)
{
  int v2; // ebx
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE Buffer[8]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v2 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  v9 = v2;
  v4 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, Buffer);
  if ( v4 && (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(*v4) )
  {
    if ( !(unsigned __int8)PopPowerRequestIsExecutionRequiredStatusHeld(v5) )
    {
      v6 = 0LL;
      goto LABEL_7;
    }
    if ( (_BYTE)PopExecutionRequiredContext && !qword_1403ABA98 )
    {
      LOBYTE(v6) = 1;
LABEL_7:
      PopUpdatePowerRequestProcessWakeCounter(v7, v6);
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  PopHandleSystemRequiredPowerRequestsUpdate(a2);
}
