/*
 * XREFs of PoFxUnregisterDevice @ 0x1406F80F0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x14023DB58 (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14055E898 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
 */

void __fastcall PoFxUnregisterDevice(ULONG_PTR a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    PopFxUnregisterDeviceOrWait(*(struct _KEVENT **)(a1 + 48));
  else
    PopFxUnregisterDevice(a1);
  PopFxDestroyDeviceDpm(v1, a1);
}
