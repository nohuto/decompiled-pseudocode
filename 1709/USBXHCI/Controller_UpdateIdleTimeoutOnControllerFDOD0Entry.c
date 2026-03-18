/*
 * XREFs of Controller_UpdateIdleTimeoutOnControllerFDOD0Entry @ 0x1C0055020
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     Controller_UpdateIdleTimeout @ 0x1C00597D0 (Controller_UpdateIdleTimeout.c)
 */

__int64 __fastcall Controller_UpdateIdleTimeoutOnControllerFDOD0Entry(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 348) <= 2u && !*(_DWORD *)(a1 + 392) && *(_DWORD *)(a1 + 416) != 5000 )
  {
    Controller_UpdateIdleTimeout(a1, 5000LL);
    v3 = 5000;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1 + 72),
             2u,
             4u,
             0x1Cu,
             (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
             v3);
  }
  return result;
}
