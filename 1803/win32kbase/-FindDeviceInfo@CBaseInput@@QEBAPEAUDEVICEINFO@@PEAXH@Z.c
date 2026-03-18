/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0122730
 * Callers:
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C0123400 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127A70 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012AFC0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0131A70 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, char *a2, int a3)
{
  struct DEVICEINFO *v5; // rsi
  PVOID v7; // rbx
  struct DEVICEINFO *v8; // rdi
  struct DEVICEINFO *i; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( (struct _KTHREAD *)qword_1C01A1658 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0xFu,
      (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids);
  if ( a2 == (char *)-1LL )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      2u,
      0x10u,
      (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x11u,
        (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids);
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(a2, 3u, a3 == 0, &Object) >= 0 )
    {
      v7 = Object;
      v8 = (struct DEVICEINFO *)((char *)Object + 80);
      if ( !Object )
        v8 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( i == v8 )
        {
          v5 = i;
          break;
        }
      }
      ObfDereferenceObject(v7);
      ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x12u,
        (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids);
    return v5;
  }
}
