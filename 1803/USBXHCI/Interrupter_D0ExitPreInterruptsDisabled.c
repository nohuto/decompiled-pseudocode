/*
 * XREFs of Interrupter_D0ExitPreInterruptsDisabled @ 0x1C0016BC4
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000C6E0 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_D0ExitPreInterruptsDisabled(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  KIRQL v4; // al
  __int64 v6; // [rsp+28h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    if ( v3 && *(_QWORD *)(v3 + 200) )
    {
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 208));
      *(_DWORD *)(v3 + 96) |= 2u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 208), v4);
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, &Timeout) == 258 )
      {
        LODWORD(v6) = i;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          9u,
          0x21u,
          (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
          v6);
      }
    }
  }
  return 0LL;
}
