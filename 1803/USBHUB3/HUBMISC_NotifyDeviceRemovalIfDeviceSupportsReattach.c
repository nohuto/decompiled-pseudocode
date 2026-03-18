/*
 * XREFs of HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach @ 0x1C002BCF8
 * Callers:
 *     HUBPSM20_Disconnected @ 0x1C000E920 (HUBPSM20_Disconnected.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_NotifyDeviceRemovalIfDeviceSupportsReattach(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1336);
  if ( (result & 2) != 0 )
  {
    result = *(_QWORD *)a1;
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 2344LL) & 0x10) == 0 && (*(_BYTE *)(a1 + 192) & 1) == 0 )
    {
      result = *(_QWORD *)(a1 + 1328);
      if ( !_InterlockedExchange((volatile __int32 *)(result + 2240), 1) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1632LL) & 2) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 0x10u);
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 1432),
          4u,
          5u,
          0x62u,
          (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
        result = (__int64)g_ExNotifyBootDeviceRemoval;
        if ( g_ExNotifyBootDeviceRemoval )
          return g_ExNotifyBootDeviceRemoval(*(_QWORD *)(*(_QWORD *)(a1 + 1328) + 2232LL));
      }
    }
  }
  return result;
}
