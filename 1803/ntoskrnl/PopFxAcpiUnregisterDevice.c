/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x140283158
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140282BF4 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x140164020 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x1402750D4 (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x14027620C (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x140283B00 (PopPluginAcpiNotificationStrict.c)
 *     PoFxAbandonDevice @ 0x1405C8D04 (PoFxAbandonDevice.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(char *P, ULONG_PTR BugCheckParameter4)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(P + 248);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(P + 248), (PVOID)0x72466F50, &File, 1u, 0x20u);
  v6 = *((_QWORD *)P + 6);
  v7 = v5;
  if ( v6 )
    PoFxAbandonDevice();
  if ( *((char **)P + 23) != P + 184 )
    PopFxRemoveAcpiDevice(v6, (__int64)P);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*((_QWORD *)P + 10), 4uLL, BugCheckParameter4);
  _InterlockedAnd((volatile signed __int32 *)P + 176, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)P);
  return v7;
}
