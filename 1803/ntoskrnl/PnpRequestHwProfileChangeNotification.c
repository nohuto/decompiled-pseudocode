/*
 * XREFs of PnpRequestHwProfileChangeNotification @ 0x140725874
 * Callers:
 *     PpProfileCancelHardwareProfileTransition @ 0x140731D64 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140731DEC (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x140731E94 (PpProfileCommitTransitioningDock.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407320E4 (PpProfileQueryHardwareProfileChange.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     PnpNotifyHwProfileChange @ 0x1407255B4 (PnpNotifyHwProfileChange.c)
 *     PnpSetHwProfileChangeEvent @ 0x140732A04 (PnpSetHwProfileChangeEvent.c)
 */

__int64 __fastcall PnpRequestHwProfileChangeNotification(GUID *Source1, int a2, _DWORD *a3, UNICODE_STRING *a4)
{
  BOOL v8; // ecx
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF

  v8 = Source1 == &GUID_HWPROFILE_QUERY_CHANGE || RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) == 16;
  if ( !v8
    && Source1 != &GUID_HWPROFILE_CHANGE_CANCELLED
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_CANCELLED, 0x10uLL) != 16
    && Source1 != &GUID_HWPROFILE_CHANGE_COMPLETE
    && RtlCompareMemory(Source1, &GUID_HWPROFILE_CHANGE_COMPLETE, 0x10uLL) != 16 )
  {
    return 3221225488LL;
  }
  if ( Source1 != &GUID_HWPROFILE_QUERY_CHANGE && RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) != 16 )
    return PnpSetHwProfileChangeEvent((_DWORD)Source1, 0, 0, 0, 0LL);
  if ( a2 != 1 )
    return PnpNotifyHwProfileChange(Source1, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpSetHwProfileChangeEvent(
             (_DWORD)Source1,
             (unsigned int)&Event,
             (unsigned int)&v14,
             (_DWORD)a3,
             (__int64)a4);
  if ( (int)result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v14;
  }
  return result;
}
