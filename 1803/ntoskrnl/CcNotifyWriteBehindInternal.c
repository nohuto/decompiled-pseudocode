/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x1400C525C
 * Callers:
 *     CcScanDpc @ 0x1400C5240 (CcScanDpc.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindEx @ 0x14014DA40 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x140156300 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x140221098 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall CcNotifyWriteBehindInternal(struct _KEVENT *a1, char a2)
{
  LONG result; // eax

  if ( CcInitializationComplete )
  {
    if ( (a2 & 1) != 0 )
      result = KeSetEvent(a1 + 14, 0, 0);
    if ( (a2 & 2) != 0 )
      result = KeSetEvent(a1 + 15, 0, 0);
    if ( (a2 & 4) != 0 )
      result = KeSetEvent(a1 + 16, 0, 0);
    if ( (a2 & 8) != 0 )
      result = KeSetEvent(a1 + 17, 0, 0);
    if ( (a2 & 0x10) != 0 )
      return KeSetEvent(a1 + 18, 0, 0);
  }
  return result;
}
