/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x140022648
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x140022570 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400225E0 (ExInterlockedInsertTailList.c)
 *     ExInterlockedAddUlong @ 0x140136200 (ExInterlockedAddUlong.c)
 *     ExInterlockedPopEntryList @ 0x140152970 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x140153060 (ExInterlockedPushEntryList.c)
 *     ExInterlockedAddLargeInteger @ 0x14025D5E0 (ExInterlockedAddLargeInteger.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  __int16 v3; // [rsp+20h] [rbp-8h]
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  _disable();
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    if ( (v3 & 0x200) != 0 )
      _enable();
    do
      KeYieldProcessorEx(&v4);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return (v3 & 0x200) != 0;
}
