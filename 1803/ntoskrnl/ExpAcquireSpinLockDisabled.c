/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x1400B209C
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1400B1F00 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400B1F80 (ExInterlockedInsertTailList.c)
 *     ExInterlockedRemoveHeadList @ 0x1400B2000 (ExInterlockedRemoveHeadList.c)
 *     ExInterlockedAddUlong @ 0x14014B160 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x1402BB430 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x1402BB490 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1402BB4E0 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1, __int64 a2)
{
  __int16 v3; // bx
  bool v4; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int16 v7; // [rsp+20h] [rbp-8h]
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v3 = v7;
  _disable();
  v4 = (v3 & 0x200) != 0;
  while ( 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    if ( v4 )
      _enable();
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return v4;
}
