/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C0123380
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00E1330 (RIMDirectStartDeviceClassNotifications.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CBaseInput::OnDirectStartDeviceClassNotification(char **this)
{
  int started; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  started = RIMDirectStartDeviceClassNotifications(this[1], (__int64)gpWin32kDriverObject);
  v2 = started;
  if ( started < 0 )
  {
    v4 = started;
    WPP_RECORDER_SF_d(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      2u,
      0xEu,
      (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
      v4);
  }
  return v2;
}
