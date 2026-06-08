/*
 * XREFs of CpcConnectNativeInterrupt @ 0x1C00258F4
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcConnectNativeInterrupt(_QWORD *DeferredContext)
{
  __int64 v1; // rsi
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-20h] BYREF

  v1 = DeferredContext[30];
  KeInitializeDpc((PRKDPC)(v1 + 288), (PKDEFERRED_ROUTINE)CpcNativeInterruptDpc, DeferredContext);
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  KeSetTargetProcessorDpcEx((PKDPC)(v1 + 288), &ProcNumber);
  KeSetImportanceDpc((PRKDPC)(v1 + 288), MediumHighImportance);
  KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  if ( (int)((__int64 (__fastcall *)(_QWORD *))qword_1C0015F38)(DeferredContext) >= 0 )
  {
    *(_BYTE *)(v1 + 104) = 1;
    ((void (*)(void))qword_1C0015F48)();
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
