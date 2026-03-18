/*
 * XREFs of BvgaNotifyDisplayOwnershipLost @ 0x140231B20
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x140231AD0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BvgaAcquireLock @ 0x140231900 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x140231B80 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipLost(__int64 (__fastcall *a1)(_QWORD))
{
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    BvgaAcquireLock();
    if ( BvgaDisplayState != 2 )
      VidCleanUp();
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
    return BvgaReleaseLock();
  }
  else
  {
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
  }
  return result;
}
