/*
 * XREFs of ExpAcquireSpinLockDisabled @ 0x1401159B8
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1401158E0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140115950 (ExInterlockedInsertTailList.c)
 *     ExInterlockedAddUlong @ 0x14014B2A0 (ExInterlockedAddUlong.c)
 *     ExInterlockedPopEntryList @ 0x1401588A0 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x140159230 (ExInterlockedPushEntryList.c)
 *     ExInterlockedAddLargeInteger @ 0x140287160 (ExInterlockedAddLargeInteger.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
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
