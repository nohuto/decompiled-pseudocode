/*
 * XREFs of PoFxUnregisterDevice @ 0x14075F710
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x140275108 (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1405C81EC (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
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
