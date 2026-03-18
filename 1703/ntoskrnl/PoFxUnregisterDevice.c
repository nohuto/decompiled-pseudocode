/*
 * XREFs of PoFxUnregisterDevice @ 0x1406C75E0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxUnregisterDeviceOrWait @ 0x140570848 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
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
