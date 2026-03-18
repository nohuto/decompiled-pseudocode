/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C00A5510
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00A5180 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C000 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012C980 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, char *a2, int a3)
{
  struct DEVICEINFO *v4; // rsi
  PVOID v6; // rbx
  struct DEVICEINFO *v7; // rdi
  struct DEVICEINFO *i; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0xFu,
      (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids);
  if ( a2 == (char *)-1LL )
  {
    WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0x10u, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x11u,
        (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids);
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(a2, 3u, a3 == 0, &Object) >= 0 )
    {
      v6 = Object;
      v7 = (struct DEVICEINFO *)((char *)Object + 64);
      if ( !Object )
        v7 = 0LL;
      RIMLockExclusive((__int64)&CBaseInput::_sLock);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( i == v7 )
        {
          v4 = i;
          break;
        }
      }
      ObfDereferenceObject(v6);
      qword_1C0193AF8 = 0LL;
      ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x12u,
        (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids);
    return v4;
  }
}
