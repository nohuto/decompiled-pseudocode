/*
 * XREFs of ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00A5880 (RIMDirectStartDeviceClassNotifications.c)
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
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0xEu, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, v3);
  }
  return (unsigned int)started;
}
