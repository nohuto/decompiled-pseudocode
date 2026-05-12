/*
 * XREFs of RaUnitClaimDeviceSrb @ 0x1C0017AB4
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitClaimDeviceSrb(__int64 a1, IRP *a2)
{
  char v4; // r9
  _IO_SECURITY_CONTEXT *SecurityContext; // r8
  char v6; // al
  _SECURITY_QUALITY_OF_SERVICE *v7; // rcx
  unsigned int v8; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
  v4 = *(_BYTE *)(a1 + 152);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v6 = 1;
  if ( (v4 & 1) != 0 )
  {
    if ( BYTE2(SecurityContext->SecurityQos) == 40 )
    {
      *(_QWORD *)&SecurityContext[2].DesiredAccess = 0LL;
      SecurityContext[1].FullCreateOptions = -2147483631;
    }
    else
    {
      SecurityContext[1].SecurityQos = 0LL;
      SecurityContext[2].DesiredAccess = -2147483631;
    }
    v8 = -2147483631;
    v6 = 48;
  }
  else
  {
    v7 = *(_SECURITY_QUALITY_OF_SERVICE **)(a1 + 8);
    *(_BYTE *)(a1 + 152) = v4 | 1;
    if ( BYTE2(SecurityContext->SecurityQos) == 40 )
      *(_QWORD *)&SecurityContext[2].DesiredAccess = v7;
    else
      SecurityContext[1].SecurityQos = v7;
    v8 = 0;
  }
  BYTE3(SecurityContext->SecurityQos) = v6;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return RaidCompleteRequestEx(a2, 0, v8);
}
