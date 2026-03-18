/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x1400651D4
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IopCheckTopDeviceHint @ 0x1404E245C (IopCheckTopDeviceHint.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 */

char __fastcall IopVerifyDeviceObjectOnStack(__int64 a1, __int64 a2, char a3)
{
  KIRQL v3; // al

  v3 = 0;
  if ( a3 )
    v3 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 != a2 )
  {
    a1 = *(_QWORD *)(a1 + 24);
    if ( !a1 )
    {
      if ( a3 )
        KeReleaseQueuedSpinLock(0xAuLL, v3);
      return 0;
    }
  }
  if ( a3 )
    KeReleaseQueuedSpinLock(0xAuLL, v3);
  return 1;
}
