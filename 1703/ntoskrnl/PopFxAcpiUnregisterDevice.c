/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x140238310
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140237DA8 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401F7A10 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x14022A954 (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x14022BAF0 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x140238674 (PopPluginAcpiNotificationStrict.c)
 *     PoFxAbandonDevice @ 0x140570AF4 (PoFxAbandonDevice.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(__int64 a1, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(a1 + 248);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 248), (PVOID)0x72466F50, File, 1u, 0x20u);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = v5;
  if ( v6 )
    PoFxAbandonDevice();
  if ( *(_QWORD *)(a1 + 184) != a1 + 184 )
    PopFxRemoveAcpiDevice(v6, a1);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*(_QWORD *)(a1 + 80), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 624), 0xFFFFFFFB);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)a1);
  return v7;
}
