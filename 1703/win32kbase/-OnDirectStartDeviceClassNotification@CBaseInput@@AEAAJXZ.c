/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C009A3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C009A540 (RIMDirectStartDeviceClassNotifications.c)
 */

__int64 __fastcall CBaseInput::OnDirectStartDeviceClassNotification(CBaseInput *this)
{
  int started; // ebx
  int v3; // [rsp+28h] [rbp-10h]

  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  started = RIMDirectStartDeviceClassNotifications(*((_QWORD *)this + 1), gpWin32kDriverObject);
  if ( started < 0 )
  {
    v3 = started;
    WPP_RECORDER_SF_D(gBaseLog, 2u, 2u, 0xDu, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, v3);
  }
  return (unsigned int)started;
}
