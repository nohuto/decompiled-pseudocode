/*
 * XREFs of ACPIInterruptServiceRoutineDPC @ 0x1C002BD70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInterruptDispatchEvents @ 0x1C00021F0 (ACPIInterruptDispatchEvents.c)
 *     WRITE_PM1_ENABLE @ 0x1C00056C0 (WRITE_PM1_ENABLE.c)
 *     ACPIAcquireHardwareGlobalLock @ 0x1C0017294 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C002743C (ACPIStartNextGlobalLockRequest.c)
 *     ACPIButtonEvent @ 0x1C0029A18 (ACPIButtonEvent.c)
 *     ACPIPccProcessSci @ 0x1C00522B4 (ACPIPccProcessSci.c)
 */

void __fastcall ACPIInterruptServiceRoutineDPC(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  signed __int32 v5; // edi
  unsigned __int32 v6; // ebx
  signed __int32 v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  bool v12; // di
  KIRQL v13; // r9
  bool v14; // al

  while ( 1 )
  {
    v5 = DeferredContext[22];
    do
    {
      v6 = v5;
      v7 = 0x80000000;
      if ( (v5 & 0x7FFFFFFF) == 0 )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPm1EnableRegisterLock);
        WRITE_PM1_ENABLE(*((_WORD *)AcpiInformation + 56));
        KeReleaseSpinLockFromDpcLevel(&AcpiPm1EnableRegisterLock);
        v7 = 0;
      }
      v5 = _InterlockedCompareExchange(DeferredContext + 22, v7, v5);
    }
    while ( v6 != v5 );
    if ( !v7 )
      break;
    v8 = (v6 >> 8) & 1;
    v9 = (v6 >> 8) & 1 | 2;
    if ( (v6 & 0x200) == 0 )
      v9 = (unsigned int)v8;
    if ( (_DWORD)v9 )
    {
      if ( (v6 & 0x8000) != 0 )
        LODWORD(v9) = 0x80000000;
      ACPIButtonEvent(FixedButtonDeviceObject, v9);
    }
    if ( (v6 & 0x20) != 0 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
      v11 = (KSPIN_LOCK *)AcpiInformation;
      v12 = 0;
      v13 = v10;
      if ( *((_UNKNOWN **)AcpiInformation + 6) != (_UNKNOWN *)((char *)AcpiInformation + 48) )
      {
        v14 = ACPIAcquireHardwareGlobalLock(*((volatile signed __int32 **)AcpiInformation + 5));
        v11 = (KSPIN_LOCK *)AcpiInformation;
        v12 = v14;
      }
      KeReleaseSpinLock(v11 + 8, v13);
      if ( v12 )
        ACPIStartNextGlobalLockRequest();
    }
    if ( (v6 & 0x20000) != 0 )
      ACPIPccProcessSci(v8, v9, SystemArgument1, SystemArgument2);
    if ( (v6 & 0x10000) != 0 )
      ACPIInterruptDispatchEvents();
  }
}
