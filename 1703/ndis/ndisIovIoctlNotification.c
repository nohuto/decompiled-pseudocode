/*
 * XREFs of ndisIovIoctlNotification @ 0x1C006B030
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovIoctlNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  UCHAR Irql; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL) + 24LL) + 32LL) )
    return 3221225506LL;
  if ( !ndisSystemSupportsSriov )
    return 3221225659LL;
  v4 = *(_QWORD *)(a1 + 4640);
  if ( !v4 || (*(_BYTE *)(v4 + 8) & 3) != 3 )
    return 3221225659LL;
  IoAcquireCancelSpinLock(&Irql);
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ndisIovCancelIoctlNotification);
  IoReleaseCancelSpinLock(Irql);
  *(_QWORD *)(a2 + 56) = 0LL;
  return 259LL;
}
